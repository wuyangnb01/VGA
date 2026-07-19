// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga.h for the primary calling header

#include "Vvga__pch.h"

void Vvga___024root___ctor_var_reset(Vvga___024root* vlSelf);

Vvga___024root::Vvga___024root(Vvga__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vvga___024root___ctor_var_reset(this);
}

void Vvga___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvga___024root::~Vvga___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
