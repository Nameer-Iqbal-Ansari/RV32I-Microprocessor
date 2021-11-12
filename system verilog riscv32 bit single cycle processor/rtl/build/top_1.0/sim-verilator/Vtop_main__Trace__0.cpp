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
        tracep->chgCData(oldp+0,(((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                                   ? 0U : 4U)),3);
        tracep->chgSData(oldp+1,(vlSelf->top_main__DOT__core__DOT__address),12);
        tracep->chgSData(oldp+2,(((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                     ? (0x400U | (0x3ffU 
                                                  & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                     >> 2U)))
                                     : 0U) & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                               ? 0xfffU
                                               : 0U)) 
                                  & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                      ? 0xfffU : 0U))),12);
        tracep->chgIData(oldp+3,(vlSelf->top_main__DOT__core__DOT__rs2_out),32);
        tracep->chgBit(oldp+4,(vlSelf->top_main__DOT__d1_ready_i));
        tracep->chgIData(oldp+5,(((vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out0 
                                   | vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out1) 
                                  | vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out2)),32);
        tracep->chgIData(oldp+6,(((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                   | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                  | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)),32);
        tracep->chgCData(oldp+7,(vlSelf->top_main__DOT__d_opcode_i_1),3);
        tracep->chgBit(oldp+8,(vlSelf->top_main__DOT__a1_valid_o));
        tracep->chgCData(oldp+9,(vlSelf->top_main__DOT__a1_opcode_o),3);
        tracep->chgSData(oldp+10,(vlSelf->top_main__DOT__a1_address_o),12);
        tracep->chgIData(oldp+11,(vlSelf->top_main__DOT__a1_data_o),32);
        tracep->chgCData(oldp+12,(vlSelf->top_main__DOT__a1_size_o),2);
        tracep->chgCData(oldp+13,(vlSelf->top_main__DOT__a1_mask_o),2);
        tracep->chgBit(oldp+14,(vlSelf->top_main__DOT__a2_valid_o));
        tracep->chgCData(oldp+15,(vlSelf->top_main__DOT__a2_opcode_o),3);
        tracep->chgSData(oldp+16,(vlSelf->top_main__DOT__a2_address_o),12);
        tracep->chgIData(oldp+17,(vlSelf->top_main__DOT__a2_data_o),32);
        tracep->chgCData(oldp+18,(vlSelf->top_main__DOT__a2_size_o),2);
        tracep->chgCData(oldp+19,(vlSelf->top_main__DOT__a2_mask_o),2);
        tracep->chgBit(oldp+20,(vlSelf->top_main__DOT__d1_valid_o));
        tracep->chgCData(oldp+21,(vlSelf->top_main__DOT__d1_opcode_o),3);
        tracep->chgCData(oldp+22,(vlSelf->top_main__DOT__d1_size_o),2);
        tracep->chgIData(oldp+23,(vlSelf->top_main__DOT__inst_mem__DOT__instruction),32);
        tracep->chgIData(oldp+24,(vlSelf->top_main__DOT__d_mem__DOT__dataout),32);
        tracep->chgBit(oldp+25,(vlSelf->top_main__DOT__core__DOT__channel_a_sel));
        tracep->chgSData(oldp+26,(vlSelf->top_main__DOT__core__DOT__address),10);
        tracep->chgIData(oldp+27,(vlSelf->top_main__DOT__core__DOT__dataout),32);
        tracep->chgBit(oldp+28,(vlSelf->top_main__DOT__core__DOT__memwrite));
        tracep->chgSData(oldp+29,((0x3ffU & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                             >> 2U))),10);
        tracep->chgIData(oldp+30,(vlSelf->top_main__DOT__core__DOT__branch_add),32);
        tracep->chgIData(oldp+31,(vlSelf->top_main__DOT__core__DOT__aluoutput),32);
        tracep->chgIData(oldp+32,(vlSelf->top_main__DOT__core__DOT__jal_add),32);
        tracep->chgIData(oldp+33,(vlSelf->top_main__DOT__core__DOT__imm),32);
        tracep->chgBit(oldp+34,(vlSelf->top_main__DOT__core__DOT__bands));
        tracep->chgCData(oldp+35,(vlSelf->top_main__DOT__core__DOT__alucontrol),4);
        tracep->chgCData(oldp+36,(vlSelf->top_main__DOT__core__DOT__opA),2);
        tracep->chgBit(oldp+37,(vlSelf->top_main__DOT__core__DOT__opB));
        tracep->chgIData(oldp+38,(vlSelf->top_main__DOT__core__DOT__a_alu),32);
        tracep->chgIData(oldp+39,(vlSelf->top_main__DOT__core__DOT__b_alu),32);
        tracep->chgCData(oldp+40,(vlSelf->top_main__DOT__core__DOT__immsel),2);
        tracep->chgBit(oldp+41,(vlSelf->top_main__DOT__core__DOT__writeback));
        tracep->chgBit(oldp+42,(vlSelf->top_main__DOT__core__DOT__regfile));
        tracep->chgCData(oldp+43,(vlSelf->top_main__DOT__core__DOT__pcsel),2);
        tracep->chgBit(oldp+44,(vlSelf->top_main__DOT__core__DOT__branchtrue));
        tracep->chgIData(oldp+45,(vlSelf->top_main__DOT__core__DOT__rs1_out),32);
        tracep->chgBit(oldp+46,(vlSelf->top_main__DOT__core__DOT__jalr_en));
        tracep->chgCData(oldp+47,((0x7fU & vlSelf->top_main__DOT__core__DOT__dataout)),7);
        tracep->chgCData(oldp+48,((7U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                         >> 0xcU))),3);
        tracep->chgBit(oldp+49,((1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0x1eU))));
        tracep->chgCData(oldp+50,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210),3);
        tracep->chgBit(oldp+51,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r));
        tracep->chgBit(oldp+52,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i));
        tracep->chgBit(oldp+53,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s));
        tracep->chgBit(oldp+54,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui));
        tracep->chgBit(oldp+55,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc));
        tracep->chgBit(oldp+56,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal));
        tracep->chgBit(oldp+57,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b));
        tracep->chgBit(oldp+58,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw));
        tracep->chgCData(oldp+59,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input),7);
        tracep->chgIData(oldp+60,(vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm),32);
        tracep->chgIData(oldp+61,(vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm),32);
        tracep->chgIData(oldp+62,(vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm),32);
        tracep->chgIData(oldp+63,(vlSelf->top_main__DOT__core__DOT__ig__DOT__extend),20);
        tracep->chgCData(oldp+64,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                            >> 0xfU))),5);
        tracep->chgCData(oldp+65,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                            >> 0x14U))),5);
        tracep->chgCData(oldp+66,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                            >> 7U))),5);
        tracep->chgSData(oldp+67,(vlSelf->top_main__DOT__d_mem__DOT__add),12);
        tracep->chgBit(oldp+68,(((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                  ? 1U : 0U)));
        tracep->chgBit(oldp+69,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                  ? 1U : 0U)));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        tracep->chgIData(oldp+70,(((((0U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                     & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                     ? ((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                         | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                        | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)
                                     : 0U) & (((0U 
                                                == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                               & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                               ? 0xffffffffU
                                               : 0U))),32);
        tracep->chgIData(oldp+71,(vlSelf->top_main__DOT__core__DOT__pcreg),32);
        tracep->chgIData(oldp+72,((((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                     ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                              ? ((IData)(4U) 
                                                 + vlSelf->top_main__DOT__core__DOT__pcreg)
                                              : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                                  ? 
                                                 ((((0U 
                                                     == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                    & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                                    ? 
                                                   ((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                                     | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                                    | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)
                                                    : 0U) 
                                                  & (((0U 
                                                       == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                      & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                                      ? 0xffffffffU
                                                      : 0U))
                                                  : vlSelf->top_main__DOT__core__DOT__aluoutput))) 
                                   & ((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                       ? 0U : 0xffffffffU))),32);
        tracep->chgIData(oldp+73,(((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                    ? ((((0U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                         & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                         ? ((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                             | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                            | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)
                                         : 0U) & ((
                                                   (0U 
                                                    == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                   & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                                   ? 0xffffffffU
                                                   : 0U))
                                    : vlSelf->top_main__DOT__core__DOT__aluoutput)),32);
        tracep->chgIData(oldp+74,(((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                    ? ((IData)(4U) 
                                       + vlSelf->top_main__DOT__core__DOT__pcreg)
                                    : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                        ? ((((0U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                             & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                             ? ((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                                 | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                                | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)
                                             : 0U) 
                                           & (((0U 
                                                == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                               & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                               ? 0xffffffffU
                                               : 0U))
                                        : vlSelf->top_main__DOT__core__DOT__aluoutput))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        tracep->chgBit(oldp+75,(vlSelf->top_main__DOT__d2_ready_i));
        tracep->chgCData(oldp+76,(vlSelf->top_main__DOT__d_opcode_i_2),3);
        tracep->chgBit(oldp+77,(vlSelf->top_main__DOT__d2_valid_o));
        tracep->chgCData(oldp+78,(vlSelf->top_main__DOT__d2_opcode_o),3);
        tracep->chgIData(oldp+79,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0]),32);
        tracep->chgIData(oldp+80,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1]),32);
        tracep->chgIData(oldp+81,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2]),32);
        tracep->chgIData(oldp+82,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3]),32);
        tracep->chgIData(oldp+83,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4]),32);
        tracep->chgIData(oldp+84,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5]),32);
        tracep->chgIData(oldp+85,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6]),32);
        tracep->chgIData(oldp+86,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7]),32);
        tracep->chgIData(oldp+87,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8]),32);
        tracep->chgIData(oldp+88,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9]),32);
        tracep->chgIData(oldp+89,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[10]),32);
        tracep->chgIData(oldp+90,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[11]),32);
        tracep->chgIData(oldp+91,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[12]),32);
        tracep->chgIData(oldp+92,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[13]),32);
        tracep->chgIData(oldp+93,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[14]),32);
        tracep->chgIData(oldp+94,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[15]),32);
        tracep->chgIData(oldp+95,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[16]),32);
        tracep->chgIData(oldp+96,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[17]),32);
        tracep->chgIData(oldp+97,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[18]),32);
        tracep->chgIData(oldp+98,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[19]),32);
        tracep->chgIData(oldp+99,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[20]),32);
        tracep->chgIData(oldp+100,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[21]),32);
        tracep->chgIData(oldp+101,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[22]),32);
        tracep->chgIData(oldp+102,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[23]),32);
        tracep->chgIData(oldp+103,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[24]),32);
        tracep->chgIData(oldp+104,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[25]),32);
        tracep->chgIData(oldp+105,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[26]),32);
        tracep->chgIData(oldp+106,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[27]),32);
        tracep->chgIData(oldp+107,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[28]),32);
        tracep->chgIData(oldp+108,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[29]),32);
        tracep->chgIData(oldp+109,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[30]),32);
        tracep->chgIData(oldp+110,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[31]),32);
        tracep->chgIData(oldp+111,(vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    tracep->chgBit(oldp+112,(vlSelf->clk));
    tracep->chgBit(oldp+113,(vlSelf->reset));
    tracep->chgBit(oldp+114,(((IData)(vlSelf->reset)
                               ? 1U : 0U)));
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
