// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtop_main.h"
#include "Vtop_main__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtop_main::Vtop_main(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtop_main__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , ouput_led{vlSymsp->TOP.ouput_led}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vtop_main::Vtop_main(const char* _vcname__)
    : Vtop_main(Verilated::threadContextp(), _vcname__)
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
#ifdef VL_DEBUG
void Vtop_main___024root___eval_debug_assertions(Vtop_main___024root* vlSelf);
#endif  // VL_DEBUG
void Vtop_main___024root___final(Vtop_main___024root* vlSelf);

static void _eval_initial_loop(Vtop_main__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vtop_main___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vtop_main___024root___eval_settle(&(vlSymsp->TOP));
        Vtop_main___024root___eval(&(vlSymsp->TOP));
    } while (0);
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
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vtop_main___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vtop_main::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtop_main::final() {
    Vtop_main___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtop_main::hierName() const { return vlSymsp->name(); }
const char* Vtop_main::modelName() const { return "Vtop_main"; }
unsigned Vtop_main::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> Vtop_main::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtop_main___024root__trace_init_top(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    Vtop_main___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void Vtop_main___024root__trace_register(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_main::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtop_main___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
