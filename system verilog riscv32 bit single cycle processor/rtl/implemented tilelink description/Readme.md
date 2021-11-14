In this RISCV 32bit integer type single cycle processor the SOC used for 
providing communication between the main core and the memory units is 
"TILELINK uncached lightweight" TLUL. Descriptively it consists of two 
channels which are used for transporting the messages between two ends. 
CHANNEL A is used for requesting messages from HOST to DEVICE and 
CHANNEL D is used for response messages from DEVICE to HOST. Here core 
is the HOST and memories (instruction memory and data memory) being DEVICES.
So first set of channel A and channels D is dedicated for the communication 
between core to instruction memory and second set of channel A and 
channel D is for core to data memory. The signals used in channel A are 
valid, ready, opcode, address, data, size, and mask. Similarly for channel D
valid, ready, opcode, size, and data.

The timing diagram for write and read transactions in this core is shown in
“transactions” file.
