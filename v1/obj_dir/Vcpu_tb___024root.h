// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcpu_tb.h for the primary calling header

#ifndef VERILATED_VCPU_TB___024ROOT_H_
#define VERILATED_VCPU_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vcpu_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcpu_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ cpu_tb__DOT__clk;
    CData/*0:0*/ cpu_tb__DOT__rst;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__rd_e_i;
    CData/*3:0*/ cpu_tb__DOT__dut__DOT__alu_control_e_i;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__res_src_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__mem_write_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__reg_write_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__jump_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__branch_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__alu_src_a_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__alu_src_b_e_i;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__rs1_e_i;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__rs2_e_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__pc_src_e_o;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__mem_write_m_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__reg_write_m_i;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__res_src_m_i;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__rd_m_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__reg_write_w_i;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__result_src_w_i;
    CData/*4:0*/ cpu_tb__DOT__dut__DOT__rd_w_i;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT__stall_f;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__forward_a_e;
    CData/*1:0*/ cpu_tb__DOT__dut__DOT__forward_b_e;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT____Vcellinp__fd__clr;
    CData/*2:0*/ cpu_tb__DOT__dut__DOT____Vcellout__de__funct3_e;
    CData/*0:0*/ cpu_tb__DOT__dut__DOT____Vcellinp__de__clr;
    CData/*2:0*/ cpu_tb__DOT__dut__DOT____Vcellout__em__funct3_m;
    CData/*3:0*/ cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__alu_controls;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__cpu_tb__DOT__clk__0;
    CData/*0:0*/ __VactContinue;
    SData/*10:0*/ cpu_tb__DOT__dut__DOT__decode_stage__DOT__cu__DOT__controls;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_d_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_plus4_d_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__instr_d_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__imm_val_d_o;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd1_e_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__rd2_e_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__imm_val_e_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_e_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_plus4_e_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_result_e_o;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_result_m_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__write_data_m_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_plus4_m_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__read_data_m_o;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_result_w_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__read_data_w_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__pc_plus4_w_i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__alu_result_w_o;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__fetch_stage__DOT__pc;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__i;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__execute_stage__DOT__a_alu;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__execute_stage__DOT__b_alu;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__word;
    IData/*31:0*/ cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__i;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 1024> cpu_tb__DOT__dut__DOT__fetch_stage__DOT__i_mem__DOT__instr_rom;
    VlUnpacked<IData/*31:0*/, 32> cpu_tb__DOT__dut__DOT__decode_stage__DOT__rf__DOT__reg_array;
    VlUnpacked<IData/*31:0*/, 64> cpu_tb__DOT__dut__DOT__memory_stage__DOT__dm__DOT__ram;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcpu_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vcpu_tb___024root(Vcpu_tb__Syms* symsp, const char* v__name);
    ~Vcpu_tb___024root();
    VL_UNCOPYABLE(Vcpu_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
