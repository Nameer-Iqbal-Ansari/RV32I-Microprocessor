// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

extern const VlWide<9>/*287:0*/ Vtop__ConstPool__CONST_hc513dff9_0;

VL_ATTR_COLD void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(9, Vtop__ConstPool__CONST_hc513dff9_0)
                 ,  &(vlSelf->top__DOT__im__DOT__mem)
                 , 0, ~0ULL);
    vlSelf->top__DOT__address = 0U;
    vlSelf->top__DOT__pcreg = 0xfffffffcU;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->output1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__pcreg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__address = VL_RAND_RESET_I(10);
    vlSelf->top__DOT__dataout = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__branch_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__jal_add = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__aluoutput = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__bands = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alucontrol = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__opA = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__opB = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__a_alu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__b_alu = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__immsel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__writeback = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__regfile = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__pcsel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__branchtrue = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rs1_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__rs2_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__writein_reg = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__jalr_en = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__im__DOT__mem[__Vi0] = 0;
    }
    vlSelf->top__DOT__controlunit__DOT__aluop210 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__controlunit__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__controlunit__DOT__alucontrol_input = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__ig__DOT__iorjalr_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig__DOT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig__DOT__u_imm = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ig__DOT__extend = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__rf__DOT__reg_array[__Vi0] = 0;
    }
    vlSelf->top__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->top__DOT__dmem__DOT__mem[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
