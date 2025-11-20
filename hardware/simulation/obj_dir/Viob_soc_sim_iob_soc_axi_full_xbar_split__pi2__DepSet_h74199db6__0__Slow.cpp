// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Viob_soc_sim.h for the primary calling header

#include "Viob_soc_sim__pch.h"
#include "Viob_soc_sim__Syms.h"
#include "Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2.h"

extern const VlUnpacked<CData/*0:0*/, 32> Viob_soc_sim__ConstPool__TABLE_h9465927d_0;
extern const VlUnpacked<CData/*1:0*/, 256> Viob_soc_sim__ConstPool__TABLE_hcc246642_0;

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_0__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __PVT__mux_axi_rdata;
    VL_ZERO_W(96, __PVT__mux_axi_rdata);
    CData/*7:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*4:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*4:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    // Body
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
    __PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rdata_o;
    __PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))));
    __PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rdata_o)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rdata_o))) 
                                        >> 0x20U));
    __Vtableidx7 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s0_axi_rvalid_o) 
                     << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s0_axi_rvalid_o) 
                                << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s0_axi_rvalid_o) 
                                           << 2U) | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx7];
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
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
}

VL_ATTR_COLD void Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0(Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Viob_soc_sim__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Viob_soc_sim_iob_soc_axi_full_xbar_split__pi2___stl_sequent__TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_split_1__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __PVT__mux_axi_rdata;
    VL_ZERO_W(96, __PVT__mux_axi_rdata);
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
    __Vtableidx16 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rlast_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rlast_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rlast_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rlast_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx16];
    __PVT__mux_axi_rdata[0U] = vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rdata_o;
    __PVT__mux_axi_rdata[1U] = (IData)((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))));
    __PVT__mux_axi_rdata[2U] = (IData)(((((QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rdata_o)) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rdata_o))) 
                                        >> 0x20U));
    __Vtableidx14 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__read_sel_reg)));
    vlSelf->s_axi_rresp_o = Viob_soc_sim__ConstPool__TABLE_hcc246642_0
        [__Vtableidx14];
    __Vtableidx11 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bresp_o) 
                      << 6U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bresp_o) 
                                 << 4U) | (IData)(vlSelf->__PVT__write_sel_reg)));
    vlSelf->s_axi_bresp_o = Viob_soc_sim__ConstPool__TABLE_hcc246642_0
        [__Vtableidx11];
    __Vtableidx15 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_rvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_rvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_rvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__read_sel_reg))));
    vlSelf->s_axi_rvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx15];
    __Vtableidx12 = (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_2.s1_axi_bvalid_o) 
                      << 4U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_1.s1_axi_bvalid_o) 
                                 << 3U) | (((IData)(vlSymsp->TOP__iob_soc_sim__DOT__iob_soc_memwrapper__DOT__iob_core_inst__DOT__iob_axi_full_xbar__DOT__iob_axi_merge_0.s1_axi_bvalid_o) 
                                            << 2U) 
                                           | (IData)(vlSelf->__PVT__write_sel_reg))));
    vlSelf->s_axi_bvalid_o = Viob_soc_sim__ConstPool__TABLE_h9465927d_0
        [__Vtableidx12];
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
    vlSelf->__PVT__active_transaction_read_reg_rst 
        = (((IData)(vlSelf->s_axi_rlast_o) & (IData)(vlSelf->s_axi_rvalid_o)) 
           | (IData)(vlSymsp->TOP.arst_i));
    vlSelf->__PVT__active_transaction_write_reg_rst 
        = ((IData)(vlSelf->s_axi_bvalid_o) | (IData)(vlSymsp->TOP.arst_i));
}
