// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Viob_soc_sim__pch.h"

//============================================================
// Constructors

Viob_soc_sim::Viob_soc_sim(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Viob_soc_sim__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , arst_i{vlSymsp->TOP.arst_i}
    , cke_i{vlSymsp->TOP.cke_i}
    , iob_valid_i{vlSymsp->TOP.iob_valid_i}
    , iob_addr_i{vlSymsp->TOP.iob_addr_i}
    , iob_wstrb_i{vlSymsp->TOP.iob_wstrb_i}
    , iob_rvalid_o{vlSymsp->TOP.iob_rvalid_o}
    , iob_ready_o{vlSymsp->TOP.iob_ready_o}
    , iob_wdata_i{vlSymsp->TOP.iob_wdata_i}
    , iob_rdata_o{vlSymsp->TOP.iob_rdata_o}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_a_mux}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__u_rdata_b_mux}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1}
    , __PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2{vlSymsp->TOP.__PVT__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Viob_soc_sim::Viob_soc_sim(const char* _vcname__)
    : Viob_soc_sim(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Viob_soc_sim::~Viob_soc_sim() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Viob_soc_sim___024root___eval_debug_assertions(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG
void Viob_soc_sim___024root___eval_static(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___eval_initial(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___eval_settle(Viob_soc_sim___024root* vlSelf);
void Viob_soc_sim___024root___eval(Viob_soc_sim___024root* vlSelf);

void Viob_soc_sim::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Viob_soc_sim::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Viob_soc_sim___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Viob_soc_sim___024root___eval_static(&(vlSymsp->TOP));
        Viob_soc_sim___024root___eval_initial(&(vlSymsp->TOP));
        Viob_soc_sim___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Viob_soc_sim___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Viob_soc_sim::eventsPending() { return false; }

uint64_t Viob_soc_sim::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Viob_soc_sim::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Viob_soc_sim___024root___eval_final(Viob_soc_sim___024root* vlSelf);

VL_ATTR_COLD void Viob_soc_sim::final() {
    Viob_soc_sim___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Viob_soc_sim::hierName() const { return vlSymsp->name(); }
const char* Viob_soc_sim::modelName() const { return "Viob_soc_sim"; }
unsigned Viob_soc_sim::threads() const { return 1; }
void Viob_soc_sim::prepareClone() const { contextp()->prepareClone(); }
void Viob_soc_sim::atClone() const {
    contextp()->threadPoolpOnClone();
}

//============================================================
// Trace configuration

VL_ATTR_COLD void Viob_soc_sim::trace(VerilatedVcdC* tfp, int levels, int options) {
    vl_fatal(__FILE__, __LINE__, __FILE__,"'Viob_soc_sim::trace()' called on model that was Verilated without --trace option");
}
