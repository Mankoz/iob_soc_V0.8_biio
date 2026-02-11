module my_module (
    input  logic        clk_i,
    input  logic        rst_ni,
    output logic [31:0] counter_o
);
  always_ff @(posedge clk_i or negedge rst_ni) begin
    if (!rst_ni)
      counter_o <= 32'd0;
    else
      counter_o <= counter_o + 1;
  end
endmodule