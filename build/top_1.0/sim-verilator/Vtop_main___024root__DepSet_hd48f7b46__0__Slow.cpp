// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_main.h for the primary calling header

#include "verilated.h"

#include "Vtop_main___024root.h"

extern const VlWide<14>/*447:0*/ Vtop_main__ConstPool__CONST_h2217869f_0;

VL_ATTR_COLD void Vtop_main___024root___initial__TOP__0(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___initial__TOP__0\n"); );
    // Body
    VL_READMEM_N(true, 32, 4096, 0, VL_CVT_PACK_STR_NW(14, Vtop_main__ConstPool__CONST_h2217869f_0)
                 ,  &(vlSelf->top_main__DOT__inst_mem_adapter__DOT__inst_mem__DOT__sram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vtop_main___024root___eval_initial(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___eval_initial\n"); );
    // Body
    Vtop_main___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop_main___024root___combo__TOP__0(Vtop_main___024root* vlSelf);

VL_ATTR_COLD void Vtop_main___024root___eval_settle(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___eval_settle\n"); );
    // Body
    Vtop_main___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vtop_main___024root___final(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___final\n"); );
}

VL_ATTR_COLD void Vtop_main___024root___ctor_var_reset(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->ouput_led = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__a_ready_i_2 = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__d_opcode_i_1 = VL_RAND_RESET_I(3);
    vlSelf->top_main__DOT__d_opcode_i_2 = VL_RAND_RESET_I(3);
    vlSelf->top_main__DOT__a1_size_o = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__a2_opcode_o = VL_RAND_RESET_I(3);
    vlSelf->top_main__DOT__a2_address_o = VL_RAND_RESET_I(12);
    vlSelf->top_main__DOT__a2_size_o = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__d1_size_o = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__d2_size_o = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__core__DOT__channel_a_sel = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__dataout = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__memwrite = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__rs2_out = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__pcreg = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__branch_add = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__aluoutput = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__jal_add = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__imm = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__bands = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__alucontrol = VL_RAND_RESET_I(4);
    vlSelf->top_main__DOT__core__DOT__opA = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__core__DOT__opB = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__a_alu = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__b_alu = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__immsel = VL_RAND_RESET_I(2);
    vlSelf->top_main__DOT__core__DOT__writeback = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__regfile = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__pcsel = VL_RAND_RESET_I(3);
    vlSelf->top_main__DOT__core__DOT__branchtrue = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__rs1_out = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__jalr_en = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = VL_RAND_RESET_I(3);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw = VL_RAND_RESET_I(1);
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input = VL_RAND_RESET_I(7);
    vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm = VL_RAND_RESET_I(32);
    vlSelf->top_main__DOT__core__DOT__alu_i__DOT__aluout__out__out8 = 0;
    vlSelf->top_main__DOT__core__DOT__alu_i__DOT__aluout__out__out9 = 0;
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[__Vi0] = 0;
    }
    vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top_main__DOT__inst_mem_adapter__DOT__inst_mem__DOT__sram[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0 = 0;
    vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
