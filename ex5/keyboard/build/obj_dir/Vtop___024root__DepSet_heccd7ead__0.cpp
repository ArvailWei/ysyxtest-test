// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vdlyvval__top__DOT__data_Judge__v0;
    __Vdlyvval__top__DOT__data_Judge__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_Judge__v0;
    __Vdlyvset__top__DOT__data_Judge__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__data_Judge__v1;
    __Vdlyvval__top__DOT__data_Judge__v1 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_Judge__v2;
    __Vdlyvset__top__DOT__data_Judge__v2 = 0;
    CData/*7:0*/ __Vdly__top__DOT__count;
    __Vdly__top__DOT__count = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_Judge__v3;
    __Vdlyvset__top__DOT__data_Judge__v3 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__r_ptr = 0;
    CData/*0:0*/ __Vdly__top__DOT__ready;
    __Vdly__top__DOT__ready = 0;
    CData/*2:0*/ __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*7:0*/ __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*0:0*/ __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0;
    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 0;
    CData/*2:0*/ __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__my_keyboard__DOT__w_ptr = 0;
    CData/*3:0*/ __Vdly__top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = 0;
    // Body
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync;
    __Vdlyvset__top__DOT__data_Judge__v0 = 0U;
    __Vdlyvset__top__DOT__data_Judge__v2 = 0U;
    __Vdlyvset__top__DOT__data_Judge__v3 = 0U;
    __Vdly__top__DOT__count = vlSelf->top__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__count = vlSelf->top__DOT__my_keyboard__DOT__count;
    __Vdly__top__DOT__my_keyboard__DOT__w_ptr = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
    __Vdly__top__DOT__ready = vlSelf->top__DOT__ready;
    __Vdly__top__DOT__my_keyboard__DOT__r_ptr = vlSelf->top__DOT__my_keyboard__DOT__r_ptr;
    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 0U;
    __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    if (vlSelf->rst) {
        if (vlSelf->top__DOT__ready) {
            __Vdlyvval__top__DOT__data_Judge__v0 = 
                vlSelf->top__DOT__data_Judge[0U];
            __Vdlyvset__top__DOT__data_Judge__v0 = 1U;
            __Vdlyvval__top__DOT__data_Judge__v1 = vlSelf->led;
        }
    } else {
        __Vdlyvset__top__DOT__data_Judge__v2 = 1U;
        __Vdly__top__DOT__count = 0U;
        __Vdlyvset__top__DOT__data_Judge__v3 = 1U;
    }
    if (((0xf0U == vlSelf->top__DOT__data_Judge[1U]) 
         & (0xf0U != vlSelf->top__DOT__data_Judge[0U]))) {
        __Vdly__top__DOT__count = (0xffU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__count)));
    }
    if (vlSelf->rst) {
        if (vlSelf->top__DOT__ready) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__nextdata)))) {
                __Vdly__top__DOT__my_keyboard__DOT__r_ptr 
                    = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr)));
                if (((IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr) 
                     == (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr))))) {
                    __Vdly__top__DOT__ready = 0U;
                }
            }
        }
        if ((IData)((4U == (6U & (IData)(vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync))))) {
            if ((0xaU == (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                if (VL_UNLIKELY((((~ (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                                  & (IData)(vlSelf->ps2_data)) 
                                 & VL_REDXOR_32((0x1ffU 
                                                 & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                    >> 1U)))))) {
                    VL_WRITEF("receive %x\n",8,(0xffU 
                                                & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                                   >> 1U)));
                    __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0 
                        = (0xffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer) 
                                    >> 1U));
                    __Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0 = 1U;
                    __Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0 
                        = vlSelf->top__DOT__my_keyboard__DOT__w_ptr;
                    __Vdly__top__DOT__ready = 1U;
                    __Vdly__top__DOT__my_keyboard__DOT__w_ptr 
                        = (7U & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)));
                    vlSelf->top__DOT__my_keyboard__DOT__overflow 
                        = ((IData)(vlSelf->top__DOT__my_keyboard__DOT__overflow) 
                           | ((IData)(vlSelf->top__DOT__my_keyboard__DOT__r_ptr) 
                              == (7U & ((IData)(1U) 
                                        + (IData)(vlSelf->top__DOT__my_keyboard__DOT__w_ptr)))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
            } else {
                vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) {
                    vlSelf->top__DOT__my_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))) 
                            & (IData)(vlSelf->top__DOT__my_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0) 
                                        << (IData)(vlSelf->top__DOT__my_keyboard__DOT__count))));
                }
                __Vdly__top__DOT__my_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->top__DOT__my_keyboard__DOT__count)));
            }
        }
    } else {
        __Vdly__top__DOT__my_keyboard__DOT__count = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__w_ptr = 0U;
        __Vdly__top__DOT__my_keyboard__DOT__r_ptr = 0U;
        vlSelf->top__DOT__my_keyboard__DOT__overflow = 0U;
        __Vdly__top__DOT__ready = 0U;
    }
    if (vlSelf->rst) {
        if (vlSelf->top__DOT__ready) {
            vlSelf->top__DOT__nextdata = 0U;
        }
    }
    if (__Vdlyvset__top__DOT__data_Judge__v0) {
        vlSelf->top__DOT__data_Judge[1U] = __Vdlyvval__top__DOT__data_Judge__v0;
        vlSelf->top__DOT__data_Judge[0U] = __Vdlyvval__top__DOT__data_Judge__v1;
    }
    if (__Vdlyvset__top__DOT__data_Judge__v2) {
        vlSelf->top__DOT__data_Judge[0U] = 0U;
    }
    if (__Vdlyvset__top__DOT__data_Judge__v3) {
        vlSelf->top__DOT__data_Judge[1U] = 0U;
    }
    vlSelf->top__DOT__count = __Vdly__top__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__ps2_clk_sync 
        = __Vdly__top__DOT__my_keyboard__DOT__ps2_clk_sync;
    vlSelf->top__DOT__my_keyboard__DOT__w_ptr = __Vdly__top__DOT__my_keyboard__DOT__w_ptr;
    vlSelf->top__DOT__my_keyboard__DOT__count = __Vdly__top__DOT__my_keyboard__DOT__count;
    vlSelf->top__DOT__my_keyboard__DOT__r_ptr = __Vdly__top__DOT__my_keyboard__DOT__r_ptr;
    if (__Vdlyvset__top__DOT__my_keyboard__DOT__fifo__v0) {
        vlSelf->top__DOT__my_keyboard__DOT__fifo[__Vdlyvdim0__top__DOT__my_keyboard__DOT__fifo__v0] 
            = __Vdlyvval__top__DOT__my_keyboard__DOT__fifo__v0;
    }
    vlSelf->top__DOT__ready = __Vdly__top__DOT__ready;
}

extern const VlUnpacked<CData/*6:0*/, 16> Vtop__ConstPool__TABLE_h25bdbd99_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*3:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    __Vtableidx2 = vlSelf->top__DOT____Vcellinp__myseg0__b;
    vlSelf->seg0 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx2];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    // Init
    CData/*3:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = vlSelf->top__DOT____Vcellinp__myseg1__b;
    vlSelf->seg1 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx3];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    // Init
    CData/*3:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = vlSelf->top__DOT____Vcellinp__myseg3__b;
    vlSelf->seg3 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx4];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    // Init
    CData/*3:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = vlSelf->top__DOT____Vcellinp__myseg4__b;
    vlSelf->seg4 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx5];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    // Init
    CData/*3:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    // Body
    __Vtableidx6 = vlSelf->top__DOT____Vcellinp__myseg6__b;
    vlSelf->seg6 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    // Init
    CData/*3:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = vlSelf->top__DOT____Vcellinp__myseg7__b;
    vlSelf->seg7 = Vtop__ConstPool__TABLE_h25bdbd99_0
        [__Vtableidx7];
}

extern const VlUnpacked<CData/*7:0*/, 256> Vtop__ConstPool__TABLE_h768f7345_0;

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__7(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__7\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSelf->led;
    vlSelf->top__DOT__ascii_code = Vtop__ConstPool__TABLE_h768f7345_0
        [__Vtableidx1];
    vlSelf->top__DOT____Vcellinp__myseg3__b = (0xfU 
                                               & (IData)(vlSelf->top__DOT__ascii_code));
    vlSelf->top__DOT____Vcellinp__myseg4__b = (0xfU 
                                               & ((IData)(vlSelf->top__DOT__ascii_code) 
                                                  >> 4U));
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__8(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__8\n"); );
    // Body
    vlSelf->top__DOT____Vcellinp__myseg6__b = (0xfU 
                                               & (IData)(vlSelf->top__DOT__count));
    vlSelf->top__DOT____Vcellinp__myseg7__b = (0xfU 
                                               & ((IData)(vlSelf->top__DOT__count) 
                                                  >> 4U));
    vlSelf->led = vlSelf->top__DOT__my_keyboard__DOT__fifo
        [vlSelf->top__DOT__my_keyboard__DOT__r_ptr];
    vlSelf->top__DOT____Vcellinp__myseg0__b = (0xfU 
                                               & (IData)(vlSelf->led));
    vlSelf->top__DOT____Vcellinp__myseg1__b = (0xfU 
                                               & ((IData)(vlSelf->led) 
                                                  >> 4U));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtop___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(4U)) {
        Vtop___024root___nba_sequent__TOP__3(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(5U)) {
        Vtop___024root___nba_sequent__TOP__4(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(6U)) {
        Vtop___024root___nba_sequent__TOP__5(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(7U)) {
        Vtop___024root___nba_sequent__TOP__6(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtop___024root___nba_sequent__TOP__7(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__8(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<8> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/arvail/my_test/ex5/keyboard/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/arvail/my_test/ex5/keyboard/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
}
#endif  // VL_DEBUG