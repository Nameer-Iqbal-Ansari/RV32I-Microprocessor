// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_main.h for the primary calling header

#include "verilated.h"

#include "Vtop_main__Syms.h"
#include "Vtop_main___024root.h"

void Vtop_main___024root___ctor_var_reset(Vtop_main___024root* vlSelf);

Vtop_main___024root::Vtop_main___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop_main___024root___ctor_var_reset(this);
}

void Vtop_main___024root::__Vconfigure(Vtop_main__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop_main___024root::~Vtop_main___024root() {
}
