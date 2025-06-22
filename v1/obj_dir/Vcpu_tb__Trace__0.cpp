// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vcpu_tb__Syms.h"


void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vcpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vcpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vcpu_tb___024root__trace_chg_0_sub_0(Vcpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_chg_0_sub_0\n"); );
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom
                               [(0x3ffU & (vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc 
                                           >> 2U))]),32);
        bufp->chgIData(oldp+1,(((0U == (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 0xfU)))
                                 ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
                                [(0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                           >> 0xfU))])),32);
        bufp->chgIData(oldp+2,(((0U == (0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 0x14U)))
                                 ? 0U : vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array
                                [(0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                           >> 0x14U))])),32);
        bufp->chgIData(oldp+3,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+5,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+6,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+7,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+8,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+9,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+10,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+11,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+12,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+13,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+14,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+15,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+16,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+17,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+18,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+19,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+20,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+21,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+22,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+23,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+24,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+25,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+26,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+27,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+28,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+29,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+30,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+31,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+32,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+33,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+34,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array[31]),32);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+35,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_i),32);
        bufp->chgIData(oldp+36,((vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i 
                                 - (IData)(4U))),32);
        bufp->chgIData(oldp+37,(vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc),32);
        bufp->chgIData(oldp+38,(((IData)(4U) + vlSelfRef.cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc)),32);
        bufp->chgIData(oldp+39,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_d_i),32);
        bufp->chgIData(oldp+40,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_d_i),32);
        bufp->chgIData(oldp+41,(vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i),32);
        bufp->chgIData(oldp+42,(vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_d_o),32);
        bufp->chgCData(oldp+43,((0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 7U))),5);
        bufp->chgCData(oldp+44,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls),4);
        bufp->chgCData(oldp+45,((3U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                       >> 8U))),2);
        bufp->chgBit(oldp+46,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+47,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+48,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 6U))));
        bufp->chgBit(oldp+49,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 5U))));
        bufp->chgBit(oldp+50,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+51,((1U & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+52,((7U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+53,((0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+54,((0x1fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+55,(vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i),32);
        bufp->chgIData(oldp+56,(vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i),32);
        bufp->chgIData(oldp+57,(vlSelfRef.cpu_tb__DOT__dut__DOT__imm_val_e_i),32);
        bufp->chgIData(oldp+58,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_e_i),32);
        bufp->chgIData(oldp+59,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_e_i),32);
        bufp->chgCData(oldp+60,(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_e_i),5);
        bufp->chgCData(oldp+61,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_control_e_i),4);
        bufp->chgCData(oldp+62,(vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i),2);
        bufp->chgBit(oldp+63,(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_e_i));
        bufp->chgBit(oldp+64,(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_e_i));
        bufp->chgBit(oldp+65,(vlSelfRef.cpu_tb__DOT__dut__DOT__jump_e_i));
        bufp->chgBit(oldp+66,(vlSelfRef.cpu_tb__DOT__dut__DOT__branch_e_i));
        bufp->chgBit(oldp+67,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_a_e_i));
        bufp->chgBit(oldp+68,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_src_b_e_i));
        bufp->chgCData(oldp+69,(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e),3);
        bufp->chgCData(oldp+70,(vlSelfRef.cpu_tb__DOT__dut__DOT__rs1_e_i),5);
        bufp->chgCData(oldp+71,(vlSelfRef.cpu_tb__DOT__dut__DOT__rs2_e_i),5);
        bufp->chgIData(oldp+72,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_e_o),32);
        bufp->chgBit(oldp+73,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o));
        bufp->chgIData(oldp+74,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i),32);
        bufp->chgIData(oldp+75,(vlSelfRef.cpu_tb__DOT__dut__DOT__write_data_m_i),32);
        bufp->chgIData(oldp+76,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_m_i),32);
        bufp->chgBit(oldp+77,(vlSelfRef.cpu_tb__DOT__dut__DOT__mem_write_m_i));
        bufp->chgBit(oldp+78,(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_m_i));
        bufp->chgCData(oldp+79,(vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_m_i),2);
        bufp->chgCData(oldp+80,(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m),3);
        bufp->chgCData(oldp+81,(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_m_i),5);
        bufp->chgIData(oldp+82,(vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_m_o),32);
        bufp->chgBit(oldp+83,(vlSelfRef.cpu_tb__DOT__dut__DOT__reg_write_w_i));
        bufp->chgCData(oldp+84,(vlSelfRef.cpu_tb__DOT__dut__DOT__result_src_w_i),2);
        bufp->chgIData(oldp+85,(vlSelfRef.cpu_tb__DOT__dut__DOT__read_data_w_i),32);
        bufp->chgCData(oldp+86,(vlSelfRef.cpu_tb__DOT__dut__DOT__rd_w_i),5);
        bufp->chgIData(oldp+87,(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_plus4_w_i),32);
        bufp->chgIData(oldp+88,(vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o),32);
        bufp->chgBit(oldp+89,(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f));
        bufp->chgBit(oldp+90,(((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__stall_f) 
                               | (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__pc_src_e_o))));
        bufp->chgCData(oldp+91,(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e),2);
        bufp->chgCData(oldp+92,(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e),2);
        bufp->chgCData(oldp+93,((7U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))),3);
        bufp->chgCData(oldp+94,((0x7fU & vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i)),7);
        bufp->chgBit(oldp+95,((1U & (vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                     >> 0x1eU))));
        bufp->chgSData(oldp+96,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls),11);
        bufp->chgIData(oldp+97,((vlSelfRef.cpu_tb__DOT__dut__DOT__instr_d_i 
                                 >> 7U)),25);
        bufp->chgIData(oldp+98,(vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu),32);
        bufp->chgIData(oldp+99,(vlSelfRef.cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu),32);
        bufp->chgIData(oldp+100,(((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                                   ? vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i
                                   : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                                       ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i
                                       : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_a_e))
                                           ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o
                                           : 0U)))),32);
        bufp->chgIData(oldp+101,(((0U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                                   ? vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i
                                   : ((1U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                                       ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i
                                       : ((2U == (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__forward_b_e))
                                           ? vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_w_o
                                           : 0U)))),32);
        bufp->chgBit(oldp+102,((1U & ((0U == (6U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                       ? ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                          ^ (vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i 
                                             == vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i))
                                       : ((4U == (6U 
                                                  & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                           ? ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                              ^ VL_LTS_III(32, vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i, vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i))
                                           : ((6U == 
                                               (6U 
                                                & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e))) 
                                              && (1U 
                                                  & ((IData)(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                     ^ 
                                                     (vlSelfRef.cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                      < vlSelfRef.cpu_tb__DOT__dut__DOT__rd2_e_i)))))))));
        bufp->chgBit(oldp+103,((1U & (IData)(vlSelfRef.cpu_tb__DOT__dut__DOT__res_src_e_i))));
        bufp->chgIData(oldp+104,((0x3fU & (vlSelfRef.cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                           >> 2U))),32);
        bufp->chgIData(oldp+105,(vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word),32);
    }
    bufp->chgBit(oldp+106,(vlSelfRef.cpu_tb__DOT__rst));
    bufp->chgBit(oldp+107,(vlSelfRef.cpu_tb__DOT__clk));
    bufp->chgBit(oldp+108,(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__de__clr));
    bufp->chgIData(oldp+109,(vlSelfRef.cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i),32);
    bufp->chgBit(oldp+110,(vlSelfRef.cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr));
    bufp->chgIData(oldp+111,(vlSelfRef.cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i),32);
}

void Vcpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vcpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vcpu_tb___024root*>(voidSelf);
    Vcpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
