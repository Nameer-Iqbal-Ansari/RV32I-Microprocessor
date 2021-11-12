// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_MAIN__SYMS_H_
#define VERILATED_VTOP_MAIN__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_main.h"

// INCLUDE MODULE CLASSES
#include "Vtop_main___024root.h"

// SYMS CLASS (contains all model state)
class Vtop_main__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_main* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_main___024root            TOP;

    // CONSTRUCTORS
    Vtop_main__Syms(VerilatedContext* contextp, const char* namep, Vtop_main* modelp);
    ~Vtop_main__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
