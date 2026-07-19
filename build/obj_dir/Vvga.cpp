// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvga__pch.h"

//============================================================
// Constructors

Vvga::Vvga(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vvga__Syms(contextp(), _vcname__, this)}
    , CLOCK_50{vlSymsp->TOP.CLOCK_50}
    , rst{vlSymsp->TOP.rst}
    , VGA_HSYNC{vlSymsp->TOP.VGA_HSYNC}
    , VGA_VSYNC{vlSymsp->TOP.VGA_VSYNC}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_SYNC_N{vlSymsp->TOP.VGA_SYNC_N}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vvga::Vvga(const char* _vcname__)
    : Vvga(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vvga::~Vvga() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vvga___024root___eval_debug_assertions(Vvga___024root* vlSelf);
#endif  // VL_DEBUG
void Vvga___024root___eval_static(Vvga___024root* vlSelf);
void Vvga___024root___eval_initial(Vvga___024root* vlSelf);
void Vvga___024root___eval_settle(Vvga___024root* vlSelf);
void Vvga___024root___eval(Vvga___024root* vlSelf);

void Vvga::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvga::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvga___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vvga___024root___eval_static(&(vlSymsp->TOP));
        Vvga___024root___eval_initial(&(vlSymsp->TOP));
        Vvga___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vvga___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vvga::eventsPending() { return false; }

uint64_t Vvga::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vvga::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vvga___024root___eval_final(Vvga___024root* vlSelf);

VL_ATTR_COLD void Vvga::final() {
    contextp()->executingFinal(true);
    Vvga___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vvga::hierName() const { return vlSymsp->name(); }
const char* Vvga::modelName() const { return "Vvga"; }
unsigned Vvga::threads() const { return 1; }
void Vvga::prepareClone() const { contextp()->prepareClone(); }
void Vvga::atClone() const {
    contextp()->threadPoolpOnClone();
}
