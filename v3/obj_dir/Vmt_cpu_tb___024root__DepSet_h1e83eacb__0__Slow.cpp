// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmt_cpu_tb.h for the primary calling header

#include "Vmt_cpu_tb__pch.h"
#include "Vmt_cpu_tb___024root.h"

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_static(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_static\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__mt_cpu_tb__DOT__clk__0 
        = vlSelfRef.mt_cpu_tb__DOT__clk;
}

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_initial__TOP(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_initial__TOP\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.mt_cpu_tb__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x74657374U;
    __Vtemp_1[2U] = 0x7372632fU;
    __Vtemp_1[3U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom)
                 , 0, ~0ULL);
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3eU)) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i = 0x3fU;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0x3fU)) {
        vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__Vilp2] = 0U;
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i = 0x40U;
}

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_final(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_final\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__stl(Vmt_cpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vmt_cpu_tb___024root___eval_phase__stl(Vmt_cpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_settle(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_settle\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vmt_cpu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test/mt_cpu_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vmt_cpu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__stl(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___dump_triggers__stl\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmt_cpu_tb___024root___stl_sequent__TOP__0(Vmt_cpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vmt_cpu_tb___024root____Vm_traceActivitySetAll(Vmt_cpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_stl(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_stl\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vmt_cpu_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vmt_cpu_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<CData/*3:0*/, 2048> Vmt_cpu_tb__ConstPool__TABLE_h8bedad4b_0;
extern const VlUnpacked<SData/*10:0*/, 128> Vmt_cpu_tb__ConstPool__TABLE_h297af744_0;

VL_ATTR_COLD void Vmt_cpu_tb___024root___stl_sequent__TOP__0(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___stl_sequent__TOP__0\n"); );
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
    // Body
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
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu 
        = ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_b_e_i)
            ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_e_i
            : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i);
    vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu 
        = ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_a_e_i)
            ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_e_i
            : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i);
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
}

VL_ATTR_COLD void Vmt_cpu_tb___024root___eval_triggers__stl(Vmt_cpu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vmt_cpu_tb___024root___eval_phase__stl(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___eval_phase__stl\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vmt_cpu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vmt_cpu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__act(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___dump_triggers__act\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge mt_cpu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vmt_cpu_tb___024root___dump_triggers__nba(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___dump_triggers__nba\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge mt_cpu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vmt_cpu_tb___024root____Vm_traceActivitySetAll(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root____Vm_traceActivitySetAll\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
}

VL_ATTR_COLD void Vmt_cpu_tb___024root___ctor_var_reset(Vmt_cpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root___ctor_var_reset\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->mt_cpu_tb__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_plus4_f_o = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_d_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_plus4_d_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__instr_d_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__tid_d_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__imm_val_d_o = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__rd1_e_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__rd2_e_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__imm_val_e_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_e_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_plus4_e_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__rd_e_i = VL_RAND_RESET_I(5);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_control_e_i = VL_RAND_RESET_I(4);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__res_src_e_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__mem_write_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__reg_write_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__jump_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__branch_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_src_a_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_src_b_e_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__tid_e_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_result_e_o = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_result_m_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__write_data_m_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_plus4_m_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__mem_write_m_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__reg_write_m_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__res_src_m_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__rd_m_i = VL_RAND_RESET_I(5);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__tid_m_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__read_data_m_o = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__reg_write_w_i = VL_RAND_RESET_I(1);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__result_src_w_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__alu_result_w_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__read_data_w_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__rd_w_i = VL_RAND_RESET_I(5);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__tid_w_i = VL_RAND_RESET_I(2);
    vlSelf->mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e = VL_RAND_RESET_I(3);
    vlSelf->mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m = VL_RAND_RESET_I(3);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid = VL_RAND_RESET_I(2);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__i = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls = VL_RAND_RESET_I(11);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_write[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word = VL_RAND_RESET_I(32);
    vlSelf->mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__mt_cpu_tb__DOT__clk__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
