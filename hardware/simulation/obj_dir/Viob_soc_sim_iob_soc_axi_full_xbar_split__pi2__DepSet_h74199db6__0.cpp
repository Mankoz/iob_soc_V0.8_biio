// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2.h"

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0\n"); );
    // Body
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_rst)) 
           & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.instr_req_o) 
               & (IData)(vlSelf->s_axi_arready_o)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}

extern const VlUnpacked<CData/*0:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h9465927d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Viob_soc_sim__ConstPool__TABLE_hcc246642_0;

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
    if (vlSymsp->TOP.arst_i) {
        vlSelf->__PVT__read_sel_reg = 0U;
        vlSelf->__PVT__active_transaction_read_reg_o = 0U;
    } else if (vlSymsp->TOP.cke_i) {
        vlSelf->__PVT__read_sel_reg = ((IData)(vlSymsp->TOP.arst_i)
                                        ? 0U : (IData)(vlSelf->__PVT__read_sel));
        vlSelf->__PVT__active_transaction_read_reg_o 
            = vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
    }
    __Vtableidx8 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rlast_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rlast_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rlast_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rlast_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx8];
    __Vtableidx6 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rresp_o) 
                     << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rresp_o) 
                                << 4U) | (IData)(vlSelf->__PVT__read_sel_reg)));
    vlSelf->s_axi_rresp_o = Viob_soc_sim__ConstPool__TABLE_hcc246642_0
        [__Vtableidx6];
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __PVT__mux_axi_rdata;
    VL_ZERO_W(96, __PVT__mux_axi_rdata);
    // Body
    __PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rdata_o;
    __PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))));
    __PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))) 
                                        >> 0x20U));
    vlSelf->s_axi_rdata_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[0U];
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[1U];
    }
    if ((2U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[2U];
    }
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1\n"); );
    // Init
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    // Body
    __Vtableidx7 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rvalid_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rvalid_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rvalid_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx7];
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__1\n"); );
    // Init
    CData/*0:0*/ __PVT__demux_axi_arvalid_i;
    __PVT__demux_axi_arvalid_i = 0;
    // Body
    __PVT__demux_axi_arvalid_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                  & (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.instr_req_o));
    vlSelf->__PVT__read_sel = (3U & ((IData)(vlSelf->__PVT__active_transaction_read_reg_o)
                                      ? (IData)(vlSelf->__PVT__read_sel_reg)
                                      : (vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_d 
                                         >> 0x1eU)));
    vlSelf->m0_axi_arvalid_o = ((0U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
    vlSelf->m1_axi_arvalid_o = ((1U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
    vlSelf->m2_axi_arvalid_o = ((2U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__2\n"); );
    // Init
    CData/*0:0*/ __PVT__mux_axi_arready_o;
    __PVT__mux_axi_arready_o = 0;
    CData/*4:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx5 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_arready_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_arready_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_arready_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel))));
    __PVT__mux_axi_arready_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx5];
    vlSelf->s_axi_arready_o = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                               & (IData)(__PVT__mux_axi_arready_o));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_rst)) 
           & (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.instr_req_o) 
               & (IData)(vlSelf->s_axi_arready_o)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___ico_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0\n"); );
    // Body
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_write_reg_rst 
        = ((IData)(vlSelf->s_axi_bvalid_o) | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid) 
               & (IData)(vlSelf->s_axi_arready_o)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid) 
               & ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                  & (IData)(vlSelf->__PVT__mux_axi_awready_o))) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid) 
               & (IData)(vlSelf->s_axi_wready_o)) || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx11;
    __Vtableidx11 = 0;
    CData/*4:0*/ __Vtableidx12;
    __Vtableidx12 = 0;
    CData/*7:0*/ __Vtableidx14;
    __Vtableidx14 = 0;
    CData/*4:0*/ __Vtableidx15;
    __Vtableidx15 = 0;
    CData/*4:0*/ __Vtableidx16;
    __Vtableidx16 = 0;
    // Body
    if (vlSymsp->TOP.arst_i) {
        vlSelf->__PVT__data_burst_complete_write_reg_o = 0U;
        vlSelf->__PVT__active_transaction_write_reg_o = 0U;
        vlSelf->__PVT__active_transaction_read_reg_o = 0U;
        vlSelf->__PVT__read_sel_reg = 0U;
        vlSelf->__PVT__write_sel_reg = 0U;
    } else if (vlSymsp->TOP.cke_i) {
        vlSelf->__PVT__data_burst_complete_write_reg_o 
            = vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__active_transaction_write_reg_o 
            = vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next;
        vlSelf->__PVT__active_transaction_read_reg_o 
            = vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
        if (vlSymsp->TOP.arst_i) {
            vlSelf->__PVT__read_sel_reg = 0U;
            vlSelf->__PVT__write_sel_reg = 0U;
        } else {
            vlSelf->__PVT__read_sel_reg = vlSelf->__PVT__read_sel;
            vlSelf->__PVT__write_sel_reg = vlSelf->__PVT__write_sel;
        }
    }
    __Vtableidx16 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rlast_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rlast_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rlast_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rlast_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx16];
    __Vtableidx14 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__read_sel_reg)));
    vlSelf->s_axi_rresp_o = Viob_soc_sim__ConstPool__TABLE_hcc246642_0
        [__Vtableidx14];
    __Vtableidx15 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx15];
    __Vtableidx11 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__write_sel_reg)));
    vlSelf->s_axi_bresp_o = Viob_soc_sim__ConstPool__TABLE_hcc246642_0
        [__Vtableidx11];
    __Vtableidx12 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_bvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__write_sel_reg))));
    vlSelf->s_axi_bvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx12];
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_write_reg_rst 
        = ((IData)(vlSelf->s_axi_bvalid_o) | (IData)(vlSymsp->TOP.arst_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __PVT__mux_axi_rdata;
    VL_ZERO_W(96, __PVT__mux_axi_rdata);
    // Body
    __PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rdata_o;
    __PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))));
    __PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))) 
                                        >> 0x20U));
    vlSelf->s_axi_rdata_o = 0U;
    if ((0U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[0U];
    }
    if ((1U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[1U];
    }
    if ((2U == (IData)(vlSelf->__PVT__read_sel_reg))) {
        vlSelf->s_axi_rdata_o = __PVT__mux_axi_rdata[2U];
    }
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__1\n"); );
    // Body
    vlSelf->__PVT__read_sel = (3U & ((IData)(vlSelf->__PVT__active_transaction_read_reg_o)
                                      ? (IData)(vlSelf->__PVT__read_sel_reg)
                                      : (IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 0x1fU))));
    vlSelf->__PVT__write_sel = (3U & ((IData)(vlSelf->__PVT__active_transaction_write_reg_o)
                                       ? (IData)(vlSelf->__PVT__write_sel_reg)
                                       : (IData)((vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__ex_block_i__DOT__alu_adder_result_ext 
                                                  >> 0x1fU))));
    if ((0U == (IData)(vlSelf->__PVT__write_sel))) {
        vlSelf->m0_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata;
        vlSelf->m0_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be;
    } else {
        vlSelf->m0_axi_wdata_o = 0U;
        vlSelf->m0_axi_wstrb_o = 0U;
    }
    vlSelf->m1_axi_wstrb_o = ((1U == (IData)(vlSelf->__PVT__write_sel))
                               ? (IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be)
                               : 0U);
    if ((2U == (IData)(vlSelf->__PVT__write_sel))) {
        vlSelf->m2_axi_wdata_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_wdata;
        vlSelf->m2_axi_wstrb_o = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu__DOT__u_top__DOT__u_ibex_core.__PVT__load_store_unit_i__DOT__data_be;
    } else {
        vlSelf->m2_axi_wdata_o = 0U;
        vlSelf->m2_axi_wstrb_o = 0U;
    }
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__2\n"); );
    // Init
    CData/*0:0*/ __PVT__demux_axi_awvalid_i;
    __PVT__demux_axi_awvalid_i = 0;
    CData/*0:0*/ __PVT__demux_axi_wvalid_i;
    __PVT__demux_axi_wvalid_i = 0;
    CData/*0:0*/ __PVT__demux_axi_arvalid_i;
    __PVT__demux_axi_arvalid_i = 0;
    // Body
    __PVT__demux_axi_arvalid_i = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                                  & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid));
    __PVT__demux_axi_wvalid_i = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                                 & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid));
    __PVT__demux_axi_awvalid_i = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                                  & (IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid));
    vlSelf->m0_axi_arvalid_o = ((0U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
    vlSelf->m1_axi_arvalid_o = ((1U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
    vlSelf->m2_axi_arvalid_o = ((2U == (IData)(vlSelf->__PVT__read_sel)) 
                                & (IData)(__PVT__demux_axi_arvalid_i));
    vlSelf->m0_axi_wvalid_o = ((0U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(__PVT__demux_axi_wvalid_i));
    vlSelf->m1_axi_wvalid_o = ((1U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(__PVT__demux_axi_wvalid_i));
    vlSelf->m2_axi_wvalid_o = ((2U == (IData)(vlSelf->__PVT__write_sel)) 
                               & (IData)(__PVT__demux_axi_wvalid_i));
    vlSelf->m0_axi_awvalid_o = ((0U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(__PVT__demux_axi_awvalid_i));
    vlSelf->m1_axi_awvalid_o = ((1U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(__PVT__demux_axi_awvalid_i));
    vlSelf->m2_axi_awvalid_o = ((2U == (IData)(vlSelf->__PVT__write_sel)) 
                                & (IData)(__PVT__demux_axi_awvalid_i));
}

VL_INLINE_OPT void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__3(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___nba_comb__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__3\n"); );
    // Init
    CData/*0:0*/ __PVT__mux_axi_wready_o;
    __PVT__mux_axi_wready_o = 0;
    CData/*0:0*/ __PVT__mux_axi_arready_o;
    __PVT__mux_axi_arready_o = 0;
    CData/*4:0*/ __Vtableidx9;
    __Vtableidx9 = 0;
    CData/*4:0*/ __Vtableidx10;
    __Vtableidx10 = 0;
    CData/*4:0*/ __Vtableidx13;
    __Vtableidx13 = 0;
    // Body
    __Vtableidx9 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_awready_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_awready_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_awready_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__write_sel))));
    vlSelf->__PVT__mux_axi_awready_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx9];
    __Vtableidx10 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_wready_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_wready_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_wready_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__write_sel))));
    __PVT__mux_axi_wready_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx10];
    __Vtableidx13 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_arready_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_arready_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_arready_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel))));
    __PVT__mux_axi_arready_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx13];
    vlSelf->__PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid) 
               & ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_o)) 
                  & (IData)(vlSelf->__PVT__mux_axi_awready_o))) 
              || (IData)(vlSelf->__PVT__active_transaction_write_reg_o)));
    vlSelf->s_axi_wready_o = ((~ (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)) 
                              & (IData)(__PVT__mux_axi_wready_o));
    vlSelf->s_axi_arready_o = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_o)) 
                               & (IData)(__PVT__mux_axi_arready_o));
    vlSelf->__PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_write_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_awvalid) 
               & (IData)(vlSelf->s_axi_wready_o)) || (IData)(vlSelf->__PVT__data_burst_complete_write_reg_o)));
    vlSelf->__PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next 
        = ((~ (IData)(vlSelf->__PVT__active_transaction_read_reg_rst)) 
           & (((IData)(vlSymsp->TOP.iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__cpu_d_axi_arvalid) 
               & (IData)(vlSelf->s_axi_arready_o)) 
              || (IData)(vlSelf->__PVT__active_transaction_read_reg_o)));
}
