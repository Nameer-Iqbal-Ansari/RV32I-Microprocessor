// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__rf__DOT__reg_array[0]),32);
        tracep->chgIData(oldp+1,(vlSelf->top__DOT__rf__DOT__reg_array[1]),32);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__rf__DOT__reg_array[2]),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__rf__DOT__reg_array[3]),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__rf__DOT__reg_array[4]),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__rf__DOT__reg_array[5]),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__rf__DOT__reg_array[6]),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__rf__DOT__reg_array[7]),32);
        tracep->chgIData(oldp+8,(vlSelf->top__DOT__rf__DOT__reg_array[8]),32);
        tracep->chgIData(oldp+9,(vlSelf->top__DOT__rf__DOT__reg_array[9]),32);
        tracep->chgIData(oldp+10,(vlSelf->top__DOT__rf__DOT__reg_array[10]),32);
        tracep->chgIData(oldp+11,(vlSelf->top__DOT__rf__DOT__reg_array[11]),32);
        tracep->chgIData(oldp+12,(vlSelf->top__DOT__rf__DOT__reg_array[12]),32);
        tracep->chgIData(oldp+13,(vlSelf->top__DOT__rf__DOT__reg_array[13]),32);
        tracep->chgIData(oldp+14,(vlSelf->top__DOT__rf__DOT__reg_array[14]),32);
        tracep->chgIData(oldp+15,(vlSelf->top__DOT__rf__DOT__reg_array[15]),32);
        tracep->chgIData(oldp+16,(vlSelf->top__DOT__rf__DOT__reg_array[16]),32);
        tracep->chgIData(oldp+17,(vlSelf->top__DOT__rf__DOT__reg_array[17]),32);
        tracep->chgIData(oldp+18,(vlSelf->top__DOT__rf__DOT__reg_array[18]),32);
        tracep->chgIData(oldp+19,(vlSelf->top__DOT__rf__DOT__reg_array[19]),32);
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__rf__DOT__reg_array[20]),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__rf__DOT__reg_array[21]),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__rf__DOT__reg_array[22]),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__rf__DOT__reg_array[23]),32);
        tracep->chgIData(oldp+24,(vlSelf->top__DOT__rf__DOT__reg_array[24]),32);
        tracep->chgIData(oldp+25,(vlSelf->top__DOT__rf__DOT__reg_array[25]),32);
        tracep->chgIData(oldp+26,(vlSelf->top__DOT__rf__DOT__reg_array[26]),32);
        tracep->chgIData(oldp+27,(vlSelf->top__DOT__rf__DOT__reg_array[27]),32);
        tracep->chgIData(oldp+28,(vlSelf->top__DOT__rf__DOT__reg_array[28]),32);
        tracep->chgIData(oldp+29,(vlSelf->top__DOT__rf__DOT__reg_array[29]),32);
        tracep->chgIData(oldp+30,(vlSelf->top__DOT__rf__DOT__reg_array[30]),32);
        tracep->chgIData(oldp+31,(vlSelf->top__DOT__rf__DOT__reg_array[31]),32);
        tracep->chgIData(oldp+32,(vlSelf->top__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgSData(oldp+33,(vlSelf->top__DOT__address),10);
        tracep->chgIData(oldp+34,(vlSelf->top__DOT__dataout),32);
        tracep->chgIData(oldp+35,(vlSelf->top__DOT__branch_add),32);
        tracep->chgIData(oldp+36,(vlSelf->top__DOT__jal_add),32);
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__imm),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__aluoutput),32);
        tracep->chgBit(oldp+39,(vlSelf->top__DOT__bands));
        tracep->chgCData(oldp+40,(vlSelf->top__DOT__alucontrol),4);
        tracep->chgCData(oldp+41,(vlSelf->top__DOT__opA),2);
        tracep->chgBit(oldp+42,(vlSelf->top__DOT__opB));
        tracep->chgIData(oldp+43,(vlSelf->top__DOT__a_alu),32);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__b_alu),32);
        tracep->chgBit(oldp+45,(vlSelf->top__DOT__memwrite));
        tracep->chgCData(oldp+46,(vlSelf->top__DOT__immsel),2);
        tracep->chgBit(oldp+47,(vlSelf->top__DOT__writeback));
        tracep->chgBit(oldp+48,(vlSelf->top__DOT__regfile));
        tracep->chgCData(oldp+49,(vlSelf->top__DOT__pcsel),2);
        tracep->chgBit(oldp+50,(vlSelf->top__DOT__branchtrue));
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__rs1_out),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__rs2_out),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__writein_reg),32);
        tracep->chgBit(oldp+54,(vlSelf->top__DOT__jalr_en));
        tracep->chgCData(oldp+55,((0x7fU & vlSelf->top__DOT__dataout)),7);
        tracep->chgCData(oldp+56,((7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+57,((1U & (vlSelf->top__DOT__dataout 
                                       >> 0x1eU))));
        tracep->chgCData(oldp+58,(vlSelf->top__DOT__controlunit__DOT__aluop210),3);
        tracep->chgBit(oldp+59,(vlSelf->top__DOT__controlunit__DOT__r));
        tracep->chgBit(oldp+60,(vlSelf->top__DOT__controlunit__DOT__i));
        tracep->chgBit(oldp+61,(vlSelf->top__DOT__controlunit__DOT__s));
        tracep->chgBit(oldp+62,(vlSelf->top__DOT__controlunit__DOT__lui));
        tracep->chgBit(oldp+63,(vlSelf->top__DOT__controlunit__DOT__auipc));
        tracep->chgBit(oldp+64,(vlSelf->top__DOT__controlunit__DOT__jal));
        tracep->chgBit(oldp+65,(vlSelf->top__DOT__controlunit__DOT__b));
        tracep->chgBit(oldp+66,(vlSelf->top__DOT__controlunit__DOT__lw));
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__ig__DOT__iorjalr_imm),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__ig__DOT__s_imm),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__ig__DOT__u_imm),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__ig__DOT__extend),20);
        tracep->chgCData(oldp+71,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+72,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+73,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 7U))),5);
        tracep->chgSData(oldp+74,((0x3ffU & (vlSelf->top__DOT__aluoutput 
                                             >> 2U))),10);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__mux3__DOT__r1),32);
        tracep->chgIData(oldp+76,(vlSelf->top__DOT__mux3__DOT__r2),32);
    }
    tracep->chgBit(oldp+77,(vlSelf->clk));
    tracep->chgBit(oldp+78,(vlSelf->reset));
    tracep->chgIData(oldp+79,(vlSelf->output1),32);
    tracep->chgIData(oldp+80,(vlSelf->top__DOT__pcreg),32);
    tracep->chgIData(oldp+81,(vlSelf->top__DOT__dmem__DOT__mem
                              [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                          >> 2U))]),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
