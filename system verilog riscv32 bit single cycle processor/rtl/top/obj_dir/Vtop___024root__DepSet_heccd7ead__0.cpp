// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vdly__top__DOT__pcreg;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__rf__DOT__reg_array__v1;
    IData/*31:0*/ __Vdlyvval__top__DOT__rf__DOT__reg_array__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__rf__DOT__reg_array__v1;
    SData/*9:0*/ __Vdlyvdim0__top__DOT__dmem__DOT__mem__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__dmem__DOT__mem__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__dmem__DOT__mem__v0;
    // Body
    __Vdlyvset__top__DOT__dmem__DOT__mem__v0 = 0U;
    __Vdlyvset__top__DOT__rf__DOT__reg_array__v1 = 0U;
    __Vdly__top__DOT__pcreg = vlSelf->top__DOT__pcreg;
    if (vlSelf->top__DOT__memwrite) {
        __Vdlyvval__top__DOT__dmem__DOT__mem__v0 = vlSelf->top__DOT__rs2_out;
        __Vdlyvset__top__DOT__dmem__DOT__mem__v0 = 1U;
        __Vdlyvdim0__top__DOT__dmem__DOT__mem__v0 = 
            (0x3ffU & (vlSelf->top__DOT__aluoutput 
                       >> 2U));
    }
    if (vlSelf->top__DOT__regfile) {
        __Vdlyvval__top__DOT__rf__DOT__reg_array__v1 
            = ((0U == (0x1fU & (vlSelf->top__DOT__dataout 
                                >> 7U))) ? 0U : vlSelf->top__DOT__mux3__DOT__writein_reg__out__out0);
        __Vdlyvset__top__DOT__rf__DOT__reg_array__v1 = 1U;
        __Vdlyvdim0__top__DOT__rf__DOT__reg_array__v1 
            = (0x1fU & (vlSelf->top__DOT__dataout >> 7U));
    }
    __Vdly__top__DOT__pcreg = ((2U & (IData)(vlSelf->top__DOT__pcsel))
                                ? ((1U & (IData)(vlSelf->top__DOT__pcsel))
                                    ? vlSelf->top__DOT__jalr_add
                                    : vlSelf->top__DOT__jal_add)
                                : ((1U & (IData)(vlSelf->top__DOT__pcsel))
                                    ? vlSelf->top__DOT__branch_add
                                    : ((IData)(4U) 
                                       + vlSelf->top__DOT__pcreg)));
    if (vlSelf->reset) {
        vlSelf->top__DOT__address = (0x3ffU & (vlSelf->top__DOT__pcreg 
                                               >> 2U));
        __Vdly__top__DOT__pcreg = 0U;
    } else {
        vlSelf->top__DOT__address = (0x3ffU & (vlSelf->top__DOT__pcreg 
                                               >> 2U));
    }
    if (__Vdlyvset__top__DOT__dmem__DOT__mem__v0) {
        vlSelf->top__DOT__dmem__DOT__mem[__Vdlyvdim0__top__DOT__dmem__DOT__mem__v0] 
            = __Vdlyvval__top__DOT__dmem__DOT__mem__v0;
    }
    vlSelf->top__DOT__rf__DOT__reg_array[0U] = 0U;
    if (__Vdlyvset__top__DOT__rf__DOT__reg_array__v1) {
        vlSelf->top__DOT__rf__DOT__reg_array[__Vdlyvdim0__top__DOT__rf__DOT__reg_array__v1] 
            = __Vdlyvval__top__DOT__rf__DOT__reg_array__v1;
    }
    vlSelf->top__DOT__pcreg = __Vdly__top__DOT__pcreg;
    if ((2U & (IData)(vlSelf->top__DOT__pcsel))) {
        if ((1U & (IData)(vlSelf->top__DOT__pcsel))) {
            vlSelf->top__DOT__jalr_add = vlSelf->top__DOT__aluoutput;
        }
    }
    vlSelf->top__DOT__dataout = vlSelf->top__DOT__im__DOT__mem
        [vlSelf->top__DOT__address];
    vlSelf->top__DOT__controlunit__DOT__lui = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dataout >> 6U)))) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__lui = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top__DOT__controlunit__DOT__lw = 0U;
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 5U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__lw = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->top__DOT__controlunit__DOT__lw = 0U;
    }
    vlSelf->top__DOT__controlunit__DOT__jal = 0U;
    if ((0x40U & vlSelf->top__DOT__dataout)) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dataout)) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__jal = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__controlunit__DOT__i = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dataout >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 5U)))) {
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__i = 1U;
                            }
                        }
                    }
                }
            }
        }
        vlSelf->top__DOT__memwrite = 0U;
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__memwrite = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__controlunit__DOT__r = 0U;
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__r = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__controlunit__DOT__s = 0U;
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__s = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->top__DOT__controlunit__DOT__r = 0U;
            vlSelf->top__DOT__controlunit__DOT__s = 0U;
        }
    } else {
        vlSelf->top__DOT__memwrite = 0U;
        vlSelf->top__DOT__controlunit__DOT__r = 0U;
        vlSelf->top__DOT__controlunit__DOT__s = 0U;
    }
    vlSelf->top__DOT__regfile = 0U;
    if ((0x40U & vlSelf->top__DOT__dataout)) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dataout)) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__regfile = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__regfile = 1U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__dataout)) {
        if ((0x10U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__regfile = 1U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__regfile = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__dataout)) {
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 3U)))) {
            if ((4U & vlSelf->top__DOT__dataout)) {
                if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__regfile = 1U;
                    }
                }
            } else if ((2U & vlSelf->top__DOT__dataout)) {
                if ((1U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__regfile = 1U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                         >> 3U)))) {
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 2U)))) {
            if ((2U & vlSelf->top__DOT__dataout)) {
                if ((1U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__regfile = 1U;
                }
            }
        }
    }
    vlSelf->top__DOT__controlunit__DOT__auipc = 0U;
    if ((1U & (~ (vlSelf->top__DOT__dataout >> 6U)))) {
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 5U)))) {
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__auipc = 1U;
                            }
                        }
                    }
                }
            }
            vlSelf->top__DOT__writeback = 0U;
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelf->top__DOT__dataout 
                                  >> 2U)))) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__writeback = 1U;
                            }
                        }
                    }
                }
            }
        } else {
            vlSelf->top__DOT__writeback = 0U;
        }
    } else {
        vlSelf->top__DOT__writeback = 0U;
    }
    vlSelf->top__DOT__jalr_en = 0U;
    if ((0x40U & vlSelf->top__DOT__dataout)) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__jalr_en = 1U;
                                vlSelf->top__DOT__opB = 0U;
                                vlSelf->top__DOT__opB = 1U;
                                vlSelf->top__DOT__opA = 0U;
                                vlSelf->top__DOT__opA = 1U;
                            } else {
                                vlSelf->top__DOT__opB = 0U;
                                vlSelf->top__DOT__opA = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__opB = 0U;
                            vlSelf->top__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__opB = 0U;
                        vlSelf->top__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top__DOT__opB = 0U;
                    vlSelf->top__DOT__opA = 0U;
                }
            } else {
                vlSelf->top__DOT__opB = 0U;
                vlSelf->top__DOT__opA = 0U;
            }
        } else {
            vlSelf->top__DOT__opB = 0U;
            vlSelf->top__DOT__opA = 0U;
        }
    } else {
        vlSelf->top__DOT__opB = 0U;
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__opB = 1U;
                                vlSelf->top__DOT__opA = 0U;
                                vlSelf->top__DOT__opA = 3U;
                            } else {
                                vlSelf->top__DOT__opA = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__opA = 0U;
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__opA = 1U;
                            }
                        }
                    }
                } else {
                    vlSelf->top__DOT__opA = 0U;
                }
            } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__opB = 1U;
                            vlSelf->top__DOT__opA = 0U;
                            vlSelf->top__DOT__opA = 1U;
                        } else {
                            vlSelf->top__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top__DOT__opA = 0U;
                }
            } else {
                vlSelf->top__DOT__opA = 0U;
            }
        } else if ((0x10U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__opB = 1U;
                            vlSelf->top__DOT__opA = 0U;
                            vlSelf->top__DOT__opA = 2U;
                        } else {
                            vlSelf->top__DOT__opA = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__opA = 0U;
                    }
                } else if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__opB = 1U;
                        vlSelf->top__DOT__opA = 0U;
                        vlSelf->top__DOT__opA = 1U;
                    } else {
                        vlSelf->top__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top__DOT__opA = 0U;
                }
            } else {
                vlSelf->top__DOT__opA = 0U;
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__opB = 1U;
                        vlSelf->top__DOT__opA = 0U;
                        vlSelf->top__DOT__opA = 1U;
                    } else {
                        vlSelf->top__DOT__opA = 0U;
                    }
                } else {
                    vlSelf->top__DOT__opA = 0U;
                }
            } else {
                vlSelf->top__DOT__opA = 0U;
            }
        } else {
            vlSelf->top__DOT__opA = 0U;
        }
    }
    vlSelf->top__DOT__rs1_out = vlSelf->top__DOT__rf__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__dataout >> 0xfU))];
    vlSelf->top__DOT__rs2_out = vlSelf->top__DOT__rf__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__dataout >> 0x14U))];
    if ((2U & (IData)(vlSelf->top__DOT__opA))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__opA)))) {
            vlSelf->top__DOT__mux12__DOT__a_alu__out__out2 
                = vlSelf->top__DOT__pcreg;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__opA) >> 1U)))) {
        if ((1U & (~ (IData)(vlSelf->top__DOT__opA)))) {
            vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                = ((IData)(4U) + vlSelf->top__DOT__pcreg);
        }
        if ((1U & (IData)(vlSelf->top__DOT__opA))) {
            vlSelf->top__DOT__mux12__DOT__a_alu__out__out1 
                = vlSelf->top__DOT__rs1_out;
        }
    }
    vlSelf->top__DOT__branchtrue = 0U;
    if ((0x4000U & vlSelf->top__DOT__dataout)) {
        if ((0x2000U & vlSelf->top__DOT__dataout)) {
            if ((0x1000U & vlSelf->top__DOT__dataout)) {
                if ((vlSelf->top__DOT__rs1_out >= vlSelf->top__DOT__rs2_out)) {
                    vlSelf->top__DOT__branchtrue = 1U;
                }
            } else if ((vlSelf->top__DOT__rs1_out < vlSelf->top__DOT__rs2_out)) {
                vlSelf->top__DOT__branchtrue = 1U;
            }
        } else if ((0x1000U & vlSelf->top__DOT__dataout)) {
            if (VL_GTES_III(1,32,32, vlSelf->top__DOT__rs1_out, vlSelf->top__DOT__rs2_out)) {
                vlSelf->top__DOT__branchtrue = 1U;
            }
        } else if (VL_LTS_III(1,32,32, vlSelf->top__DOT__rs1_out, vlSelf->top__DOT__rs2_out)) {
            vlSelf->top__DOT__branchtrue = 1U;
        }
    } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                         >> 0xdU)))) {
        if ((0x1000U & vlSelf->top__DOT__dataout)) {
            if ((vlSelf->top__DOT__rs1_out != vlSelf->top__DOT__rs2_out)) {
                vlSelf->top__DOT__branchtrue = 1U;
            }
        } else if ((vlSelf->top__DOT__rs1_out == vlSelf->top__DOT__rs2_out)) {
            vlSelf->top__DOT__branchtrue = 1U;
        }
    }
    vlSelf->top__DOT__pcsel = 0U;
    if ((0x40U & vlSelf->top__DOT__dataout)) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dataout)) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__pcsel = 2U;
                                vlSelf->top__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top__DOT__bands = 0U;
                                vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                                vlSelf->top__DOT__controlunit__DOT__aluop210 = 7U;
                            } else {
                                vlSelf->top__DOT__controlunit__DOT__b = 0U;
                                vlSelf->top__DOT__bands = 0U;
                                vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                            }
                        } else {
                            vlSelf->top__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top__DOT__bands = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__controlunit__DOT__b = 0U;
                        vlSelf->top__DOT__bands = 0U;
                        vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                    }
                } else if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__pcsel = 3U;
                            vlSelf->top__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top__DOT__bands = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 3U;
                        } else {
                            vlSelf->top__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top__DOT__bands = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                        }
                    } else {
                        vlSelf->top__DOT__controlunit__DOT__b = 0U;
                        vlSelf->top__DOT__bands = 0U;
                        vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                    }
                } else if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        if (vlSelf->top__DOT__branchtrue) {
                            vlSelf->top__DOT__pcsel = 1U;
                            vlSelf->top__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top__DOT__bands = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                            vlSelf->top__DOT__controlunit__DOT__b = 1U;
                            vlSelf->top__DOT__bands = 1U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 7U;
                        } else {
                            vlSelf->top__DOT__controlunit__DOT__b = 0U;
                            vlSelf->top__DOT__bands = 0U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                            vlSelf->top__DOT__controlunit__DOT__b = 1U;
                            if (vlSelf->top__DOT__controlunit__DOT__b) {
                                vlSelf->top__DOT__bands = 1U;
                                vlSelf->top__DOT__controlunit__DOT__aluop210 = 7U;
                            }
                        }
                    } else {
                        vlSelf->top__DOT__controlunit__DOT__b = 0U;
                        vlSelf->top__DOT__bands = 0U;
                        vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                    }
                } else {
                    vlSelf->top__DOT__controlunit__DOT__b = 0U;
                    vlSelf->top__DOT__bands = 0U;
                    vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
                }
            } else {
                vlSelf->top__DOT__controlunit__DOT__b = 0U;
                vlSelf->top__DOT__bands = 0U;
                vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
            }
        } else {
            vlSelf->top__DOT__controlunit__DOT__b = 0U;
            vlSelf->top__DOT__bands = 0U;
            vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
        }
    } else {
        vlSelf->top__DOT__controlunit__DOT__b = 0U;
        vlSelf->top__DOT__bands = 0U;
        vlSelf->top__DOT__controlunit__DOT__aluop210 = 0U;
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((0x10U & vlSelf->top__DOT__dataout)) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 3U)))) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__controlunit__DOT__aluop210 = 6U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelf->top__DOT__dataout 
                              >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__bands = 1U;
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 4U;
                        }
                    }
                }
            }
        } else if ((0x10U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__controlunit__DOT__aluop210 = 5U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__controlunit__DOT__aluop210 = 2U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__controlunit__DOT__aluop210 = 1U;
                    }
                }
            }
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
        if ((2U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
            if ((1U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
                if ((0U == (7U & (vlSelf->top__DOT__dataout 
                                  >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                         >> 0xcU)))) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__alucontrol = 0xfU;
                        }
                    } else {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                }
            } else if ((0U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 7U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xeU;
                }
            } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 7U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xfU;
                }
            } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xeU;
                }
            } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xfU;
                }
            } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xeU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xeU;
                }
            } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xeU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xfU;
                }
            } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xfU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xfU;
                }
            } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 0xeU;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0xeU;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
            if ((0U == (7U & (vlSelf->top__DOT__dataout 
                              >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0U;
                }
            } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 7U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 7U;
                }
            } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0U;
                }
            } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 7U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 4U;
                }
            } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 6U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 5U;
                }
            } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 3U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 3U;
                }
            } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 2U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 2U;
                }
            }
        } else if ((0U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 0U;
            }
        } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 7U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 7U;
            }
        } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 0U;
            }
        } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 1U;
            }
        } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 4U;
            }
        } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 5U;
            }
        } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 3U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 3U;
            }
        } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 2U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 2U;
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
        if ((1U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
            if ((0U == (7U & (vlSelf->top__DOT__dataout 
                              >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0U;
                }
            } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 7U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 7U;
                }
            } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 0U;
                }
            } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 1U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 6U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 4U;
                }
            } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 6U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 5U;
                }
            } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 3U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 3U;
                }
            } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                     >> 0xcU)))) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__alucontrol = 2U;
                    }
                } else {
                    vlSelf->top__DOT__alucontrol = 2U;
                }
            }
        } else if ((0U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 0U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 0U;
            }
        } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 7U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 7U;
            }
        } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 9U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 8U;
            }
        } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 9U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 9U;
            }
        } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 4U;
            }
        } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 5U;
            }
        } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 3U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 3U;
            }
        } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 2U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 2U;
            }
        }
    } else if ((1U & (IData)(vlSelf->top__DOT__controlunit__DOT__aluop210))) {
        if ((0U == (7U & (vlSelf->top__DOT__dataout 
                          >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 1U;
            }
        } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 7U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 7U;
            }
        } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 0U;
            }
        } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 1U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 1U;
            }
        } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 4U;
            }
        } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 6U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 5U;
            }
        } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 3U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 3U;
            }
        } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                                 >> 0xcU)))) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                    vlSelf->top__DOT__alucontrol = 2U;
                }
            } else {
                vlSelf->top__DOT__alucontrol = 2U;
            }
        }
    } else if ((0U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 1U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 0U;
        }
    } else if ((1U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 7U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 7U;
        }
    } else if ((2U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 9U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 8U;
        }
    } else if ((3U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 9U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 9U;
        }
    } else if ((4U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 6U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 4U;
        }
    } else if ((5U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 6U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 5U;
        }
    } else if ((6U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 3U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 3U;
        }
    } else if ((7U == (7U & (vlSelf->top__DOT__dataout 
                             >> 0xcU)))) {
        if ((0x40000000U & vlSelf->top__DOT__dataout)) {
            if ((0x40000000U & vlSelf->top__DOT__dataout)) {
                vlSelf->top__DOT__alucontrol = 2U;
            }
        } else {
            vlSelf->top__DOT__alucontrol = 2U;
        }
    }
    vlSelf->top__DOT__immsel = 0U;
    if ((0x40U & vlSelf->top__DOT__dataout)) {
        if ((0x20U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 4U)))) {
                if ((8U & vlSelf->top__DOT__dataout)) {
                    if ((4U & vlSelf->top__DOT__dataout)) {
                        if ((2U & vlSelf->top__DOT__dataout)) {
                            if ((1U & vlSelf->top__DOT__dataout)) {
                                vlSelf->top__DOT__immsel = 3U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                                     >> 2U)))) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            if (vlSelf->top__DOT__branchtrue) {
                                vlSelf->top__DOT__immsel = 3U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->top__DOT__dataout)) {
        if ((0x10U & vlSelf->top__DOT__dataout)) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 3U)))) {
                if ((4U & vlSelf->top__DOT__dataout)) {
                    if ((2U & vlSelf->top__DOT__dataout)) {
                        if ((1U & vlSelf->top__DOT__dataout)) {
                            vlSelf->top__DOT__immsel = 2U;
                        }
                    }
                } else if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__immsel = 3U;
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->top__DOT__dataout 
                             >> 3U)))) {
            if ((1U & (~ (vlSelf->top__DOT__dataout 
                          >> 2U)))) {
                if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__immsel = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->top__DOT__dataout)) {
        if ((1U & (~ (vlSelf->top__DOT__dataout >> 3U)))) {
            if ((4U & vlSelf->top__DOT__dataout)) {
                if ((2U & vlSelf->top__DOT__dataout)) {
                    if ((1U & vlSelf->top__DOT__dataout)) {
                        vlSelf->top__DOT__immsel = 2U;
                    }
                }
            }
        }
    }
    vlSelf->top__DOT__ig__DOT__extend = ((vlSelf->top__DOT__dataout 
                                          >> 0x1fU)
                                          ? 0xfffffU
                                          : 0U);
    vlSelf->top__DOT__ig__DOT__iorjalr_imm = 0U;
    vlSelf->top__DOT__ig__DOT__s_imm = 0U;
    vlSelf->top__DOT__ig__DOT__u_imm = 0U;
    if ((0U == (IData)(vlSelf->top__DOT__immsel))) {
        vlSelf->top__DOT__ig__DOT__iorjalr_imm = ((vlSelf->top__DOT__ig__DOT__extend 
                                                   << 0xcU) 
                                                  | (vlSelf->top__DOT__dataout 
                                                     >> 0x14U));
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig__DOT__iorjalr_imm;
    } else if ((1U == (IData)(vlSelf->top__DOT__immsel))) {
        vlSelf->top__DOT__ig__DOT__s_imm = ((vlSelf->top__DOT__ig__DOT__extend 
                                             << 0xcU) 
                                            | ((0xfe0U 
                                                & (vlSelf->top__DOT__dataout 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__dataout 
                                                     >> 7U))));
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig__DOT__s_imm;
    } else if ((2U == (IData)(vlSelf->top__DOT__immsel))) {
        vlSelf->top__DOT__ig__DOT__u_imm = ((vlSelf->top__DOT__ig__DOT__extend 
                                             << 0x14U) 
                                            | (vlSelf->top__DOT__dataout 
                                               >> 0xcU));
        vlSelf->top__DOT__ig__DOT__u_imm = (vlSelf->top__DOT__ig__DOT__u_imm 
                                            << 0xcU);
        vlSelf->top__DOT__imm = vlSelf->top__DOT__ig__DOT__u_imm;
    }
    vlSelf->top__DOT__jal_add = ((0xfffff000U & vlSelf->top__DOT__jal_add) 
                                 | ((0x800U & (vlSelf->top__DOT__dataout 
                                               >> 9U)) 
                                    | ((0x7feU & (vlSelf->top__DOT__dataout 
                                                  >> 0x14U)) 
                                       | (1U & vlSelf->top__DOT__ig__DOT__extend))));
    vlSelf->top__DOT__jal_add = ((0xfffU & vlSelf->top__DOT__jal_add) 
                                 | ((vlSelf->top__DOT__ig__DOT__extend 
                                     << 0x15U) | ((0x100000U 
                                                   & (vlSelf->top__DOT__dataout 
                                                      >> 0xaU)) 
                                                  | (0xff000U 
                                                     & vlSelf->top__DOT__dataout))));
    vlSelf->top__DOT__jal_add = (vlSelf->top__DOT__jal_add 
                                 + vlSelf->top__DOT__pcreg);
    vlSelf->top__DOT__branch_add = ((0xfffff800U & vlSelf->top__DOT__branch_add) 
                                    | ((0x7e0U & (vlSelf->top__DOT__dataout 
                                                  >> 0x14U)) 
                                       | ((0x1eU & 
                                           (vlSelf->top__DOT__dataout 
                                            >> 7U)) 
                                          | (1U & vlSelf->top__DOT__ig__DOT__extend))));
    vlSelf->top__DOT__branch_add = ((0x7ffU & vlSelf->top__DOT__branch_add) 
                                    | ((vlSelf->top__DOT__ig__DOT__extend 
                                        << 0xdU) | 
                                       ((0x1000U & 
                                         (vlSelf->top__DOT__dataout 
                                          >> 0x13U)) 
                                        | (0x800U & 
                                           (vlSelf->top__DOT__dataout 
                                            << 4U)))));
    vlSelf->top__DOT__branch_add = (vlSelf->top__DOT__branch_add 
                                    + vlSelf->top__DOT__pcreg);
    if (vlSelf->top__DOT__opB) {
        if (vlSelf->top__DOT__opB) {
            vlSelf->top__DOT__b_alu = vlSelf->top__DOT__imm;
        }
    } else {
        vlSelf->top__DOT__b_alu = vlSelf->top__DOT__rs2_out;
    }
    if ((8U & (IData)(vlSelf->top__DOT__alucontrol))) {
        if ((4U & (IData)(vlSelf->top__DOT__alucontrol))) {
            if ((2U & (IData)(vlSelf->top__DOT__alucontrol))) {
                vlSelf->top__DOT__aluoutput = ((1U 
                                                & (IData)(vlSelf->top__DOT__alucontrol))
                                                ? (
                                                   (vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                   | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2)
                                                : vlSelf->top__DOT__b_alu);
            }
        } else if ((1U & (~ ((IData)(vlSelf->top__DOT__alucontrol) 
                             >> 1U)))) {
            vlSelf->top__DOT__aluoutput = ((0xfffffffeU 
                                            & vlSelf->top__DOT__aluoutput) 
                                           | ((1U & (IData)(vlSelf->top__DOT__alucontrol))
                                               ? ((
                                                   (vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                   | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                  < vlSelf->top__DOT__b_alu)
                                               : VL_LTS_III(1,32,32, 
                                                            ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                              | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                             | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2), vlSelf->top__DOT__b_alu)));
        }
    } else {
        vlSelf->top__DOT__aluoutput = ((4U & (IData)(vlSelf->top__DOT__alucontrol))
                                        ? ((2U & (IData)(vlSelf->top__DOT__alucontrol))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__alucontrol))
                                                ? (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__b_alu))
                                                : (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__b_alu)))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__alucontrol))
                                                ? (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->top__DOT__b_alu))
                                                : (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   ^ vlSelf->top__DOT__b_alu)))
                                        : ((2U & (IData)(vlSelf->top__DOT__alucontrol))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__alucontrol))
                                                ? (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   | vlSelf->top__DOT__b_alu)
                                                : (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   & vlSelf->top__DOT__b_alu))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__alucontrol))
                                                ? (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   - vlSelf->top__DOT__b_alu)
                                                : (
                                                   ((vlSelf->top__DOT__mux12__DOT__a_alu__out__out0 
                                                     | vlSelf->top__DOT__mux12__DOT__a_alu__out__out1) 
                                                    | vlSelf->top__DOT__mux12__DOT__a_alu__out__out2) 
                                                   + vlSelf->top__DOT__b_alu))));
    }
    if (vlSelf->top__DOT__writeback) {
        if (vlSelf->top__DOT__writeback) {
            vlSelf->top__DOT__mux3__DOT__r1 = vlSelf->top__DOT__dmem__DOT__mem
                [(0x3ffU & (vlSelf->top__DOT__aluoutput 
                            >> 2U))];
        }
    } else {
        vlSelf->top__DOT__mux3__DOT__r1 = vlSelf->top__DOT__aluoutput;
    }
    if (vlSelf->top__DOT__jalr_en) {
        if (vlSelf->top__DOT__jalr_en) {
            vlSelf->top__DOT__mux3__DOT__r2 = ((IData)(4U) 
                                               + vlSelf->top__DOT__pcreg);
        }
    } else {
        vlSelf->top__DOT__mux3__DOT__r2 = vlSelf->top__DOT__mux3__DOT__r1;
    }
    if ((1U & (~ (IData)(vlSelf->top__DOT__bands)))) {
        vlSelf->top__DOT__mux3__DOT__writein_reg__out__out0 
            = vlSelf->top__DOT__mux3__DOT__r2;
    }
    vlSelf->output1 = vlSelf->top__DOT__mux3__DOT__writein_reg__out__out0;
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
