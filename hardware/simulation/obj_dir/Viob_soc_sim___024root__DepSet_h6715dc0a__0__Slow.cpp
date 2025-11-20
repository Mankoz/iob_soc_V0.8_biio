// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim___024root.h"

VL_ATTR_COLD void Viob_soc_sim___024root___eval_static(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_static\n"); );
}

VL_ATTR_COLD void Viob_soc_sim___024root___eval_initial__TOP(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    VlWide<5>/*159:0*/ __Vtemp_2;
    // Body
    __Vtemp_1[0U] = 0x2e686578U;
    __Vtemp_1[1U] = 0x74726f6dU;
    __Vtemp_1[2U] = 0x5f626f6fU;
    __Vtemp_1[3U] = 0x5f736f63U;
    __Vtemp_1[4U] = 0x696f62U;
    VL_READMEM_N(true, 32, 1024, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_mem__DOT__rom)
                 , 0U, 0x3ffU);
    __Vtemp_2[0U] = 0x2e686578U;
    __Vtemp_2[1U] = 0x77617265U;
    __Vtemp_2[2U] = 0x6669726dU;
    __Vtemp_2[3U] = 0x736f635fU;
    __Vtemp_2[4U] = 0x696f625fU;
    VL_READMEM_N(true, 32, 8192, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_2)
                 ,  &(vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem)
                 , 0U, 0x1fffU);
}

VL_ATTR_COLD void Viob_soc_sim___024root___eval_final(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__stl(Viob_soc_sim___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Viob_soc_sim___024root___eval_phase__stl(Viob_soc_sim___024root* vlSelf);

VL_ATTR_COLD void Viob_soc_sim___024root___eval_settle(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            Viob_soc_sim___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("src/iob_soc_sim.v", 4, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Viob_soc_sim___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__stl(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Viob_soc_sim___024root___eval_triggers__stl(Viob_soc_sim___024root* vlSelf);
VL_ATTR_COLD void Viob_soc_sim___024root___eval_stl(Viob_soc_sim___024root* vlSelf);

VL_ATTR_COLD bool Viob_soc_sim___024root___eval_phase__stl(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    Viob_soc_sim___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        Viob_soc_sim___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__ico(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__act(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge arst_i or posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge arst_i or posedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(posedge clk_i)\n");
    }
    if ((8ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 3 is active: @(negedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 4 is active: @(posedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk or negedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.gen_lockstep.u_ibex_lockstep.u_shadow_core.rst_ni)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Viob_soc_sim___024root___dump_triggers__nba(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge arst_i or posedge clk_i)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge arst_i or posedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(posedge clk_i)\n");
    }
    if ((8ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 3 is active: @(negedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk)\n");
    }
    if ((0x10ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 4 is active: @(posedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.clk or negedge iob_soc_sim.iob_soc_memwrapper.iob_core_inst.cpu.u_top.gen_lockstep.u_ibex_lockstep.u_shadow_core.rst_ni)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Viob_soc_sim___024root___ctor_var_reset(Viob_soc_sim___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Viob_soc_sim___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->cke_i = VL_RAND_RESET_I(1);
    vlSelf->arst_i = VL_RAND_RESET_I(1);
    vlSelf->iob_valid_i = VL_RAND_RESET_I(1);
    vlSelf->iob_addr_i = VL_RAND_RESET_I(3);
    vlSelf->iob_wdata_i = VL_RAND_RESET_I(32);
    vlSelf->iob_wstrb_i = VL_RAND_RESET_I(4);
    vlSelf->iob_rvalid_o = VL_RAND_RESET_I(1);
    vlSelf->iob_rdata_o = VL_RAND_RESET_I(32);
    vlSelf->iob_ready_o = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__rs232_rts = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__rs232_cts = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_r_data = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_w_strb = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_valid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_addr = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_iob_ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__clint_cbus_iob_ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__plic_cbus_iob_ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT____Vcellout__g_clock_en_secure__DOT__u_prim_core_busy_flop__q_o = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_gnt_local = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__instr_err_local = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_gnt_local = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_rvalid_local = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__data_err_local = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__core_clock_gate_i__DOT__gen_generic__DOT__u_impl_generic__DOT__en_latch = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__rf_reg[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__we_a_dec = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__1__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__2__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__3__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__4__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__5__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__6__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__7__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__8__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__9__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__10__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__11__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__12__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__13__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__14__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__15__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__16__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__17__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__18__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__19__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__20__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__21__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__22__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__23__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__24__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__25__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__26__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__27__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__28__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__29__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__30__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_rf_flops__BRA__31__KET____DOT__rf_reg_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__g_dummy_r0__DOT__rf_r0_q = VL_RAND_RESET_Q(39);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_a = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT__gen_rdata_mux_check__DOT__raddr_onehot_b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_a_mux__in_i[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_regfile_ff__DOT__register_file_i__DOT____Vcellinp__gen_rdata_mux_check__DOT__u_rdata_b_mux__in_i[__Vi0] = VL_RAND_RESET_Q(39);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vcellout__u_prim_rst_shadow_set_flop__q_o = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(346, vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__shadow_inputs_q);
    VL_RAND_RESET_W(173, vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT____Vlvbound_h2e78b70d__0);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_rst_shadow_cnt__DOT____Vcellinp__gen_cnts__BRA__0__KET____DOT__u_cnt_flop__d_i = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_state_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_state_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_reg = VL_RAND_RESET_I(15);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_addr_next = VL_RAND_RESET_I(15);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_count_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__read_burst_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_reg = VL_RAND_RESET_I(15);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_addr_next = VL_RAND_RESET_I(15);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_count_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__write_burst_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__internal_memory__DOT__axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_rvalid_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__rom_ren_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_valid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_wstrb = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__state_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_iob_addr_reg = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rvalid_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__rdata_nxt = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__ready_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_q = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_state_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_reg = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_addr_next = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_burst_active_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__w_first_transfer_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bresp_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_reg = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awaddr_next = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_awvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wstrb_next = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_wvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_bready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_state_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_reg = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_addr_next = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__r_burst_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rresp_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_reg = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_araddr_next = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_arvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__m_axil_rready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h70d38a08__2 = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT____VdfgExtracted_h877464df__1 = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(13);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__bootrom__DOT__iob_csrs__DOT__iob_axi2iob_coverter__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rvalid_q = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_rdata_q = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_q = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_state_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_reg = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_addr_next = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_burst_active_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__w_first_transfer_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_awready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_wready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bresp_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_bvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_reg = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awaddr_next = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_awvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_reg = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wdata_next = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_reg = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wstrb_next = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_wvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_bready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_state_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_reg = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_addr_next = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_reg = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_next = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__r_burst_size_next = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_arready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_reg = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rdata_next = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rresp_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rlast_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__s_axi_rvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_reg = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_araddr_next = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_arvalid_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_reg = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__m_axil_rready_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h70d38a08__0 = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT____VdfgExtracted_h877464df__0 = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_awaddr__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(28);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_rvalid__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__periphs_axi2iob__DOT__iob_reg_bvalid__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_pbus_split__DOT__sel_reg_re__DOT__reg0__DOT__data_next = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__softreset_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__div_wr = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txdata_wen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__txready_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxready_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rdata_rd = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_rvalid_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__rxdata_ren_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__state_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_iob_addr_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rvalid_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rdata_nxt = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__ready_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__div_datareg__DOT__data_int = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_data_int = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pc = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_pattern = VL_RAND_RESET_I(10);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_bitcnt = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pc = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_bitcnt = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__rx_pattern = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__reset_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__enable_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__sample_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__time_now = VL_RAND_RESET_Q(64);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__state_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_iob_addr_reg = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rvalid_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__rdata_nxt = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__ready_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__reset_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__enable_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_csrs__DOT__sample_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter = VL_RAND_RESET_Q(64);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_cnt__DOT__reg0__DOT__reg0__DOT__data_next = VL_RAND_RESET_Q(64);
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__TIMER0__DOT__iob_timer_core_inst__DOT__time_counter_reg__DOT__reg0__DOT__data_next = VL_RAND_RESET_Q(64);
    for (int __Vi0 = 0; __Vi0 < 1024; ++__Vi0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__bootrom_mem_mem__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__r_data_o_reg = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8192; ++__Vi0) {
        vlSelf->iob_soc_sim__DOT__iob_soc_memwrapper__DOT__ext_mem_mem__DOT__not_MEM_NO_READ_ON_WRITE__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__softreset_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__div_wr = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txdata_wen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxen_wr = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__txready_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxready_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rdata_rd = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_rvalid_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__rxdata_ren_rd = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__state_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_iob_addr_reg = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rvalid_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rdata_nxt = VL_RAND_RESET_I(32);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__ready_nxt = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__byte_offset = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT____VdfgTmp_hfa8738df__0 = 0;
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__internal_addr_reg__DOT__data_int = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__softreset_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__div_datareg__DOT__data_int = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__txen_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_csrs__DOT__rxen_datareg__DOT__data_int = VL_RAND_RESET_I(1);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_data_int = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pc = VL_RAND_RESET_I(2);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_pattern = VL_RAND_RESET_I(10);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_bitcnt = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__tx_cyclecnt = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pc = VL_RAND_RESET_I(3);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_cyclecnt = VL_RAND_RESET_I(16);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_bitcnt = VL_RAND_RESET_I(4);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__rx_pattern = VL_RAND_RESET_I(8);
    vlSelf->iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__txdata_reg__DOT__data_int = VL_RAND_RESET_I(8);
    vlSelf->__Vdly__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__UART0__DOT__iob_uart_core_inst__DOT__cts_int = VL_RAND_RESET_I(2);
    vlSelf->__Vdly__iob_soc_sim__DOT__uart_tb__DOT__iob_uart_core_inst__DOT__cts_int = VL_RAND_RESET_I(2);
    vlSelf->__Vtrigprevexpr___TOP__arst_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clk_i__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__gen_lockstep__DOT__u_ibex_lockstep__DOT__u_shadow_core__rst_ni__0 = VL_RAND_RESET_I(1);
}
