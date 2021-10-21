// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;
VL_MODULE(Vtop___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ top__DOT__bands;
    CData/*3:0*/ top__DOT__alucontrol;
    CData/*1:0*/ top__DOT__opA;
    CData/*0:0*/ top__DOT__opB;
    CData/*0:0*/ top__DOT__memwrite;
    CData/*1:0*/ top__DOT__immsel;
    CData/*0:0*/ top__DOT__writeback;
    CData/*0:0*/ top__DOT__regfile;
    CData/*1:0*/ top__DOT__pcsel;
    CData/*0:0*/ top__DOT__branchtrue;
    CData/*0:0*/ top__DOT__jalr_en;
    CData/*2:0*/ top__DOT__controlunit__DOT__aluop210;
    CData/*0:0*/ top__DOT__controlunit__DOT__r;
    CData/*0:0*/ top__DOT__controlunit__DOT__i;
    CData/*0:0*/ top__DOT__controlunit__DOT__s;
    CData/*0:0*/ top__DOT__controlunit__DOT__lui;
    CData/*0:0*/ top__DOT__controlunit__DOT__auipc;
    CData/*0:0*/ top__DOT__controlunit__DOT__jal;
    CData/*0:0*/ top__DOT__controlunit__DOT__b;
    CData/*0:0*/ top__DOT__controlunit__DOT__lw;
    CData/*6:0*/ top__DOT__controlunit__DOT__alucontrol_input;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*9:0*/ top__DOT__address;
    VL_OUT(output1,31,0);
    IData/*31:0*/ top__DOT__pcreg;
    IData/*31:0*/ top__DOT__dataout;
    IData/*31:0*/ top__DOT__branch_add;
    IData/*31:0*/ top__DOT__jal_add;
    IData/*31:0*/ top__DOT__imm;
    IData/*31:0*/ top__DOT__aluoutput;
    IData/*31:0*/ top__DOT__a_alu;
    IData/*31:0*/ top__DOT__b_alu;
    IData/*31:0*/ top__DOT__rs1_out;
    IData/*31:0*/ top__DOT__rs2_out;
    IData/*31:0*/ top__DOT__writein_reg;
    IData/*31:0*/ top__DOT__ig__DOT__iorjalr_imm;
    IData/*31:0*/ top__DOT__ig__DOT__s_imm;
    IData/*31:0*/ top__DOT__ig__DOT__u_imm;
    IData/*19:0*/ top__DOT__ig__DOT__extend;
    IData/*31:0*/ top__DOT__rf__DOT__unnamedblk1__DOT__i;
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__im__DOT__mem;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__rf__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 1024> top__DOT__dmem__DOT__mem;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vtop___024root(const char* name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
