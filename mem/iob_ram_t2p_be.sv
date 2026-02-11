`timescale 1ns / 1ps  //GM: need to move time sace to some global file. each RTL should not have any timescale

`define IOB_RAM_T2P_BE_HEXFILE "none"
`define IOB_RAM_T2P_BE_ADDR_W 0
`define IOB_RAM_T2P_BE_DATA_W 0
`define IOB_RAM_T2P_BE_COL_W 8
`define IOB_RAM_T2P_BE_NUM_COL DATA_W / COL_W
`define IOB_RAM_T2P_BE_MEM_NO_READ_ON_WRITE 0
`define IOB_RAM_T2P_BE_VERSION 16'h0081

module iob_ram_t2p_be #(
   parameter HEXFILE = `IOB_RAM_T2P_BE_HEXFILE,
   parameter ADDR_W = `IOB_RAM_T2P_BE_ADDR_W,
   parameter DATA_W = `IOB_RAM_T2P_BE_DATA_W,
   parameter COL_W = `IOB_RAM_T2P_BE_COL_W,  // Don't change this parameter value!
   parameter NUM_COL = `IOB_RAM_T2P_BE_NUM_COL,  // Don't change this parameter value!
   parameter MEM_NO_READ_ON_WRITE = `IOB_RAM_T2P_BE_MEM_NO_READ_ON_WRITE
) (
   // ram_t2p_be_s
   input                     clk_i,
   output logic [  DATA_W-1:0] r_data_o,
   input                     r_en_i,
   input      [  ADDR_W-1:0] r_addr_i,
   input      [  DATA_W-1:0] w_data_i,
   input      [DATA_W/8-1:0] w_strb_i,
   input      [  ADDR_W-1:0] w_addr_i
);



   logic [DATA_W-1:0] r_data_o_reg;
   assign r_data_o = r_data_o_reg;

   genvar i;
   generate
      if (MEM_NO_READ_ON_WRITE) begin : with_MEM_NO_READ_ON_WRITE  //GM this part of the code won't get executed
         localparam file_suffix = {"7", "6", "5", "4", "3", "2", "1", "0"};
         for (i = 0; i < NUM_COL; i = i + 1) begin : ram_col
            localparam mem_init_file_int = (HEXFILE != "none") ?
                {HEXFILE, "_", file_suffix[8*(i+1)-1-:8], ".hex"} : "none";

            iob_ram_t2p #(
               .HEXFILE(mem_init_file_int),
               .ADDR_W (ADDR_W),
               .DATA_W (COL_W)
            ) ram (
               .clk_i(clk_i),

               .w_en_i  (w_strb_i[i]),
               .w_addr_i(w_addr_i),
               .w_data_i(w_data_i[i*COL_W+:COL_W]),
               .r_en_i  (r_en_i),
               .r_addr_i(r_addr_i),
               .r_data_o(r_data_o_reg[i*COL_W+:COL_W])
            );
         end
      end else begin : not_MEM_NO_READ_ON_WRITE
         //this allows ISE 14.7 to work; do not remove
//GM: HEXFILE is none so INIT_RAM is 0
         localparam INIT_RAM = (HEXFILE != "none") ? 1 : 0; 
         localparam mem_init_file_int = {HEXFILE, ".hex"};

         // Declare the RAM
         logic [DATA_W-1:0] mem[(2**ADDR_W)-1:0] ; // GM mem is not initialized to all 0 

         // Initialize the RAM
         if (INIT_RAM) begin : mem_init
            initial $readmemh(mem_init_file_int, mem, 0, (2 ** ADDR_W) - 1);
         end

         //read port
         always_ff @(posedge clk_i) if (r_en_i) r_data_o_reg <= mem[r_addr_i];

         //write port
         integer i;
         always_ff @(posedge clk_i) begin //This memory is not getting reset to 0. 
            for (i = 0; i < NUM_COL; i = i + 1) begin
               if (w_strb_i[i]) begin
                  mem[w_addr_i][i*COL_W+:COL_W] <= w_data_i[i*COL_W+:COL_W];
               end
            end
         end
      end
   endgenerate




endmodule
