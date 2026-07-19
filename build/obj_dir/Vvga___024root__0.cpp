// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga.h for the primary calling header

#include "Vvga__pch.h"

void Vvga___024root___eval_triggers_vec__act(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_triggers_vec__act\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((IData)(vlSelfRef.vga__DOT__pclk) 
                                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__vga__DOT__pclk__0))) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__vga__DOT__pclk__0 
        = vlSelfRef.vga__DOT__pclk;
}

bool Vvga___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vvga___024root___nba_sequent__TOP__0(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_sequent__TOP__0\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vdly__vga__DOT__u_clkgen__DOT__count;
    __Vdly__vga__DOT__u_clkgen__DOT__count = 0;
    CData/*0:0*/ __Vdly__vga__DOT__pclk;
    __Vdly__vga__DOT__pclk = 0;
    // Body
    __Vdly__vga__DOT__u_clkgen__DOT__count = vlSelfRef.vga__DOT__u_clkgen__DOT__count;
    __Vdly__vga__DOT__pclk = vlSelfRef.vga__DOT__pclk;
    if (vlSelfRef.vga__DOT__u_clkgen__DOT__rst) {
        __Vdly__vga__DOT__u_clkgen__DOT__count = 0U;
        __Vdly__vga__DOT__pclk = 0U;
    } else {
        __Vdly__vga__DOT__u_clkgen__DOT__count = ((IData)(1U) 
                                                  + vlSelfRef.vga__DOT__u_clkgen__DOT__count);
        if ((0x000061a8U <= vlSelfRef.vga__DOT__u_clkgen__DOT__count)) {
            __Vdly__vga__DOT__u_clkgen__DOT__count = 0U;
            __Vdly__vga__DOT__pclk = 0U;
        } else {
            __Vdly__vga__DOT__pclk = vlSelfRef.vga__DOT__pclk;
        }
    }
    vlSelfRef.vga__DOT__u_clkgen__DOT__count = __Vdly__vga__DOT__u_clkgen__DOT__count;
    vlSelfRef.vga__DOT__pclk = __Vdly__vga__DOT__pclk;
}

void Vvga___024root___nba_sequent__TOP__1(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___nba_sequent__TOP__1\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ vga__DOT__valid;
    vga__DOT__valid = 0;
    CData/*0:0*/ vga__DOT__vga_ctrl_inst__DOT__h_valid;
    vga__DOT__vga_ctrl_inst__DOT__h_valid = 0;
    CData/*0:0*/ vga__DOT__vga_ctrl_inst__DOT__v_valid;
    vga__DOT__vga_ctrl_inst__DOT__v_valid = 0;
    SData/*9:0*/ __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt;
    __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0;
    SData/*8:0*/ __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt;
    __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt = 0;
    // Body
    __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt;
    __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt = vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt;
    if (vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__reset) {
        __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0U;
        __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt = 0U;
    } else {
        __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt 
            = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
        if ((0x031fU == (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt))) {
            __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0U;
            __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt 
                = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
        }
    }
    vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt = __Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt;
    vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt = __Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt;
    vlSelfRef.VGA_VSYNC = (2U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt));
    vga__DOT__vga_ctrl_inst__DOT__v_valid = ((0x000cU 
                                              <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)) 
                                             & (0x01ecU 
                                                > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
    vlSelfRef.VGA_HSYNC = (0x0060U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt));
    vga__DOT__vga_ctrl_inst__DOT__h_valid = ((0x0090U 
                                              <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)) 
                                             & (0x0310U 
                                                > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
    vga__DOT__valid = ((IData)(vga__DOT__vga_ctrl_inst__DOT__h_valid) 
                       & (IData)(vga__DOT__vga_ctrl_inst__DOT__v_valid));
    if (vga__DOT__valid) {
        vlSelfRef.VGA_BLANK_N = 1U;
        vlSelfRef.VGA_R = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                          [((((IData)(vga__DOT__vga_ctrl_inst__DOT__h_valid)
                                               ? (0x000003ffU 
                                                  & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                     - (IData)(0x0090U)))
                                               : 0U) 
                                             << 9U) 
                                            | ((IData)(vga__DOT__vga_ctrl_inst__DOT__v_valid)
                                                ? (0x000001ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                      - (IData)(0x000cU)))
                                                : 0U))] 
                                          >> 0x00000010U));
        vlSelfRef.VGA_G = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                          [((((IData)(vga__DOT__vga_ctrl_inst__DOT__h_valid)
                                               ? (0x000003ffU 
                                                  & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                     - (IData)(0x0090U)))
                                               : 0U) 
                                             << 9U) 
                                            | ((IData)(vga__DOT__vga_ctrl_inst__DOT__v_valid)
                                                ? (0x000001ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                      - (IData)(0x000cU)))
                                                : 0U))] 
                                          >> 8U));
        vlSelfRef.VGA_B = (0x000000ffU & vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                           [((((IData)(vga__DOT__vga_ctrl_inst__DOT__h_valid)
                                ? (0x000003ffU & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                  - (IData)(0x0090U)))
                                : 0U) << 9U) | ((IData)(vga__DOT__vga_ctrl_inst__DOT__v_valid)
                                                 ? 
                                                (0x000001ffU 
                                                 & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                    - (IData)(0x000cU)))
                                                 : 0U))]);
    } else {
        vlSelfRef.VGA_BLANK_N = 0U;
        vlSelfRef.VGA_R = 0U;
        vlSelfRef.VGA_G = 0U;
        vlSelfRef.VGA_B = 0U;
    }
}

void Vvga___024root___eval_nba(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_nba\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count;
    __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk;
    __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1_vga__DOT__valid;
    __Vinline__nba_sequent__TOP__1_vga__DOT__valid = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid;
    __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid;
    __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid = 0;
    SData/*9:0*/ __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt;
    __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0;
    SData/*8:0*/ __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt;
    __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count 
            = vlSelfRef.vga__DOT__u_clkgen__DOT__count;
        __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk 
            = vlSelfRef.vga__DOT__pclk;
        if (vlSelfRef.vga__DOT__u_clkgen__DOT__rst) {
            __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk = 0U;
        } else {
            __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count 
                = ((IData)(1U) + vlSelfRef.vga__DOT__u_clkgen__DOT__count);
            if ((0x000061a8U <= vlSelfRef.vga__DOT__u_clkgen__DOT__count)) {
                __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk = 0U;
            } else {
                __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk 
                    = vlSelfRef.vga__DOT__pclk;
            }
        }
        vlSelfRef.vga__DOT__u_clkgen__DOT__count = __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__u_clkgen__DOT__count;
        vlSelfRef.vga__DOT__pclk = __Vinline__nba_sequent__TOP__0___Vdly__vga__DOT__pclk;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt 
            = vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt;
        __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt 
            = vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt;
        if (vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__reset) {
            __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt = 0U;
        } else {
            __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt 
                = (0x000003ffU & ((IData)(1U) + (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
            if ((0x031fU == (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt))) {
                __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt 
                    = (0x000001ffU & ((IData)(1U) + (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
            }
        }
        vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt 
            = __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__y_cnt;
        vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt 
            = __Vinline__nba_sequent__TOP__1___Vdly__vga__DOT__vga_ctrl_inst__DOT__x_cnt;
        vlSelfRef.VGA_VSYNC = (2U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt));
        __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid 
            = ((0x000cU <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)) 
               & (0x01ecU > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
        vlSelfRef.VGA_HSYNC = (0x0060U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt));
        __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid 
            = ((0x0090U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)) 
               & (0x0310U > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
        __Vinline__nba_sequent__TOP__1_vga__DOT__valid 
            = (__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid 
               & __Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid);
        if (__Vinline__nba_sequent__TOP__1_vga__DOT__valid) {
            vlSelfRef.VGA_BLANK_N = 1U;
            vlSelfRef.VGA_R = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                              [(((__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                                   ? 
                                                  (0x000003ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                      - (IData)(0x0090U)))
                                                   : 0U) 
                                                 << 9U) 
                                                | (__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid
                                                    ? 
                                                   (0x000001ffU 
                                                    & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                       - (IData)(0x000cU)))
                                                    : 0U))] 
                                              >> 0x00000010U));
            vlSelfRef.VGA_G = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                              [(((__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                                   ? 
                                                  (0x000003ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                      - (IData)(0x0090U)))
                                                   : 0U) 
                                                 << 9U) 
                                                | (__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid
                                                    ? 
                                                   (0x000001ffU 
                                                    & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                       - (IData)(0x000cU)))
                                                    : 0U))] 
                                              >> 8U));
            vlSelfRef.VGA_B = (0x000000ffU & vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                               [(((__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                    ? (0x000003ffU 
                                       & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                          - (IData)(0x0090U)))
                                    : 0U) << 9U) | 
                                 (__Vinline__nba_sequent__TOP__1_vga__DOT__vga_ctrl_inst__DOT__v_valid
                                   ? (0x000001ffU & 
                                      ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                       - (IData)(0x000cU)))
                                   : 0U))]);
        } else {
            vlSelfRef.VGA_BLANK_N = 0U;
            vlSelfRef.VGA_R = 0U;
            vlSelfRef.VGA_G = 0U;
            vlSelfRef.VGA_B = 0U;
        }
    }
}

void Vvga___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vvga___024root___eval_phase__act(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_phase__act\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vvga___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vvga___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vvga___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vvga___024root___eval_phase__nba(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_phase__nba\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vvga___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vvga___024root___eval_nba(vlSelf);
        Vvga___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vvga___024root___eval(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vvga___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/wy89/ysyx-workbench/vga/vsrc/vga.v", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vvga___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/wy89/ysyx-workbench/vga/vsrc/vga.v", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vvga___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vvga___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vvga___024root___eval_debug_assertions(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_debug_assertions\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
}
#endif  // VL_DEBUG
