// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcpu_tb.h for the primary calling header

#include "Vcpu_tb__pch.h"
#include "Vcpu_tb___024root.h"

VL_ATTR_COLD void Vcpu_tb___024root___eval_static(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_static\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 
        = vlSelfRef.cpu_tb__DOT__clk;
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_initial__TOP(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_initial__TOP\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlWide<4>/*127:0*/ __Vtemp_1;
    // Body
    vlSelfRef.cpu_tb__DOT__clk = 0U;
    __Vtemp_1[0U] = 0x2e6d656dU;
    __Vtemp_1[1U] = 0x636f6465U;
    __Vtemp_1[2U] = 0x7372632fU;
    __Vtemp_1[3U] = 0x2e2fU;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_1)
                 ,  &(vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom)
                 , 0, ~0ULL);
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[1U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[2U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[3U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[4U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[5U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[6U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[7U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[8U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[9U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xaU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xbU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xcU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xdU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xeU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0xfU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x10U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x11U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x12U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x13U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x14U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x15U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x16U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x17U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x18U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x19U] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1aU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1bU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1cU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1dU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1eU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0x1fU] = 0U;
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i = 0x20U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0x3fU)) {
        vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__Vilp1] = 0U;
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i = 0x40U;
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_final(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_final\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_settle(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_settle\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            Vcpu_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("test/cpu_tb.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vcpu_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf);
VL_ATTR_COLD void Vcpu_tb___024root____Vm_traceActivitySetAll(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD void Vcpu_tb___024root___eval_stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vcpu_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vcpu_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

extern const VlUnpacked<SData/*10:0*/, 128> Vcpu_tb__ConstPool__TABLE_he606f04f_0;
extern const VlUnpacked<CData/*3:0*/, 2048> Vcpu_tb__ConstPool__TABLE_h75c7fd43_0;

VL_ATTR_COLD void Vcpu_tb___024root___stl_sequent__TOP__0(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___stl_sequent__TOP__0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*23:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_1;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_1 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_2;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_2 = 0;
    CData/*7:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_3;
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_3 = 0;
    CData/*0:0*/ __VdfgRegularize_h8252e60d_0_0;
    __VdfgRegularize_h8252e60d_0_0 = 0;
    CData/*0:0*/ __VdfgRegularize_h8252e60d_0_1;
    __VdfgRegularize_h8252e60d_0_1 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    SData/*10:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    SData/*15:0*/ __VdfgRegularize_h495687df_0_10;
    __VdfgRegularize_h495687df_0_10 = 0;
    // Body
    __Vtableidx1 = (0x7fU & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i);
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls 
        = Vcpu_tb__ConstPool__TABLE_he606f04f_0[__Vtableidx1];
    __Vtableidx2 = ((0x400U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                               >> 0x14U)) | ((0x380U 
                                              & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls 
        = Vcpu_tb__ConstPool__TABLE_h75c7fd43_0[__Vtableidx2];
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
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 
        = (0xffffffU & (- (IData)((1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                         [(0x3fU & 
                                           (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                            >> 2U))] 
                                         >> 7U)))));
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_1 
        = (0xffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
           [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                      >> 2U))]);
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_2 
        = (0xffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 8U));
    cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_3 
        = (0xffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                    [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                               >> 2U))] >> 0x10U));
    __VdfgRegularize_h495687df_0_10 = (0xffffU & vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                       [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                  >> 2U))]);
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
                                                           & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                              ^ 
                                                              (vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                               < vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i)))))));
    __VdfgRegularize_h8252e60d_0_0 = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i) 
                                       == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i)) 
                                      & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i) 
                                         & (0U != (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i))));
    __VdfgRegularize_h8252e60d_0_1 = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i) 
                                       == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i)) 
                                      & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i) 
                                         & (0U != (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i))));
    vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o 
        = ((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
            ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_i
            : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
                ? vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_w_i
                : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i))
                    ? vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i
                    : 0U)));
    vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_m_o 
        = ((4U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
            ? ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? 0U : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                         ? ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? VL_SHIFTR_III(32,32,32, 
                                             vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                             [(0x3fU 
                                               & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                  >> 2U))], 0x10U)
                             : (IData)(__VdfgRegularize_h495687df_0_10))
                         : ((2U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                             ? ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? VL_SHIFTR_III(32,32,32, 
                                                 vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                 [(0x3fU 
                                                   & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                      >> 2U))], 0x18U)
                                 : (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_3))
                             : ((1U & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                 ? (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_2)
                                 : (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_1)))))
            : ((2U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                ? ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                    ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                   [(0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                              >> 2U))]) : ((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m))
                                            ? ((2U 
                                                & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                                [
                                                                (0x3fU 
                                                                 & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                                    >> 2U))] 
                                                                >> 0x1fU))) 
                                                    << 0x10U) 
                                                   | (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                      [
                                                      (0x3fU 
                                                       & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                          >> 2U))] 
                                                      >> 0x10U))
                                                : (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                                   [
                                                                   (0x3fU 
                                                                    & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                                       >> 2U))] 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (IData)(__VdfgRegularize_h495687df_0_10)))
                                            : ((2U 
                                                & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                                ? (
                                                   (1U 
                                                    & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                                    ? 
                                                   ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 
                                                     << 8U) 
                                                    | (vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram
                                                       [
                                                       (0x3fU 
                                                        & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                                           >> 2U))] 
                                                       >> 0x18U))
                                                    : 
                                                   ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 
                                                     << 8U) 
                                                    | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_3)))
                                                : (
                                                   (1U 
                                                    & vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i)
                                                    ? 
                                                   ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 
                                                     << 8U) 
                                                    | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_2))
                                                    : 
                                                   ((cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_0 
                                                     << 8U) 
                                                    | (IData)(cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT____VdfgRegularize_h7538df75_0_1)))))));
    vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr 
        = ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o) 
           | (IData)(vlSelfRef.cpu_tb__DOT__rst));
    vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr 
        = (((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f) 
            | (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o)) 
           | (IData)(vlSelfRef.cpu_tb__DOT__rst));
    vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e = 
        ((IData)(__VdfgRegularize_h8252e60d_0_0) ? 1U
          : ((IData)(__VdfgRegularize_h8252e60d_0_0)
              ? 2U : 0U));
    vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e = 
        ((IData)(__VdfgRegularize_h8252e60d_0_1) ? 1U
          : ((IData)(__VdfgRegularize_h8252e60d_0_1)
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
}

VL_ATTR_COLD void Vcpu_tb___024root___eval_triggers__stl(Vcpu_tb___024root* vlSelf);

VL_ATTR_COLD bool Vcpu_tb___024root___eval_phase__stl(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___eval_phase__stl\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcpu_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vcpu_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__act(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__act\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcpu_tb___024root___dump_triggers__nba(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___dump_triggers__nba\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge cpu_tb.clk)\n");
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcpu_tb___024root____Vm_traceActivitySetAll(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root____Vm_traceActivitySetAll\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

VL_ATTR_COLD void Vcpu_tb___024root___ctor_var_reset(Vcpu_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root___ctor_var_reset\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->cpu_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11012557873277913936ull);
    vlSelf->cpu_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5729153853397715463ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_d_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8099815595497292484ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_plus4_d_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16546554849568649433ull);
    vlSelf->cpu_tb__DOT__dut__DOT__instr_d_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2963286208014943183ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rd1_e_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16071145517900763268ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rd2_e_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13878989698313230322ull);
    vlSelf->cpu_tb__DOT__dut__DOT__imm_val_e_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7618100922061843058ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_e_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3336936526417928516ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_plus4_e_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10243638928161494062ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rd_e_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14151682568408201443ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_control_e_i = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5177417967060547213ull);
    vlSelf->cpu_tb__DOT__dut__DOT__res_src_e_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17235259181601646806ull);
    vlSelf->cpu_tb__DOT__dut__DOT__mem_write_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2200632354608793734ull);
    vlSelf->cpu_tb__DOT__dut__DOT__reg_write_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4454957057533862656ull);
    vlSelf->cpu_tb__DOT__dut__DOT__jump_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4243254475411730607ull);
    vlSelf->cpu_tb__DOT__dut__DOT__branch_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1800583953869762542ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_src_a_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6334991272204919403ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_src_b_e_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16935423279621141365ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rs1_e_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 11821186578753456816ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rs2_e_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14947462776812997759ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_result_e_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17867798421801928677ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_src_e_o = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3641525282965303312ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_result_m_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11414038431486380628ull);
    vlSelf->cpu_tb__DOT__dut__DOT__write_data_m_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17620092332681215484ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_plus4_m_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1971350501530313789ull);
    vlSelf->cpu_tb__DOT__dut__DOT__mem_write_m_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3092325049774142196ull);
    vlSelf->cpu_tb__DOT__dut__DOT__reg_write_m_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8134775553486163318ull);
    vlSelf->cpu_tb__DOT__dut__DOT__res_src_m_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8016053739266061557ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rd_m_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3591067485942077406ull);
    vlSelf->cpu_tb__DOT__dut__DOT__read_data_m_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 602946351300700183ull);
    vlSelf->cpu_tb__DOT__dut__DOT__reg_write_w_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12969104121101712410ull);
    vlSelf->cpu_tb__DOT__dut__DOT__result_src_w_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 9781501944699079480ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_result_w_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2881570691743077946ull);
    vlSelf->cpu_tb__DOT__dut__DOT__read_data_w_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 853776591485650354ull);
    vlSelf->cpu_tb__DOT__dut__DOT__rd_w_i = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9887924359165163488ull);
    vlSelf->cpu_tb__DOT__dut__DOT__pc_plus4_w_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7544569560604248923ull);
    vlSelf->cpu_tb__DOT__dut__DOT__alu_result_w_o = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2486063956134179966ull);
    vlSelf->cpu_tb__DOT__dut__DOT__stall_f = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13307637082958491379ull);
    vlSelf->cpu_tb__DOT__dut__DOT__forward_a_e = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18001647001637284250ull);
    vlSelf->cpu_tb__DOT__dut__DOT__forward_b_e = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12730913550814923277ull);
    vlSelf->cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18313706136312027508ull);
    vlSelf->cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2721534527697850046ull);
    vlSelf->cpu_tb__DOT__dut__DOT____Vcellinp__de__clr = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2923902991352812449ull);
    vlSelf->cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10466914387547121641ull);
    vlSelf->cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15362807327962483070ull);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11609567239640495201ull);
    }
    vlSelf->cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 6941515465584539671ull);
    vlSelf->cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16570220460906113307ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15598753978017445436ull);
    }
    vlSelf->cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15021251543395363346ull);
    vlSelf->cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17311742958610357536ull);
    vlSelf->cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16157224877251151401ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 520033848158420137ull);
    }
    vlSelf->cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17791928347460950016ull);
    vlSelf->__Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7758402960855881928ull);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
