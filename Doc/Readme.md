# 2-Wide RV32I Out-of-Order Core

## Overview

This repository contains a SystemVerilog implementation of a small, workload-proportional RV32I integer out-of-order processor.

The core is a **2-wide OoO design**: it can fetch, decode, rename, and dispatch up to two instructions per cycle, issue up to two instructions per cycle across three execution resources, write back up to two results per cycle, and retire up to two instructions per cycle in program order.

The architecture is intentionally compact. It provides the essential mechanisms required for genuine out-of-order execution without adding large speculative structures such as dynamic branch prediction or a centralized hazard unit.

### Core configuration

| Structure | Configuration |
|---|---:|
| ISA | RV32I |
| XLEN | 32 bits |
| Fetch / Decode / Rename / Dispatch | 2-wide |
| Issue | 2-wide |
| Writeback | 2-wide |
| Commit | 2-wide, in order |
| Architectural registers | 32 |
| Physical registers | 60 |
| ROB | 28 entries |
| Reservation Stations / Issue Queue | 12 unified entries |
| Store Queue | 14 entries |
| Checkpoint Buffer | 6 entries |
| Execution resources | EXU0, EXU1, AGU/LSU |

## Microarchitecture

The main instruction flow is:

```text
        +------------------- FRONTEND -------------------+
        |                                                 |
PC --> Fetch --> IF/ID --> Decode --> ID/RN --> Rename
                                               |          |
                                               v          |
                                        RAT + Free List   |
                                               |          |
                                             RN/DP         |
                                               |          |
                                               v          |
                                            Dispatch -----+
                                               |
                    +--------------------------+--------------------------+
                    |                          |                          |
                    v                          v                          v
                  ROB                         RS                         SQ
             28 entries                 12 unified entries             14 entries
                    |                          |
                    |                     Wakeup / Select
                    |                          |
                    |             +------------+------------+
                    |             |            |            |
                    |             v            v            v
                    |           EXU0         EXU1        AGU / LSU
                    |            ALU       ALU + BR/JALR   Load/Store
                    |             |            |            |
                    +-------------+------------+------------+
                                  |
                            WB0 / WB1
                                  |
                   +--------------+--------------+
                   |              |              |
                   v              v              v
                  PRF            RS             ROB
                   |                              |
                   +------------ Commit ----------+
                                    |
                               In-order retirement
                                    |
                             +------+------+
                             |             |
                             v             v
                         Store write   Recovery
                                       / redirect
```

### Frontend

The frontend is explicitly pipelined with:

- `IF/ID`
- `ID/RN`
- `RN/DP`

Fetch is sequential by default with a **static not-taken** control-flow assumption for conditional branches and JALR.

JAL has a special decode-time path: its target is known from the PC and immediate, so fetch can redirect immediately and the instruction does not enter the reservation stations.

### Register renaming

The rename stage contains:

- a 32-entry RAT mapping architectural registers to physical tags,
- a circular free list,
- same-group A→B rename bypass,
- six branch/JALR checkpoints.

Renaming removes WAR and WAW hazards by giving each destination-writing instruction a fresh physical register.

For a same-cycle dependency between slot A and slot B, slot B receives slot A's newly allocated physical tag directly, while readiness remains false until the producer supplies the value.

### Physical register file

The PRF contains 60 physical registers and a ready bit per register.

The design uses four operand-read paths for two instructions and two writeback paths for `WB0` and `WB1`.

JAL link values (`pc+4`) can be written directly to the freshly allocated physical register during dispatch because the value is already known.

### Reorder buffer

The 28-entry ROB preserves program order while execution proceeds out of order.

Each ROB entry tracks the state required for:

- completion,
- architectural destination management,
- branch/JALR recovery metadata,
- exceptions,
- store-queue ownership,
- checkpoint ownership.

The ROB is allocated at the tail and retired at the head.

### Reservation stations / issue queue

The 12-entry unified reservation-station pool stores:

- source tags,
- source values,
- ready bits,
- execution class,
- ALU control,
- immediate,
- ROB index,
- physical destination,
- store-data state.

Every not-ready source compares its tag against both writeback buses for wakeup.

A ready instruction is a scheduling candidate regardless of its ROB age. Age is used only to prioritize among candidates that are already ready. This is the mechanism that allows genuinely out-of-order issue.

### Execution resources

The execution backend has three ports:

**EXU0**
- ALU

**EXU1**
- ALU
- conditional branch
- JALR

**AGU/LSU**
- address generation
- load
- store

Only two instructions may issue in a cycle.

When both EXU0 and EXU1 can execute plain ALU operations, a deterministic age-based tie-break assigns the older ready operation to EXU0.

A branch/JALR wins an EXU1 conflict against a plain ALU operation.

The AGU/LSU is a single shared port, so a load and store cannot issue simultaneously.

## Writeback

Results converge onto two writeback slots:

```text
EXU0 result ----\
EXU1 result -----+--> Writeback Arbiter --> WB0 / WB1
Load result -----/             |
                               +--> PRF
                               +--> RS wakeup
                               +--> ROB completion
                               +--> same-cycle dispatch bypass
```

The load result has priority.

A one-entry hold latch stores an execution result that loses arbitration and allows it to re-enter writeback on the following cycle.

The hold latch is cleared by global recovery.

## Load / Store handling

The 14-entry store queue tracks each in-flight store independently.

Each store entry carries its address, data, byte size, validity state, and ROB association.

Loads check only **older** stores.

Memory ordering uses byte-range overlap rather than simple starting-address equality:

```text overlap =
    max(store_addr, load_addr)
    <
    min(store_addr + store_size,
        load_addr + load_size)
```

The load outcomes are:

- **older store address unknown** → load blocks,
- **older store overlaps with identical range** → forward from the store queue,
- **older store overlaps partially** → load blocks until the older store is no longer a hazard,
- **no older overlapping store** → load proceeds to memory.

The current forwarding mechanism is exact-range forwarding; partial-overlap forwarding/merge is not required for correctness.

Stores do not modify architectural memory speculatively. Their architectural memory write occurs only at in-order commit.

With one memory-write port, two stores at the ROB head serialize: the first store commits with its memory write, and the second remains the head for the next cycle.

## Branch recovery and precise state

Conditional branches and JALR resolve on EXU1.

Their target/outcome/misprediction metadata is recorded in the ROB. Recovery is initiated only when the instruction reaches commit.

Each branch/JALR checkpoint contains:

- the full RAT state,
- the free-list allocation pointer.

On misprediction:

```text
Commit detects misprediction
        |
        v
Global Kill
        |
        +--> Frontend flush
        +--> ROB younger-entry squash
        +--> RS squash
        +--> Store-queue squash
        +--> In-flight load kill
        +--> WB hold-latch clear
        +--> RAT restore
        +--> Free-list allocation-pointer restore
        |
        v
Fetch redirect
```

Speculative-state restoration and squash complete in one cycle. Correct-path instructions then refill through the existing frontend pipeline.

An in-flight load is explicitly killed when recovery occurs. A late response for that killed transaction is discarded and is never re-associated with a reused ROB index.

## Hazard handling

There is no centralized hazard unit. Hazard handling is distributed across the structures that own the required information.

| Hazard | Resolution |
|---|---|
| RAW | PRF ready bits, WB bypass, RS wakeup |
| WAR | Physical register renaming |
| WAW | Physical register renaming |
| ROB / RS / SQ capacity | Group-level dispatch stall |
| Free-list capacity | Rename/dispatch stall |
| Checkpoint capacity | Branch/JALR dispatch stall |
| EXU port conflict | Deterministic age/priority selection |
| LSU conflict | Single-port arbitration |
| Load/store ordering | Store-queue age and byte-range checks |
| Control hazard | ROB metadata + commit-time recovery |
| Recovery hazard | Global kill + checkpoint restore + parallel squash |

## Global control

The major control classes are intentionally separated:

- **STALL** — prevents progress because a required resource is unavailable.
- **FLUSH / KILL** — removes speculative state after recovery.
- **REDIRECT** — selects a new fetch target.
- **WAKEUP** — makes waiting operands eligible for issue.
- **COMMIT** — advances architectural retirement in ROB order.

A dispatch group is allocated atomically across all resources it requires. If any required resource cannot accept the whole group, the complete group stalls rather than partially allocating.

## RTL organization

The implementation is organized around a shared package and a top-level OoO core:

```text
rv32i_ooo_pkg.sv
    shared parameters, enums, and packed structures

rv32i_ooo_core.sv
    frontend
    decode
    rename
    PRF
    ROB
    RS / issue
    execution
    writeback
    load/store
    commit
    recovery

simple_memories.sv
    instruction memory
    data memory

top_main.sv
    core + instruction/data memory integration
```

The main architectural state is represented by fixed-depth arrays and packed structures. Sequential state is updated in clocked logic; operand resolution, selection, arbitration, and other control decisions are combinational where appropriate.

## Memory interface

The core uses simple separate instruction and data memory interfaces.

### Instruction memory

Two read addresses are presented for the 2-wide fetch:

```text
imem_req0_valid
imem_req0_addr
imem_rdata0

imem_req1_valid
imem_req1_addr
imem_rdata1
```

### Data memory

A single shared data-memory port is used for loads and stores:

```text
dmem_req_valid
dmem_req_write
dmem_addr
dmem_wdata
dmem_wstrb

dmem_resp_valid
dmem_rdata
```

Loads issue a read request and wait for the response.

Stores are emitted only from the in-order commit path.

The 4-bit write strobe allows byte/halfword/word store sizes to be represented at the memory interface.

## Reset

Reset establishes:

- `fetch_pc = 0`
- frontend pipeline registers invalid
- RAT identity mapping
- free list containing physical tags 32–59
- free-list count = 28
- architectural-baseline PRF tags ready
- speculative PRF tags not ready
- ROB empty
- RS empty
- store queue empty
- checkpoints free
- WB hold latch invalid

## Current design characteristics

This implementation intentionally favors a small, deterministic backend over aggressive speculation.

Current design choices include:

- no dynamic branch prediction,
- no BTB/BHT,
- one shared AGU/LSU,
- one unified issue queue,
- one writeback hold entry,
- checkpoint-based recovery,
- in-order commit,
- conservative blocking for unresolved older-store dependencies.

These choices reduce hardware complexity while preserving genuine out-of-order execution.

## Future upgrade directions

The architecture can be extended if measured workloads identify a specific bottleneck.

Potential future improvements include:

1. **Dynamic branch prediction / BTB**
   - reduce wrong-path fetch and average control-flow penalty,
   - adds predictor state and fetch timing/area cost.

2. **Second AGU/LSU**
   - reduce load/store structural contention,
   - requires another address-generation and memory issue path.

3. **Larger or more capable store queue**
   - more memory-level parallelism,
   - more aggressive forwarding for partial overlaps.

4. **Memory dependence prediction**
   - allow loads to speculate past uncertain older stores,
   - requires replay/recovery mechanisms.

5. **Non-blocking cache and multiple outstanding misses**
   - tolerate memory latency,
   - requires substantially more LSU state and completion tracking.

6. **Larger scheduling window**
   - tolerate longer producer latencies,
   - increases wakeup CAM and selection complexity.

7. **Wider fetch/issue/commit**
   - increase peak throughput,
   - requires proportional scaling of rename, ROB, PRF, RS, WB, commit, and memory bandwidth.

These are future architectural extensions and are not required by the current 2-wide design.

## Repository notes

The core expects an instruction-memory initialization file when using the supplied simple instruction-memory model. The default filename is:

```text
inst.mem
```

The supplied top-level wrapper is intended as a straightforward integration point for simulation or FPGA-oriented environments.

### Files

```text
rv32i_ooo_pkg.sv       Shared parameters, enums, and structures
rv32i_ooo_core.sv      Main OoO processor
simple_memories.sv     Simple instruction/data memories
top_main.sv            Top-level integration wrapper
rv32i_ooo_all.sv       Combined SystemVerilog source
```

## Summary

This repository implements a compact but genuine 2-wide RV32I out-of-order core.

The key architectural flow is:

```text
2-wide Fetch
    ↓
Decode
    ↓
Rename
    ↓
Dispatch
    ↓
ROB + Unified RS + Store Queue
    ↓
Dynamic Wakeup / Oldest-Ready Select
    ↓
2 of {EXU0, EXU1, AGU/LSU}
    ↓
WB0 / WB1
    ↓
ROB Completion
    ↓
2-wide In-Order Commit
    ↓
Architectural State
```

The core combines physical register renaming, dynamic scheduling, precise in-order retirement, store ordering, and checkpoint-based recovery while keeping the execution resources deliberately compact.
