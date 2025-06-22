// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmt_cpu_tb.h for the primary calling header

#include "Vmt_cpu_tb__pch.h"
#include "Vmt_cpu_tb__Syms.h"
#include "Vmt_cpu_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__0(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<3>/*95:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e766364U;
    __Vtemp_1[1U] = 0x66696c65U;
    __Vtemp_1[2U] = 0x64756d70U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_1));
    vlSymsp->_traceDumpOpen();
    vlSelfRef.mt_cpu_tb__DOT__rst = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xaULL, nullptr, 
                                         "test/mt_cpu_tb.v", 
                                         40);
    vlSelfRef.mt_cpu_tb__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x186a0ULL, 
                                         nullptr, "test/mt_cpu_tb.v", 
                                         42);
    VL_FINISH_MT("test/mt_cpu_tb.v", 42, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__act(Vmt_cpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmt_cpu_tb___024root___eval_triggers__act(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_triggers__act\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.mt_cpu_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__mt_cpu_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__mt_cpu_tb__DOT__clk__0 
        = vlSelfRef.mt_cpu_tb__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vmt_cpu_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
