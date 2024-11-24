// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->led) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__led));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg0__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg0__b));
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg1__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg1__b));
    vlSelf->__VactTriggered.at(4U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg3__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg3__b));
    vlSelf->__VactTriggered.at(5U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg4__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg4__b));
    vlSelf->__VactTriggered.at(6U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg6__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg6__b));
    vlSelf->__VactTriggered.at(7U) = ((IData)(vlSelf->top__DOT____Vcellinp__myseg7__b) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg7__b));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__led = vlSelf->led;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg0__b 
        = vlSelf->top__DOT____Vcellinp__myseg0__b;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg1__b 
        = vlSelf->top__DOT____Vcellinp__myseg1__b;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg3__b 
        = vlSelf->top__DOT____Vcellinp__myseg3__b;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg4__b 
        = vlSelf->top__DOT____Vcellinp__myseg4__b;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg6__b 
        = vlSelf->top__DOT____Vcellinp__myseg6__b;
    vlSelf->__Vtrigrprev__TOP__top__DOT____Vcellinp__myseg7__b 
        = vlSelf->top__DOT____Vcellinp__myseg7__b;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
        vlSelf->__VactTriggered.at(4U) = 1U;
        vlSelf->__VactTriggered.at(5U) = 1U;
        vlSelf->__VactTriggered.at(6U) = 1U;
        vlSelf->__VactTriggered.at(7U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
