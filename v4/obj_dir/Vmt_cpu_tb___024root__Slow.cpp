// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmt_cpu_tb.h for the primary calling header

#include "Vmt_cpu_tb__pch.h"
#include "Vmt_cpu_tb__Syms.h"
#include "Vmt_cpu_tb___024root.h"

void Vmt_cpu_tb___024root___ctor_var_reset(Vmt_cpu_tb___024root* vlSelf);

Vmt_cpu_tb___024root::Vmt_cpu_tb___024root(Vmt_cpu_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmt_cpu_tb___024root___ctor_var_reset(this);
}

void Vmt_cpu_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vmt_cpu_tb___024root::~Vmt_cpu_tb___024root() {
}
