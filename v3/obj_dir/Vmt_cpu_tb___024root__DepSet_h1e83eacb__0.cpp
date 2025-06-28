// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmt_cpu_tb.h for the primary calling header

#include "Vmt_cpu_tb__pch.h"
#include "Vmt_cpu_tb___024root.h"

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_initial__TOP(Vmt_cpu_tb___024root* vlSelf);
VlCoroutine Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__0(Vmt_cpu_tb___024root* vlSelf);
VlCoroutine Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__1(Vmt_cpu_tb___024root* vlSelf);

void Vmt_cpu_tb___024root___eval_initial(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_initial\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vmt_cpu_tb___024root___eval_initial__TOP(vlSelf);
    Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__1(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0xeULL, 
                                             nullptr, 
                                             "test/mt_cpu_tb.v", 
                                             33);
        vlSelfRef.mt_cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__clk)));
    }
}

void Vmt_cpu_tb___024root___eval_act(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_act\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

void Vmt_cpu_tb___024root___nba_sequent__TOP__0(Vmt_cpu_tb___024root* vlSelf);

void Vmt_cpu_tb___024root___eval_nba(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_nba\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vmt_cpu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

extern const VlUnpacked<CData/*3:0*/, 2048> Vmt_cpu_tb__ConstPool__TABLE_h8bedad4b_0;
extern const VlUnpacked<SData/*10:0*/, 128> Vmt_cpu_tb__ConstPool__TABLE_h297af744_0;

VL_INLINE_OPT void Vmt_cpu_tb___024root___nba_sequent__TOP__0(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___nba_sequent__TOP__0\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0;
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 = 0;
    CData/*7:0*/ mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1;
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1 = 0;
    CData/*7:0*/ mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2;
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2 = 0;
    CData/*7:0*/ mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3;
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*1:0*/ __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid;
    __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v0;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v0 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 = 0;
    CData/*1:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 = 0;
    CData/*1:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v0;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v0 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v1;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v1 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v2;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v2 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v3;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v3 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v4;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v4 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v5;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v5 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v6;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v6 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v7;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v7 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v8;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v8 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v9;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v9 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v10;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v10 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v11;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v11 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v12;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v12 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v13;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v13 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v14;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v14 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v15;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v15 = 0;
    CData/*7:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    SData/*15:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    SData/*15:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    CData/*5:0*/ __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    CData/*0:0*/ __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    // Body
    __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v0 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0U;
    __VdlySet__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 = 0U;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i = 0x10U;
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v0 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v1 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v2 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v3 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v4 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v5 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v6 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v7 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v8 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(8U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v9 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(9U) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v10 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xaU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v11 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xbU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v12 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xcU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v13 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xdU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v14 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xeU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v15 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
        [(0x3fU & ((IData)(0xfU) + VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i), 4U)))];
    if (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_m_i) {
        if ((0U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))) {
            if ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                if ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 
                        = (0xffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 
                        = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                    >> 2U));
                    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 1U;
                } else {
                    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 
                        = (0xffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 
                        = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                    >> 2U));
                    __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 1U;
                }
            } else if ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 
                    = (0xffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 
                    = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 1U;
            } else {
                __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 
                    = (0xffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 
                    = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))) {
            if ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 
                    = (0xffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 
                    = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 1U;
            } else {
                __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 
                    = (0xffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 
                    = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 1U;
            }
        } else {
            __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 
                = ((2U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i
                    : 0U);
            __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 
                = (0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                            >> 2U));
            __VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 1U;
        }
    }
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 
        = (0x3fU & VL_SHIFTL_III(6,32,32, (3U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                 - (IData)(1U))), 4U));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [1U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1 
        = (0x3fU & ((IData)(1U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [2U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2 
        = (0x3fU & ((IData)(2U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [3U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3 
        = (0x3fU & ((IData)(3U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [4U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4 
        = (0x3fU & ((IData)(4U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [5U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5 
        = (0x3fU & ((IData)(5U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [6U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6 
        = (0x3fU & ((IData)(6U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [7U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7 
        = (0x3fU & ((IData)(7U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [8U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8 
        = (0x3fU & ((IData)(8U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [9U];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9 
        = (0x3fU & ((IData)(9U) + VL_SHIFTL_III(6,32,32, 
                                                (3U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                    - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xaU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10 
        = (0x3fU & ((IData)(0xaU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xbU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11 
        = (0x3fU & ((IData)(0xbU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xcU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12 
        = (0x3fU & ((IData)(0xcU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xdU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13 
        = (0x3fU & ((IData)(0xdU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xeU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14 
        = (0x3fU & ((IData)(0xeU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
        [0xfU];
    __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15 
        = (0x3fU & ((IData)(0xfU) + VL_SHIFTL_III(6,32,32, 
                                                  (3U 
                                                   & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                                      - (IData)(1U))), 4U)));
    if (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_w_i) {
        __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 
            = ((0U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_w_i
                : ((1U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                    ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_w_i
                    : ((2U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                        ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i
                        : 0U)));
        __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 
            = (0x3fU & (VL_SHIFTL_III(6,32,32, (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_w_i), 4U) 
                        + (0xfU & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_w_i))));
        __VdlySet__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16 = 1U;
    }
    if (vlSelfRef.mt_cpu_tb__DOT__rst) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__i = 4U;
        __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid = 0U;
        __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v0 = 1U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_w_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_d_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_m_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_e_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_d_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i = 0U;
    } else {
        __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid 
            = (3U & ((IData)(1U) + (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid)));
        __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_f_o;
        __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid;
        __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4 = 1U;
        if (((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__jump_e_i) 
             | ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__branch_e_i) 
                & ((0U == (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                    ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                       ^ (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                          == vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                    : ((4U == (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                        ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                           ^ VL_LTS_III(32, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                        : ((6U == (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e))) 
                           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                     ^ (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                                        < vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))))))))) {
            __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 
                = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_e_o;
            __VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 
                = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_e_i;
            __VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5 = 1U;
        }
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_e_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_d_o;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_e_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_d_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
            = ((0U == (0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                               >> 0xfU))) ? 0U : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
               [(0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                         >> 0xfU))]);
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_m_o;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_m_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_m_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_m_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_w_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_m_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_d_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc
            [vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid];
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e 
            = (7U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                     >> 0xcU));
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i 
            = ((0U == (0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                               >> 0x14U))) ? 0U : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
               [(0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                         >> 0x14U))]);
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_e_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_e_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_e_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_e_o;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_m_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_e_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_e_i 
            = (3U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 8U));
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_e_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_d_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_e_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_e_i 
            = (0x1fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                        >> 7U));
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_d_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_f_o;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
            = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom
            [(0x3ffU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc
                        [vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid] 
                        >> 2U))];
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_b_e_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 3U)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_a_e_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 4U)));
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0] 
            = ((0xffffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0]) 
               | ((IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0) 
                  << 0x18U));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1] 
            = ((0xff00ffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1) 
                  << 0x10U));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2] 
            = ((0xffff00ffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2) 
                  << 8U));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3] 
            = ((0xffffff00U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3]) 
               | (IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4] 
            = ((0xffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4]) 
               | ((IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4) 
                  << 0x10U));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5] 
            = ((0xffff0000U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5]) 
               | (IData)(__VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5));
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6] 
            = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v1;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v2;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v3;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v4;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v5;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v6;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v7;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v8;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v9;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v10;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v11;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v12;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v13;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v14;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v15;
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16] 
            = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v16;
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__jump_e_i = 
        ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
         && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                   >> 6U)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__branch_e_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 5U)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_m_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_e_i));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_w_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_m_i));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
        = ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_a_e_i)
            ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_e_i
            : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i);
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_e_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 7U)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_m_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_e_i));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v0;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[1U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v1;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[2U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v2;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[3U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v3;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[4U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v4;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[5U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v5;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[6U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v6;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[7U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v7;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[8U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v8;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[9U] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v9;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xaU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v10;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xbU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v11;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xcU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v12;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xdU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v13;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xeU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v14;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0xfU] 
        = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read__v15;
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu 
        = ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_b_e_i)
            ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_e_i
            : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i);
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_e_i 
        = ((1U & (~ (IData)(vlSelfRef.mt_cpu_tb__DOT__rst))) 
           && (1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 0xaU)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
        = vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
        [(0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                   >> 2U))];
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
        = (0xffffffU & (- (IData)((1U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                         [(0x3fU & 
                                           (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                            >> 2U))] 
                                         >> 7U)))));
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1 
        = (0xffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
           [(0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                      >> 2U))]);
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2 
        = (0xffU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 8U));
    mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3 
        = (0xffU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 0x10U));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_e_o 
        = ((8U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
            ? ((4U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                ? ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                    ? 0U : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                             ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu
                             : 0U)) : ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                 : 
                                                (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 | vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu))))
            : ((4U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                ? ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                    ? ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu, 
                                         (0x1fU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu))
                        : (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                           >> (0x1fU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))
                    : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                        ? (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                           ^ vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                        : ((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                            < vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                            ? 1U : 0U))) : ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (VL_LTS_III(32, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 - vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                 : 
                                                (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 + vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_m_o 
        = ((4U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
            ? ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? 0U : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                         ? ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                >> 0x10U) : (0xffffU 
                                             & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word))
                         : ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                 [(0x3fU 
                                                   & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                      >> 2U))], 0x18U)
                                 : (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3))
                             : ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2)
                                 : (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1)))))
            : ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? 0U : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word)
                : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                        ? (((- (IData)((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                         >> 0x10U))
                        : (((- (IData)((1U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word)))
                    : ((2U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                        ? ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                            ? ((mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                          [(0x3fU & 
                                            (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                             >> 2U))] 
                                          >> 0x18U))
                            : ((mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3)))
                        : ((1U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i)
                            ? ((mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2))
                            : ((mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1)))))));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid 
        = __Vdly__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid;
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v0) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[0U] = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[1U] = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[2U] = 0U;
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[3U] = 0U;
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4] 
            = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v4;
    }
    if (__VdlySet__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[__VdlyDim0__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5] 
            = __VdlyVal__mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc__v5;
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_f_o 
        = ((IData)(4U) + vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc
           [vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid]);
    __Vtableidx2 = ((0x400U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i)));
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls 
        = Vmt_cpu_tb__ConstPool__TABLE_h8bedad4b_0[__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i);
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls 
        = Vmt_cpu_tb__ConstPool__TABLE_h297af744_0[__Vtableidx1];
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_d_o 
        = ((4U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
            ? ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                ? 0U : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                         ? 0U : (0xfffff000U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i)))
            : ((2U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                ? ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                    ? (((- (IData)((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                    >> 0x1fU))) << 0x14U) 
                       | (((0xff000U & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i) 
                           | (0x800U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                        >> 9U))) | 
                          (0x7feU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                     >> 0x14U)))) : 
                   (((- (IData)((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                 >> 0x1fU))) << 0xcU) 
                    | ((0x800U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                  << 4U)) | ((0x7e0U 
                                              & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 0x14U)) 
                                             | (0x1eU 
                                                & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                   >> 7U))))))
                : ((1U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                    ? (((- (IData)((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                      >> 7U))))
                    : (((- (IData)((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                          >> 0x14U)))));
}

void Vmt_cpu_tb___024root___timing_resume(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___timing_resume\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vmt_cpu_tb___024root___eval_triggers__act(Vmt_cpu_tb___024root* vlSelf);

bool Vmt_cpu_tb___024root___eval_phase__act(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_phase__act\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vmt_cpu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vmt_cpu_tb___024root___timing_resume(vlSelf);
        Vmt_cpu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vmt_cpu_tb___024root___eval_phase__nba(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_phase__nba\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vmt_cpu_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__nba(Vmt_cpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__act(Vmt_cpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vmt_cpu_tb___024root___eval(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vmt_cpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test/mt_cpu_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vmt_cpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test/mt_cpu_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vmt_cpu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vmt_cpu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vmt_cpu_tb___024root___eval_debug_assertions(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_debug_assertions\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
