// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga.h for the primary calling header

#include "Vvga__pch.h"

VL_ATTR_COLD void Vvga___024root___eval_static(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_static\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__CLOCK_50__0 = vlSelfRef.CLOCK_50;
    vlSelfRef.__Vtrigprevexpr___TOP__vga__DOT__pclk__0 
        = vlSelfRef.vga__DOT__pclk;
}

VL_ATTR_COLD void Vvga___024root___eval_initial(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_initial\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.VGA_SYNC_N = 0U;
    vlSelfRef.vga__DOT__clkgen_inst__DOT__count = 0U;
    vlSelfRef.vga__DOT__pclk = 0U;
    VL_READMEM_N(true, 24, 524288, 0, "resource/picture.hex"s
                 ,  &(vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vvga___024root___eval_initial__TOP(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_initial__TOP\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.VGA_SYNC_N = 0U;
    vlSelfRef.vga__DOT__clkgen_inst__DOT__count = 0U;
    vlSelfRef.vga__DOT__pclk = 0U;
    VL_READMEM_N(true, 24, 524288, 0, "resource/picture.hex"s
                 ,  &(vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vvga___024root___eval_final(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_final\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vvga___024root___eval_phase__stl(Vvga___024root* vlSelf);

VL_ATTR_COLD void Vvga___024root___eval_settle(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_settle\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vvga___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/wy89/ysyx-workbench/vga/vsrc/vga.v", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vvga___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vvga___024root___eval_triggers_vec__stl(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_triggers_vec__stl\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vvga___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vvga___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vvga___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vvga___024root___stl_sequent__TOP__0(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___stl_sequent__TOP__0\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ vga__DOT__valid;
    vga__DOT__valid = 0;
    CData/*0:0*/ vga__DOT__vga_ctrl_inst__DOT__h_valid;
    vga__DOT__vga_ctrl_inst__DOT__h_valid = 0;
    CData/*0:0*/ vga__DOT__vga_ctrl_inst__DOT__v_valid;
    vga__DOT__vga_ctrl_inst__DOT__v_valid = 0;
    // Body
    vlSelfRef.VGA_HSYNC = (0x0060U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt));
    vlSelfRef.VGA_VSYNC = (2U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt));
    vga__DOT__vga_ctrl_inst__DOT__h_valid = ((0x0090U 
                                              <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)) 
                                             & (0x0310U 
                                                > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
    vga__DOT__vga_ctrl_inst__DOT__v_valid = ((0x000cU 
                                              <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)) 
                                             & (0x01ecU 
                                                > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
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

VL_ATTR_COLD void Vvga___024root___eval_stl(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_stl\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vinline__stl_sequent__TOP__0_vga__DOT__valid;
    __Vinline__stl_sequent__TOP__0_vga__DOT__valid = 0;
    CData/*0:0*/ __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid;
    __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid = 0;
    CData/*0:0*/ __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid;
    __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid = 0;
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.VGA_HSYNC = (0x0060U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt));
        vlSelfRef.VGA_VSYNC = (2U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt));
        __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid 
            = ((0x0090U <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)) 
               & (0x0310U > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt)));
        __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid 
            = ((0x000cU <= (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)) 
               & (0x01ecU > (IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt)));
        __Vinline__stl_sequent__TOP__0_vga__DOT__valid 
            = (__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid 
               & __Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid);
        if (__Vinline__stl_sequent__TOP__0_vga__DOT__valid) {
            vlSelfRef.VGA_BLANK_N = 1U;
            vlSelfRef.VGA_R = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                              [(((__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                                   ? 
                                                  (0x000003ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                      - (IData)(0x0090U)))
                                                   : 0U) 
                                                 << 9U) 
                                                | (__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid
                                                    ? 
                                                   (0x000001ffU 
                                                    & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                       - (IData)(0x000cU)))
                                                    : 0U))] 
                                              >> 0x00000010U));
            vlSelfRef.VGA_G = (0x000000ffU & (vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                                              [(((__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                                   ? 
                                                  (0x000003ffU 
                                                   & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                                      - (IData)(0x0090U)))
                                                   : 0U) 
                                                 << 9U) 
                                                | (__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid
                                                    ? 
                                                   (0x000001ffU 
                                                    & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__y_cnt) 
                                                       - (IData)(0x000cU)))
                                                    : 0U))] 
                                              >> 8U));
            vlSelfRef.VGA_B = (0x000000ffU & vlSelfRef.vga__DOT__vmem_usage__DOT__vga_mem
                               [(((__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__h_valid
                                    ? (0x000003ffU 
                                       & ((IData)(vlSelfRef.vga__DOT__vga_ctrl_inst__DOT__x_cnt) 
                                          - (IData)(0x0090U)))
                                    : 0U) << 9U) | 
                                 (__Vinline__stl_sequent__TOP__0_vga__DOT__vga_ctrl_inst__DOT__v_valid
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

VL_ATTR_COLD bool Vvga___024root___eval_phase__stl(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___eval_phase__stl\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vvga___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vvga___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vvga___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vvga___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vvga___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vvga___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vvga___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge CLOCK_50)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge vga.pclk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vvga___024root___ctor_var_reset(Vvga___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga___024root___ctor_var_reset\n"); );
    Vvga__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelf->CLOCK_50 = 0;
    vlSelf->rst = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_SYNC_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->vga__DOT__pclk = 0;
    vlSelf->vga__DOT__clkgen_inst__DOT__count = 0;
    vlSelf->vga__DOT__vga_ctrl_inst__DOT__x_cnt = 0;
    vlSelf->vga__DOT__vga_ctrl_inst__DOT__y_cnt = 0;
    for (int __Vi0 = 0; __Vi0 < 524288; ++__Vi0) {
        vlSelf->vga__DOT__vmem_usage__DOT__vga_mem[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__CLOCK_50__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__vga__DOT__pclk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
