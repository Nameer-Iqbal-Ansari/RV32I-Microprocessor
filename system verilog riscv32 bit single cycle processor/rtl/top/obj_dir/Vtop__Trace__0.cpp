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
        tracep->chgIData(oldp+0,(vlSelf->top__DOT__pcreg),32);
        tracep->chgSData(oldp+1,(vlSelf->top__DOT__address),10);
        tracep->chgIData(oldp+2,(vlSelf->top__DOT__dataout),32);
        tracep->chgIData(oldp+3,(vlSelf->top__DOT__branch_add),32);
        tracep->chgIData(oldp+4,(vlSelf->top__DOT__jal_add),32);
        tracep->chgIData(oldp+5,(vlSelf->top__DOT__jalr_add),32);
        tracep->chgIData(oldp+6,(vlSelf->top__DOT__imm),32);
        tracep->chgIData(oldp+7,(vlSelf->top__DOT__aluoutput),32);
        tracep->chgBit(oldp+8,(vlSelf->top__DOT__bands));
        tracep->chgCData(oldp+9,(vlSelf->top__DOT__alucontrol),4);
        tracep->chgCData(oldp+10,(vlSelf->top__DOT__opA),2);
        tracep->chgBit(oldp+11,(vlSelf->top__DOT__opB));
        tracep->chgIData(oldp+12,(((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                   | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2)),32);
        tracep->chgIData(oldp+13,(vlSelf->top__DOT__b_alu),32);
        tracep->chgBit(oldp+14,(vlSelf->top__DOT__memwrite));
        tracep->chgCData(oldp+15,(vlSelf->top__DOT__immsel),2);
        tracep->chgBit(oldp+16,(vlSelf->top__DOT__writeback));
        tracep->chgBit(oldp+17,(vlSelf->top__DOT__regfile));
        tracep->chgCData(oldp+18,(vlSelf->top__DOT__pcsel),2);
        tracep->chgBit(oldp+19,(vlSelf->top__DOT__branchtrue));
        tracep->chgIData(oldp+20,(vlSelf->top__DOT__rs1_out),32);
        tracep->chgIData(oldp+21,(vlSelf->top__DOT__rs2_out),32);
        tracep->chgIData(oldp+22,(vlSelf->top__DOT__mux3__DOT__writein_reg__out__out0),32);
        tracep->chgIData(oldp+23,(vlSelf->top__DOT__dmem__DOT__mem
                                  [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                              >> 2U))]),32);
        tracep->chgBit(oldp+24,(vlSelf->top__DOT__jalr_en));
        tracep->chgCData(oldp+25,((0x7fU & vlSelf->top__DOT__dataout)),7);
        tracep->chgCData(oldp+26,((7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+27,((1U & (vlSelf->top__DOT__dataout 
                                       >> 0x1eU))));
        tracep->chgCData(oldp+28,(vlSelf->top__DOT__controlunit__DOT__aluop210),3);
        tracep->chgBit(oldp+29,(vlSelf->top__DOT__controlunit__DOT__r));
        tracep->chgBit(oldp+30,(vlSelf->top__DOT__controlunit__DOT__i));
        tracep->chgBit(oldp+31,(vlSelf->top__DOT__controlunit__DOT__s));
        tracep->chgBit(oldp+32,(vlSelf->top__DOT__controlunit__DOT__lui));
        tracep->chgBit(oldp+33,(vlSelf->top__DOT__controlunit__DOT__auipc));
        tracep->chgBit(oldp+34,(vlSelf->top__DOT__controlunit__DOT__jal));
        tracep->chgBit(oldp+35,(vlSelf->top__DOT__controlunit__DOT__b));
        tracep->chgBit(oldp+36,(vlSelf->top__DOT__controlunit__DOT__lw));
        tracep->chgIData(oldp+37,(vlSelf->top__DOT__ig__DOT__iorjalr_imm),32);
        tracep->chgIData(oldp+38,(vlSelf->top__DOT__ig__DOT__s_imm),32);
        tracep->chgIData(oldp+39,(vlSelf->top__DOT__ig__DOT__u_imm),32);
        tracep->chgIData(oldp+40,(vlSelf->top__DOT__ig__DOT__extend),20);
        tracep->chgCData(oldp+41,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+42,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+43,((0x1fU & (vlSelf->top__DOT__dataout 
                                            >> 7U))),5);
        tracep->chgIData(oldp+44,(vlSelf->top__DOT__rf__DOT__reg_array[0]),32);
        tracep->chgIData(oldp+45,(vlSelf->top__DOT__rf__DOT__reg_array[1]),32);
        tracep->chgIData(oldp+46,(vlSelf->top__DOT__rf__DOT__reg_array[2]),32);
        tracep->chgIData(oldp+47,(vlSelf->top__DOT__rf__DOT__reg_array[3]),32);
        tracep->chgIData(oldp+48,(vlSelf->top__DOT__rf__DOT__reg_array[4]),32);
        tracep->chgIData(oldp+49,(vlSelf->top__DOT__rf__DOT__reg_array[5]),32);
        tracep->chgIData(oldp+50,(vlSelf->top__DOT__rf__DOT__reg_array[6]),32);
        tracep->chgIData(oldp+51,(vlSelf->top__DOT__rf__DOT__reg_array[7]),32);
        tracep->chgIData(oldp+52,(vlSelf->top__DOT__rf__DOT__reg_array[8]),32);
        tracep->chgIData(oldp+53,(vlSelf->top__DOT__rf__DOT__reg_array[9]),32);
        tracep->chgIData(oldp+54,(vlSelf->top__DOT__rf__DOT__reg_array[10]),32);
        tracep->chgIData(oldp+55,(vlSelf->top__DOT__rf__DOT__reg_array[11]),32);
        tracep->chgIData(oldp+56,(vlSelf->top__DOT__rf__DOT__reg_array[12]),32);
        tracep->chgIData(oldp+57,(vlSelf->top__DOT__rf__DOT__reg_array[13]),32);
        tracep->chgIData(oldp+58,(vlSelf->top__DOT__rf__DOT__reg_array[14]),32);
        tracep->chgIData(oldp+59,(vlSelf->top__DOT__rf__DOT__reg_array[15]),32);
        tracep->chgIData(oldp+60,(vlSelf->top__DOT__rf__DOT__reg_array[16]),32);
        tracep->chgIData(oldp+61,(vlSelf->top__DOT__rf__DOT__reg_array[17]),32);
        tracep->chgIData(oldp+62,(vlSelf->top__DOT__rf__DOT__reg_array[18]),32);
        tracep->chgIData(oldp+63,(vlSelf->top__DOT__rf__DOT__reg_array[19]),32);
        tracep->chgIData(oldp+64,(vlSelf->top__DOT__rf__DOT__reg_array[20]),32);
        tracep->chgIData(oldp+65,(vlSelf->top__DOT__rf__DOT__reg_array[21]),32);
        tracep->chgIData(oldp+66,(vlSelf->top__DOT__rf__DOT__reg_array[22]),32);
        tracep->chgIData(oldp+67,(vlSelf->top__DOT__rf__DOT__reg_array[23]),32);
        tracep->chgIData(oldp+68,(vlSelf->top__DOT__rf__DOT__reg_array[24]),32);
        tracep->chgIData(oldp+69,(vlSelf->top__DOT__rf__DOT__reg_array[25]),32);
        tracep->chgIData(oldp+70,(vlSelf->top__DOT__rf__DOT__reg_array[26]),32);
        tracep->chgIData(oldp+71,(vlSelf->top__DOT__rf__DOT__reg_array[27]),32);
        tracep->chgIData(oldp+72,(vlSelf->top__DOT__rf__DOT__reg_array[28]),32);
        tracep->chgIData(oldp+73,(vlSelf->top__DOT__rf__DOT__reg_array[29]),32);
        tracep->chgIData(oldp+74,(vlSelf->top__DOT__rf__DOT__reg_array[30]),32);
        tracep->chgIData(oldp+75,(vlSelf->top__DOT__rf__DOT__reg_array[31]),32);
        tracep->chgSData(oldp+76,((0x3ffU & (vlSelf->top__DOT__aluoutput 
                                             >> 2U))),10);
        tracep->chgIData(oldp+77,(vlSelf->top__DOT__mux3__DOT__r1),32);
        tracep->chgIData(oldp+78,(vlSelf->top__DOT__mux3__DOT__r2),32);
    }
    tracep->chgBit(oldp+79,(vlSelf->clk));
    tracep->chgBit(oldp+80,(vlSelf->reset));
    tracep->chgIData(oldp+81,(vlSelf->output1),32);
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
}
