// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_main__Syms.h"


void Vtop_main___024root__trace_chg_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

void Vtop_main___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_main___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void Vtop_main___024root__trace_chg_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgBit(oldp+0,(((IData)(vlSelf->top_main__DOT__d1_valid_o)
                                 ? 1U : 0U)));
        tracep->chgBit(oldp+1,(((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                 ? 1U : 0U)));
        tracep->chgCData(oldp+2,(vlSelf->top_main__DOT__d_opcode_i_1),3);
        tracep->chgBit(oldp+3,(vlSelf->top_main__DOT__d1_valid_o));
        tracep->chgCData(oldp+4,(vlSelf->top_main__DOT__d1_opcode_o),3);
        tracep->chgCData(oldp+5,(vlSelf->top_main__DOT__d1_size_o),2);
        tracep->chgBit(oldp+6,(vlSelf->top_main__DOT__d2_valid_o));
        tracep->chgIData(oldp+7,(vlSelf->top_main__DOT__core__DOT__pcreg),32);
        tracep->chgIData(oldp+8,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0]),32);
        tracep->chgIData(oldp+9,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1]),32);
        tracep->chgIData(oldp+10,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2]),32);
        tracep->chgIData(oldp+11,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3]),32);
        tracep->chgIData(oldp+12,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4]),32);
        tracep->chgIData(oldp+13,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5]),32);
        tracep->chgIData(oldp+14,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6]),32);
        tracep->chgIData(oldp+15,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7]),32);
        tracep->chgIData(oldp+16,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8]),32);
        tracep->chgIData(oldp+17,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9]),32);
        tracep->chgIData(oldp+18,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[10]),32);
        tracep->chgIData(oldp+19,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[11]),32);
        tracep->chgIData(oldp+20,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[12]),32);
        tracep->chgIData(oldp+21,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[13]),32);
        tracep->chgIData(oldp+22,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[14]),32);
        tracep->chgIData(oldp+23,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[15]),32);
        tracep->chgIData(oldp+24,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[16]),32);
        tracep->chgIData(oldp+25,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[17]),32);
        tracep->chgIData(oldp+26,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[18]),32);
        tracep->chgIData(oldp+27,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[19]),32);
        tracep->chgIData(oldp+28,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[20]),32);
        tracep->chgIData(oldp+29,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[21]),32);
        tracep->chgIData(oldp+30,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[22]),32);
        tracep->chgIData(oldp+31,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[23]),32);
        tracep->chgIData(oldp+32,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[24]),32);
        tracep->chgIData(oldp+33,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[25]),32);
        tracep->chgIData(oldp+34,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[26]),32);
        tracep->chgIData(oldp+35,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[27]),32);
        tracep->chgIData(oldp+36,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[28]),32);
        tracep->chgIData(oldp+37,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[29]),32);
        tracep->chgIData(oldp+38,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[30]),32);
        tracep->chgIData(oldp+39,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[31]),32);
        tracep->chgIData(oldp+40,(vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+41,((((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                      & (2U == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                      ? (((1U & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                   ? 1U
                                                   : 0U) 
                                                 & ((4U 
                                                     == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                     ? 1U
                                                     : 0U)))
                                           ? vlSelf->top_main__DOT__d_mem__DOT__mem
                                          [vlSelf->top_main__DOT__d_mem__DOT__add]
                                           : 0U) & 
                                         ((1U & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                   ? 1U
                                                   : 0U) 
                                                 & ((4U 
                                                     == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                     ? 1U
                                                     : 0U)))
                                           ? 0xffffffffU
                                           : 0U)) : 0U) 
                                    & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                   & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)),32);
        tracep->chgIData(oldp+42,((((1U & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                             ? 1U : 0U) 
                                           & ((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                               ? 1U
                                               : 0U)))
                                     ? vlSelf->top_main__DOT__d_mem__DOT__mem
                                    [vlSelf->top_main__DOT__d_mem__DOT__add]
                                     : 0U) & ((1U & 
                                               (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                  ? 1U
                                                  : 0U) 
                                                & ((4U 
                                                    == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                    ? 1U
                                                    : 0U)))
                                               ? 0xffffffffU
                                               : 0U))),32);
        tracep->chgIData(oldp+43,(((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                     & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                         ? 1U : 0U))
                                     ? (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                           & (2U == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                           ? (((1U 
                                                & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                     ? 1U
                                                     : 0U) 
                                                   & ((4U 
                                                       == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                       ? 1U
                                                       : 0U)))
                                                ? vlSelf->top_main__DOT__d_mem__DOT__mem
                                               [vlSelf->top_main__DOT__d_mem__DOT__add]
                                                : 0U) 
                                              & ((1U 
                                                  & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                       ? 1U
                                                       : 0U) 
                                                     & ((4U 
                                                         == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                         ? 1U
                                                         : 0U)))
                                                  ? 0xffffffffU
                                                  : 0U))
                                           : 0U) & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                        & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                     : 0U) & (((1U 
                                                == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                               & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                   ? 1U
                                                   : 0U))
                                               ? 0xffffffffU
                                               : 0U))),32);
        tracep->chgIData(oldp+44,((((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                     ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                              ? ((IData)(4U) 
                                                 + vlSelf->top_main__DOT__core__DOT__pcreg)
                                              : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                                  ? 
                                                 ((((1U 
                                                     == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                    & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                        ? 1U
                                                        : 0U))
                                                    ? 
                                                   (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                                       & (2U 
                                                          == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                                       ? 
                                                      (((1U 
                                                         & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                              ? 1U
                                                              : 0U) 
                                                            & ((4U 
                                                                == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                                ? 1U
                                                                : 0U)))
                                                         ? 
                                                        vlSelf->top_main__DOT__d_mem__DOT__mem
                                                        [vlSelf->top_main__DOT__d_mem__DOT__add]
                                                         : 0U) 
                                                       & ((1U 
                                                           & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                                ? 1U
                                                                : 0U) 
                                                              & ((4U 
                                                                  == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                                  ? 1U
                                                                  : 0U)))
                                                           ? 0xffffffffU
                                                           : 0U))
                                                       : 0U) 
                                                     & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                                    & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                                    : 0U) 
                                                  & (((1U 
                                                       == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                      & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                          ? 1U
                                                          : 0U))
                                                      ? 0xffffffffU
                                                      : 0U))
                                                  : vlSelf->top_main__DOT__core__DOT__aluoutput))) 
                                   & ((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                       ? 0U : 0xffffffffU))),32);
        tracep->chgIData(oldp+45,(((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                    ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                         & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                             ? 1U : 0U))
                                         ? (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                               & (2U 
                                                  == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                               ? ((
                                                   (1U 
                                                    & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                         ? 1U
                                                         : 0U) 
                                                       & ((4U 
                                                           == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                           ? 1U
                                                           : 0U)))
                                                    ? 
                                                   vlSelf->top_main__DOT__d_mem__DOT__mem
                                                   [vlSelf->top_main__DOT__d_mem__DOT__add]
                                                    : 0U) 
                                                  & ((1U 
                                                      & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                           ? 1U
                                                           : 0U) 
                                                         & ((4U 
                                                             == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                             ? 1U
                                                             : 0U)))
                                                      ? 0xffffffffU
                                                      : 0U))
                                               : 0U) 
                                             & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                            & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                         : 0U) & ((
                                                   (1U 
                                                    == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                   & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                       ? 1U
                                                       : 0U))
                                                   ? 0xffffffffU
                                                   : 0U))
                                    : vlSelf->top_main__DOT__core__DOT__aluoutput)),32);
        tracep->chgIData(oldp+46,(((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                    ? ((IData)(4U) 
                                       + vlSelf->top_main__DOT__core__DOT__pcreg)
                                    : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                        ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                             & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                 ? 1U
                                                 : 0U))
                                             ? (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                                   & (2U 
                                                      == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                                   ? 
                                                  (((1U 
                                                     & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                          ? 1U
                                                          : 0U) 
                                                        & ((4U 
                                                            == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                            ? 1U
                                                            : 0U)))
                                                     ? 
                                                    vlSelf->top_main__DOT__d_mem__DOT__mem
                                                    [vlSelf->top_main__DOT__d_mem__DOT__add]
                                                     : 0U) 
                                                   & ((1U 
                                                       & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                            ? 1U
                                                            : 0U) 
                                                          & ((4U 
                                                              == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                              ? 1U
                                                              : 0U)))
                                                       ? 0xffffffffU
                                                       : 0U))
                                                   : 0U) 
                                                 & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                                & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                             : 0U) 
                                           & (((1U 
                                                == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                               & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                   ? 1U
                                                   : 0U))
                                               ? 0xffffffffU
                                               : 0U))
                                        : vlSelf->top_main__DOT__core__DOT__aluoutput))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+47,(vlSelf->top_main__DOT__a_ready_i_2));
        tracep->chgCData(oldp+48,(((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                                    ? 0U : 4U)),3);
        tracep->chgSData(oldp+49,(((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                      ? (0x400U | (0x3ffU 
                                                   & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                      >> 2U)))
                                      : 0U) & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                                ? 0xfffU
                                                : 0U)) 
                                   & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                       ? 0xfffU : 0U))),12);
        tracep->chgIData(oldp+50,(vlSelf->top_main__DOT__core__DOT__rs2_out),32);
        tracep->chgCData(oldp+51,(vlSelf->top_main__DOT__d_opcode_i_2),3);
        tracep->chgCData(oldp+52,(vlSelf->top_main__DOT__a1_opcode_o),3);
        tracep->chgCData(oldp+53,(vlSelf->top_main__DOT__a1_size_o),2);
        tracep->chgBit(oldp+54,(((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                  ? 1U : 0U)));
        tracep->chgCData(oldp+55,(vlSelf->top_main__DOT__a2_opcode_o),3);
        tracep->chgSData(oldp+56,((((IData)(vlSelf->top_main__DOT__a2__DOT__a_address_o__out__out4) 
                                    & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                        ? 0xfffU : 0U)) 
                                   & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                       ? 0xfffU : 0U))),12);
        tracep->chgIData(oldp+57,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                      ? vlSelf->top_main__DOT__core__DOT__rs2_out
                                      : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                ? 0xffffffffU
                                                : 0U)) 
                                   & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                       ? 0xffffffffU
                                       : 0U))),32);
        tracep->chgCData(oldp+58,(vlSelf->top_main__DOT__a2_size_o),2);
        tracep->chgCData(oldp+59,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                      ? (IData)(vlSelf->top_main__DOT__a2_size_o)
                                      : 0U) & (IData)(vlSelf->top_main__DOT__a2__DOT__a_mask_o__out__en0)) 
                                   & (IData)(vlSelf->top_main__DOT__a2__DOT__a_mask_o__out__en0))),2);
        tracep->chgCData(oldp+60,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                    ? 1U : 0U)),3);
        tracep->chgBit(oldp+61,(vlSelf->top_main__DOT__core__DOT__channel_a_sel));
        tracep->chgIData(oldp+62,(vlSelf->top_main__DOT__core__DOT__dataout),32);
        tracep->chgBit(oldp+63,(vlSelf->top_main__DOT__core__DOT__memwrite));
        tracep->chgSData(oldp+64,((0x3ffU & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                             >> 2U))),10);
        tracep->chgIData(oldp+65,(vlSelf->top_main__DOT__core__DOT__branch_add),32);
        tracep->chgIData(oldp+66,(vlSelf->top_main__DOT__core__DOT__aluoutput),32);
        tracep->chgIData(oldp+67,(vlSelf->top_main__DOT__core__DOT__jal_add),32);
        tracep->chgIData(oldp+68,(vlSelf->top_main__DOT__core__DOT__imm),32);
        tracep->chgBit(oldp+69,(vlSelf->top_main__DOT__core__DOT__bands));
        tracep->chgCData(oldp+70,(vlSelf->top_main__DOT__core__DOT__alucontrol),4);
        tracep->chgCData(oldp+71,(vlSelf->top_main__DOT__core__DOT__opA),2);
        tracep->chgBit(oldp+72,(vlSelf->top_main__DOT__core__DOT__opB));
        tracep->chgIData(oldp+73,(vlSelf->top_main__DOT__core__DOT__a_alu),32);
        tracep->chgIData(oldp+74,(vlSelf->top_main__DOT__core__DOT__b_alu),32);
        tracep->chgCData(oldp+75,(vlSelf->top_main__DOT__core__DOT__immsel),2);
        tracep->chgBit(oldp+76,(vlSelf->top_main__DOT__core__DOT__writeback));
        tracep->chgBit(oldp+77,(vlSelf->top_main__DOT__core__DOT__regfile));
        tracep->chgCData(oldp+78,(vlSelf->top_main__DOT__core__DOT__pcsel),3);
        tracep->chgBit(oldp+79,(vlSelf->top_main__DOT__core__DOT__branchtrue));
        tracep->chgIData(oldp+80,(vlSelf->top_main__DOT__core__DOT__rs1_out),32);
        tracep->chgBit(oldp+81,(vlSelf->top_main__DOT__core__DOT__jalr_en));
        tracep->chgCData(oldp+82,((0x7fU & vlSelf->top_main__DOT__core__DOT__dataout)),7);
        tracep->chgCData(oldp+83,((7U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+84,((1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0x1eU))));
        tracep->chgCData(oldp+85,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210),3);
        tracep->chgBit(oldp+86,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r));
        tracep->chgBit(oldp+87,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i));
        tracep->chgBit(oldp+88,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s));
        tracep->chgBit(oldp+89,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui));
        tracep->chgBit(oldp+90,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc));
        tracep->chgBit(oldp+91,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal));
        tracep->chgBit(oldp+92,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b));
        tracep->chgBit(oldp+93,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw));
        tracep->chgCData(oldp+94,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input),7);
        tracep->chgIData(oldp+95,(vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm),32);
        tracep->chgIData(oldp+96,(vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm),32);
        tracep->chgIData(oldp+97,(vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm),32);
        tracep->chgIData(oldp+98,(vlSelf->top_main__DOT__core__DOT__ig__DOT__extend),20);
        tracep->chgCData(oldp+99,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+100,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                             >> 0x14U))),5);
        tracep->chgCData(oldp+101,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                             >> 7U))),5);
        tracep->chgSData(oldp+102,(vlSelf->top_main__DOT__d_mem__DOT__add),12);
        tracep->chgBit(oldp+103,(((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                   ? 1U : 0U)));
        tracep->chgBit(oldp+104,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                   ? 1U : 0U)));
    }
    tracep->chgBit(oldp+105,(vlSelf->clk));
    tracep->chgBit(oldp+106,(vlSelf->reset));
    tracep->chgBit(oldp+107,(((IData)(vlSelf->reset)
                               ? 1U : 0U)));
    tracep->chgSData(oldp+108,(((IData)(vlSelf->reset)
                                 ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                              >> 2U))
                                 : 0U)),12);
    tracep->chgIData(oldp+109,((((((IData)(vlSelf->top_main__DOT__d1_valid_o) 
                                   & (2U == (IData)(vlSelf->top_main__DOT__d1_size_o)))
                                   ? (((((((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 1U : 0U) 
                                         & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
                                        & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
                                       & (2U == (((
                                                   ((IData)(vlSelf->reset)
                                                     ? 1U
                                                     : 0U)
                                                    ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                                    : 0U) 
                                                  & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0)) 
                                                 & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0))))
                                       ? vlSelf->top_main__DOT__inst_mem__DOT__mem
                                      [(((((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? ((IData)(vlSelf->reset)
                                               ? (0x3ffU 
                                                  & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                                     >> 2U))
                                               : 0U)
                                           : 0U) & 
                                         (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 0xfffU
                                           : 0U)) & 
                                        (((IData)(vlSelf->reset)
                                           ? 1U : 0U)
                                          ? 0xfffU : 0U))]
                                       : 0U) : 0U) 
                                 & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0) 
                                & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0)),32);
    tracep->chgBit(oldp+110,((((IData)(vlSelf->reset)
                                ? 1U : 0U) ? 1U : 0U)));
    tracep->chgSData(oldp+111,((((((IData)(vlSelf->reset)
                                    ? 1U : 0U) ? ((IData)(vlSelf->reset)
                                                   ? 
                                                  (0x3ffU 
                                                   & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                                      >> 2U))
                                                   : 0U)
                                   : 0U) & (((IData)(vlSelf->reset)
                                              ? 1U : 0U)
                                             ? 0xfffU
                                             : 0U)) 
                                & (((IData)(vlSelf->reset)
                                     ? 1U : 0U) ? 0xfffU
                                    : 0U))),12);
    tracep->chgCData(oldp+112,((((((IData)(vlSelf->reset)
                                    ? 1U : 0U) ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                   : 0U) & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0)) 
                                & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0))),2);
    tracep->chgIData(oldp+113,((((((((IData)(vlSelf->reset)
                                      ? 1U : 0U) ? 1U
                                     : 0U) & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
                                  & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
                                 & (2U == (((((IData)(vlSelf->reset)
                                               ? 1U
                                               : 0U)
                                              ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                              : 0U) 
                                            & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0)) 
                                           & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0))))
                                 ? vlSelf->top_main__DOT__inst_mem__DOT__mem
                                [(((((IData)(vlSelf->reset)
                                      ? 1U : 0U) ? 
                                    ((IData)(vlSelf->reset)
                                      ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                                   >> 2U))
                                      : 0U) : 0U) & 
                                   (((IData)(vlSelf->reset)
                                      ? 1U : 0U) ? 0xfffU
                                     : 0U)) & (((IData)(vlSelf->reset)
                                                 ? 1U
                                                 : 0U)
                                                ? 0xfffU
                                                : 0U))]
                                 : 0U)),32);
    tracep->chgSData(oldp+114,(((IData)(vlSelf->reset)
                                 ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                              >> 2U))
                                 : 0U)),10);
}

void Vtop_main___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_cleanup\n"); );
    // Init
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
