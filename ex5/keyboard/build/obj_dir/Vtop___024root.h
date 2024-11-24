// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_data,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_OUT8(led,7,0);
    VL_OUT8(seg0,6,0);
    VL_OUT8(seg1,6,0);
    VL_OUT8(seg3,6,0);
    VL_OUT8(seg4,6,0);
    VL_OUT8(seg6,6,0);
    VL_OUT8(seg7,6,0);
    VL_OUT8(seg2,6,0);
    VL_OUT8(seg5,6,0);
    CData/*7:0*/ top__DOT__count;
    CData/*0:0*/ top__DOT__ready;
    CData/*0:0*/ top__DOT__nextdata;
    CData/*7:0*/ top__DOT__ascii_code;
    CData/*3:0*/ top__DOT____Vcellinp__myseg0__b;
    CData/*3:0*/ top__DOT____Vcellinp__myseg1__b;
    CData/*3:0*/ top__DOT____Vcellinp__myseg3__b;
    CData/*3:0*/ top__DOT____Vcellinp__myseg4__b;
    CData/*3:0*/ top__DOT____Vcellinp__myseg6__b;
    CData/*3:0*/ top__DOT____Vcellinp__myseg7__b;
    CData/*0:0*/ top__DOT__my_keyboard__DOT__overflow;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__w_ptr;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__r_ptr;
    CData/*3:0*/ top__DOT__my_keyboard__DOT__count;
    CData/*2:0*/ top__DOT__my_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__my_keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*7:0*/ __Vtrigrprev__TOP__led;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg0__b;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg1__b;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg3__b;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg4__b;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg6__b;
    CData/*3:0*/ __Vtrigrprev__TOP__top__DOT____Vcellinp__myseg7__b;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__my_keyboard__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 2> top__DOT__data_Judge;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__my_keyboard__DOT__fifo;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<8> __VactTriggered;
    VlTriggerVec<8> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
