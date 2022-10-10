// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_main__Syms.h"


void Vtop_main___024root__trace_chg_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop_main___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_chg_top_0\n"); );
    // Init
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop_main___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop_main___024root__trace_chg_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->top_main__DOT__core__DOT__pcreg),32);
        bufp->chgIData(oldp+1,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+2,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+3,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+4,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+5,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+6,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+7,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+8,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+9,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+10,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+11,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+12,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+13,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+14,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+15,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+16,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+17,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+18,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+19,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+20,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+21,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+22,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+23,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+24,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+25,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+26,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+27,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+28,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+29,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+30,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+31,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+32,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[31]),32);
        bufp->chgIData(oldp+33,(vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+34,((((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                       ? 1U : 0U) ? 1U
                                      : 0U) & (2U == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                    ? ((((((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                            ? 1U : 0U)
                                           ? vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                          [vlSelf->top_main__DOT__a2_address_o]
                                           : 0U) & 
                                         (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                            ? 1U : 0U)
                                           ? 0xffffffffU
                                           : 0U)) & 
                                        (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                           ? 1U : 0U)
                                          ? 0xffffffffU
                                          : 0U)) & 
                                       (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                          ? 1U : 0U)
                                         ? 0xffffffffU
                                         : 0U)) : 0U) 
                                  & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                 & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)),32);
        bufp->chgIData(oldp+35,(((((((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                      ? 1U : 0U) ? 
                                    vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                    [vlSelf->top_main__DOT__a2_address_o]
                                     : 0U) & (((4U 
                                                == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                ? 1U
                                                : 0U)
                                               ? 0xffffffffU
                                               : 0U)) 
                                  & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                       ? 1U : 0U) ? 0xffffffffU
                                      : 0U)) & (((4U 
                                                  == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                  ? 1U
                                                  : 0U)
                                                 ? 0xffffffffU
                                                 : 0U))),32);
        bufp->chgIData(oldp+36,(((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                   & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                         ? 1U : 0U)
                                        ? 1U : 0U) ? 1U
                                       : 0U)) ? (((
                                                   ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                       ? 1U
                                                       : 0U)
                                                      ? 1U
                                                      : 0U) 
                                                    & (2U 
                                                       == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                                    ? 
                                                   ((((((4U 
                                                         == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                         ? 1U
                                                         : 0U)
                                                        ? 
                                                       vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                                       [vlSelf->top_main__DOT__a2_address_o]
                                                        : 0U) 
                                                      & (((4U 
                                                           == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                           ? 1U
                                                           : 0U)
                                                          ? 0xffffffffU
                                                          : 0U)) 
                                                     & (((4U 
                                                          == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                          ? 1U
                                                          : 0U)
                                                         ? 0xffffffffU
                                                         : 0U)) 
                                                    & (((4U 
                                                         == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                         ? 1U
                                                         : 0U)
                                                        ? 0xffffffffU
                                                        : 0U))
                                                    : 0U) 
                                                  & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                                 & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                   : 0U) & (((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                             & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                   ? 1U
                                                   : 0U)
                                                  ? 1U
                                                  : 0U)
                                                 ? 1U
                                                 : 0U))
                                             ? 0xffffffffU
                                             : 0U))),32);
        bufp->chgIData(oldp+37,((((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                   ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                            ? ((IData)(4U) 
                                               + vlSelf->top_main__DOT__core__DOT__pcreg)
                                            : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                                ? (
                                                   (((1U 
                                                      == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                     & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                           ? 1U
                                                           : 0U)
                                                          ? 1U
                                                          : 0U)
                                                         ? 1U
                                                         : 0U))
                                                     ? 
                                                    (((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                           ? 1U
                                                           : 0U)
                                                          ? 1U
                                                          : 0U) 
                                                        & (2U 
                                                           == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                                        ? 
                                                       ((((((4U 
                                                             == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                             ? 1U
                                                             : 0U)
                                                            ? 
                                                           vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                                           [vlSelf->top_main__DOT__a2_address_o]
                                                            : 0U) 
                                                          & (((4U 
                                                               == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                               ? 1U
                                                               : 0U)
                                                              ? 0xffffffffU
                                                              : 0U)) 
                                                         & (((4U 
                                                              == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                              ? 1U
                                                              : 0U)
                                                             ? 0xffffffffU
                                                             : 0U)) 
                                                        & (((4U 
                                                             == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                             ? 1U
                                                             : 0U)
                                                            ? 0xffffffffU
                                                            : 0U))
                                                        : 0U) 
                                                      & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                                     & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                                     : 0U) 
                                                   & (((1U 
                                                        == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                       & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                             ? 1U
                                                             : 0U)
                                                            ? 1U
                                                            : 0U)
                                                           ? 1U
                                                           : 0U))
                                                       ? 0xffffffffU
                                                       : 0U))
                                                : vlSelf->top_main__DOT__core__DOT__aluoutput))) 
                                 & ((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                     ? 0U : 0xffffffffU))),32);
        bufp->chgIData(oldp+38,(((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                  ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                       & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                             ? 1U : 0U)
                                            ? 1U : 0U)
                                           ? 1U : 0U))
                                       ? (((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                ? 1U
                                                : 0U)
                                               ? 1U
                                               : 0U) 
                                             & (2U 
                                                == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                             ? ((((
                                                   ((4U 
                                                     == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                     ? 1U
                                                     : 0U)
                                                    ? 
                                                   vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                                   [vlSelf->top_main__DOT__a2_address_o]
                                                    : 0U) 
                                                  & (((4U 
                                                       == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                       ? 1U
                                                       : 0U)
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & (((4U 
                                                      == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                      ? 1U
                                                      : 0U)
                                                     ? 0xffffffffU
                                                     : 0U)) 
                                                & (((4U 
                                                     == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                     ? 1U
                                                     : 0U)
                                                    ? 0xffffffffU
                                                    : 0U))
                                             : 0U) 
                                           & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                          & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                       : 0U) & (((1U 
                                                  == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                 & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                       ? 1U
                                                       : 0U)
                                                      ? 1U
                                                      : 0U)
                                                     ? 1U
                                                     : 0U))
                                                 ? 0xffffffffU
                                                 : 0U))
                                  : vlSelf->top_main__DOT__core__DOT__aluoutput)),32);
        bufp->chgIData(oldp+39,(((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                  ? ((IData)(4U) + vlSelf->top_main__DOT__core__DOT__pcreg)
                                  : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                      ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                           & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                 ? 1U
                                                 : 0U)
                                                ? 1U
                                                : 0U)
                                               ? 1U
                                               : 0U))
                                           ? (((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                    ? 1U
                                                    : 0U)
                                                   ? 1U
                                                   : 0U) 
                                                 & (2U 
                                                    == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                                 ? 
                                                ((((((4U 
                                                      == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                      ? 1U
                                                      : 0U)
                                                     ? 
                                                    vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                                    [vlSelf->top_main__DOT__a2_address_o]
                                                     : 0U) 
                                                   & (((4U 
                                                        == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                        ? 1U
                                                        : 0U)
                                                       ? 0xffffffffU
                                                       : 0U)) 
                                                  & (((4U 
                                                       == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                       ? 1U
                                                       : 0U)
                                                      ? 0xffffffffU
                                                      : 0U)) 
                                                 & (((4U 
                                                      == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                      ? 1U
                                                      : 0U)
                                                     ? 0xffffffffU
                                                     : 0U))
                                                 : 0U) 
                                               & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                              & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                           : 0U) & 
                                         (((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                           & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                 ? 1U
                                                 : 0U)
                                                ? 1U
                                                : 0U)
                                               ? 1U
                                               : 0U))
                                           ? 0xffffffffU
                                           : 0U)) : vlSelf->top_main__DOT__core__DOT__aluoutput))),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+40,(vlSelf->top_main__DOT__a_ready_i_2));
        bufp->chgCData(oldp+41,(((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                                  ? 0U : 4U)),3);
        bufp->chgSData(oldp+42,(((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                    ? (0x400U | (0x3ffU 
                                                 & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                    >> 2U)))
                                    : 0U) & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                              ? 0xfffU
                                              : 0U)) 
                                 & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                     ? 0xfffU : 0U))),12);
        bufp->chgIData(oldp+43,(vlSelf->top_main__DOT__core__DOT__rs2_out),32);
        bufp->chgBit(oldp+44,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                  ? 1U : 0U) ? 1U : 0U)
                                ? 1U : 0U)));
        bufp->chgCData(oldp+45,(vlSelf->top_main__DOT__d_opcode_i_1),3);
        bufp->chgCData(oldp+46,(vlSelf->top_main__DOT__d_opcode_i_2),3);
        bufp->chgCData(oldp+47,(vlSelf->top_main__DOT__a1_size_o),2);
        bufp->chgBit(oldp+48,(((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                ? 1U : 0U)));
        bufp->chgCData(oldp+49,(vlSelf->top_main__DOT__a2_opcode_o),3);
        bufp->chgSData(oldp+50,(vlSelf->top_main__DOT__a2_address_o),12);
        bufp->chgIData(oldp+51,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                    ? vlSelf->top_main__DOT__core__DOT__rs2_out
                                    : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                              ? 0xffffffffU
                                              : 0U)) 
                                 & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                     ? 0xffffffffU : 0U))),32);
        bufp->chgCData(oldp+52,(vlSelf->top_main__DOT__a2_size_o),2);
        bufp->chgCData(oldp+53,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                    ? (IData)(vlSelf->top_main__DOT__a2_size_o)
                                    : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                              ? 3U : 0U)) 
                                 & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                     ? 3U : 0U))),2);
        bufp->chgCData(oldp+54,(vlSelf->top_main__DOT__d1_size_o),2);
        bufp->chgBit(oldp+55,((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                 ? 1U : 0U) ? 1U : 0U)));
        bufp->chgCData(oldp+56,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                  ? 1U : 0U)),3);
        bufp->chgCData(oldp+57,(vlSelf->top_main__DOT__d2_size_o),2);
        bufp->chgBit(oldp+58,(vlSelf->top_main__DOT__core__DOT__channel_a_sel));
        bufp->chgIData(oldp+59,(vlSelf->top_main__DOT__core__DOT__dataout),32);
        bufp->chgBit(oldp+60,(vlSelf->top_main__DOT__core__DOT__memwrite));
        bufp->chgSData(oldp+61,((0x3ffU & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                           >> 2U))),10);
        bufp->chgIData(oldp+62,(vlSelf->top_main__DOT__core__DOT__branch_add),32);
        bufp->chgIData(oldp+63,(vlSelf->top_main__DOT__core__DOT__aluoutput),32);
        bufp->chgIData(oldp+64,(vlSelf->top_main__DOT__core__DOT__jal_add),32);
        bufp->chgIData(oldp+65,(vlSelf->top_main__DOT__core__DOT__imm),32);
        bufp->chgBit(oldp+66,(vlSelf->top_main__DOT__core__DOT__bands));
        bufp->chgCData(oldp+67,(vlSelf->top_main__DOT__core__DOT__alucontrol),4);
        bufp->chgCData(oldp+68,(vlSelf->top_main__DOT__core__DOT__opA),2);
        bufp->chgBit(oldp+69,(vlSelf->top_main__DOT__core__DOT__opB));
        bufp->chgIData(oldp+70,(vlSelf->top_main__DOT__core__DOT__a_alu),32);
        bufp->chgIData(oldp+71,(vlSelf->top_main__DOT__core__DOT__b_alu),32);
        bufp->chgCData(oldp+72,(vlSelf->top_main__DOT__core__DOT__immsel),2);
        bufp->chgBit(oldp+73,(vlSelf->top_main__DOT__core__DOT__writeback));
        bufp->chgBit(oldp+74,(vlSelf->top_main__DOT__core__DOT__regfile));
        bufp->chgCData(oldp+75,(vlSelf->top_main__DOT__core__DOT__pcsel),3);
        bufp->chgBit(oldp+76,(vlSelf->top_main__DOT__core__DOT__branchtrue));
        bufp->chgIData(oldp+77,(vlSelf->top_main__DOT__core__DOT__rs1_out),32);
        bufp->chgBit(oldp+78,(vlSelf->top_main__DOT__core__DOT__jalr_en));
        bufp->chgCData(oldp+79,((7U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+80,((0x7fU & vlSelf->top_main__DOT__core__DOT__dataout)),7);
        bufp->chgBit(oldp+81,((1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+82,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210),3);
        bufp->chgBit(oldp+83,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r));
        bufp->chgBit(oldp+84,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i));
        bufp->chgBit(oldp+85,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s));
        bufp->chgBit(oldp+86,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui));
        bufp->chgBit(oldp+87,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc));
        bufp->chgBit(oldp+88,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal));
        bufp->chgBit(oldp+89,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b));
        bufp->chgBit(oldp+90,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw));
        bufp->chgCData(oldp+91,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input),7);
        bufp->chgIData(oldp+92,(vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm),32);
        bufp->chgIData(oldp+93,(vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm),32);
        bufp->chgIData(oldp+94,(vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm),32);
        bufp->chgIData(oldp+95,(((vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 0x1fU) ? 0xfffffU
                                  : 0U)),20);
        bufp->chgCData(oldp+96,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+97,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+98,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 7U))),5);
        bufp->chgBit(oldp+99,(((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                ? 1U : 0U)));
        bufp->chgBit(oldp+100,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                 ? 1U : 0U)));
    }
    bufp->chgBit(oldp+101,(vlSelf->clk));
    bufp->chgBit(oldp+102,(vlSelf->reset));
    bufp->chgCData(oldp+103,(vlSelf->ouput_led),2);
    bufp->chgBit(oldp+104,(((IData)(vlSelf->reset) ? 1U
                             : 0U)));
    bufp->chgSData(oldp+105,(((IData)(vlSelf->reset)
                               ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                            >> 2U))
                               : 0U)),12);
    bufp->chgBit(oldp+106,((((((IData)(vlSelf->reset)
                                ? 1U : 0U) ? 1U : 0U)
                              ? 1U : 0U) ? 1U : 0U)));
    bufp->chgIData(oldp+107,(((((((((IData)(vlSelf->reset)
                                     ? 1U : 0U) ? 1U
                                    : 0U) ? 1U : 0U) 
                                 & (2U == (IData)(vlSelf->top_main__DOT__d1_size_o)))
                                 ? ((((IData)(vlSelf->reset)
                                       ? 1U : 0U) ? 1U
                                      : 0U) ? vlSelf->top_main__DOT__inst_mem_adapter__DOT__inst_mem__DOT__sram
                                    [(((((IData)(vlSelf->reset)
                                          ? 1U : 0U)
                                         ? ((IData)(vlSelf->reset)
                                             ? (0x3ffU 
                                                & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                                   >> 2U))
                                             : 0U) : 0U) 
                                       & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 0xfffU
                                           : 0U)) & 
                                      (((IData)(vlSelf->reset)
                                         ? 1U : 0U)
                                        ? 0xfffU : 0U))]
                                     : 0U) : 0U) & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0) 
                              & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0)),32);
    bufp->chgBit(oldp+108,((((IData)(vlSelf->reset)
                              ? 1U : 0U) ? 1U : 0U)));
    bufp->chgCData(oldp+109,((((((IData)(vlSelf->reset)
                                  ? 1U : 0U) ? 4U : 0U) 
                               & (((IData)(vlSelf->reset)
                                    ? 1U : 0U) ? 7U
                                   : 0U)) & (((IData)(vlSelf->reset)
                                               ? 1U
                                               : 0U)
                                              ? 7U : 0U))),3);
    bufp->chgSData(oldp+110,((((((IData)(vlSelf->reset)
                                  ? 1U : 0U) ? ((IData)(vlSelf->reset)
                                                 ? 
                                                (0x3ffU 
                                                 & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                                    >> 2U))
                                                 : 0U)
                                 : 0U) & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 0xfffU
                                           : 0U)) & 
                              (((IData)(vlSelf->reset)
                                 ? 1U : 0U) ? 0xfffU
                                : 0U))),12);
    bufp->chgCData(oldp+111,((((((IData)(vlSelf->reset)
                                  ? 1U : 0U) ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                 : 0U) & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 3U : 0U)) 
                              & (((IData)(vlSelf->reset)
                                   ? 1U : 0U) ? 3U : 0U))),2);
    bufp->chgBit(oldp+112,(((((IData)(vlSelf->reset)
                               ? 1U : 0U) ? 1U : 0U)
                             ? 1U : 0U)));
    bufp->chgCData(oldp+113,(((4U == (((((IData)(vlSelf->reset)
                                          ? 1U : 0U)
                                         ? 4U : 0U) 
                                       & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 7U : 0U)) 
                                      & (((IData)(vlSelf->reset)
                                           ? 1U : 0U)
                                          ? 7U : 0U)))
                               ? 1U : 0U)),3);
    bufp->chgIData(oldp+114,(((((IData)(vlSelf->reset)
                                 ? 1U : 0U) ? 1U : 0U)
                               ? vlSelf->top_main__DOT__inst_mem_adapter__DOT__inst_mem__DOT__sram
                              [(((((IData)(vlSelf->reset)
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
                                    : 0U))] : 0U)),32);
    bufp->chgSData(oldp+115,(((IData)(vlSelf->reset)
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
