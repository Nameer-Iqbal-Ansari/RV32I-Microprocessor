// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_main__Syms.h"


VL_ATTR_COLD void Vtop_main___024root__trace_init_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_main___024root__trace_init_top(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_init_top\n"); );
    // Body
    Vtop_main___024root__trace_init_sub_0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop_main___024root__trace_init_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_init_sub_0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    tracep->declBit(c+106,"clk", false,-1);
    tracep->declBit(c+107,"reset", false,-1);
    tracep->declBit(c+106,"top_main clk", false,-1);
    tracep->declBit(c+107,"top_main reset", false,-1);
    tracep->declBit(c+108,"top_main a_ready_i_1", false,-1);
    tracep->declBit(c+48,"top_main a_ready_i_2", false,-1);
    tracep->declBus(c+116,"top_main a_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+49,"top_main a_opcode_i_2", false,-1, 2,0);
    tracep->declBus(c+109,"top_main a_address_i_1", false,-1, 11,0);
    tracep->declBus(c+50,"top_main a_address_i_2", false,-1, 11,0);
    tracep->declBus(c+117,"top_main a_data_i_1", false,-1, 31,0);
    tracep->declBus(c+51,"top_main a_data_i_2", false,-1, 31,0);
    tracep->declBit(c+1,"top_main d1_ready_i", false,-1);
    tracep->declBit(c+2,"top_main d2_ready_i", false,-1);
    tracep->declBus(c+110,"top_main d_data_i_1", false,-1, 31,0);
    tracep->declBus(c+42,"top_main d_data_i_2", false,-1, 31,0);
    tracep->declBus(c+3,"top_main d_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+52,"top_main d_opcode_i_2", false,-1, 2,0);
    tracep->declBit(c+111,"top_main a1_valid_o", false,-1);
    tracep->declBus(c+53,"top_main a1_opcode_o", false,-1, 2,0);
    tracep->declBus(c+112,"top_main a1_address_o", false,-1, 11,0);
    tracep->declBus(c+118,"top_main a1_data_o", false,-1, 31,0);
    tracep->declBus(c+54,"top_main a1_size_o", false,-1, 1,0);
    tracep->declBus(c+113,"top_main a1_mask_o", false,-1, 1,0);
    tracep->declBit(c+55,"top_main a2_valid_o", false,-1);
    tracep->declBus(c+56,"top_main a2_opcode_o", false,-1, 2,0);
    tracep->declBus(c+57,"top_main a2_address_o", false,-1, 11,0);
    tracep->declBus(c+58,"top_main a2_data_o", false,-1, 31,0);
    tracep->declBus(c+59,"top_main a2_size_o", false,-1, 1,0);
    tracep->declBus(c+60,"top_main a2_mask_o", false,-1, 1,0);
    tracep->declBit(c+4,"top_main d1_valid_o", false,-1);
    tracep->declBus(c+5,"top_main d1_opcode_o", false,-1, 2,0);
    tracep->declBus(c+6,"top_main d1_size_o", false,-1, 1,0);
    tracep->declBus(c+114,"top_main d1_data_o", false,-1, 31,0);
    tracep->declBit(c+7,"top_main d2_valid_o", false,-1);
    tracep->declBus(c+61,"top_main d2_opcode_o", false,-1, 2,0);
    tracep->declBus(c+59,"top_main d2_size_o", false,-1, 1,0);
    tracep->declBus(c+43,"top_main d2_data_o", false,-1, 31,0);
    tracep->declBit(c+106,"top_main core clk", false,-1);
    tracep->declBit(c+107,"top_main core reset", false,-1);
    tracep->declBus(c+116,"top_main core a_opcode_o_1", false,-1, 2,0);
    tracep->declBus(c+49,"top_main core a_opcode_o_2", false,-1, 2,0);
    tracep->declBus(c+109,"top_main core a_address_o_1", false,-1, 11,0);
    tracep->declBus(c+50,"top_main core a_address_o_2", false,-1, 11,0);
    tracep->declBus(c+117,"top_main core a_data_o_1", false,-1, 31,0);
    tracep->declBus(c+51,"top_main core a_data_o_2", false,-1, 31,0);
    tracep->declBit(c+108,"top_main core a_ready_o_1", false,-1);
    tracep->declBit(c+48,"top_main core a_ready_o_2", false,-1);
    tracep->declBit(c+1,"top_main core d1_ready_i", false,-1);
    tracep->declBit(c+2,"top_main core d2_ready_i", false,-1);
    tracep->declBus(c+110,"top_main core d_data_i_1", false,-1, 31,0);
    tracep->declBus(c+42,"top_main core d_data_i_2", false,-1, 31,0);
    tracep->declBus(c+3,"top_main core d_opcode_i_1", false,-1, 2,0);
    tracep->declBus(c+52,"top_main core d_opcode_i_2", false,-1, 2,0);
    tracep->declBit(c+62,"top_main core channel_a_sel", false,-1);
    tracep->declBus(c+115,"top_main core address", false,-1, 9,0);
    tracep->declBus(c+63,"top_main core dataout", false,-1, 31,0);
    tracep->declBus(c+44,"top_main core dmemout", false,-1, 31,0);
    tracep->declBit(c+64,"top_main core memwrite", false,-1);
    tracep->declBus(c+65,"top_main core aluoutput1", false,-1, 10,1);
    tracep->declBus(c+51,"top_main core rs2_out", false,-1, 31,0);
    tracep->declBus(c+8,"top_main core pcreg", false,-1, 31,0);
    tracep->declBus(c+66,"top_main core branch_add", false,-1, 31,0);
    tracep->declBus(c+67,"top_main core aluoutput", false,-1, 31,0);
    tracep->declBus(c+68,"top_main core jal_add", false,-1, 31,0);
    tracep->declBus(c+69,"top_main core imm", false,-1, 31,0);
    tracep->declBus(c+67,"top_main core jalr_add", false,-1, 31,0);
    tracep->declBit(c+70,"top_main core bands", false,-1);
    tracep->declBus(c+71,"top_main core alucontrol", false,-1, 3,0);
    tracep->declBus(c+72,"top_main core opA", false,-1, 1,0);
    tracep->declBit(c+73,"top_main core opB", false,-1);
    tracep->declBus(c+74,"top_main core a_alu", false,-1, 31,0);
    tracep->declBus(c+75,"top_main core b_alu", false,-1, 31,0);
    tracep->declBus(c+76,"top_main core immsel", false,-1, 1,0);
    tracep->declBit(c+77,"top_main core writeback", false,-1);
    tracep->declBit(c+78,"top_main core regfile", false,-1);
    tracep->declBus(c+79,"top_main core pcsel", false,-1, 2,0);
    tracep->declBit(c+80,"top_main core branchtrue", false,-1);
    tracep->declBus(c+81,"top_main core rs1_out", false,-1, 31,0);
    tracep->declBus(c+45,"top_main core writein_reg", false,-1, 31,0);
    tracep->declBit(c+82,"top_main core jalr_en", false,-1);
    tracep->declBus(c+46,"top_main core r1", false,-1, 31,0);
    tracep->declBus(c+47,"top_main core r2", false,-1, 31,0);
    tracep->declBus(c+83,"top_main core controlunit opcode", false,-1, 6,0);
    tracep->declBit(c+80,"top_main core controlunit branchtrue", false,-1);
    tracep->declBus(c+84,"top_main core controlunit func210", false,-1, 2,0);
    tracep->declBit(c+85,"top_main core controlunit func7", false,-1);
    tracep->declBit(c+70,"top_main core controlunit bands", false,-1);
    tracep->declBus(c+71,"top_main core controlunit alucontrol", false,-1, 3,0);
    tracep->declBus(c+72,"top_main core controlunit opA", false,-1, 1,0);
    tracep->declBit(c+73,"top_main core controlunit opB", false,-1);
    tracep->declBit(c+64,"top_main core controlunit memwrite", false,-1);
    tracep->declBus(c+76,"top_main core controlunit immsel", false,-1, 1,0);
    tracep->declBit(c+77,"top_main core controlunit writeback", false,-1);
    tracep->declBit(c+78,"top_main core controlunit regfile", false,-1);
    tracep->declBus(c+79,"top_main core controlunit pcsel", false,-1, 2,0);
    tracep->declBit(c+82,"top_main core controlunit jalr", false,-1);
    tracep->declBus(c+86,"top_main core controlunit aluop210", false,-1, 2,0);
    tracep->declBit(c+87,"top_main core controlunit r", false,-1);
    tracep->declBit(c+88,"top_main core controlunit i", false,-1);
    tracep->declBit(c+89,"top_main core controlunit s", false,-1);
    tracep->declBit(c+90,"top_main core controlunit lui", false,-1);
    tracep->declBit(c+91,"top_main core controlunit auipc", false,-1);
    tracep->declBit(c+92,"top_main core controlunit jal", false,-1);
    tracep->declBit(c+93,"top_main core controlunit b", false,-1);
    tracep->declBit(c+94,"top_main core controlunit lw", false,-1);
    tracep->declBus(c+95,"top_main core controlunit alucontrol_input", false,-1, 6,0);
    tracep->declBus(c+63,"top_main core ig inst", false,-1, 31,0);
    tracep->declBus(c+8,"top_main core ig pcvalue", false,-1, 31,0);
    tracep->declBus(c+76,"top_main core ig immsel", false,-1, 1,0);
    tracep->declBus(c+68,"top_main core ig jal_imm", false,-1, 31,0);
    tracep->declBus(c+69,"top_main core ig imm", false,-1, 31,0);
    tracep->declBus(c+66,"top_main core ig branch_imm", false,-1, 31,0);
    tracep->declBus(c+96,"top_main core ig iorjalr_imm", false,-1, 31,0);
    tracep->declBus(c+97,"top_main core ig s_imm", false,-1, 31,0);
    tracep->declBus(c+98,"top_main core ig u_imm", false,-1, 31,0);
    tracep->declBus(c+99,"top_main core ig extend", false,-1, 19,0);
    tracep->declBus(c+74,"top_main core alu_i input_a", false,-1, 31,0);
    tracep->declBus(c+75,"top_main core alu_i input_b", false,-1, 31,0);
    tracep->declBus(c+71,"top_main core alu_i alusel", false,-1, 3,0);
    tracep->declBus(c+67,"top_main core alu_i aluout", false,-1, 31,0);
    tracep->declBit(c+106,"top_main core rf clk", false,-1);
    tracep->declBit(c+78,"top_main core rf write_enable", false,-1);
    tracep->declBus(c+100,"top_main core rf rs1", false,-1, 4,0);
    tracep->declBus(c+101,"top_main core rf rs2", false,-1, 4,0);
    tracep->declBus(c+102,"top_main core rf rd", false,-1, 4,0);
    tracep->declBus(c+45,"top_main core rf write_data", false,-1, 31,0);
    tracep->declBus(c+81,"top_main core rf read_data1", false,-1, 31,0);
    tracep->declBus(c+51,"top_main core rf read_data2", false,-1, 31,0);
    tracep->declBit(c+107,"top_main core rf reset", false,-1);
    {int i; for (i=0; i<32; i++) {
            tracep->declBus(c+9+i*1,"top_main core rf reg_array", true,(i+0), 31,0);}}
    tracep->declBus(c+41,"top_main core rf unnamedblk1 i", false,-1, 31,0);
    tracep->declBus(c+81,"top_main core balu rs1", false,-1, 31,0);
    tracep->declBus(c+51,"top_main core balu rs2", false,-1, 31,0);
    tracep->declBus(c+84,"top_main core balu func210", false,-1, 2,0);
    tracep->declBit(c+80,"top_main core balu branchtrue", false,-1);
    tracep->declBit(c+106,"top_main inst_mem clk", false,-1);
    tracep->declBit(c+111,"top_main inst_mem a_valid_i", false,-1);
    tracep->declBus(c+112,"top_main inst_mem a_address_i", false,-1, 11,0);
    tracep->declBus(c+53,"top_main inst_mem a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+118,"top_main inst_mem a_data_i", false,-1, 31,0);
    tracep->declBus(c+54,"top_main inst_mem a_size_i", false,-1, 1,0);
    tracep->declBus(c+113,"top_main inst_mem a_mask_i", false,-1, 1,0);
    tracep->declBit(c+4,"top_main inst_mem d_valid_o", false,-1);
    tracep->declBus(c+5,"top_main inst_mem d_opcode_o", false,-1, 2,0);
    tracep->declBus(c+6,"top_main inst_mem d_size_o", false,-1, 1,0);
    tracep->declBus(c+114,"top_main inst_mem d_data_o", false,-1, 31,0);
    tracep->declBus(c+114,"top_main inst_mem instruction", false,-1, 31,0);
    tracep->declBit(c+111,"top_main inst_mem en1", false,-1);
    tracep->declBus(c+112,"top_main inst_mem add", false,-1, 11,0);
    tracep->declBit(c+106,"top_main d_mem clk", false,-1);
    tracep->declBit(c+55,"top_main d_mem a_valid_i", false,-1);
    tracep->declBus(c+57,"top_main d_mem a_address_i", false,-1, 11,0);
    tracep->declBus(c+56,"top_main d_mem a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+58,"top_main d_mem a_data_i", false,-1, 31,0);
    tracep->declBus(c+59,"top_main d_mem a_size_i", false,-1, 1,0);
    tracep->declBus(c+60,"top_main d_mem a_mask_i", false,-1, 1,0);
    tracep->declBit(c+7,"top_main d_mem d_valid_o", false,-1);
    tracep->declBus(c+61,"top_main d_mem d_opcode_o", false,-1, 2,0);
    tracep->declBus(c+59,"top_main d_mem d_size_o", false,-1, 1,0);
    tracep->declBus(c+43,"top_main d_mem d_data_o", false,-1, 31,0);
    tracep->declBus(c+43,"top_main d_mem dataout", false,-1, 31,0);
    tracep->declBus(c+103,"top_main d_mem add", false,-1, 11,0);
    tracep->declBus(c+58,"top_main d_mem datain", false,-1, 31,0);
    tracep->declBit(c+104,"top_main d_mem wen", false,-1);
    tracep->declBit(c+105,"top_main d_mem ren", false,-1);
    tracep->declBit(c+1,"top_main d1 d_ready_o", false,-1);
    tracep->declBit(c+4,"top_main d1 d_valid_i", false,-1);
    tracep->declBus(c+5,"top_main d1 d_opcode_i", false,-1, 2,0);
    tracep->declBus(c+6,"top_main d1 d_size_i", false,-1, 1,0);
    tracep->declBus(c+114,"top_main d1 d_data_i", false,-1, 31,0);
    tracep->declBus(c+110,"top_main d1 d_data_o", false,-1, 31,0);
    tracep->declBus(c+3,"top_main d1 d_opcode_o", false,-1, 2,0);
    tracep->declBit(c+2,"top_main d2 d_ready_o", false,-1);
    tracep->declBit(c+7,"top_main d2 d_valid_i", false,-1);
    tracep->declBus(c+61,"top_main d2 d_opcode_i", false,-1, 2,0);
    tracep->declBus(c+59,"top_main d2 d_size_i", false,-1, 1,0);
    tracep->declBus(c+43,"top_main d2 d_data_i", false,-1, 31,0);
    tracep->declBus(c+42,"top_main d2 d_data_o", false,-1, 31,0);
    tracep->declBus(c+52,"top_main d2 d_opcode_o", false,-1, 2,0);
    tracep->declBit(c+48,"top_main a2 a_ready_i", false,-1);
    tracep->declBit(c+55,"top_main a2 a_valid_o", false,-1);
    tracep->declBus(c+56,"top_main a2 a_opcode_o", false,-1, 2,0);
    tracep->declBus(c+57,"top_main a2 a_address_o", false,-1, 11,0);
    tracep->declBus(c+58,"top_main a2 a_data_o", false,-1, 31,0);
    tracep->declBus(c+59,"top_main a2 a_size_o", false,-1, 1,0);
    tracep->declBus(c+60,"top_main a2 a_mask_o", false,-1, 1,0);
    tracep->declBus(c+49,"top_main a2 a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+50,"top_main a2 a_address_i", false,-1, 11,0);
    tracep->declBus(c+51,"top_main a2 a_data_i", false,-1, 31,0);
    tracep->declBit(c+108,"top_main a1 a_ready_i", false,-1);
    tracep->declBit(c+111,"top_main a1 a_valid_o", false,-1);
    tracep->declBus(c+53,"top_main a1 a_opcode_o", false,-1, 2,0);
    tracep->declBus(c+112,"top_main a1 a_address_o", false,-1, 11,0);
    tracep->declBus(c+118,"top_main a1 a_data_o", false,-1, 31,0);
    tracep->declBus(c+54,"top_main a1 a_size_o", false,-1, 1,0);
    tracep->declBus(c+113,"top_main a1 a_mask_o", false,-1, 1,0);
    tracep->declBus(c+116,"top_main a1 a_opcode_i", false,-1, 2,0);
    tracep->declBus(c+109,"top_main a1 a_address_i", false,-1, 11,0);
    tracep->declBus(c+117,"top_main a1 a_data_i", false,-1, 31,0);
}

VL_ATTR_COLD void Vtop_main___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void Vtop_main___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
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

VL_ATTR_COLD void Vtop_main___024root__trace_full_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtop_main___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_full_top_0\n"); );
    // Init
    Vtop_main___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_main___024root*>(voidSelf);
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop_main___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void Vtop_main___024root__trace_full_sub_0(Vtop_main___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullBit(oldp+1,(((IData)(vlSelf->top_main__DOT__d1_valid_o)
                              ? 1U : 0U)));
    tracep->fullBit(oldp+2,(((IData)(vlSelf->top_main__DOT__d2_valid_o)
                              ? 1U : 0U)));
    tracep->fullCData(oldp+3,(vlSelf->top_main__DOT__d_opcode_i_1),3);
    tracep->fullBit(oldp+4,(vlSelf->top_main__DOT__d1_valid_o));
    tracep->fullCData(oldp+5,(vlSelf->top_main__DOT__d1_opcode_o),3);
    tracep->fullCData(oldp+6,(vlSelf->top_main__DOT__d1_size_o),2);
    tracep->fullBit(oldp+7,(vlSelf->top_main__DOT__d2_valid_o));
    tracep->fullIData(oldp+8,(vlSelf->top_main__DOT__core__DOT__pcreg),32);
    tracep->fullIData(oldp+9,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0]),32);
    tracep->fullIData(oldp+10,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1]),32);
    tracep->fullIData(oldp+11,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2]),32);
    tracep->fullIData(oldp+12,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3]),32);
    tracep->fullIData(oldp+13,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4]),32);
    tracep->fullIData(oldp+14,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5]),32);
    tracep->fullIData(oldp+15,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6]),32);
    tracep->fullIData(oldp+16,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7]),32);
    tracep->fullIData(oldp+17,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8]),32);
    tracep->fullIData(oldp+18,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9]),32);
    tracep->fullIData(oldp+19,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[10]),32);
    tracep->fullIData(oldp+20,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[11]),32);
    tracep->fullIData(oldp+21,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[12]),32);
    tracep->fullIData(oldp+22,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[13]),32);
    tracep->fullIData(oldp+23,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[14]),32);
    tracep->fullIData(oldp+24,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[15]),32);
    tracep->fullIData(oldp+25,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[16]),32);
    tracep->fullIData(oldp+26,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[17]),32);
    tracep->fullIData(oldp+27,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[18]),32);
    tracep->fullIData(oldp+28,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[19]),32);
    tracep->fullIData(oldp+29,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[20]),32);
    tracep->fullIData(oldp+30,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[21]),32);
    tracep->fullIData(oldp+31,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[22]),32);
    tracep->fullIData(oldp+32,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[23]),32);
    tracep->fullIData(oldp+33,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[24]),32);
    tracep->fullIData(oldp+34,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[25]),32);
    tracep->fullIData(oldp+35,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[26]),32);
    tracep->fullIData(oldp+36,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[27]),32);
    tracep->fullIData(oldp+37,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[28]),32);
    tracep->fullIData(oldp+38,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[29]),32);
    tracep->fullIData(oldp+39,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[30]),32);
    tracep->fullIData(oldp+40,(vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[31]),32);
    tracep->fullIData(oldp+41,(vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i),32);
    tracep->fullIData(oldp+42,((((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
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
                                        : 0U) & ((1U 
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
                                & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)),32);
    tracep->fullIData(oldp+43,((((1U & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                          ? 1U : 0U) 
                                        & ((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                            ? 1U : 0U)))
                                  ? vlSelf->top_main__DOT__d_mem__DOT__mem
                                 [vlSelf->top_main__DOT__d_mem__DOT__add]
                                  : 0U) & ((1U & (((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                                    ? 1U
                                                    : 0U) 
                                                  & ((4U 
                                                      == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                      ? 1U
                                                      : 0U)))
                                            ? 0xffffffffU
                                            : 0U))),32);
    tracep->fullIData(oldp+44,(((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                  & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                      ? 1U : 0U)) ? 
                                 (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
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
                                          : 0U) & (
                                                   (1U 
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
                                  : 0U) & (((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                            & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                ? 1U
                                                : 0U))
                                            ? 0xffffffffU
                                            : 0U))),32);
    tracep->fullIData(oldp+45,((((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                                  ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                           ? ((IData)(4U) 
                                              + vlSelf->top_main__DOT__core__DOT__pcreg)
                                           : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                               ? ((
                                                   ((1U 
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
    tracep->fullIData(oldp+46,(((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                 ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
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
                                            : 0U) & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0) 
                                         & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__en0)
                                      : 0U) & (((1U 
                                                 == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                    ? 1U
                                                    : 0U))
                                                ? 0xffffffffU
                                                : 0U))
                                 : vlSelf->top_main__DOT__core__DOT__aluoutput)),32);
    tracep->fullIData(oldp+47,(((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                                 ? ((IData)(4U) + vlSelf->top_main__DOT__core__DOT__pcreg)
                                 : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                     ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                          & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                              ? 1U : 0U))
                                          ? (((((IData)(vlSelf->top_main__DOT__d2_valid_o) 
                                                & (2U 
                                                   == (IData)(vlSelf->top_main__DOT__a2_size_o)))
                                                ? (
                                                   ((1U 
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
                                          : 0U) & (
                                                   ((1U 
                                                     == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                    & ((IData)(vlSelf->top_main__DOT__d2_valid_o)
                                                        ? 1U
                                                        : 0U))
                                                    ? 0xffffffffU
                                                    : 0U))
                                     : vlSelf->top_main__DOT__core__DOT__aluoutput))),32);
    tracep->fullBit(oldp+48,(vlSelf->top_main__DOT__a_ready_i_2));
    tracep->fullCData(oldp+49,(((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                                 ? 0U : 4U)),3);
    tracep->fullSData(oldp+50,(((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                   ? (0x400U | (0x3ffU 
                                                & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                   >> 2U)))
                                   : 0U) & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                             ? 0xfffU
                                             : 0U)) 
                                & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                    ? 0xfffU : 0U))),12);
    tracep->fullIData(oldp+51,(vlSelf->top_main__DOT__core__DOT__rs2_out),32);
    tracep->fullCData(oldp+52,(vlSelf->top_main__DOT__d_opcode_i_2),3);
    tracep->fullCData(oldp+53,(vlSelf->top_main__DOT__a1_opcode_o),3);
    tracep->fullCData(oldp+54,(vlSelf->top_main__DOT__a1_size_o),2);
    tracep->fullBit(oldp+55,(((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                               ? 1U : 0U)));
    tracep->fullCData(oldp+56,(vlSelf->top_main__DOT__a2_opcode_o),3);
    tracep->fullSData(oldp+57,((((IData)(vlSelf->top_main__DOT__a2__DOT__a_address_o__out__out4) 
                                 & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                     ? 0xfffU : 0U)) 
                                & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                    ? 0xfffU : 0U))),12);
    tracep->fullIData(oldp+58,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                   ? vlSelf->top_main__DOT__core__DOT__rs2_out
                                   : 0U) & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                             ? 0xffffffffU
                                             : 0U)) 
                                & ((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                    ? 0xffffffffU : 0U))),32);
    tracep->fullCData(oldp+59,(vlSelf->top_main__DOT__a2_size_o),2);
    tracep->fullCData(oldp+60,(((((IData)(vlSelf->top_main__DOT__a_ready_i_2)
                                   ? (IData)(vlSelf->top_main__DOT__a2_size_o)
                                   : 0U) & (IData)(vlSelf->top_main__DOT__a2__DOT__a_mask_o__out__en0)) 
                                & (IData)(vlSelf->top_main__DOT__a2__DOT__a_mask_o__out__en0))),2);
    tracep->fullCData(oldp+61,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                 ? 1U : 0U)),3);
    tracep->fullBit(oldp+62,(vlSelf->top_main__DOT__core__DOT__channel_a_sel));
    tracep->fullIData(oldp+63,(vlSelf->top_main__DOT__core__DOT__dataout),32);
    tracep->fullBit(oldp+64,(vlSelf->top_main__DOT__core__DOT__memwrite));
    tracep->fullSData(oldp+65,((0x3ffU & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                          >> 2U))),10);
    tracep->fullIData(oldp+66,(vlSelf->top_main__DOT__core__DOT__branch_add),32);
    tracep->fullIData(oldp+67,(vlSelf->top_main__DOT__core__DOT__aluoutput),32);
    tracep->fullIData(oldp+68,(vlSelf->top_main__DOT__core__DOT__jal_add),32);
    tracep->fullIData(oldp+69,(vlSelf->top_main__DOT__core__DOT__imm),32);
    tracep->fullBit(oldp+70,(vlSelf->top_main__DOT__core__DOT__bands));
    tracep->fullCData(oldp+71,(vlSelf->top_main__DOT__core__DOT__alucontrol),4);
    tracep->fullCData(oldp+72,(vlSelf->top_main__DOT__core__DOT__opA),2);
    tracep->fullBit(oldp+73,(vlSelf->top_main__DOT__core__DOT__opB));
    tracep->fullIData(oldp+74,(vlSelf->top_main__DOT__core__DOT__a_alu),32);
    tracep->fullIData(oldp+75,(vlSelf->top_main__DOT__core__DOT__b_alu),32);
    tracep->fullCData(oldp+76,(vlSelf->top_main__DOT__core__DOT__immsel),2);
    tracep->fullBit(oldp+77,(vlSelf->top_main__DOT__core__DOT__writeback));
    tracep->fullBit(oldp+78,(vlSelf->top_main__DOT__core__DOT__regfile));
    tracep->fullCData(oldp+79,(vlSelf->top_main__DOT__core__DOT__pcsel),3);
    tracep->fullBit(oldp+80,(vlSelf->top_main__DOT__core__DOT__branchtrue));
    tracep->fullIData(oldp+81,(vlSelf->top_main__DOT__core__DOT__rs1_out),32);
    tracep->fullBit(oldp+82,(vlSelf->top_main__DOT__core__DOT__jalr_en));
    tracep->fullCData(oldp+83,((0x7fU & vlSelf->top_main__DOT__core__DOT__dataout)),7);
    tracep->fullCData(oldp+84,((7U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                      >> 0xcU))),3);
    tracep->fullBit(oldp+85,((1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                    >> 0x1eU))));
    tracep->fullCData(oldp+86,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210),3);
    tracep->fullBit(oldp+87,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r));
    tracep->fullBit(oldp+88,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i));
    tracep->fullBit(oldp+89,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s));
    tracep->fullBit(oldp+90,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui));
    tracep->fullBit(oldp+91,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc));
    tracep->fullBit(oldp+92,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal));
    tracep->fullBit(oldp+93,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b));
    tracep->fullBit(oldp+94,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw));
    tracep->fullCData(oldp+95,(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input),7);
    tracep->fullIData(oldp+96,(vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm),32);
    tracep->fullIData(oldp+97,(vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm),32);
    tracep->fullIData(oldp+98,(vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm),32);
    tracep->fullIData(oldp+99,(vlSelf->top_main__DOT__core__DOT__ig__DOT__extend),20);
    tracep->fullCData(oldp+100,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 0xfU))),5);
    tracep->fullCData(oldp+101,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 0x14U))),5);
    tracep->fullCData(oldp+102,((0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                          >> 7U))),5);
    tracep->fullSData(oldp+103,(vlSelf->top_main__DOT__d_mem__DOT__add),12);
    tracep->fullBit(oldp+104,(((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                ? 1U : 0U)));
    tracep->fullBit(oldp+105,(((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                ? 1U : 0U)));
    tracep->fullBit(oldp+106,(vlSelf->clk));
    tracep->fullBit(oldp+107,(vlSelf->reset));
    tracep->fullBit(oldp+108,(((IData)(vlSelf->reset)
                                ? 1U : 0U)));
    tracep->fullSData(oldp+109,(((IData)(vlSelf->reset)
                                  ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                               >> 2U))
                                  : 0U)),12);
    tracep->fullIData(oldp+110,((((((IData)(vlSelf->top_main__DOT__d1_valid_o) 
                                    & (2U == (IData)(vlSelf->top_main__DOT__d1_size_o)))
                                    ? (((((((IData)(vlSelf->reset)
                                             ? 1U : 0U)
                                            ? 1U : 0U) 
                                          & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
                                         & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
                                        & (2U == ((
                                                   (((IData)(vlSelf->reset)
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
                                            : 0U)) 
                                         & (((IData)(vlSelf->reset)
                                              ? 1U : 0U)
                                             ? 0xfffU
                                             : 0U))]
                                        : 0U) : 0U) 
                                  & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0) 
                                 & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__en0)),32);
    tracep->fullBit(oldp+111,((((IData)(vlSelf->reset)
                                 ? 1U : 0U) ? 1U : 0U)));
    tracep->fullSData(oldp+112,((((((IData)(vlSelf->reset)
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
                                     : 0U))),12);
    tracep->fullCData(oldp+113,((((((IData)(vlSelf->reset)
                                     ? 1U : 0U) ? (IData)(vlSelf->top_main__DOT__a1_size_o)
                                    : 0U) & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0)) 
                                 & (IData)(vlSelf->top_main__DOT__a1__DOT__a_mask_o__out__en0))),2);
    tracep->fullIData(oldp+114,((((((((IData)(vlSelf->reset)
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
                                       ? (0x3ffU & 
                                          (vlSelf->top_main__DOT__core__DOT__pcreg 
                                           >> 2U)) : 0U)
                                      : 0U) & (((IData)(vlSelf->reset)
                                                 ? 1U
                                                 : 0U)
                                                ? 0xfffU
                                                : 0U)) 
                                   & (((IData)(vlSelf->reset)
                                        ? 1U : 0U) ? 0xfffU
                                       : 0U))] : 0U)),32);
    tracep->fullSData(oldp+115,(((IData)(vlSelf->reset)
                                  ? (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                                               >> 2U))
                                  : 0U)),10);
    tracep->fullCData(oldp+116,(4U),3);
    tracep->fullIData(oldp+117,(0U),32);
    tracep->fullIData(oldp+118,(0U),32);
}
