// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_main.h for the primary calling header

#ifndef VERILATED_VTOP_MAIN___024ROOT_H_
#define VERILATED_VTOP_MAIN___024ROOT_H_  // guard

#include "verilated.h"

class Vtop_main__Syms;
VL_MODULE(Vtop_main___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(ouput_led,1,0);
    CData/*0:0*/ top_main__DOT__a_ready_i_2;
    CData/*2:0*/ top_main__DOT__d_opcode_i_1;
    CData/*2:0*/ top_main__DOT__d_opcode_i_2;
    CData/*1:0*/ top_main__DOT__a1_size_o;
    CData/*2:0*/ top_main__DOT__a2_opcode_o;
    CData/*1:0*/ top_main__DOT__a2_size_o;
    CData/*1:0*/ top_main__DOT__d1_size_o;
    CData/*1:0*/ top_main__DOT__d2_size_o;
    CData/*0:0*/ top_main__DOT__core__DOT__channel_a_sel;
    CData/*0:0*/ top_main__DOT__core__DOT__memwrite;
    CData/*0:0*/ top_main__DOT__core__DOT__bands;
    CData/*3:0*/ top_main__DOT__core__DOT__alucontrol;
    CData/*1:0*/ top_main__DOT__core__DOT__opA;
    CData/*0:0*/ top_main__DOT__core__DOT__opB;
    CData/*1:0*/ top_main__DOT__core__DOT__immsel;
    CData/*0:0*/ top_main__DOT__core__DOT__writeback;
    CData/*0:0*/ top_main__DOT__core__DOT__regfile;
    CData/*2:0*/ top_main__DOT__core__DOT__pcsel;
    CData/*0:0*/ top_main__DOT__core__DOT__branchtrue;
    CData/*0:0*/ top_main__DOT__core__DOT__jalr_en;
    CData/*2:0*/ top_main__DOT__core__DOT__controlunit__DOT__aluop210;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__r;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__i;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__s;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__lui;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__auipc;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__jal;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__b;
    CData/*0:0*/ top_main__DOT__core__DOT__controlunit__DOT__lw;
    CData/*6:0*/ top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input;
    CData/*1:0*/ top_main__DOT__a2__DOT__a_mask_o__out__en0;
    CData/*1:0*/ top_main__DOT__a1__DOT__a_mask_o__out__en0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*11:0*/ top_main__DOT__a2_address_o;
    IData/*31:0*/ top_main__DOT__core__DOT__dataout;
    IData/*31:0*/ top_main__DOT__core__DOT__rs2_out;
    IData/*31:0*/ top_main__DOT__core__DOT__pcreg;
    IData/*31:0*/ top_main__DOT__core__DOT__branch_add;
    IData/*31:0*/ top_main__DOT__core__DOT__aluoutput;
    IData/*31:0*/ top_main__DOT__core__DOT__jal_add;
    IData/*31:0*/ top_main__DOT__core__DOT__imm;
    IData/*31:0*/ top_main__DOT__core__DOT__a_alu;
    IData/*31:0*/ top_main__DOT__core__DOT__b_alu;
    IData/*31:0*/ top_main__DOT__core__DOT__rs1_out;
    IData/*31:0*/ top_main__DOT__core__DOT__ig__DOT__iorjalr_imm;
    IData/*31:0*/ top_main__DOT__core__DOT__ig__DOT__s_imm;
    IData/*31:0*/ top_main__DOT__core__DOT__ig__DOT__u_imm;
    IData/*31:0*/ top_main__DOT__core__DOT__alu_i__DOT__aluout__out__out8;
    IData/*31:0*/ top_main__DOT__core__DOT__alu_i__DOT__aluout__out__out9;
    IData/*31:0*/ top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ top_main__DOT__d1__DOT__d_data_o__out__en0;
    IData/*31:0*/ top_main__DOT__d2__DOT__d_data_o__out__en0;
    VlUnpacked<IData/*31:0*/, 32> top_main__DOT__core__DOT__rf__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 4096> top_main__DOT__inst_mem_adapter__DOT__inst_mem__DOT__sram;
    VlUnpacked<IData/*31:0*/, 4096> top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop_main__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop_main___024root(const char* name);
    ~Vtop_main___024root();
    VL_UNCOPYABLE(Vtop_main___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop_main__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
