// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_main.h for the primary calling header

#include "verilated.h"

#include "Vtop_main___024root.h"

VL_INLINE_OPT void Vtop_main___024root___combo__TOP__2(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___combo__TOP__2\n"); );
    // Body
    if (((IData)(vlSelf->reset) ? 1U : 0U)) {
        vlSelf->top_main__DOT__a1_data_o = 0U;
        vlSelf->top_main__DOT__a1_opcode_o = 4U;
        vlSelf->top_main__DOT__a1_mask_o = 2U;
    }
    vlSelf->top_main__DOT__a1_valid_o = (1U & (((IData)(vlSelf->reset)
                                                 ? 1U
                                                 : 0U) 
                                               & ((IData)(vlSelf->reset)
                                                   ? 1U
                                                   : 0U)));
    if (((IData)(vlSelf->reset) ? 1U : 0U)) {
        vlSelf->top_main__DOT__a1_size_o = 2U;
    }
    if (((((IData)(vlSelf->top_main__DOT__a1_valid_o) 
           & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
          & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
         & (2U == (IData)(vlSelf->top_main__DOT__a1_mask_o)))) {
        vlSelf->top_main__DOT__d1_opcode_o = vlSelf->top_main__DOT__a1_opcode_o;
        vlSelf->top_main__DOT__d1_size_o = vlSelf->top_main__DOT__a1_size_o;
    }
    vlSelf->top_main__DOT__d1_valid_o = ((((IData)(vlSelf->top_main__DOT__a1_valid_o) 
                                           & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
                                          & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
                                         & (2U == (IData)(vlSelf->top_main__DOT__a1_mask_o)));
    vlSelf->top_main__DOT__d1_ready_i = vlSelf->top_main__DOT__d1_valid_o;
    if (vlSelf->top_main__DOT__d1_valid_o) {
        vlSelf->top_main__DOT__d_opcode_i_1 = vlSelf->top_main__DOT__d1_opcode_o;
    }
}

VL_INLINE_OPT void Vtop_main___024root___sequent__TOP__4(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___sequent__TOP__4\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top_main__DOT__core__DOT__rf__DOT__reg_array__v1;
    IData/*31:0*/ __Vdlyvval__top_main__DOT__core__DOT__rf__DOT__reg_array__v1;
    CData/*0:0*/ __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v1;
    CData/*0:0*/ __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v2;
    SData/*11:0*/ __Vdlyvdim0__top_main__DOT__d_mem__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top_main__DOT__d_mem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top_main__DOT__d_mem__DOT__mem__v0;
    // Body
    __Vdlyvset__top_main__DOT__d_mem__DOT__mem__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->top_main__DOT__core__DOT__rf__DOT__unnamedblk1__DOT__i = 0x20U;
    }
    vlSelf->top_main__DOT__core__DOT__pcreg = ((2U 
                                                & (IData)(vlSelf->top_main__DOT__core__DOT__pcsel))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__pcsel))
                                                    ? vlSelf->top_main__DOT__core__DOT__aluoutput
                                                    : vlSelf->top_main__DOT__core__DOT__jal_add)
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__pcsel))
                                                    ? vlSelf->top_main__DOT__core__DOT__branch_add
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->top_main__DOT__core__DOT__pcreg)));
    __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v1 = 0U;
    __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v2 = 0U;
    vlSelf->top_main__DOT__d2_valid_o = vlSelf->top_main__DOT__a2_valid_o;
    if (vlSelf->top_main__DOT__a2_valid_o) {
        if (((((0U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                ? 1U : 0U) & (2U == (IData)(vlSelf->top_main__DOT__a2_size_o))) 
             & (2U == (IData)(vlSelf->top_main__DOT__a2_mask_o)))) {
            __Vdlyvval__top_main__DOT__d_mem__DOT__mem__v0 
                = vlSelf->top_main__DOT__a2_data_o;
            __Vdlyvset__top_main__DOT__d_mem__DOT__mem__v0 = 1U;
            __Vdlyvdim0__top_main__DOT__d_mem__DOT__mem__v0 
                = vlSelf->top_main__DOT__d_mem__DOT__add;
        }
    }
    if (vlSelf->reset) {
        if (vlSelf->top_main__DOT__core__DOT__regfile) {
            __Vdlyvval__top_main__DOT__core__DOT__rf__DOT__reg_array__v1 
                = ((0U == (0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                    >> 7U))) ? 0U : 
                   (((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                      ? 0U : ((IData)(vlSelf->top_main__DOT__core__DOT__jalr_en)
                               ? ((IData)(4U) + vlSelf->top_main__DOT__core__DOT__pcreg)
                               : ((IData)(vlSelf->top_main__DOT__core__DOT__writeback)
                                   ? ((((1U == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                        & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                        ? ((vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                                            | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                                           | vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2)
                                        : 0U) & (((1U 
                                                   == (IData)(vlSelf->top_main__DOT__d_opcode_i_2)) 
                                                  & (IData)(vlSelf->top_main__DOT__d2_ready_i))
                                                  ? 0xffffffffU
                                                  : 0U))
                                   : vlSelf->top_main__DOT__core__DOT__aluoutput))) 
                    & ((IData)(vlSelf->top_main__DOT__core__DOT__bands)
                        ? 0U : 0xffffffffU)));
            __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v1 = 1U;
            __Vdlyvdim0__top_main__DOT__core__DOT__rf__DOT__reg_array__v1 
                = (0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                            >> 7U));
        }
    } else {
        __Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v2 = 1U;
    }
    if (__Vdlyvset__top_main__DOT__d_mem__DOT__mem__v0) {
        vlSelf->top_main__DOT__d_mem__DOT__mem[__Vdlyvdim0__top_main__DOT__d_mem__DOT__mem__v0] 
            = __Vdlyvval__top_main__DOT__d_mem__DOT__mem__v0;
    }
    vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0U] = 0U;
    if (__Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v1) {
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[__Vdlyvdim0__top_main__DOT__core__DOT__rf__DOT__reg_array__v1] 
            = __Vdlyvval__top_main__DOT__core__DOT__rf__DOT__reg_array__v1;
    }
    if (__Vdlyvset__top_main__DOT__core__DOT__rf__DOT__reg_array__v2) {
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[1U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[2U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[3U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[4U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[5U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[6U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[7U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[8U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[9U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xaU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xbU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xcU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xdU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xeU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0xfU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x10U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x11U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x12U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x13U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x14U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x15U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x16U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x17U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x18U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x19U] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1aU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1bU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1cU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1dU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1eU] = 0U;
        vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array[0x1fU] = 0U;
    }
    vlSelf->top_main__DOT__d2_ready_i = vlSelf->top_main__DOT__d2_valid_o;
}

VL_INLINE_OPT void Vtop_main___024root___combo__TOP__5(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___combo__TOP__5\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->top_main__DOT__core__DOT__address = 
            (0x3ffU & (vlSelf->top_main__DOT__core__DOT__pcreg 
                       >> 2U));
    } else {
        vlSelf->top_main__DOT__core__DOT__pcreg = 0xfffffffcU;
        vlSelf->top_main__DOT__core__DOT__address = 0U;
    }
    if (((IData)(vlSelf->reset) ? 1U : 0U)) {
        vlSelf->top_main__DOT__a1_address_o = vlSelf->top_main__DOT__core__DOT__address;
    }
    if (((((IData)(vlSelf->top_main__DOT__a1_valid_o) 
           & (4U == (IData)(vlSelf->top_main__DOT__a1_opcode_o))) 
          & (2U == (IData)(vlSelf->top_main__DOT__a1_size_o))) 
         & (2U == (IData)(vlSelf->top_main__DOT__a1_mask_o)))) {
        vlSelf->top_main__DOT__inst_mem__DOT__instruction 
            = vlSelf->top_main__DOT__inst_mem__DOT__mem
            [vlSelf->top_main__DOT__a1_address_o];
    }
    if (vlSelf->top_main__DOT__d1_valid_o) {
        if ((2U & (IData)(vlSelf->top_main__DOT__d1_size_o))) {
            if ((1U & (~ (IData)(vlSelf->top_main__DOT__d1_size_o)))) {
                vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out2 
                    = vlSelf->top_main__DOT__inst_mem__DOT__instruction;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_main__DOT__d1_size_o) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_main__DOT__d1_size_o))) {
                vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out1 
                    = ((0xffff0000U & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out1) 
                       | (0xffffU & vlSelf->top_main__DOT__inst_mem__DOT__instruction));
            }
            if ((1U & (~ (IData)(vlSelf->top_main__DOT__d1_size_o)))) {
                vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out0 
                    = ((0xffffff00U & vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out0) 
                       | (0xffU & vlSelf->top_main__DOT__inst_mem__DOT__instruction));
            }
        }
    }
    vlSelf->top_main__DOT__core__DOT__dataout = (((
                                                   (4U 
                                                    == (IData)(vlSelf->top_main__DOT__d_opcode_i_1)) 
                                                   & (IData)(vlSelf->top_main__DOT__d1_ready_i))
                                                   ? 
                                                  ((vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out0 
                                                    | vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out1) 
                                                   | vlSelf->top_main__DOT__d1__DOT__d_data_o__out__out2)
                                                   : 0U) 
                                                 & (((4U 
                                                      == (IData)(vlSelf->top_main__DOT__d_opcode_i_1)) 
                                                     & (IData)(vlSelf->top_main__DOT__d1_ready_i))
                                                     ? 0xffffffffU
                                                     : 0U));
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw = 0U;
    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lw = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui = 0U;
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s = 0U;
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s = 0U;
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__lui = 0U;
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__s = 0U;
    }
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal = 0U;
    if ((0x40U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i = 0U;
    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 5U)))) {
            if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__i = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r = 0U;
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc = 0U;
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 5U)))) {
            if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__r = 0U;
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__auipc = 0U;
    }
    vlSelf->top_main__DOT__core__DOT__regfile = 0U;
    if ((0x40U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                        }
                    }
                }
                vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__jalr_en = 1U;
                                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                                vlSelf->top_main__DOT__core__DOT__opB = 1U;
                                vlSelf->top_main__DOT__core__DOT__opA = 0U;
                                vlSelf->top_main__DOT__core__DOT__opA = 1U;
                            } else {
                                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                                vlSelf->top_main__DOT__core__DOT__opA = 0U;
                            }
                        } else {
                            vlSelf->top_main__DOT__core__DOT__opB = 0U;
                            vlSelf->top_main__DOT__core__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                vlSelf->top_main__DOT__core__DOT__opA = 0U;
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
            vlSelf->top_main__DOT__core__DOT__opB = 0U;
            vlSelf->top_main__DOT__core__DOT__opA = 0U;
        }
    } else if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                            vlSelf->top_main__DOT__core__DOT__opB = 0U;
                            vlSelf->top_main__DOT__core__DOT__opB = 1U;
                            vlSelf->top_main__DOT__core__DOT__opA = 0U;
                            vlSelf->top_main__DOT__core__DOT__opA = 3U;
                        } else {
                            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                            vlSelf->top_main__DOT__core__DOT__opB = 0U;
                            vlSelf->top_main__DOT__core__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    }
                } else if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 1U;
                    } else {
                        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                vlSelf->top_main__DOT__core__DOT__opA = 0U;
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
            vlSelf->top_main__DOT__core__DOT__opB = 0U;
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 2U)))) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__opB = 1U;
                            vlSelf->top_main__DOT__core__DOT__opA = 0U;
                            vlSelf->top_main__DOT__core__DOT__opA = 1U;
                        } else {
                            vlSelf->top_main__DOT__core__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__opA = 0U;
            }
        }
    } else if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 3U)))) {
            if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 1U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 2U;
                    } else {
                        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                        vlSelf->top_main__DOT__core__DOT__opB = 0U;
                        vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 1U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 1U;
                } else {
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                vlSelf->top_main__DOT__core__DOT__opA = 0U;
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
            vlSelf->top_main__DOT__core__DOT__opB = 0U;
            vlSelf->top_main__DOT__core__DOT__opA = 0U;
        }
    } else if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 2U)))) {
            if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    vlSelf->top_main__DOT__core__DOT__regfile = 1U;
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 1U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 1U;
                } else {
                    vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                    vlSelf->top_main__DOT__core__DOT__opB = 0U;
                    vlSelf->top_main__DOT__core__DOT__opA = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
                vlSelf->top_main__DOT__core__DOT__opB = 0U;
                vlSelf->top_main__DOT__core__DOT__opA = 0U;
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
            vlSelf->top_main__DOT__core__DOT__opB = 0U;
            vlSelf->top_main__DOT__core__DOT__opA = 0U;
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__jalr_en = 0U;
        vlSelf->top_main__DOT__core__DOT__opB = 0U;
        vlSelf->top_main__DOT__core__DOT__opA = 0U;
    }
    vlSelf->top_main__DOT__core__DOT__writeback = 0U;
    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                  >> 6U)))) {
        if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                      >> 5U)))) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__writeback = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top_main__DOT__core__DOT__memwrite = 0U;
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__memwrite = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__memwrite = 0U;
    }
    vlSelf->top_main__DOT__core__DOT__rs1_out = vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array
        [(0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                   >> 0xfU))];
    vlSelf->top_main__DOT__core__DOT__rs2_out = vlSelf->top_main__DOT__core__DOT__rf__DOT__reg_array
        [(0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                   >> 0x14U))];
    vlSelf->top_main__DOT__core__DOT__channel_a_sel 
        = (((IData)(vlSelf->top_main__DOT__core__DOT__memwrite) 
            | (IData)(vlSelf->top_main__DOT__core__DOT__writeback))
            ? 1U : 0U);
    vlSelf->top_main__DOT__a_ready_i_2 = (((IData)(vlSelf->reset) 
                                           & ((IData)(vlSelf->top_main__DOT__core__DOT__memwrite) 
                                              | (IData)(vlSelf->top_main__DOT__core__DOT__writeback)))
                                           ? 1U : 0U);
    vlSelf->top_main__DOT__core__DOT__a_alu = (((0U 
                                                 == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                 ? 
                                                ((IData)(4U) 
                                                 + vlSelf->top_main__DOT__core__DOT__pcreg)
                                                 : 
                                                ((1U 
                                                  == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                  ? vlSelf->top_main__DOT__core__DOT__rs1_out
                                                  : 
                                                 ((2U 
                                                   == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                   ? vlSelf->top_main__DOT__core__DOT__pcreg
                                                   : 0U))) 
                                               & ((0U 
                                                   == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                   ? 0xffffffffU
                                                   : 
                                                  ((1U 
                                                    == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                    ? 0xffffffffU
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top_main__DOT__core__DOT__opA))
                                                     ? 0xffffffffU
                                                     : 0U))));
    vlSelf->top_main__DOT__core__DOT__branchtrue = 0U;
    if ((0x4000U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((0x2000U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((0x1000U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((vlSelf->top_main__DOT__core__DOT__rs1_out 
                     >= vlSelf->top_main__DOT__core__DOT__rs2_out)) {
                    vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
                }
            } else if ((vlSelf->top_main__DOT__core__DOT__rs1_out 
                        < vlSelf->top_main__DOT__core__DOT__rs2_out)) {
                vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
            }
        } else if ((0x1000U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if (VL_GTES_III(1,32,32, vlSelf->top_main__DOT__core__DOT__rs1_out, vlSelf->top_main__DOT__core__DOT__rs2_out)) {
                vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
            }
        } else if (VL_LTS_III(1,32,32, vlSelf->top_main__DOT__core__DOT__rs1_out, vlSelf->top_main__DOT__core__DOT__rs2_out)) {
            vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
        }
    } else if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                         >> 0xdU)))) {
        if ((0x1000U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((vlSelf->top_main__DOT__core__DOT__rs1_out 
                 != vlSelf->top_main__DOT__core__DOT__rs2_out)) {
                vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
            }
        } else if ((vlSelf->top_main__DOT__core__DOT__rs1_out 
                    == vlSelf->top_main__DOT__core__DOT__rs2_out)) {
            vlSelf->top_main__DOT__core__DOT__branchtrue = 1U;
        }
    }
    if (vlSelf->top_main__DOT__a_ready_i_2) {
        vlSelf->top_main__DOT__a2_mask_o = 2U;
        vlSelf->top_main__DOT__a2_data_o = vlSelf->top_main__DOT__core__DOT__rs2_out;
        vlSelf->top_main__DOT__a2_size_o = 2U;
        vlSelf->top_main__DOT__a2_valid_o = vlSelf->top_main__DOT__a_ready_i_2;
        vlSelf->top_main__DOT__a2_opcode_o = ((IData)(vlSelf->top_main__DOT__core__DOT__memwrite)
                                               ? 0U
                                               : 4U);
    } else {
        vlSelf->top_main__DOT__a2_valid_o = vlSelf->top_main__DOT__a_ready_i_2;
    }
    vlSelf->top_main__DOT__core__DOT__pcsel = 0U;
    if ((0x40U & vlSelf->top_main__DOT__core__DOT__dataout)) {
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__pcsel = 2U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 7U;
                                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                                vlSelf->top_main__DOT__core__DOT__immsel = 3U;
                            } else {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                            }
                        } else {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top_main__DOT__core__DOT__bands = 0U;
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                        vlSelf->top_main__DOT__core__DOT__bands = 0U;
                        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                        vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                    }
                } else {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__pcsel = 3U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 3U;
                            } else {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                            }
                        } else {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top_main__DOT__core__DOT__bands = 0U;
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                        }
                    } else if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if (vlSelf->top_main__DOT__core__DOT__branchtrue) {
                                vlSelf->top_main__DOT__core__DOT__pcsel = 1U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 1U;
                                vlSelf->top_main__DOT__core__DOT__bands = 1U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 7U;
                            } else {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 1U;
                                if (vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b) {
                                    vlSelf->top_main__DOT__core__DOT__bands = 1U;
                                    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 7U;
                                }
                            }
                        } else {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top_main__DOT__core__DOT__bands = 0U;
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                        vlSelf->top_main__DOT__core__DOT__bands = 0U;
                        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                    }
                    vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                    if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                if (vlSelf->top_main__DOT__core__DOT__branchtrue) {
                                    vlSelf->top_main__DOT__core__DOT__immsel = 3U;
                                }
                            }
                        }
                    }
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
                vlSelf->top_main__DOT__core__DOT__bands = 0U;
                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
            }
        } else {
            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
            vlSelf->top_main__DOT__core__DOT__bands = 0U;
            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__b = 0U;
        vlSelf->top_main__DOT__core__DOT__bands = 0U;
        vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 0U;
        if ((0x20U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 6U;
                                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                                vlSelf->top_main__DOT__core__DOT__immsel = 2U;
                            } else {
                                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                            }
                        } else {
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                        if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                                vlSelf->top_main__DOT__core__DOT__immsel = 3U;
                            }
                        }
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                }
            } else if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 2U)))) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__bands = 1U;
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 4U;
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                            vlSelf->top_main__DOT__core__DOT__immsel = 1U;
                        } else {
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                    }
                } else {
                    vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
            }
        } else if ((0x10U & vlSelf->top_main__DOT__core__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 5U;
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                            vlSelf->top_main__DOT__core__DOT__immsel = 2U;
                        } else {
                            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                        }
                    } else {
                        vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                    }
                } else {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 2U;
                        }
                    }
                    vlSelf->top_main__DOT__core__DOT__immsel = 0U;
                }
            } else {
                vlSelf->top_main__DOT__core__DOT__immsel = 0U;
            }
        } else {
            if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                          >> 3U)))) {
                if ((1U & (~ (vlSelf->top_main__DOT__core__DOT__dataout 
                              >> 2U)))) {
                    if ((2U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                        if ((1U & vlSelf->top_main__DOT__core__DOT__dataout)) {
                            vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210 = 1U;
                        }
                    }
                }
            }
            vlSelf->top_main__DOT__core__DOT__immsel = 0U;
        }
    }
    if (vlSelf->top_main__DOT__d2_valid_o) {
        vlSelf->top_main__DOT__d_opcode_i_2 = ((4U 
                                                == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
                                                ? 1U
                                                : 0U);
    }
    vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input 
        = (((IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__aluop210) 
            << 4U) | ((0xeU & (vlSelf->top_main__DOT__core__DOT__dataout 
                               >> 0xbU)) | (1U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                                  >> 0x1eU))));
    vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
        = ((vlSelf->top_main__DOT__core__DOT__dataout 
            >> 0x1fU) ? 0xfffffU : 0U);
    vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm = 0U;
    vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm = 0U;
    vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm = 0U;
    if ((0U == (IData)(vlSelf->top_main__DOT__core__DOT__immsel))) {
        vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm 
            = ((vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
                << 0xcU) | (vlSelf->top_main__DOT__core__DOT__dataout 
                            >> 0x14U));
        vlSelf->top_main__DOT__core__DOT__imm = vlSelf->top_main__DOT__core__DOT__ig__DOT__iorjalr_imm;
    } else if ((1U == (IData)(vlSelf->top_main__DOT__core__DOT__immsel))) {
        vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm 
            = ((vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
                << 0xcU) | ((0xfe0U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                       >> 0x14U)) | 
                            (0x1fU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                      >> 7U))));
        vlSelf->top_main__DOT__core__DOT__imm = vlSelf->top_main__DOT__core__DOT__ig__DOT__s_imm;
    } else if ((2U == (IData)(vlSelf->top_main__DOT__core__DOT__immsel))) {
        vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm 
            = ((vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
                << 0x14U) | (vlSelf->top_main__DOT__core__DOT__dataout 
                             >> 0xcU));
        vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm 
            = (vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm 
               << 0xcU);
        vlSelf->top_main__DOT__core__DOT__imm = vlSelf->top_main__DOT__core__DOT__ig__DOT__u_imm;
    }
    vlSelf->top_main__DOT__core__DOT__jal_add = ((0xfffff000U 
                                                  & vlSelf->top_main__DOT__core__DOT__jal_add) 
                                                 | ((0x800U 
                                                     & (vlSelf->top_main__DOT__core__DOT__dataout 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top_main__DOT__core__DOT__dataout 
                                                          >> 0x14U))));
    vlSelf->top_main__DOT__core__DOT__jal_add = ((0xfffU 
                                                  & vlSelf->top_main__DOT__core__DOT__jal_add) 
                                                 | ((vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
                                                     << 0x15U) 
                                                    | ((0x100000U 
                                                        & (vlSelf->top_main__DOT__core__DOT__dataout 
                                                           >> 0xbU)) 
                                                       | (0xff000U 
                                                          & vlSelf->top_main__DOT__core__DOT__dataout))));
    vlSelf->top_main__DOT__core__DOT__jal_add = (vlSelf->top_main__DOT__core__DOT__jal_add 
                                                 + vlSelf->top_main__DOT__core__DOT__pcreg);
    vlSelf->top_main__DOT__core__DOT__branch_add = 
        ((0xfffff800U & vlSelf->top_main__DOT__core__DOT__branch_add) 
         | ((0x7e0U & (vlSelf->top_main__DOT__core__DOT__dataout 
                       >> 0x14U)) | (0x1eU & (vlSelf->top_main__DOT__core__DOT__dataout 
                                              >> 7U))));
    vlSelf->top_main__DOT__core__DOT__branch_add = 
        ((0x7ffU & vlSelf->top_main__DOT__core__DOT__branch_add) 
         | ((vlSelf->top_main__DOT__core__DOT__ig__DOT__extend 
             << 0xdU) | ((0x1000U & (vlSelf->top_main__DOT__core__DOT__dataout 
                                     >> 0x13U)) | (0x800U 
                                                   & (vlSelf->top_main__DOT__core__DOT__dataout 
                                                      << 4U)))));
    vlSelf->top_main__DOT__core__DOT__branch_add = 
        (vlSelf->top_main__DOT__core__DOT__branch_add 
         + vlSelf->top_main__DOT__core__DOT__pcreg);
    vlSelf->top_main__DOT__core__DOT__alucontrol = 
        ((0x40U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
          ? ((0x20U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
              ? ((0x10U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                  ? 0xfU : ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                             ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                 ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                     ? 0xeU : 0xfU)
                                 : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                     ? ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                         ? 0xeU : 0xfU)
                                     : 0xeU)) : ((4U 
                                                  & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                  ? 
                                                 ((2U 
                                                   & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                   ? 0xfU
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 0xfU
                                                    : 0xeU))
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 7U
                                                    : 0xfU)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 0xfU
                                                    : 0xeU)))))
              : ((0x10U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                  ? ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                      ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 2U : 3U) : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 6U
                                                 : 5U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 7U
                                                 : 4U)))
                      : ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 1U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                       ? 1U : 0U)) : 
                         ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 7U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                    ? 1U : 0U)))) : 
                 ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                   ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                       ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 2U : 3U) : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                          ? ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                              ? 6U : 5U)
                                          : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                              ? 6U : 4U)))
                   : ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                       ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 1U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                    ? 1U : 0U)) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                     ? 1U
                                                     : 0U))))))
          : ((0x20U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
              ? ((0x10U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                  ? ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                      ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 2U : 3U) : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 6U
                                                 : 5U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 6U
                                                 : 4U)))
                      : ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 1U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                       ? 1U : 0U)) : 
                         ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 7U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                    ? 1U : 0U)))) : 
                 ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                   ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                       ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 2U : 3U) : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                          ? ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                              ? 6U : 5U)
                                          : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                              ? 6U : 4U)))
                   : ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                       ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 9U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                    ? 9U : 8U)) : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 7U
                                                    : 0U))))
              : ((0x10U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                  ? ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                      ? ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 2U : 3U) : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                             ? ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 6U
                                                 : 5U)
                                             : ((1U 
                                                 & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                 ? 6U
                                                 : 4U)))
                      : ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                          ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                              ? 1U : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                       ? 1U : 0U)) : 
                         ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                           ? 7U : 1U))) : ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                            ? ((4U 
                                                & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 2U
                                                    : 3U)
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                     ? 6U
                                                     : 5U)
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                     ? 6U
                                                     : 4U)))
                                            : ((4U 
                                                & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                ? (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 9U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                     ? 9U
                                                     : 8U))
                                                : (
                                                   (2U 
                                                    & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                    ? 7U
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->top_main__DOT__core__DOT__controlunit__DOT__alucontrol_input))
                                                     ? 1U
                                                     : 0U)))))));
    vlSelf->top_main__DOT__core__DOT__b_alu = ((IData)(vlSelf->top_main__DOT__core__DOT__opB)
                                                ? vlSelf->top_main__DOT__core__DOT__imm
                                                : vlSelf->top_main__DOT__core__DOT__rs2_out);
    if ((8U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))) {
        if ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))) {
            if ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))) {
                vlSelf->top_main__DOT__core__DOT__aluoutput 
                    = ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                        ? vlSelf->top_main__DOT__core__DOT__a_alu
                        : vlSelf->top_main__DOT__core__DOT__b_alu);
            }
        } else if ((1U & (~ ((IData)(vlSelf->top_main__DOT__core__DOT__alucontrol) 
                             >> 1U)))) {
            vlSelf->top_main__DOT__core__DOT__aluoutput 
                = ((0xfffffffeU & vlSelf->top_main__DOT__core__DOT__aluoutput) 
                   | ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                       ? (vlSelf->top_main__DOT__core__DOT__a_alu 
                          < vlSelf->top_main__DOT__core__DOT__b_alu)
                       : VL_LTS_III(1,32,32, vlSelf->top_main__DOT__core__DOT__a_alu, vlSelf->top_main__DOT__core__DOT__b_alu)));
        }
    } else {
        vlSelf->top_main__DOT__core__DOT__aluoutput 
            = ((4U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                ? ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                    ? ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                        ? (vlSelf->top_main__DOT__core__DOT__a_alu 
                           << (0x1fU & vlSelf->top_main__DOT__core__DOT__b_alu))
                        : (vlSelf->top_main__DOT__core__DOT__a_alu 
                           >> (0x1fU & vlSelf->top_main__DOT__core__DOT__b_alu)))
                    : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                        ? (vlSelf->top_main__DOT__core__DOT__a_alu 
                           >> (0x1fU & vlSelf->top_main__DOT__core__DOT__b_alu))
                        : (vlSelf->top_main__DOT__core__DOT__a_alu 
                           ^ vlSelf->top_main__DOT__core__DOT__b_alu)))
                : ((2U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                    ? ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                        ? (vlSelf->top_main__DOT__core__DOT__a_alu 
                           | vlSelf->top_main__DOT__core__DOT__b_alu)
                        : (vlSelf->top_main__DOT__core__DOT__a_alu 
                           & vlSelf->top_main__DOT__core__DOT__b_alu))
                    : ((1U & (IData)(vlSelf->top_main__DOT__core__DOT__alucontrol))
                        ? (vlSelf->top_main__DOT__core__DOT__a_alu 
                           - vlSelf->top_main__DOT__core__DOT__b_alu)
                        : (vlSelf->top_main__DOT__core__DOT__a_alu 
                           + vlSelf->top_main__DOT__core__DOT__b_alu))));
    }
    if (vlSelf->top_main__DOT__a_ready_i_2) {
        vlSelf->top_main__DOT__a2_address_o = ((((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                                  ? 
                                                 (0x400U 
                                                  | (0x3ffU 
                                                     & (vlSelf->top_main__DOT__core__DOT__aluoutput 
                                                        >> 2U)))
                                                  : 0U) 
                                                & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                                    ? 0xfffU
                                                    : 0U)) 
                                               & ((IData)(vlSelf->top_main__DOT__core__DOT__channel_a_sel)
                                                   ? 0xfffU
                                                   : 0U));
    }
    vlSelf->top_main__DOT__d_mem__DOT__add = (((0x800U 
                                                & (IData)(vlSelf->top_main__DOT__a2_address_o))
                                                ? (IData)(vlSelf->top_main__DOT__a2_address_o)
                                                : 0U) 
                                              & ((0x800U 
                                                  & (IData)(vlSelf->top_main__DOT__a2_address_o))
                                                  ? 0xfffU
                                                  : 0U));
    if (vlSelf->top_main__DOT__a2_valid_o) {
        if (((4U == (IData)(vlSelf->top_main__DOT__a2_opcode_o))
              ? 1U : 0U)) {
            vlSelf->top_main__DOT__d_mem__DOT__dataout 
                = vlSelf->top_main__DOT__d_mem__DOT__mem
                [vlSelf->top_main__DOT__d_mem__DOT__add];
        }
    }
    if (vlSelf->top_main__DOT__d2_valid_o) {
        if ((2U & (IData)(vlSelf->top_main__DOT__a2_size_o))) {
            if ((1U & (~ (IData)(vlSelf->top_main__DOT__a2_size_o)))) {
                vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out2 
                    = vlSelf->top_main__DOT__d_mem__DOT__dataout;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top_main__DOT__a2_size_o) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->top_main__DOT__a2_size_o))) {
                vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1 
                    = ((0xffff0000U & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out1) 
                       | (0xffffU & vlSelf->top_main__DOT__d_mem__DOT__dataout));
            }
            if ((1U & (~ (IData)(vlSelf->top_main__DOT__a2_size_o)))) {
                vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0 
                    = ((0xffffff00U & vlSelf->top_main__DOT__d2__DOT__d_data_o__out__out0) 
                       | (0xffU & vlSelf->top_main__DOT__d_mem__DOT__dataout));
            }
        }
    }
}

void Vtop_main___024root___eval(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___eval\n"); );
    // Body
    Vtop_main___024root___combo__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop_main___024root___sequent__TOP__4(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    Vtop_main___024root___combo__TOP__5(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop_main___024root___change_request_1(Vtop_main___024root* vlSelf);

VL_INLINE_OPT QData Vtop_main___024root___change_request(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___change_request\n"); );
    // Body
    return (Vtop_main___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop_main___024root___change_request_1(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top_main__DOT__core__DOT__pcreg ^ vlSelf->__Vchglast__TOP__top_main__DOT__core__DOT__pcreg));
    VL_DEBUG_IF( if(__req && ((vlSelf->top_main__DOT__core__DOT__pcreg ^ vlSelf->__Vchglast__TOP__top_main__DOT__core__DOT__pcreg))) VL_DBG_MSGF("        CHANGE: ../src/top_1.0/top/top.sv:77: top_main.core.pcreg\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top_main__DOT__core__DOT__pcreg 
        = vlSelf->top_main__DOT__core__DOT__pcreg;
    return __req;
}

#ifdef VL_DEBUG
void Vtop_main___024root___eval_debug_assertions(Vtop_main___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_main__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_main___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
