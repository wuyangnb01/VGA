// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga.h for the primary calling header

#ifndef VERILATED_VVGA___024ROOT_H_
#define VERILATED_VVGA___024ROOT_H_  // guard

#include "verilated.h"


class Vvga__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvga___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLOCK_50,0,0);
    VL_IN8(rst,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_SYNC_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);
    CData/*0:0*/ vga__DOT__pclk;
    CData/*0:0*/ vga__DOT__clkgen_inst__DOT__count;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__CLOCK_50__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__vga__DOT__pclk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*9:0*/ vga__DOT__vga_ctrl_inst__DOT__x_cnt;
    SData/*8:0*/ vga__DOT__vga_ctrl_inst__DOT__y_cnt;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*23:0*/, 524288> vga__DOT__vmem_usage__DOT__vga_mem;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vvga__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vvga___024root(Vvga__Syms* symsp, const char* namep);
    ~Vvga___024root();
    VL_UNCOPYABLE(Vvga___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
