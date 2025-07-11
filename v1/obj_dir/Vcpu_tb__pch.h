// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Precompiled header
//
// Internal details; most user sources do not need this header,
// unless using verilator public meta comments.
// Suggest use Vcpu_tb.h instead.


#ifndef VERILATED_VCPU_TB__PCH_H_
#define VERILATED_VCPU_TB__PCH_H_  // guard

// GCC and Clang only will precompile headers (PCH) for the first header.
// So, make sure this is the one and only PCH.
// If multiple module's includes are needed, use individual includes.
#ifdef VL_PCH_INCLUDED
# error "Including multiple precompiled header files"
#endif
#define VL_PCH_INCLUDED


#include "verilated.h"

#include "Vcpu_tb__Syms.h"
#include "Vcpu_tb.h"

// Additional include files added using '--compiler-include'

#endif  // guard
