// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_init_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+77,"clk", false,-1);
    tracep->declBit(c+78,"reset", false,-1);
    tracep->declBus(c+79,"output1", false,-1, 31,0);
    tracep->declBit(c+77,"top clk", false,-1);
    tracep->declBit(c+78,"top reset", false,-1);
    tracep->declBus(c+79,"top output1", false,-1, 31,0);
    tracep->declBus(c+80,"top pcreg", false,-1, 31,0);
    tracep->declBus(c+34,"top address", false,-1, 9,0);
    tracep->declBus(c+35,"top dataout", false,-1, 31,0);
    tracep->declBus(c+36,"top branch_add", false,-1, 31,0);
    tracep->declBus(c+37,"top jal_add", false,-1, 31,0);
    tracep->declBus(c+38,"top imm", false,-1, 31,0);
    tracep->declBus(c+39,"top aluoutput", false,-1, 31,0);
    tracep->declBus(c+39,"top jalr_add", false,-1, 31,0);
    tracep->declBit(c+40,"top bands", false,-1);
    tracep->declBus(c+41,"top alucontrol", false,-1, 3,0);
    tracep->declBus(c+42,"top opA", false,-1, 1,0);
    tracep->declBit(c+43,"top opB", false,-1);
    tracep->declBus(c+44,"top a_alu", false,-1, 31,0);
    tracep->declBus(c+45,"top b_alu", false,-1, 31,0);
    tracep->declBit(c+46,"top memwrite", false,-1);
    tracep->declBus(c+47,"top immsel", false,-1, 1,0);
    tracep->declBit(c+48,"top writeback", false,-1);
    tracep->declBit(c+49,"top regfile", false,-1);
    tracep->declBus(c+50,"top pcsel", false,-1, 1,0);
    tracep->declBit(c+51,"top branchtrue", false,-1);
    tracep->declBus(c+52,"top rs1_out", false,-1, 31,0);
    tracep->declBus(c+53,"top rs2_out", false,-1, 31,0);
    tracep->declBus(c+54,"top writein_reg", false,-1, 31,0);
    tracep->declBus(c+81,"top dmemout", false,-1, 31,0);
    tracep->declBit(c+55,"top jalr_en", false,-1);
    tracep->declBit(c+84,"top en", false,-1);
    tracep->declBus(c+82,"top r1", false,-1, 31,0);
    tracep->declBus(c+83,"top r2", false,-1, 31,0);
    tracep->declBit(c+84,"top im en1", false,-1);
    tracep->declBus(c+34,"top im add", false,-1, 9,0);
    tracep->declBus(c+35,"top im instruction", false,-1, 31,0);
    tracep->declBus(c+56,"top controlunit opcode", false,-1, 6,0);
    tracep->declBit(c+51,"top controlunit branchtrue", false,-1);
    tracep->declBus(c+57,"top controlunit func210", false,-1, 2,0);
    tracep->declBit(c+58,"top controlunit func7", false,-1);
    tracep->declBit(c+40,"top controlunit bands", false,-1);
    tracep->declBus(c+41,"top controlunit alucontrol", false,-1, 3,0);
    tracep->declBus(c+42,"top controlunit opA", false,-1, 1,0);
    tracep->declBit(c+43,"top controlunit opB", false,-1);
    tracep->declBit(c+46,"top controlunit memwrite", false,-1);
    tracep->declBus(c+47,"top controlunit immsel", false,-1, 1,0);
    tracep->declBit(c+48,"top controlunit writeback", false,-1);
    tracep->declBit(c+49,"top controlunit regfile", false,-1);
    tracep->declBus(c+50,"top controlunit pcsel", false,-1, 1,0);
    tracep->declBit(c+55,"top controlunit jalr", false,-1);
    tracep->declBit(c+84,"top controlunit en0", false,-1);
    tracep->declBus(c+59,"top controlunit aluop210", false,-1, 2,0);
    tracep->declBit(c+60,"top controlunit r", false,-1);
    tracep->declBit(c+61,"top controlunit i", false,-1);
    tracep->declBit(c+62,"top controlunit s", false,-1);
    tracep->declBit(c+63,"top controlunit lui", false,-1);
    tracep->declBit(c+64,"top controlunit auipc", false,-1);
    tracep->declBit(c+65,"top controlunit jal", false,-1);
    tracep->declBit(c+66,"top controlunit b", false,-1);
    tracep->declBit(c+67,"top controlunit lw", false,-1);
    tracep->declBus(c+68,"top controlunit alucontrol_input", false,-1, 6,0);
    tracep->declBus(c+35,"top ig inst", false,-1, 31,0);
    tracep->declBus(c+80,"top ig pcvalue", false,-1, 31,0);
    tracep->declBus(c+47,"top ig immsel", false,-1, 1,0);
    tracep->declBus(c+37,"top ig jal_imm", false,-1, 31,0);
    tracep->declBus(c+38,"top ig imm", false,-1, 31,0);
    tracep->declBus(c+36,"top ig branch_imm", false,-1, 31,0);
    tracep->declBus(c+69,"top ig iorjalr_imm", false,-1, 31,0);
    tracep->declBus(c+70,"top ig s_imm", false,-1, 31,0);
    tracep->declBus(c+71,"top ig u_imm", false,-1, 31,0);
    tracep->declBus(c+72,"top ig extend", false,-1, 19,0);
    tracep->declBus(c+44,"top alu_i input_a", false,-1, 31,0);
    tracep->declBus(c+45,"top alu_i input_b", false,-1, 31,0);
    tracep->declBus(c+41,"top alu_i alusel", false,-1, 3,0);
    tracep->declBus(c+39,"top alu_i aluout", false,-1, 31,0);
    tracep->declBit(c+77,"top rf clk", false,-1);
    tracep->declBit(c+49,"top rf write_enable", false,-1);
    tracep->declBus(c+73,"top rf rs1", false,-1, 4,0);
    tracep->declBus(c+74,"top rf rs2", false,-1, 4,0);
    tracep->declBus(c+75,"top rf rd", false,-1, 4,0);
    tracep->declBus(c+54,"top rf write_data", false,-1, 31,0);
    tracep->declBus(c+52,"top rf read_data1", false,-1, 31,0);
    tracep->declBus(c+53,"top rf read_data2", false,-1, 31,0);
    tracep->declBus(c+79,"top rf out", false,-1, 31,0);
    tracep->declBit(c+78,"top rf reset", false,-1);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+1+i*1,"top rf reg_array", true,(i+0), 31,0);}}
    tracep->declBus(c+33,"top rf unnamedblk1 i", false,-1, 31,0);
    tracep->declBus(c+52,"top balu rs1", false,-1, 31,0);
    tracep->declBus(c+53,"top balu rs2", false,-1, 31,0);
    tracep->declBus(c+57,"top balu func210", false,-1, 2,0);
    tracep->declBit(c+51,"top balu branchtrue", false,-1);
    tracep->declBit(c+77,"top dmem clk", false,-1);
    tracep->declBus(c+76,"top dmem add", false,-1, 9,0);
    tracep->declBus(c+53,"top dmem datain", false,-1, 31,0);
    tracep->declBit(c+46,"top dmem wen", false,-1);
    tracep->declBus(c+81,"top dmem dataout", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__rf__DOT__reg_array[0]),32);
    tracep->fullIData(oldp+2,(vlSelf->top__DOT__rf__DOT__reg_array[1]),32);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__rf__DOT__reg_array[2]),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__rf__DOT__reg_array[3]),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__rf__DOT__reg_array[4]),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__rf__DOT__reg_array[5]),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__rf__DOT__reg_array[6]),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__rf__DOT__reg_array[7]),32);
    tracep->fullIData(oldp+9,(vlSelf->top__DOT__rf__DOT__reg_array[8]),32);
    tracep->fullIData(oldp+10,(vlSelf->top__DOT__rf__DOT__reg_array[9]),32);
    tracep->fullIData(oldp+11,(vlSelf->top__DOT__rf__DOT__reg_array[10]),32);
    tracep->fullIData(oldp+12,(vlSelf->top__DOT__rf__DOT__reg_array[11]),32);
    tracep->fullIData(oldp+13,(vlSelf->top__DOT__rf__DOT__reg_array[12]),32);
    tracep->fullIData(oldp+14,(vlSelf->top__DOT__rf__DOT__reg_array[13]),32);
    tracep->fullIData(oldp+15,(vlSelf->top__DOT__rf__DOT__reg_array[14]),32);
    tracep->fullIData(oldp+16,(vlSelf->top__DOT__rf__DOT__reg_array[15]),32);
    tracep->fullIData(oldp+17,(vlSelf->top__DOT__rf__DOT__reg_array[16]),32);
    tracep->fullIData(oldp+18,(vlSelf->top__DOT__rf__DOT__reg_array[17]),32);
    tracep->fullIData(oldp+19,(vlSelf->top__DOT__rf__DOT__reg_array[18]),32);
    tracep->fullIData(oldp+20,(vlSelf->top__DOT__rf__DOT__reg_array[19]),32);
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__rf__DOT__reg_array[20]),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__rf__DOT__reg_array[21]),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__rf__DOT__reg_array[22]),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__rf__DOT__reg_array[23]),32);
    tracep->fullIData(oldp+25,(vlSelf->top__DOT__rf__DOT__reg_array[24]),32);
    tracep->fullIData(oldp+26,(vlSelf->top__DOT__rf__DOT__reg_array[25]),32);
    tracep->fullIData(oldp+27,(vlSelf->top__DOT__rf__DOT__reg_array[26]),32);
    tracep->fullIData(oldp+28,(vlSelf->top__DOT__rf__DOT__reg_array[27]),32);
    tracep->fullIData(oldp+29,(vlSelf->top__DOT__rf__DOT__reg_array[28]),32);
    tracep->fullIData(oldp+30,(vlSelf->top__DOT__rf__DOT__reg_array[29]),32);
    tracep->fullIData(oldp+31,(vlSelf->top__DOT__rf__DOT__reg_array[30]),32);
    tracep->fullIData(oldp+32,(vlSelf->top__DOT__rf__DOT__reg_array[31]),32);
    tracep->fullIData(oldp+33,(vlSelf->top__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    tracep->fullSData(oldp+34,(vlSelf->top__DOT__address),10);
    tracep->fullIData(oldp+35,(vlSelf->top__DOT__dataout),32);
    tracep->fullIData(oldp+36,(vlSelf->top__DOT__branch_add),32);
    tracep->fullIData(oldp+37,(vlSelf->top__DOT__jal_add),32);
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__imm),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__aluoutput),32);
    tracep->fullBit(oldp+40,(vlSelf->top__DOT__bands));
    tracep->fullCData(oldp+41,(vlSelf->top__DOT__alucontrol),4);
    tracep->fullCData(oldp+42,(vlSelf->top__DOT__opA),2);
    tracep->fullBit(oldp+43,(vlSelf->top__DOT__opB));
    tracep->fullIData(oldp+44,(vlSelf->top__DOT__a_alu),32);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__b_alu),32);
    tracep->fullBit(oldp+46,(vlSelf->top__DOT__memwrite));
    tracep->fullCData(oldp+47,(vlSelf->top__DOT__immsel),2);
    tracep->fullBit(oldp+48,(vlSelf->top__DOT__writeback));
    tracep->fullBit(oldp+49,(vlSelf->top__DOT__regfile));
    tracep->fullCData(oldp+50,(vlSelf->top__DOT__pcsel),2);
    tracep->fullBit(oldp+51,(vlSelf->top__DOT__branchtrue));
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__rs1_out),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__rs2_out),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__writein_reg),32);
    tracep->fullBit(oldp+55,(vlSelf->top__DOT__jalr_en));
    tracep->fullCData(oldp+56,((0x7fU & vlSelf->top__DOT__dataout)),7);
    tracep->fullCData(oldp+57,((7U & (vlSelf->top__DOT__dataout 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+58,((1U & (vlSelf->top__DOT__dataout 
                                    >> 0x1eU))));
    tracep->fullCData(oldp+59,(vlSelf->top__DOT__controlunit__DOT__aluop210),3);
    tracep->fullBit(oldp+60,(vlSelf->top__DOT__controlunit__DOT__r));
    tracep->fullBit(oldp+61,(vlSelf->top__DOT__controlunit__DOT__i));
    tracep->fullBit(oldp+62,(vlSelf->top__DOT__controlunit__DOT__s));
    tracep->fullBit(oldp+63,(vlSelf->top__DOT__controlunit__DOT__lui));
    tracep->fullBit(oldp+64,(vlSelf->top__DOT__controlunit__DOT__auipc));
    tracep->fullBit(oldp+65,(vlSelf->top__DOT__controlunit__DOT__jal));
    tracep->fullBit(oldp+66,(vlSelf->top__DOT__controlunit__DOT__b));
    tracep->fullBit(oldp+67,(vlSelf->top__DOT__controlunit__DOT__lw));
    tracep->fullCData(oldp+68,(vlSelf->top__DOT__controlunit__DOT__alucontrol_input),7);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__ig__DOT__iorjalr_imm),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__ig__DOT__s_imm),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__ig__DOT__u_imm),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__ig__DOT__extend),20);
    tracep->fullCData(oldp+73,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+74,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+75,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 7U))),5);
    tracep->fullSData(oldp+76,((0x3ffU & (vlSelf->top__DOT__aluoutput 
                                          >> 2U))),10);
    tracep->fullBit(oldp+77,(vlSelf->clk));
    tracep->fullBit(oldp+78,(vlSelf->reset));
    tracep->fullIData(oldp+79,(vlSelf->output1),32);
    tracep->fullIData(oldp+80,(vlSelf->top__DOT__pcreg),32);
    tracep->fullIData(oldp+81,(vlSelf->top__DOT__dmem__DOT__mem
                               [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                           >> 2U))]),32);
    tracep->fullIData(oldp+82,(((IData)(vlSelf->top__DOT__writeback)
                                 ? vlSelf->top__DOT__dmem__DOT__mem
                                [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                            >> 2U))]
                                 : vlSelf->top__DOT__aluoutput)),32);
    tracep->fullIData(oldp+83,(((IData)(vlSelf->top__DOT__jalr_en)
                                 ? ((IData)(4U) + vlSelf->top__DOT__pcreg)
                                 : ((IData)(vlSelf->top__DOT__writeback)
                                     ? vlSelf->top__DOT__dmem__DOT__mem
                                    [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                                >> 2U))]
                                     : vlSelf->top__DOT__aluoutput))),32);
    tracep->fullBit(oldp+84,(1U));
}
