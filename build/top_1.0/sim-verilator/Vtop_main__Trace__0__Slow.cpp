// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_main__Syms.h"


VL_ATTR_COLD void Vtop_main___024root__trace_init_sub__TOP__0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"reset", false,-1);
    tracep->declBus(c+104,"ouput_led", false,-1, 1,0);
    tracep->pushNamePrefix("top_main ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"reset", false,-1);
    tracep->declBus(c+104,"ouput_led", false,-1, 1,0);
    tracep->declBit(c+105,"a_ready_i_1", false,-1);
    tracep->declBit(c+41,"a_ready_i_2", false,-1);
    tracep->declBus(c+117,"a_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+42,"a_opcode_i_2", false,-1, 2,0);
    tracep->declBus(c+106,"a_address_i_1", false,-1, 11,0);
    tracep->declBus(c+43,"a_address_i_2", false,-1, 11,0);
    tracep->declBus(c+118,"a_data_i_1", false,-1, 31,0);
    tracep->declBus(c+44,"a_data_i_2", false,-1, 31,0);
    tracep->declBit(c+107,"d1_ready_i", false,-1);
    tracep->declBit(c+45,"d2_ready_i", false,-1);
    tracep->declBus(c+108,"d_data_i_1", false,-1, 31,0);
    tracep->declBus(c+35,"d_data_i_2", false,-1, 31,0);
    tracep->declBus(c+46,"d_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+47,"d_opcode_i_2", false,-1, 2,0);
    tracep->declBit(c+109,"a1_valid_o", false,-1);
    tracep->declBus(c+110,"a1_opcode_o", false,-1, 2,0);
    tracep->declBus(c+111,"a1_address_o", false,-1, 11,0);
    tracep->declBus(c+119,"a1_data_o", false,-1, 31,0);
    tracep->declBus(c+48,"a1_size_o", false,-1, 1,0);
    tracep->declBus(c+112,"a1_mask_o", false,-1, 1,0);
    tracep->declBit(c+49,"a2_valid_o", false,-1);
    tracep->declBus(c+50,"a2_opcode_o", false,-1, 2,0);
    tracep->declBus(c+51,"a2_address_o", false,-1, 11,0);
    tracep->declBus(c+52,"a2_data_o", false,-1, 31,0);
    tracep->declBus(c+53,"a2_size_o", false,-1, 1,0);
    tracep->declBus(c+54,"a2_mask_o", false,-1, 1,0);
    tracep->declBit(c+113,"d1_valid_o", false,-1);
    tracep->declBus(c+114,"d1_opcode_o", false,-1, 2,0);
    tracep->declBus(c+55,"d1_size_o", false,-1, 1,0);
    tracep->declBus(c+115,"d1_data_o", false,-1, 31,0);
    tracep->declBit(c+56,"d2_valid_o", false,-1);
    tracep->declBus(c+57,"d2_opcode_o", false,-1, 2,0);
    tracep->declBus(c+58,"d2_size_o", false,-1, 1,0);
    tracep->declBus(c+36,"d2_data_o", false,-1, 31,0);
    tracep->pushNamePrefix("a1 ");
    tracep->declBit(c+105,"a_ready_i", false,-1);
    tracep->declBit(c+109,"a_valid_o", false,-1);
    tracep->declBus(c+110,"a_opcode_o", false,-1, 2,0);
    tracep->declBus(c+111,"a_address_o", false,-1, 11,0);
    tracep->declBus(c+119,"a_data_o", false,-1, 31,0);
    tracep->declBus(c+48,"a_size_o", false,-1, 1,0);
    tracep->declBus(c+112,"a_mask_o", false,-1, 1,0);
    tracep->declBus(c+117,"a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+106,"a_address_i", false,-1, 11,0);
    tracep->declBus(c+118,"a_data_i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("a2 ");
    tracep->declBit(c+41,"a_ready_i", false,-1);
    tracep->declBit(c+49,"a_valid_o", false,-1);
    tracep->declBus(c+50,"a_opcode_o", false,-1, 2,0);
    tracep->declBus(c+51,"a_address_o", false,-1, 11,0);
    tracep->declBus(c+52,"a_data_o", false,-1, 31,0);
    tracep->declBus(c+53,"a_size_o", false,-1, 1,0);
    tracep->declBus(c+54,"a_mask_o", false,-1, 1,0);
    tracep->declBus(c+42,"a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+43,"a_address_i", false,-1, 11,0);
    tracep->declBus(c+44,"a_data_i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("core ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"reset", false,-1);
    tracep->declBus(c+117,"a_opcode_o_1", false,-1, 2,0);
    tracep->declBus(c+42,"a_opcode_o_2", false,-1, 2,0);
    tracep->declBus(c+106,"a_address_o_1", false,-1, 11,0);
    tracep->declBus(c+43,"a_address_o_2", false,-1, 11,0);
    tracep->declBus(c+118,"a_data_o_1", false,-1, 31,0);
    tracep->declBus(c+44,"a_data_o_2", false,-1, 31,0);
    tracep->declBit(c+105,"a_ready_o_1", false,-1);
    tracep->declBit(c+41,"a_ready_o_2", false,-1);
    tracep->declBit(c+107,"d1_ready_i", false,-1);
    tracep->declBit(c+45,"d2_ready_i", false,-1);
    tracep->declBus(c+108,"d_data_i_1", false,-1, 31,0);
    tracep->declBus(c+35,"d_data_i_2", false,-1, 31,0);
    tracep->declBus(c+46,"d_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+47,"d_opcode_i_2", false,-1, 2,0);
    tracep->declBit(c+59,"channel_a_sel", false,-1);
    tracep->declBus(c+116,"address", false,-1, 9,0);
    tracep->declBus(c+60,"dataout", false,-1, 31,0);
    tracep->declBus(c+37,"dmemout", false,-1, 31,0);
    tracep->declBit(c+61,"memwrite", false,-1);
    tracep->declBus(c+62,"aluoutput1", false,-1, 10,1);
    tracep->declBus(c+44,"rs2_out", false,-1, 31,0);
    tracep->declBus(c+1,"pcreg", false,-1, 31,0);
    tracep->declBus(c+63,"branch_add", false,-1, 31,0);
    tracep->declBus(c+64,"aluoutput", false,-1, 31,0);
    tracep->declBus(c+65,"jal_add", false,-1, 31,0);
    tracep->declBus(c+66,"imm", false,-1, 31,0);
    tracep->declBus(c+64,"jalr_add", false,-1, 31,0);
    tracep->declBit(c+67,"bands", false,-1);
    tracep->declBus(c+68,"alucontrol", false,-1, 3,0);
    tracep->declBus(c+69,"opA", false,-1, 1,0);
    tracep->declBit(c+70,"opB", false,-1);
    tracep->declBus(c+71,"a_alu", false,-1, 31,0);
    tracep->declBus(c+72,"b_alu", false,-1, 31,0);
    tracep->declBus(c+73,"immsel", false,-1, 1,0);
    tracep->declBit(c+74,"writeback", false,-1);
    tracep->declBit(c+75,"regfile", false,-1);
    tracep->declBus(c+76,"pcsel", false,-1, 2,0);
    tracep->declBit(c+77,"branchtrue", false,-1);
    tracep->declBus(c+78,"rs1_out", false,-1, 31,0);
    tracep->declBus(c+38,"writein_reg", false,-1, 31,0);
    tracep->declBit(c+79,"jalr_en", false,-1);
    tracep->declBus(c+39,"r1", false,-1, 31,0);
    tracep->declBus(c+40,"r2", false,-1, 31,0);
    tracep->pushNamePrefix("alu_i ");
    tracep->declBus(c+71,"input_a", false,-1, 31,0);
    tracep->declBus(c+72,"input_b", false,-1, 31,0);
    tracep->declBus(c+68,"alusel", false,-1, 3,0);
    tracep->declBus(c+64,"aluout", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("balu ");
    tracep->declBus(c+78,"rs1", false,-1, 31,0);
    tracep->declBus(c+44,"rs2", false,-1, 31,0);
    tracep->declBus(c+80,"func210", false,-1, 2,0);
    tracep->declBit(c+77,"branchtrue", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("controlunit ");
    tracep->declBus(c+81,"opcode", false,-1, 6,0);
    tracep->declBit(c+77,"branchtrue", false,-1);
    tracep->declBus(c+80,"func210", false,-1, 2,0);
    tracep->declBit(c+82,"func7", false,-1);
    tracep->declBit(c+67,"bands", false,-1);
    tracep->declBus(c+68,"alucontrol", false,-1, 3,0);
    tracep->declBus(c+69,"opA", false,-1, 1,0);
    tracep->declBit(c+70,"opB", false,-1);
    tracep->declBit(c+61,"memwrite", false,-1);
    tracep->declBus(c+73,"immsel", false,-1, 1,0);
    tracep->declBit(c+74,"writeback", false,-1);
    tracep->declBit(c+75,"regfile", false,-1);
    tracep->declBus(c+76,"pcsel", false,-1, 2,0);
    tracep->declBit(c+79,"jalr", false,-1);
    tracep->declBus(c+83,"aluop210", false,-1, 2,0);
    tracep->declBit(c+84,"r", false,-1);
    tracep->declBit(c+85,"i", false,-1);
    tracep->declBit(c+86,"s", false,-1);
    tracep->declBit(c+87,"lui", false,-1);
    tracep->declBit(c+88,"auipc", false,-1);
    tracep->declBit(c+89,"jal", false,-1);
    tracep->declBit(c+90,"b", false,-1);
    tracep->declBit(c+91,"lw", false,-1);
    tracep->declBus(c+92,"alucontrol_input", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ig ");
    tracep->declBus(c+60,"inst", false,-1, 31,0);
    tracep->declBus(c+1,"pcvalue", false,-1, 31,0);
    tracep->declBus(c+73,"immsel", false,-1, 1,0);
    tracep->declBus(c+65,"jal_imm", false,-1, 31,0);
    tracep->declBus(c+66,"imm", false,-1, 31,0);
    tracep->declBus(c+63,"branch_imm", false,-1, 31,0);
    tracep->declBus(c+93,"iorjalr_imm", false,-1, 31,0);
    tracep->declBus(c+94,"s_imm", false,-1, 31,0);
    tracep->declBus(c+95,"u_imm", false,-1, 31,0);
    tracep->declBus(c+96,"extend", false,-1, 19,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("rf ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+75,"write_enable", false,-1);
    tracep->declBus(c+97,"rs1", false,-1, 4,0);
    tracep->declBus(c+98,"rs2", false,-1, 4,0);
    tracep->declBus(c+99,"rd", false,-1, 4,0);
    tracep->declBus(c+38,"write_data", false,-1, 31,0);
    tracep->declBus(c+78,"read_data1", false,-1, 31,0);
    tracep->declBus(c+44,"read_data2", false,-1, 31,0);
    tracep->declBit(c+103,"reset", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+2+i*1,"reg_array", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+34,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("d1 ");
    tracep->declBit(c+107,"d_ready_o", false,-1);
    tracep->declBit(c+113,"d_valid_i", false,-1);
    tracep->declBus(c+114,"d_opcode_i", false,-1, 2,0);
    tracep->declBus(c+55,"d_size_i", false,-1, 1,0);
    tracep->declBus(c+115,"d_data_i", false,-1, 31,0);
    tracep->declBus(c+108,"d_data_o", false,-1, 31,0);
    tracep->declBus(c+46,"d_opcode_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("d2 ");
    tracep->declBit(c+45,"d_ready_o", false,-1);
    tracep->declBit(c+56,"d_valid_i", false,-1);
    tracep->declBus(c+57,"d_opcode_i", false,-1, 2,0);
    tracep->declBus(c+58,"d_size_i", false,-1, 1,0);
    tracep->declBus(c+36,"d_data_i", false,-1, 31,0);
    tracep->declBus(c+35,"d_data_o", false,-1, 31,0);
    tracep->declBus(c+47,"d_opcode_o", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("data_mem_adapter ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+49,"a_valid_i", false,-1);
    tracep->declBus(c+51,"a_address_i", false,-1, 11,0);
    tracep->declBus(c+50,"a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+52,"a_data_i", false,-1, 31,0);
    tracep->declBus(c+53,"a_size_i", false,-1, 1,0);
    tracep->declBus(c+54,"a_mask_i", false,-1, 1,0);
    tracep->declBit(c+56,"d_valid_o", false,-1);
    tracep->declBus(c+57,"d_opcode_o", false,-1, 2,0);
    tracep->declBus(c+58,"d_size_o", false,-1, 1,0);
    tracep->declBus(c+36,"d_data_o", false,-1, 31,0);
    tracep->declBit(c+100,"wen", false,-1);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->pushNamePrefix("data_m ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+100,"wen", false,-1);
    tracep->declBit(c+101,"ren", false,-1);
    tracep->declBus(c+51,"add", false,-1, 11,0);
    tracep->declBus(c+36,"dataout", false,-1, 31,0);
    tracep->declBus(c+52,"datain", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("inst_mem_adapter ");
    tracep->declBit(c+102,"clk", false,-1);
    tracep->declBit(c+103,"reset", false,-1);
    tracep->declBit(c+109,"a_valid_i", false,-1);
    tracep->declBus(c+111,"a_address_i", false,-1, 11,0);
    tracep->declBus(c+110,"a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+119,"a_data_i", false,-1, 31,0);
    tracep->declBus(c+48,"a_size_i", false,-1, 1,0);
    tracep->declBus(c+112,"a_mask_i", false,-1, 1,0);
    tracep->declBit(c+113,"d_valid_o", false,-1);
    tracep->declBus(c+114,"d_opcode_o", false,-1, 2,0);
    tracep->declBus(c+55,"d_size_o", false,-1, 1,0);
    tracep->declBus(c+115,"d_data_o", false,-1, 31,0);
    tracep->declBit(c+109,"en1", false,-1);
    tracep->declBus(c+111,"add", false,-1, 11,0);
    tracep->pushNamePrefix("inst_mem ");
    tracep->declBus(c+120,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+121,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+102,"clock", false,-1);
    tracep->declBit(c+103,"reset", false,-1);
    tracep->declBit(c+109,"readEnable", false,-1);
    tracep->declBus(c+111,"readAddress", false,-1, 11,0);
    tracep->declBus(c+115,"readData", false,-1, 31,0);
    tracep->declBit(c+122,"writeEnable", false,-1);
    tracep->declBus(c+123,"writeAddress", false,-1, 11,0);
    tracep->declBus(c+119,"writeData", false,-1, 31,0);
    tracep->declBus(c+124,"MEM_DEPTH", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtop_main___024root__trace_init_top(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_init_top\n"); );
    // Body
    Vtop_main___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_main___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_main___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop_main___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop_main___024root__trace_register(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop_main___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop_main___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop_main___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop_main___024root__trace_full_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop_main___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_full_top_0\n"); );
    // Init
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_main___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop_main___024root__trace_full_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->top_main__DOT__core__DOT__pcreg),32);
    bufp->fullIData(oldp+2,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0]),32);
    bufp->fullIData(oldp+3,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1]),32);
    bufp->fullIData(oldp+4,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2]),32);
    bufp->fullIData(oldp+5,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3]),32);
    bufp->fullIData(oldp+6,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4]),32);
    bufp->fullIData(oldp+7,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5]),32);
    bufp->fullIData(oldp+8,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6]),32);
    bufp->fullIData(oldp+9,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7]),32);
    bufp->fullIData(oldp+10,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8]),32);
    bufp->fullIData(oldp+11,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9]),32);
    bufp->fullIData(oldp+12,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[10]),32);
    bufp->fullIData(oldp+13,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[11]),32);
    bufp->fullIData(oldp+14,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[12]),32);
    bufp->fullIData(oldp+15,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[13]),32);
    bufp->fullIData(oldp+16,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[14]),32);
    bufp->fullIData(oldp+17,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[15]),32);
    bufp->fullIData(oldp+18,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[16]),32);
    bufp->fullIData(oldp+19,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[17]),32);
    bufp->fullIData(oldp+20,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[18]),32);
    bufp->fullIData(oldp+21,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[19]),32);
    bufp->fullIData(oldp+22,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[20]),32);
    bufp->fullIData(oldp+23,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[21]),32);
    bufp->fullIData(oldp+24,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[22]),32);
    bufp->fullIData(oldp+25,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[23]),32);
    bufp->fullIData(oldp+26,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[24]),32);
    bufp->fullIData(oldp+27,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[25]),32);
    bufp->fullIData(oldp+28,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[26]),32);
    bufp->fullIData(oldp+29,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[27]),32);
    bufp->fullIData(oldp+30,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[28]),32);
    bufp->fullIData(oldp+31,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[29]),32);
    bufp->fullIData(oldp+32,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[30]),32);
    bufp->fullIData(oldp+33,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[31]),32);
    bufp->fullIData(oldp+34,(vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+35,((((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                    ? 1U : 0U) ? 1U
                                   : 0U) & (2U == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                 ? ((((((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                         ? 1U : 0U)
                                        ? vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                       [vlSelf->top_main__DOT__a2_address_o]
                                        : 0U) & (((4U 
                                                   == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                   ? 1U
                                                   : 0U)
                                                  ? 0xffffffffU
                                                  : 0U)) 
                                     & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                          ? 1U : 0U)
                                         ? 0xffffffffU
                                         : 0U)) & (
                                                   ((4U 
                                                     == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                     ? 1U
                                                     : 0U)
                                                    ? 0xffffffffU
                                                    : 0U))
                                 : 0U) & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                              & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)),32);
    bufp->fullIData(oldp+36,(((((((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                   ? 1U : 0U) ? vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                 [vlSelf->top_main__DOT__a2_address_o]
                                  : 0U) & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                             ? 1U : 0U)
                                            ? 0xffffffffU
                                            : 0U)) 
                               & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                    ? 1U : 0U) ? 0xffffffffU
                                   : 0U)) & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                               ? 1U
                                               : 0U)
                                              ? 0xffffffffU
                                              : 0U))),32);
    bufp->fullIData(oldp+37,(((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                      ? 1U : 0U) ? 1U
                                     : 0U) ? 1U : 0U))
                                ? (((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                         ? 1U : 0U)
                                        ? 1U : 0U) 
                                      & (2U == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                      ? ((((((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                              ? 1U : 0U)
                                             ? vlSelf->top_main__DOT__data_mem_adapter__DOT__data_m__DOT__mem
                                            [vlSelf->top_main__DOT__a2_address_o]
                                             : 0U) 
                                           & (((4U 
                                                == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                ? 1U
                                                : 0U)
                                               ? 0xffffffffU
                                               : 0U)) 
                                          & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                               ? 1U
                                               : 0U)
                                              ? 0xffffffffU
                                              : 0U)) 
                                         & (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                              ? 1U : 0U)
                                             ? 0xffffffffU
                                             : 0U))
                                      : 0U) & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                   & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                : 0U) & (((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                          & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                ? 1U
                                                : 0U)
                                               ? 1U
                                               : 0U)
                                              ? 1U : 0U))
                                          ? 0xffffffffU
                                          : 0U))),32);
    bufp->fullIData(oldp+38,((((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                         ? ((IData)(4U) 
                                            + vlSelf->top_main__DOT__core__DOT__pcreg)
                                         : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                             ? ((((1U 
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
    bufp->fullIData(oldp+39,(((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                               ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                    & ((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                          ? 1U : 0U)
                                         ? 1U : 0U)
                                        ? 1U : 0U))
                                    ? (((((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                             ? 1U : 0U)
                                            ? 1U : 0U) 
                                          & (2U == (IData)(vlSelf->top_main__DOT__d2_size_o)))
                                          ? ((((((4U 
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
                                          : 0U) & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
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
                                              : 0U))
                               : vlSelf->top_main__DOT__core__DOT__aluoutput)),32);
    bufp->fullIData(oldp+40,(((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                               ? ((IData)(4U) + vlSelf->top_main__DOT__core__DOT__pcreg)
                               : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
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
                                              ? (((
                                                   (((4U 
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
                                   : vlSelf->top_main__DOT__core__DOT__aluoutput))),32);
    bufp->fullBit(oldp+41,(vlSelf->top_main__DOT__a_ready_i_2));
    bufp->fullCData(oldp+42,(((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                               ? 0U : 4U)),3);
    bufp->fullSData(oldp+43,(((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                 ? (0x400U | (0x3ffU 
                                              & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                 >> 2U)))
                                 : 0U) & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                           ? 0xfffU
                                           : 0U)) & 
                              ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                ? 0xfffU : 0U))),12);
    bufp->fullIData(oldp+44,(vlSelf->top_main__DOT__core__DOT__rs2_out),32);
    bufp->fullBit(oldp+45,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                               ? 1U : 0U) ? 1U : 0U)
                             ? 1U : 0U)));
    bufp->fullCData(oldp+46,(vlSelf->top_main__DOT__d_opcode_i_1),3);
    bufp->fullCData(oldp+47,(vlSelf->top_main__DOT__d_opcode_i_2),3);
    bufp->fullCData(oldp+48,(vlSelf->top_main__DOT__a1_size_o),2);
    bufp->fullBit(oldp+49,(((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                             ? 1U : 0U)));
    bufp->fullCData(oldp+50,(vlSelf->top_main__DOT__a2_opcode_o),3);
    bufp->fullSData(oldp+51,(vlSelf->top_main__DOT__a2_address_o),12);
    bufp->fullIData(oldp+52,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                 ? vlSelf->top_main__DOT__core__DOT__rs2_out
                                 : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                           ? 0xffffffffU
                                           : 0U)) & 
                              ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                ? 0xffffffffU : 0U))),32);
    bufp->fullCData(oldp+53,(vlSelf->top_main__DOT__a2_size_o),2);
    bufp->fullCData(oldp+54,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                 ? (IData)(vlSelf->top_main__DOT__a2_size_o)
                                 : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                           ? 3U : 0U)) 
                              & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                  ? 3U : 0U))),2);
    bufp->fullCData(oldp+55,(vlSelf->top_main__DOT__d1_size_o),2);
    bufp->fullBit(oldp+56,((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                              ? 1U : 0U) ? 1U : 0U)));
    bufp->fullCData(oldp+57,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                               ? 1U : 0U)),3);
    bufp->fullCData(oldp+58,(vlSelf->top_main__DOT__d2_size_o),2);
    bufp->fullBit(oldp+59,(vlSelf->top_main__DOT__core__DOT__channel_a_sel));
    bufp->fullIData(oldp+60,(vlSelf->top_main__DOT__core__DOT__dataout),32);
    bufp->fullBit(oldp+61,(vlSelf->top_main__DOT__core__DOT__memwrite));
    bufp->fullSData(oldp+62,((0x3ffU & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                        >> 2U))),10);
    bufp->fullIData(oldp+63,(vlSelf->top_main__DOT__core__DOT__branch_add),32);
    bufp->fullIData(oldp+64,(vlSelf->top_main__DOT__core__DOT__aluoutput),32);
    bufp->fullIData(oldp+65,(vlSelf->top_main__DOT__core__DOT__jal_add),32);
    bufp->fullIData(oldp+66,(vlSelf->top_main__DOT__core__DOT__imm),32);
    bufp->fullBit(oldp+67,(vlSelf->top_main__DOT__core__DOT__bands));
    bufp->fullCData(oldp+68,(vlSelf->top_main__DOT__core__DOT__alucontrol),4);
    bufp->fullCData(oldp+69,(vlSelf->top_main__DOT__core__DOT__opA),2);
    bufp->fullBit(oldp+70,(vlSelf->top_main__DOT__core__DOT__opB));
    bufp->fullIData(oldp+71,(vlSelf->top_main__DOT__core__DOT__a_alu),32);
    bufp->fullIData(oldp+72,(vlSelf->top_main__DOT__core__DOT__b_alu),32);
    bufp->fullCData(oldp+73,(vlSelf->top_main__DOT__core__DOT__immsel),2);
    bufp->fullBit(oldp+74,(vlSelf->top_main__DOT__core__DOT__writeback));
    bufp->fullBit(oldp+75,(vlSelf->top_main__DOT__core__DOT__regfile));
    bufp->fullCData(oldp+76,(vlSelf->top_main__DOT__core__DOT__pcsel),3);
    bufp->fullBit(oldp+77,(vlSelf->top_main__DOT__core__DOT__branchtrue));
    bufp->fullIData(oldp+78,(vlSelf->top_main__DOT__core__DOT__rs1_out),32);
    bufp->fullBit(oldp+79,(vlSelf->top_main__DOT__core__DOT__jalr_en));
    bufp->fullCData(oldp+80,((7U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+81,((0x7fU & vlSelf->top_main__DOT__core__DOT__dataout)),7);
    bufp->fullBit(oldp+82,((1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+83,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210),3);
    bufp->fullBit(oldp+84,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r));
    bufp->fullBit(oldp+85,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i));
    bufp->fullBit(oldp+86,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s));
    bufp->fullBit(oldp+87,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui));
    bufp->fullBit(oldp+88,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc));
    bufp->fullBit(oldp+89,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal));
    bufp->fullBit(oldp+90,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b));
    bufp->fullBit(oldp+91,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw));
    bufp->fullCData(oldp+92,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input),7);
    bufp->fullIData(oldp+93,(vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm),32);
    bufp->fullIData(oldp+94,(vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm),32);
    bufp->fullIData(oldp+95,(vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm),32);
    bufp->fullIData(oldp+96,(((vlSelf->top_main__DOT__core__DOT__dataout 
                               >> 0x1fU) ? 0xfffffU
                               : 0U)),20);
    bufp->fullCData(oldp+97,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+98,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+99,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 7U))),5);
    bufp->fullBit(oldp+100,(((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                              ? 1U : 0U)));
    bufp->fullBit(oldp+101,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                              ? 1U : 0U)));
    bufp->fullBit(oldp+102,(vlSelf->clk));
    bufp->fullBit(oldp+103,(vlSelf->reset));
    bufp->fullCData(oldp+104,(vlSelf->ouput_led),2);
    bufp->fullBit(oldp+105,(((IData)(vlSelf->reset)
                              ? 1U : 0U)));
    bufp->fullSData(oldp+106,(((IData)(vlSelf->reset)
                                ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                             >> 2U))
                                : 0U)),12);
    bufp->fullBit(oldp+107,((((((IData)(vlSelf->reset)
                                 ? 1U : 0U) ? 1U : 0U)
                               ? 1U : 0U) ? 1U : 0U)));
    bufp->fullIData(oldp+108,(((((((((IData)(vlSelf->reset)
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
                                              : 0U)
                                          : 0U) & (
                                                   ((IData)(vlSelf->reset)
                                                     ? 1U
                                                     : 0U)
                                                    ? 0xfffU
                                                    : 0U)) 
                                       & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 0xfffU
                                           : 0U))] : 0U)
                                  : 0U) & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0) 
                               & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0)),32);
    bufp->fullBit(oldp+109,((((IData)(vlSelf->reset)
                               ? 1U : 0U) ? 1U : 0U)));
    bufp->fullCData(oldp+110,((((((IData)(vlSelf->reset)
                                   ? 1U : 0U) ? 4U : 0U) 
                                & (((IData)(vlSelf->reset)
                                     ? 1U : 0U) ? 7U
                                    : 0U)) & (((IData)(vlSelf->reset)
                                                ? 1U
                                                : 0U)
                                               ? 7U
                                               : 0U))),3);
    bufp->fullSData(oldp+111,((((((IData)(vlSelf->reset)
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
    bufp->fullCData(oldp+112,((((((IData)(vlSelf->reset)
                                   ? 1U : 0U) ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                  : 0U) & (((IData)(vlSelf->reset)
                                             ? 1U : 0U)
                                            ? 3U : 0U)) 
                               & (((IData)(vlSelf->reset)
                                    ? 1U : 0U) ? 3U
                                   : 0U))),2);
    bufp->fullBit(oldp+113,(((((IData)(vlSelf->reset)
                                ? 1U : 0U) ? 1U : 0U)
                              ? 1U : 0U)));
    bufp->fullCData(oldp+114,(((4U == (((((IData)(vlSelf->reset)
                                           ? 1U : 0U)
                                          ? 4U : 0U) 
                                        & (((IData)(vlSelf->reset)
                                             ? 1U : 0U)
                                            ? 7U : 0U)) 
                                       & (((IData)(vlSelf->reset)
                                            ? 1U : 0U)
                                           ? 7U : 0U)))
                                ? 1U : 0U)),3);
    bufp->fullIData(oldp+115,(((((IData)(vlSelf->reset)
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
                                               ? 1U
                                               : 0U)
                                              ? 0xfffU
                                              : 0U)) 
                                 & (((IData)(vlSelf->reset)
                                      ? 1U : 0U) ? 0xfffU
                                     : 0U))] : 0U)),32);
    bufp->fullSData(oldp+116,(((IData)(vlSelf->reset)
                                ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                             >> 2U))
                                : 0U)),10);
    bufp->fullCData(oldp+117,(4U),3);
    bufp->fullIData(oldp+118,(0U),32);
    bufp->fullIData(oldp+119,(0U),32);
    bufp->fullIData(oldp+120,(0x20U),32);
    bufp->fullIData(oldp+121,(0xcU),32);
    bufp->fullBit(oldp+122,(0U));
    bufp->fullSData(oldp+123,(0U),12);
    bufp->fullIData(oldp+124,(0x1000U),32);
}
