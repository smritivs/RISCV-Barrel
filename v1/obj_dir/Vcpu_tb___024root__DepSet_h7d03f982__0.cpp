// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(Vcpu_tb___024root* vlSelf);
VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_initial(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcpu_tb___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vcpu_tb___024root___eval_initial__TOP__Vtiming__1(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x4bULL, 
                                             nullptr, 
                                             "test/cpu_tb.v", 
                                             23);
        vlSelfRef.cpu_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__clk)));
    }
}

void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vcpu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vcpu_tb___024root___act_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___act_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr 
        = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o) 
           | (IData)(vlSelfRef.cpu_tb__DOT__rst));
    vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr 
        = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f) 
            | (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o)) 
           | (IData)(vlSelfRef.cpu_tb__DOT__rst));
}

void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf);

void Vcpu_tb___024root___eval_nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___nba_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vcpu_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_tb__ConstPool__TABLE_h75aea7d8_0;
extern const VlUnpacked<SData/*10:0*/, 128> Vcpu_tb__ConstPool__TABLE_h6ae34cf7_0;

VL_INLINE_OPT void Vcpu_tb___024root___nba_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___nba_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_3_0;
    __VdfgRegularize_hd87f99a1_3_0 = 0;
    CData/*0:0*/ __VdfgRegularize_hd87f99a1_3_1;
    __VdfgRegularize_hd87f99a1_3_1 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc;
    __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc = 0;
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0;
    CData/*4:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0;
    CData/*7:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0;
    SData/*15:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0;
    SData/*15:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0;
    IData/*31:0*/ __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    CData/*5:0*/ __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    CData/*0:0*/ __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0;
    // Body
    __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc 
        = vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc;
    __VdlySet__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 0U;
    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 0U;
    if (vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_w_i) {
        __VdlyVal__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o;
        __VdlyDim0__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__rd_w_i;
        __VdlySet__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0 = 1U;
    }
    if (vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_m_i) {
        if ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))) {
            if ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                if ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 
                        = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 
                        = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                    >> 2U));
                    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0 = 1U;
                } else {
                    __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 
                        = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                    __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 
                        = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                    >> 2U));
                    __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1 = 1U;
                }
            } else if ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 
                    = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 
                    = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2 = 1U;
            } else {
                __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 
                    = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 
                    = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3 = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))) {
            if ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)) {
                __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 
                    = (0xffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 
                    = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4 = 1U;
            } else {
                __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 
                    = (0xffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i);
                __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 
                    = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                >> 2U));
                __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5 = 1U;
            }
        } else {
            __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 
                = ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i
                    : 0U);
            __VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 
                = (0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                            >> 2U));
            __VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6 = 1U;
        }
    }
    if (vlSelfRef.cpu_tb__DOT__rst) {
        __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_w_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_w_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_m_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_m_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f)))) {
            __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc 
                = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o)
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_e_o
                    : ((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc));
        }
        vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_w_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_m_o;
        vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_m_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_m_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_w_i = vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m 
            = vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e;
        vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_m_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_m_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_e_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_e_o;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i = vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i;
    }
    if (vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_e_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i = 0U;
    } else {
        vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls;
        vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_e_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_d_o;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_e_i = vlSelfRef.cpu_tb__DOT__dut__DOT__pc_d_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i = 
            (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                      >> 0xfU));
        vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i = 
            (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                      >> 0x14U));
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i = 
            ((0U == (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                              >> 0xfU))) ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
             [(0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                        >> 0xfU))]);
        vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e 
            = (7U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                     >> 0xcU));
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i = 
            ((0U == (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                              >> 0x14U))) ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
             [(0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                        >> 0x14U))]);
        vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i 
            = (3U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 8U));
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_e_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_d_i;
        vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i = (0x1fU 
                                                   & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                      >> 7U));
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_b_e_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
           && (1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 3U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_a_e_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
           && (1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 4U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__branch_e_i = (
                                                   (1U 
                                                    & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
                                                   && (1U 
                                                       & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                                          >> 5U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__jump_e_i = ((1U 
                                                  & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
                                                 && (1U 
                                                     & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                                        >> 6U)));
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0] 
            = ((0xffffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v0) 
                  << 0x18U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1] 
            = ((0xff00ffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v1) 
                  << 0x10U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2] 
            = ((0xffff00ffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v2) 
                  << 8U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3] 
            = ((0xffffff00U & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3]) 
               | (IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v3));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4] 
            = ((0xffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4]) 
               | ((IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v4) 
                  << 0x10U));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5] 
            = ((0xffff0000U & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                [__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5]) 
               | (IData)(__VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v5));
    }
    if (__VdlySet__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__VdlyDim0__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram__v6;
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_w_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i));
    vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_m_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_e_i));
    if (vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_d_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_d_i = 0U;
        vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i = 0U;
    } else if ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f)))) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_d_i = vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc;
        vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_d_i 
            = ((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc);
        vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
            = vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom
            [(0x3ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc 
                        >> 2U))];
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o 
        = ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
            ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_i
            : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
                ? vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_w_i
                : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i
                    : 0U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__rst))) 
           && (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_e_i));
    vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_e_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
           && (1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 7U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
        = vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
        [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                   >> 2U))];
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
        = (0xffffffU & (- (IData)((1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                         [(0x3fU & 
                                           (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                            >> 2U))] 
                                         >> 7U)))));
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1 
        = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
           [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                      >> 2U))]);
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2 
        = (0xffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 8U));
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3 
        = (0xffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 0x10U));
    if (__VdlySet__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__VdlyDim0__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0] 
            = __VdlyVal__cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array__v0;
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_m_o 
        = ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
            ? ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                         ? ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                >> 0x10U) : (0xffffU 
                                             & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word))
                         : ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                 [(0x3fU 
                                                   & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                      >> 2U))], 0x18U)
                                 : (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3))
                             : ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2)
                                 : (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1)))))
            : ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word)
                : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                        ? (((- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                        >> 0x1fU))) 
                            << 0x10U) | (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                         >> 0x10U))
                        : (((- (IData)((1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word 
                                              >> 0xfU)))) 
                            << 0x10U) | (0xffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word)))
                    : ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                        ? ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                            ? ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                          [(0x3fU & 
                                            (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                             >> 2U))] 
                                          >> 0x18U))
                            : ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_3)))
                        : ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                            ? ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_2))
                            : ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_0 
                                << 8U) | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h69f107be_0_1)))))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_e_i 
        = ((1U & (~ (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr))) 
           && (1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                     >> 0xaU)));
    __VdfgRegularize_hd87f99a1_3_0 = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i) 
                                       == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i)) 
                                      & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i) 
                                         & (0U != (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i))));
    __VdfgRegularize_hd87f99a1_3_1 = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i) 
                                       == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i)) 
                                      & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i) 
                                         & (0U != (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__jump_e_i) 
                                                   | ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__branch_e_i) 
                                                      & ((0U 
                                                          == 
                                                          (6U 
                                                           & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                                          ? 
                                                         ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                          ^ 
                                                          (vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                           == vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i))
                                                          : 
                                                         ((4U 
                                                           == 
                                                           (6U 
                                                            & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                                           ? 
                                                          ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                           ^ 
                                                           VL_LTS_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i, vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i))
                                                           : 
                                                          ((6U 
                                                            == 
                                                            (6U 
                                                             & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e))) 
                                                           && (1U 
                                                               & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                                  ^ 
                                                                  (vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                                   < vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i))))))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e = 
        ((IData)(__VdfgRegularize_hd87f99a1_3_0) ? 1U
          : ((IData)(__VdfgRegularize_hd87f99a1_3_0)
              ? 2U : 0U));
    vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e = 
        ((IData)(__VdfgRegularize_hd87f99a1_3_1) ? 1U
          : ((IData)(__VdfgRegularize_hd87f99a1_3_1)
              ? 2U : 0U));
    vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
        = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_a_e_i)
            ? vlSelfRef.cpu_tb__DOT__dut__DOT__pc_e_i
            : ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                ? vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i
                : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i
                    : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                        ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o
                        : 0U))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu 
        = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_b_e_i)
            ? vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_e_i
            : ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                ? vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i
                : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i
                    : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                        ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o
                        : 0U))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_e_o 
        = ((8U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
            ? ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                ? ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                    ? 0U : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                             ? vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu
                             : 0U)) : ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                        ? 0U : ((1U 
                                                 & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 & vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                 : 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 | vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu))))
            : ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                ? ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                    ? ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                        ? VL_SHIFTRS_III(32,32,5, vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu, 
                                         (0x1fU & vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu))
                        : (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                           >> (0x1fU & vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))
                    : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                        ? (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                           ^ vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                        : ((vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                            < vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                            ? 1U : 0U))) : ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                             ? ((1U 
                                                 & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (VL_LTS_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu, vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                  ? 1U
                                                  : 0U)
                                                 : 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))
                                             : ((1U 
                                                 & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i))
                                                 ? 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 - vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)
                                                 : 
                                                (vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
                                                 + vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu)))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc 
        = __Vdly__cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc;
    __Vtableidx2 = ((0x400U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls 
        = Vcpu_tb__ConstPool__TABLE_h75aea7d8_0[__Vtableidx2];
    __Vtableidx1 = (0x7fU & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i);
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls 
        = Vcpu_tb__ConstPool__TABLE_h6ae34cf7_0[__Vtableidx1];
    vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i) 
                                                & (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i) 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                        >> 0xfU))) 
                                                   | ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i) 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                          >> 0x14U)))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_d_o = 
        ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
          ? ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
              ? 0U : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                       ? 0U : (0xfffff000U & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i)))
          : ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
              ? ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                  ? (((- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                  >> 0x1fU))) << 0x14U) 
                     | (((0xff000U & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i) 
                         | (0x800U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                      >> 9U))) | (0x7feU 
                                                  & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                     >> 0x14U))))
                  : (((- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0x800U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                   << 4U)) | ((0x7e0U 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                    >> 7U))))))
              : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))
                  ? (((- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                  >> 0x1fU))) << 0xcU) 
                     | ((0xfe0U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                    >> 7U))))
                  : (((- (IData)((vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                  >> 0x1fU))) << 0xcU) 
                     | (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                        >> 0x14U)))));
}

void Vcpu_tb___024root___timing_resume(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___timing_resume\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vcpu_tb___024root___eval_triggers__act(Vcpu_tb___024root* vlSelf);

bool Vcpu_tb___024root___eval_phase__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vcpu_tb___024root___timing_resume(vlSelf);
        Vcpu_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vcpu_tb___024root___eval_phase__nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vcpu_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vcpu_tb___024root___eval(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcpu_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("test/cpu_tb.v", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcpu_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("test/cpu_tb.v", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vcpu_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vcpu_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vcpu_tb___024root___eval_debug_assertions(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_debug_assertions\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
