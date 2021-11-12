// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_main.h"
#include "Vtop_main__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_main::Vtop_main(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vtop_main__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

Vtop_main::Vtop_main(const char* _vcname__)
    : Vtop_main(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vtop_main::~Vtop_main() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vtop_main___024root___eval_initial(Vtop_main___024root* vlSelf);
void Vtop_main___024root___eval_settle(Vtop_main___024root* vlSelf);
void Vtop_main___024root___eval(Vtop_main___024root* vlSelf);
QData Vtop_main___024root___change_request(Vtop_main___024root* vlSelf);
#ifdef VL_DEBUG
void Vtop_main___024root___eval_debug_assertions(Vtop_main___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_main___024root___final(Vtop_main___024root* vlSelf);

static void _eval_initial_loop(Vtop_main__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_main___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_main___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_main___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_main___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/top_1.0/top/top_main.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_main___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vtop_main::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtop_main::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtop_main___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_main___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vtop_main___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../src/top_1.0/top/top_main.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vtop_main___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vtop_main::final() {
    Vtop_main___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vtop_main::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vtop_main::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vtop_main___024root__trace_init_top(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vtop_main___024root__trace_init_top(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vtop_main___024root__trace_register(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_main::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_main___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
