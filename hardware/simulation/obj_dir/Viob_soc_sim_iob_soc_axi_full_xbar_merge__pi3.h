// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Viob_soc_sim.h for the primary calling header

#ifndef VERILATED_VIOB_SOC_SIM_IOB_SOC_AXI_FULL_XBAR_MERGE__PI3_H_
#define VERILATED_VIOB_SOC_SIM_IOB_SOC_AXI_FULL_XBAR_MERGE__PI3_H_  // guard

#include "verilated.h"


class Viob_soc_sim__Syms;

class alignas(VL_CACHE_LINE_BYTES) Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk_i,0,0);
        VL_IN8(arst_i,0,0);
        VL_IN8(cke_i,0,0);
        VL_IN8(rst_i,0,0);
        VL_OUT8(m_axi_arprot_o,2,0);
        VL_OUT8(m_axi_arvalid_o,0,0);
        VL_IN8(m_axi_arready_i,0,0);
        VL_IN8(m_axi_rresp_i,1,0);
        VL_IN8(m_axi_rvalid_i,0,0);
        VL_OUT8(m_axi_rready_o,0,0);
        VL_OUT8(m_axi_arid_o,3,0);
        VL_OUT8(m_axi_arlen_o,7,0);
        VL_OUT8(m_axi_arsize_o,2,0);
        VL_OUT8(m_axi_arburst_o,1,0);
        VL_OUT8(m_axi_arlock_o,0,0);
        VL_OUT8(m_axi_arcache_o,3,0);
        VL_OUT8(m_axi_arqos_o,3,0);
        VL_IN8(m_axi_rid_i,3,0);
        VL_IN8(m_axi_rlast_i,0,0);
        VL_OUT8(m_axi_awprot_o,2,0);
        VL_OUT8(m_axi_awvalid_o,0,0);
        VL_IN8(m_axi_awready_i,0,0);
        VL_OUT8(m_axi_wstrb_o,3,0);
        VL_OUT8(m_axi_wvalid_o,0,0);
        VL_IN8(m_axi_wready_i,0,0);
        VL_IN8(m_axi_bresp_i,1,0);
        VL_IN8(m_axi_bvalid_i,0,0);
        VL_OUT8(m_axi_bready_o,0,0);
        VL_OUT8(m_axi_awid_o,3,0);
        VL_OUT8(m_axi_awlen_o,7,0);
        VL_OUT8(m_axi_awsize_o,2,0);
        VL_OUT8(m_axi_awburst_o,1,0);
        VL_OUT8(m_axi_awlock_o,0,0);
        VL_OUT8(m_axi_awcache_o,3,0);
        VL_OUT8(m_axi_awqos_o,3,0);
        VL_OUT8(m_axi_wlast_o,0,0);
        VL_IN8(m_axi_bid_i,3,0);
        VL_IN8(s0_axi_arprot_i,2,0);
        VL_IN8(s0_axi_arvalid_i,0,0);
        VL_OUT8(s0_axi_arready_o,0,0);
        VL_OUT8(s0_axi_rresp_o,1,0);
        VL_OUT8(s0_axi_rvalid_o,0,0);
        VL_IN8(s0_axi_rready_i,0,0);
        VL_IN8(s0_axi_arid_i,3,0);
        VL_IN8(s0_axi_arlen_i,7,0);
        VL_IN8(s0_axi_arsize_i,2,0);
        VL_IN8(s0_axi_arburst_i,1,0);
        VL_IN8(s0_axi_arlock_i,0,0);
        VL_IN8(s0_axi_arcache_i,3,0);
        VL_IN8(s0_axi_arqos_i,3,0);
        VL_OUT8(s0_axi_rid_o,3,0);
        VL_OUT8(s0_axi_rlast_o,0,0);
        VL_IN8(s0_axi_awprot_i,2,0);
        VL_IN8(s0_axi_awvalid_i,0,0);
        VL_OUT8(s0_axi_awready_o,0,0);
        VL_IN8(s0_axi_wstrb_i,3,0);
        VL_IN8(s0_axi_wvalid_i,0,0);
        VL_OUT8(s0_axi_wready_o,0,0);
        VL_OUT8(s0_axi_bresp_o,1,0);
        VL_OUT8(s0_axi_bvalid_o,0,0);
        VL_IN8(s0_axi_bready_i,0,0);
        VL_IN8(s0_axi_awid_i,3,0);
        VL_IN8(s0_axi_awlen_i,7,0);
        VL_IN8(s0_axi_awsize_i,2,0);
    };
    struct {
        VL_IN8(s0_axi_awburst_i,1,0);
        VL_IN8(s0_axi_awlock_i,0,0);
        VL_IN8(s0_axi_awcache_i,3,0);
        VL_IN8(s0_axi_awqos_i,3,0);
        VL_IN8(s0_axi_wlast_i,0,0);
        VL_OUT8(s0_axi_bid_o,3,0);
        VL_IN8(s1_axi_arprot_i,2,0);
        VL_IN8(s1_axi_arvalid_i,0,0);
        VL_OUT8(s1_axi_arready_o,0,0);
        VL_OUT8(s1_axi_rresp_o,1,0);
        VL_OUT8(s1_axi_rvalid_o,0,0);
        VL_IN8(s1_axi_rready_i,0,0);
        VL_IN8(s1_axi_arid_i,3,0);
        VL_IN8(s1_axi_arlen_i,7,0);
        VL_IN8(s1_axi_arsize_i,2,0);
        VL_IN8(s1_axi_arburst_i,1,0);
        VL_IN8(s1_axi_arlock_i,0,0);
        VL_IN8(s1_axi_arcache_i,3,0);
        VL_IN8(s1_axi_arqos_i,3,0);
        VL_OUT8(s1_axi_rid_o,3,0);
        VL_OUT8(s1_axi_rlast_o,0,0);
        VL_IN8(s1_axi_awprot_i,2,0);
        VL_IN8(s1_axi_awvalid_i,0,0);
        VL_OUT8(s1_axi_awready_o,0,0);
        VL_IN8(s1_axi_wstrb_i,3,0);
        VL_IN8(s1_axi_wvalid_i,0,0);
        VL_OUT8(s1_axi_wready_o,0,0);
        VL_OUT8(s1_axi_bresp_o,1,0);
        VL_OUT8(s1_axi_bvalid_o,0,0);
        VL_IN8(s1_axi_bready_i,0,0);
        VL_IN8(s1_axi_awid_i,3,0);
        VL_IN8(s1_axi_awlen_i,7,0);
        VL_IN8(s1_axi_awsize_i,2,0);
        VL_IN8(s1_axi_awburst_i,1,0);
        VL_IN8(s1_axi_awlock_i,0,0);
        VL_IN8(s1_axi_awcache_i,3,0);
        VL_IN8(s1_axi_awqos_i,3,0);
        VL_IN8(s1_axi_wlast_i,0,0);
        VL_OUT8(s1_axi_bid_o,3,0);
        CData/*0:0*/ __PVT__busy_read_reg_rst;
        CData/*0:0*/ __PVT__busy_read_reg_o;
        CData/*0:0*/ __PVT__active_transaction_read_reg_o;
        CData/*0:0*/ __PVT__read_sel;
        CData/*0:0*/ __PVT__read_sel_reg;
        CData/*0:0*/ __PVT__busy_write_reg_rst;
        CData/*0:0*/ __PVT__busy_write_reg_o;
        CData/*0:0*/ __PVT__active_transaction_write_reg_o;
        CData/*0:0*/ __PVT__data_burst_complete_write_reg_o;
        CData/*0:0*/ __PVT__write_sel;
        CData/*0:0*/ __PVT__write_sel_reg;
        CData/*1:0*/ __PVT__mux_axi_arvalid;
        CData/*0:0*/ __PVT__read_sel_prio_enc_o;
        CData/*0:0*/ __PVT__write_sel_prio_enc_o;
        CData/*0:0*/ __PVT__mux_axi_awvalid_o;
        CData/*0:0*/ __PVT__demux_axi_awready_i;
        CData/*0:0*/ __PVT__mux_axi_wvalid_o;
        CData/*0:0*/ __PVT__demux_axi_wready_i;
        CData/*7:0*/ __PVT__mux_axi_awid;
        CData/*0:0*/ __PVT__mux_axi_arvalid_o;
        CData/*0:0*/ __PVT__demux_axi_arready_i;
        CData/*1:0*/ __PVT__mux_axi_rready;
        CData/*7:0*/ __PVT__mux_axi_arid;
        CData/*0:0*/ __PVT__busy_read_reg_re__DOT__reg0__DOT__data_next;
        CData/*0:0*/ __PVT__active_transaction_read_reg_re__DOT__reg0__DOT__data_next;
    };
    struct {
        CData/*0:0*/ __PVT__busy_write_reg_re__DOT__reg0__DOT__data_next;
        CData/*0:0*/ __PVT__active_transaction_write_reg_re__DOT__reg0__DOT__data_next;
        CData/*0:0*/ __PVT__data_burst_complete_write_reg_re__DOT__reg0__DOT__data_next;
        VL_OUT(m_axi_araddr_o,28,0);
        VL_IN(m_axi_rdata_i,31,0);
        VL_OUT(m_axi_awaddr_o,28,0);
        VL_OUT(m_axi_wdata_o,31,0);
        VL_IN(s0_axi_araddr_i,27,0);
        VL_OUT(s0_axi_rdata_o,31,0);
        VL_IN(s0_axi_awaddr_i,27,0);
        VL_IN(s0_axi_wdata_i,31,0);
        VL_IN(s1_axi_araddr_i,27,0);
        VL_OUT(s1_axi_rdata_o,31,0);
        VL_IN(s1_axi_awaddr_i,27,0);
        VL_IN(s1_axi_wdata_i,31,0);
        QData/*57:0*/ __PVT__mux_axi_awaddr;
        QData/*57:0*/ __PVT__mux_axi_araddr;
    };

    // INTERNAL VARIABLES
    Viob_soc_sim__Syms* const vlSymsp;

    // CONSTRUCTORS
    Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3(Viob_soc_sim__Syms* symsp, const char* v__name);
    ~Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3();
    VL_UNCOPYABLE(Viob_soc_sim_iob_soc_axi_full_xbar_merge__pi3);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
