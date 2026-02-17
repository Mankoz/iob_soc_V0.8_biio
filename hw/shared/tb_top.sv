/*
 * Authored by: Robert Metchev / Raumzeit Technologies (robert@raumzeit.co)
 *
 * Copyright (C) 2026 Robert Metchev
 */
`timescale 1ps/1ps
module tb_top;

wire clk_in, reset_n, mcu_reset;
wire [5:0] SW;
wire [1:0] dat_sel;

tri1 sda;
tri1 scl;
tri1 logic sigchip_mccoy_int;

wire clk;
wire arst;

// copied from iob_soc_*_conf.vh
`define AXI_ID_W 4
`define AXI_ADDR_W 15
`define AXI_DATA_W 32
`define AXI_LEN_W 4
`define BOOTROM_MEM_HEXFILE ""
`define EXT_MEM_HEXFILE ""

iob_soc #(
      .AXI_ID_W           (`AXI_ID_W),
      .AXI_ADDR_W         (`AXI_ADDR_W),
      .AXI_DATA_W         (`AXI_DATA_W),
      .AXI_LEN_W          (`AXI_LEN_W),
      .BOOTROM_MEM_HEXFILE(`BOOTROM_MEM_HEXFILE),
      .EXT_MEM_HEXFILE    (`EXT_MEM_HEXFILE)
) dut (
  // clock / reset only
  .clk_i              (clk),
  .cke_i              (1'b1),
  .arst_i             (arst),

  // --------------------
  // Boot ROM
  // --------------------
  .bootrom_mem_clk_o  (),              // floating output
  .bootrom_mem_addr_o (),
  .bootrom_mem_en_o   (),
  .bootrom_mem_r_data_i (32'h0000_0013), // RISC-V NOP

  // --------------------
  // External memory
  // --------------------
  .ext_mem_clk_o      (),
  .ext_mem_r_data_i   (32'h0000_0013),
  .ext_mem_r_en_o     (),
  .ext_mem_r_addr_o   (),
  .ext_mem_w_data_o   (),
  .ext_mem_w_strb_o   (),
  .ext_mem_w_addr_o   (),

  // --------------------
  // RS232
  // --------------------
  .rs232_rxd_i        (1'b1),
  .rs232_txd_o        (),
  .rs232_rts_o        (),
  .rs232_cts_i        (1'b1)
);
endmodule
