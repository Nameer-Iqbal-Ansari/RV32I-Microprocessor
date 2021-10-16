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
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+81,"reset", false,-1);
    tracep->declBus(c+82,"output1", false,-1, 31,0);
    tracep->declBit(c+80,"top clk", false,-1);
    tracep->declBit(c+81,"top reset", false,-1);
    tracep->declBus(c+82,"top output1", false,-1, 31,0);
    tracep->declBus(c+1,"top pcreg", false,-1, 31,0);
    tracep->declBus(c+2,"top address", false,-1, 9,0);
    tracep->declBus(c+3,"top dataout", false,-1, 31,0);
    tracep->declBus(c+4,"top branch_add", false,-1, 31,0);
    tracep->declBus(c+5,"top jal_add", false,-1, 31,0);
    tracep->declBus(c+6,"top jalr_add", false,-1, 31,0);
    tracep->declBus(c+7,"top imm", false,-1, 31,0);
    tracep->declBus(c+8,"top aluoutput", false,-1, 31,0);
    tracep->declBit(c+9,"top bands", false,-1);
    tracep->declBus(c+10,"top alucontrol", false,-1, 3,0);
    tracep->declBus(c+11,"top opA", false,-1, 1,0);
    tracep->declBit(c+12,"top opB", false,-1);
    tracep->declBus(c+13,"top a_alu", false,-1, 31,0);
    tracep->declBus(c+14,"top b_alu", false,-1, 31,0);
    tracep->declBit(c+15,"top memwrite", false,-1);
    tracep->declBus(c+16,"top immsel", false,-1, 1,0);
    tracep->declBit(c+17,"top writeback", false,-1);
    tracep->declBit(c+18,"top regfile", false,-1);
    tracep->declBus(c+19,"top pcsel", false,-1, 1,0);
    tracep->declBit(c+20,"top branchtrue", false,-1);
    tracep->declBus(c+21,"top rs1_out", false,-1, 31,0);
    tracep->declBus(c+22,"top rs2_out", false,-1, 31,0);
    tracep->declBus(c+23,"top writein_reg", false,-1, 31,0);
    tracep->declBus(c+24,"top dmemout", false,-1, 31,0);
    tracep->declBit(c+25,"top jalr_en", false,-1);
    tracep->declBit(c+83,"top en", false,-1);
    tracep->declBit(c+83,"top im en1", false,-1);
    tracep->declBus(c+2,"top im add", false,-1, 9,0);
    tracep->declBus(c+3,"top im instruction", false,-1, 31,0);
    tracep->declBus(c+26,"top controlunit opcode", false,-1, 6,0);
    tracep->declBit(c+20,"top controlunit branchtrue", false,-1);
    tracep->declBus(c+27,"top controlunit func210", false,-1, 2,0);
    tracep->declBit(c+28,"top controlunit func7", false,-1);
    tracep->declBit(c+9,"top controlunit bands", false,-1);
    tracep->declBus(c+10,"top controlunit alucontrol", false,-1, 3,0);
    tracep->declBus(c+11,"top controlunit opA", false,-1, 1,0);
    tracep->declBit(c+12,"top controlunit opB", false,-1);
    tracep->declBit(c+15,"top controlunit memwrite", false,-1);
    tracep->declBus(c+16,"top controlunit immsel", false,-1, 1,0);
    tracep->declBit(c+17,"top controlunit writeback", false,-1);
    tracep->declBit(c+18,"top controlunit regfile", false,-1);
    tracep->declBus(c+19,"top controlunit pcsel", false,-1, 1,0);
    tracep->declBit(c+25,"top controlunit jalr", false,-1);
    tracep->declBit(c+83,"top controlunit en0", false,-1);
    tracep->declBus(c+29,"top controlunit aluop210", false,-1, 2,0);
    tracep->declBit(c+30,"top controlunit r", false,-1);
    tracep->declBit(c+31,"top controlunit i", false,-1);
    tracep->declBit(c+32,"top controlunit s", false,-1);
    tracep->declBit(c+33,"top controlunit lui", false,-1);
    tracep->declBit(c+34,"top controlunit auipc", false,-1);
    tracep->declBit(c+35,"top controlunit jal", false,-1);
    tracep->declBit(c+36,"top controlunit b", false,-1);
    tracep->declBit(c+37,"top controlunit lw", false,-1);
    tracep->declBus(c+3,"top ig inst", false,-1, 31,0);
    tracep->declBus(c+1,"top ig pcvalue", false,-1, 31,0);
    tracep->declBus(c+16,"top ig immsel", false,-1, 1,0);
    tracep->declBus(c+5,"top ig jal_imm", false,-1, 31,0);
    tracep->declBus(c+7,"top ig imm", false,-1, 31,0);
    tracep->declBus(c+4,"top ig branch_imm", false,-1, 31,0);
    tracep->declBus(c+38,"top ig iorjalr_imm", false,-1, 31,0);
    tracep->declBus(c+39,"top ig s_imm", false,-1, 31,0);
    tracep->declBus(c+40,"top ig u_imm", false,-1, 31,0);
    tracep->declBus(c+41,"top ig extend", false,-1, 19,0);
    tracep->declBus(c+13,"top alu_i a", false,-1, 31,0);
    tracep->declBus(c+14,"top alu_i b", false,-1, 31,0);
    tracep->declBus(c+10,"top alu_i alusel", false,-1, 3,0);
    tracep->declBus(c+8,"top alu_i aluout", false,-1, 31,0);
    tracep->declBit(c+80,"top rf clk", false,-1);
    tracep->declBit(c+18,"top rf write_enable", false,-1);
    tracep->declBus(c+42,"top rf rs1", false,-1, 4,0);
    tracep->declBus(c+43,"top rf rs2", false,-1, 4,0);
    tracep->declBus(c+44,"top rf rd", false,-1, 4,0);
    tracep->declBus(c+23,"top rf write_data", false,-1, 31,0);
    tracep->declBus(c+21,"top rf read_data1", false,-1, 31,0);
    tracep->declBus(c+22,"top rf read_data2", false,-1, 31,0);
    tracep->declBus(c+82,"top rf out", false,-1, 31,0);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+45+i*1,"top rf reg_array", true,(i+0), 31,0);}}
    tracep->declBus(c+21,"top balu rs1", false,-1, 31,0);
    tracep->declBus(c+22,"top balu rs2", false,-1, 31,0);
    tracep->declBus(c+27,"top balu func210", false,-1, 2,0);
    tracep->declBit(c+20,"top balu branchtrue", false,-1);
    tracep->declBit(c+80,"top dmem clk", false,-1);
    tracep->declBus(c+77,"top dmem add", false,-1, 9,0);
    tracep->declBus(c+22,"top dmem datain", false,-1, 31,0);
    tracep->declBit(c+15,"top dmem wen", false,-1);
    tracep->declBus(c+24,"top dmem dataout", false,-1, 31,0);
    tracep->declBus(c+11,"top mux12 opA", false,-1, 1,0);
    tracep->declBit(c+12,"top mux12 opB", false,-1);
    tracep->declBus(c+1,"top mux12 pcreg", false,-1, 31,0);
    tracep->declBus(c+21,"top mux12 rs1_out", false,-1, 31,0);
    tracep->declBus(c+22,"top mux12 rs2_out", false,-1, 31,0);
    tracep->declBus(c+7,"top mux12 imm", false,-1, 31,0);
    tracep->declBus(c+13,"top mux12 a_alu", false,-1, 31,0);
    tracep->declBus(c+14,"top mux12 b_alu", false,-1, 31,0);
    tracep->declBit(c+17,"top mux3 writeback", false,-1);
    tracep->declBit(c+25,"top mux3 jalr_en", false,-1);
    tracep->declBit(c+9,"top mux3 bands", false,-1);
    tracep->declBus(c+8,"top mux3 aluoutput", false,-1, 31,0);
    tracep->declBus(c+24,"top mux3 dmemout", false,-1, 31,0);
    tracep->declBus(c+1,"top mux3 pcreg", false,-1, 31,0);
    tracep->declBus(c+23,"top mux3 writein_reg", false,-1, 31,0);
    tracep->declBus(c+78,"top mux3 r1", false,-1, 31,0);
    tracep->declBus(c+79,"top mux3 r2", false,-1, 31,0);
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
    tracep->fullIData(oldp+1,(vlSelf->top__DOT__pcreg),32);
    tracep->fullSData(oldp+2,(vlSelf->top__DOT__address),10);
    tracep->fullIData(oldp+3,(vlSelf->top__DOT__dataout),32);
    tracep->fullIData(oldp+4,(vlSelf->top__DOT__branch_add),32);
    tracep->fullIData(oldp+5,(vlSelf->top__DOT__jal_add),32);
    tracep->fullIData(oldp+6,(vlSelf->top__DOT__jalr_add),32);
    tracep->fullIData(oldp+7,(vlSelf->top__DOT__imm),32);
    tracep->fullIData(oldp+8,(vlSelf->top__DOT__aluoutput),32);
    tracep->fullBit(oldp+9,(vlSelf->top__DOT__bands));
    tracep->fullCData(oldp+10,(vlSelf->top__DOT__alucontrol),4);
    tracep->fullCData(oldp+11,(vlSelf->top__DOT__opA),2);
    tracep->fullBit(oldp+12,(vlSelf->top__DOT__opB));
    tracep->fullIData(oldp+13,(((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                 | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2)),32);
    tracep->fullIData(oldp+14,(vlSelf->top__DOT__b_alu),32);
    tracep->fullBit(oldp+15,(vlSelf->top__DOT__memwrite));
    tracep->fullCData(oldp+16,(vlSelf->top__DOT__immsel),2);
    tracep->fullBit(oldp+17,(vlSelf->top__DOT__writeback));
    tracep->fullBit(oldp+18,(vlSelf->top__DOT__regfile));
    tracep->fullCData(oldp+19,(vlSelf->top__DOT__pcsel),2);
    tracep->fullBit(oldp+20,(vlSelf->top__DOT__branchtrue));
    tracep->fullIData(oldp+21,(vlSelf->top__DOT__rs1_out),32);
    tracep->fullIData(oldp+22,(vlSelf->top__DOT__rs2_out),32);
    tracep->fullIData(oldp+23,(vlSelf->top__DOT__mux3__DOT__writein_reg__out__out0),32);
    tracep->fullIData(oldp+24,(vlSelf->top__DOT__dmem__DOT__mem
                               [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                                           >> 2U))]),32);
    tracep->fullBit(oldp+25,(vlSelf->top__DOT__jalr_en));
    tracep->fullCData(oldp+26,((0x7fU & vlSelf->top__DOT__dataout)),7);
    tracep->fullCData(oldp+27,((7U & (vlSelf->top__DOT__dataout 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+28,((1U & (vlSelf->top__DOT__dataout 
                                    >> 0x1eU))));
    tracep->fullCData(oldp+29,(vlSelf->top__DOT__controlunit__DOT__aluop210),3);
    tracep->fullBit(oldp+30,(vlSelf->top__DOT__controlunit__DOT__r));
    tracep->fullBit(oldp+31,(vlSelf->top__DOT__controlunit__DOT__i));
    tracep->fullBit(oldp+32,(vlSelf->top__DOT__controlunit__DOT__s));
    tracep->fullBit(oldp+33,(vlSelf->top__DOT__controlunit__DOT__lui));
    tracep->fullBit(oldp+34,(vlSelf->top__DOT__controlunit__DOT__auipc));
    tracep->fullBit(oldp+35,(vlSelf->top__DOT__controlunit__DOT__jal));
    tracep->fullBit(oldp+36,(vlSelf->top__DOT__controlunit__DOT__b));
    tracep->fullBit(oldp+37,(vlSelf->top__DOT__controlunit__DOT__lw));
    tracep->fullIData(oldp+38,(vlSelf->top__DOT__ig__DOT__iorjalr_imm),32);
    tracep->fullIData(oldp+39,(vlSelf->top__DOT__ig__DOT__s_imm),32);
    tracep->fullIData(oldp+40,(vlSelf->top__DOT__ig__DOT__u_imm),32);
    tracep->fullIData(oldp+41,(vlSelf->top__DOT__ig__DOT__extend),20);
    tracep->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 0xfU))),5);
    tracep->fullCData(oldp+43,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 0x14U))),5);
    tracep->fullCData(oldp+44,((0x1fU & (vlSelf->top__DOT__dataout 
                                         >> 7U))),5);
    tracep->fullIData(oldp+45,(vlSelf->top__DOT__rf__DOT__reg_array[0]),32);
    tracep->fullIData(oldp+46,(vlSelf->top__DOT__rf__DOT__reg_array[1]),32);
    tracep->fullIData(oldp+47,(vlSelf->top__DOT__rf__DOT__reg_array[2]),32);
    tracep->fullIData(oldp+48,(vlSelf->top__DOT__rf__DOT__reg_array[3]),32);
    tracep->fullIData(oldp+49,(vlSelf->top__DOT__rf__DOT__reg_array[4]),32);
    tracep->fullIData(oldp+50,(vlSelf->top__DOT__rf__DOT__reg_array[5]),32);
    tracep->fullIData(oldp+51,(vlSelf->top__DOT__rf__DOT__reg_array[6]),32);
    tracep->fullIData(oldp+52,(vlSelf->top__DOT__rf__DOT__reg_array[7]),32);
    tracep->fullIData(oldp+53,(vlSelf->top__DOT__rf__DOT__reg_array[8]),32);
    tracep->fullIData(oldp+54,(vlSelf->top__DOT__rf__DOT__reg_array[9]),32);
    tracep->fullIData(oldp+55,(vlSelf->top__DOT__rf__DOT__reg_array[10]),32);
    tracep->fullIData(oldp+56,(vlSelf->top__DOT__rf__DOT__reg_array[11]),32);
    tracep->fullIData(oldp+57,(vlSelf->top__DOT__rf__DOT__reg_array[12]),32);
    tracep->fullIData(oldp+58,(vlSelf->top__DOT__rf__DOT__reg_array[13]),32);
    tracep->fullIData(oldp+59,(vlSelf->top__DOT__rf__DOT__reg_array[14]),32);
    tracep->fullIData(oldp+60,(vlSelf->top__DOT__rf__DOT__reg_array[15]),32);
    tracep->fullIData(oldp+61,(vlSelf->top__DOT__rf__DOT__reg_array[16]),32);
    tracep->fullIData(oldp+62,(vlSelf->top__DOT__rf__DOT__reg_array[17]),32);
    tracep->fullIData(oldp+63,(vlSelf->top__DOT__rf__DOT__reg_array[18]),32);
    tracep->fullIData(oldp+64,(vlSelf->top__DOT__rf__DOT__reg_array[19]),32);
    tracep->fullIData(oldp+65,(vlSelf->top__DOT__rf__DOT__reg_array[20]),32);
    tracep->fullIData(oldp+66,(vlSelf->top__DOT__rf__DOT__reg_array[21]),32);
    tracep->fullIData(oldp+67,(vlSelf->top__DOT__rf__DOT__reg_array[22]),32);
    tracep->fullIData(oldp+68,(vlSelf->top__DOT__rf__DOT__reg_array[23]),32);
    tracep->fullIData(oldp+69,(vlSelf->top__DOT__rf__DOT__reg_array[24]),32);
    tracep->fullIData(oldp+70,(vlSelf->top__DOT__rf__DOT__reg_array[25]),32);
    tracep->fullIData(oldp+71,(vlSelf->top__DOT__rf__DOT__reg_array[26]),32);
    tracep->fullIData(oldp+72,(vlSelf->top__DOT__rf__DOT__reg_array[27]),32);
    tracep->fullIData(oldp+73,(vlSelf->top__DOT__rf__DOT__reg_array[28]),32);
    tracep->fullIData(oldp+74,(vlSelf->top__DOT__rf__DOT__reg_array[29]),32);
    tracep->fullIData(oldp+75,(vlSelf->top__DOT__rf__DOT__reg_array[30]),32);
    tracep->fullIData(oldp+76,(vlSelf->top__DOT__rf__DOT__reg_array[31]),32);
    tracep->fullSData(oldp+77,((0x3ffU & (vlSelf->top__DOT__aluoutput 
                                          >> 2U))),10);
    tracep->fullIData(oldp+78,(vlSelf->top__DOT__mux3__DOT__r1),32);
    tracep->fullIData(oldp+79,(vlSelf->top__DOT__mux3__DOT__r2),32);
    tracep->fullBit(oldp+80,(vlSelf->clk));
    tracep->fullBit(oldp+81,(vlSelf->reset));
    tracep->fullIData(oldp+82,(vlSelf->output1),32);
    tracep->fullBit(oldp+83,(1U));
}
