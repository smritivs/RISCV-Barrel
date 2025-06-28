// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmt_cpu_tb__Syms.h"


void Vmt_cpu_tb___024root__trace_chg_0_sub_0(Vmt_cpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vmt_cpu_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root__trace_chg_0\n"); );
    // Init
    Vmt_cpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmt_cpu_tb___024root*>(voidSelf);
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vmt_cpu_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vmt_cpu_tb___024root__trace_chg_0_sub_0(Vmt_cpu_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root__trace_chg_0_sub_0\n"); );
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_w_i),32);
        bufp->chgIData(oldp+1,((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i 
                                - (IData)(4U))),32);
        bufp->chgIData(oldp+2,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc
                               [vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_f_o),32);
        bufp->chgCData(oldp+4,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid),2);
        bufp->chgIData(oldp+5,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_d_i),32);
        bufp->chgIData(oldp+6,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_d_i),32);
        bufp->chgIData(oldp+7,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i),32);
        bufp->chgCData(oldp+8,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i),2);
        bufp->chgIData(oldp+9,(((0U == (0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                >> 0xfU)))
                                 ? 0U : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
                                [(0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 0xfU))])),32);
        bufp->chgIData(oldp+10,(((0U == (0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                                 >> 0x14U)))
                                  ? 0U : vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read
                                 [(0xfU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                           >> 0x14U))])),32);
        bufp->chgIData(oldp+11,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_d_o),32);
        bufp->chgCData(oldp+12,((0x1fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 7U))),5);
        bufp->chgCData(oldp+13,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls),4);
        bufp->chgCData(oldp+14,((3U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                       >> 8U))),2);
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 7U))));
        bufp->chgBit(oldp+16,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 0xaU))));
        bufp->chgBit(oldp+17,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 6U))));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 5U))));
        bufp->chgBit(oldp+19,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 4U))));
        bufp->chgBit(oldp+20,((1U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls) 
                                     >> 3U))));
        bufp->chgCData(oldp+21,((7U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                       >> 0xcU))),3);
        bufp->chgIData(oldp+22,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i),32);
        bufp->chgIData(oldp+23,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i),32);
        bufp->chgIData(oldp+24,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__imm_val_e_i),32);
        bufp->chgIData(oldp+25,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_e_i),32);
        bufp->chgIData(oldp+26,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_e_i),32);
        bufp->chgCData(oldp+27,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_e_i),5);
        bufp->chgCData(oldp+28,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_control_e_i),4);
        bufp->chgCData(oldp+29,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_e_i),2);
        bufp->chgBit(oldp+30,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_e_i));
        bufp->chgBit(oldp+31,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_e_i));
        bufp->chgBit(oldp+32,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__jump_e_i));
        bufp->chgBit(oldp+33,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__branch_e_i));
        bufp->chgBit(oldp+34,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_a_e_i));
        bufp->chgBit(oldp+35,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_src_b_e_i));
        bufp->chgCData(oldp+36,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e),3);
        bufp->chgCData(oldp+37,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_e_i),2);
        bufp->chgIData(oldp+38,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_e_o),32);
        bufp->chgBit(oldp+39,(((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__jump_e_i) 
                               | ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__branch_e_i) 
                                  & ((0U == (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                      ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                         ^ (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                                            == vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                                      : ((4U == (6U 
                                                 & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                          ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                             ^ VL_LTS_III(32, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                                          : ((6U == 
                                              (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e))) 
                                             && (1U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                    ^ 
                                                    (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                     < vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))))))))));
        bufp->chgIData(oldp+40,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i),32);
        bufp->chgIData(oldp+41,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__write_data_m_i),32);
        bufp->chgIData(oldp+42,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_m_i),32);
        bufp->chgBit(oldp+43,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__mem_write_m_i));
        bufp->chgBit(oldp+44,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_m_i));
        bufp->chgCData(oldp+45,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__res_src_m_i),2);
        bufp->chgCData(oldp+46,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m),3);
        bufp->chgCData(oldp+47,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_m_i),5);
        bufp->chgCData(oldp+48,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_m_i),2);
        bufp->chgIData(oldp+49,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_m_o),32);
        bufp->chgBit(oldp+50,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__reg_write_w_i));
        bufp->chgCData(oldp+51,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i),2);
        bufp->chgIData(oldp+52,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_w_i),32);
        bufp->chgCData(oldp+53,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd_w_i),5);
        bufp->chgIData(oldp+54,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i),32);
        bufp->chgCData(oldp+55,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_w_i),2);
        bufp->chgIData(oldp+56,(((0U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                                  ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_w_i
                                  : ((1U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                                      ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__read_data_w_i
                                      : ((2U == (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__result_src_w_i))
                                          ? vlSelfRef.mt_cpu_tb__DOT__dut__DOT__pc_plus4_w_i
                                          : 0U)))),32);
        bufp->chgCData(oldp+57,((7U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls))),3);
        bufp->chgCData(oldp+58,((0x7fU & vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i)),7);
        bufp->chgBit(oldp+59,((1U & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                     >> 0x1eU))));
        bufp->chgSData(oldp+60,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls),11);
        bufp->chgIData(oldp+61,((vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                 >> 7U)),25);
        bufp->chgCData(oldp+62,((0x1fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+63,((0x1fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__instr_d_i 
                                          >> 0x14U))),5);
        bufp->chgIData(oldp+64,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[0]),32);
        bufp->chgIData(oldp+65,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[1]),32);
        bufp->chgIData(oldp+66,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[2]),32);
        bufp->chgIData(oldp+67,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[3]),32);
        bufp->chgIData(oldp+68,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[4]),32);
        bufp->chgIData(oldp+69,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[5]),32);
        bufp->chgIData(oldp+70,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[6]),32);
        bufp->chgIData(oldp+71,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[7]),32);
        bufp->chgIData(oldp+72,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[8]),32);
        bufp->chgIData(oldp+73,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[9]),32);
        bufp->chgIData(oldp+74,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[10]),32);
        bufp->chgIData(oldp+75,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[11]),32);
        bufp->chgIData(oldp+76,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[12]),32);
        bufp->chgIData(oldp+77,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[13]),32);
        bufp->chgIData(oldp+78,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[14]),32);
        bufp->chgIData(oldp+79,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__curr_reg_read[15]),32);
        bufp->chgCData(oldp+80,((3U & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__tid_d_i) 
                                       - (IData)(1U)))),2);
        bufp->chgIData(oldp+81,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu),32);
        bufp->chgIData(oldp+82,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu),32);
        bufp->chgBit(oldp+83,((1U & ((0U == (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                      ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                         ^ (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                                            == vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                                      : ((4U == (6U 
                                                 & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e)))
                                          ? ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                             ^ VL_LTS_III(32, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i, vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i))
                                          : ((6U == 
                                              (6U & (IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e))) 
                                             && (1U 
                                                 & ((IData)(vlSelfRef.mt_cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e) 
                                                    ^ 
                                                    (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd1_e_i 
                                                     < vlSelfRef.mt_cpu_tb__DOT__dut__DOT__rd2_e_i)))))))));
        bufp->chgIData(oldp+84,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[0]),32);
        bufp->chgIData(oldp+85,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[1]),32);
        bufp->chgIData(oldp+86,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[2]),32);
        bufp->chgIData(oldp+87,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc[3]),32);
        bufp->chgIData(oldp+88,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__i),32);
        bufp->chgIData(oldp+89,((0x3fU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__alu_result_m_i 
                                          >> 2U))),32);
        bufp->chgIData(oldp+90,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word),32);
    }
    bufp->chgBit(oldp+91,(vlSelfRef.mt_cpu_tb__DOT__rst));
    bufp->chgBit(oldp+92,(vlSelfRef.mt_cpu_tb__DOT__clk));
    bufp->chgIData(oldp+93,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom
                            [(0x3ffU & (vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__thread_pc__DOT__t_pc
                                        [vlSelfRef.mt_cpu_tb__DOT__dut__DOT__fetch_stage__DOT__tid] 
                                        >> 2U))]),32);
    bufp->chgIData(oldp+94,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i),32);
    bufp->chgIData(oldp+95,(vlSelfRef.mt_cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i),32);
}

void Vmt_cpu_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmt_cpu_tb___024root__trace_cleanup\n"); );
    // Init
    Vmt_cpu_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmt_cpu_tb___024root*>(voidSelf);
    Vmt_cpu_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
