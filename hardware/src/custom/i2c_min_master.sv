module i2c_min_master (
  input  logic        clk,
  input  logic        rst,

  // simple command interface
  input  logic        cmd_valid,
  input  logic [6:0]  cmd_addr7,
  input  logic        cmd_rw,       // 0=write, 1=read (write only for now)
  input  logic [7:0]  cmd_wdata,
  output logic        cmd_ready,
  output logic        done,

  // I2C pins (open-drain style)
  output logic        scl_o,
  output logic        sda_o,
  input  logic        sda_i
);

  typedef enum logic [2:0] {IDLE, START1, START2, BIT, ACK, STOP1, STOP2, DONE} state_t;
  state_t st;

  logic [2:0] bitcnt;
  logic [7:0] sh;

  // clock divider to slow SCL (simple)
  logic [7:0] div;
  logic tick;

  always_ff @(posedge clk) begin
    if (rst) div <= '0;
    else     div <= div + 8'd1;
  end
  assign tick = (div == 8'h00);

  always_ff @(posedge clk) begin
    if (rst) begin
      st        <= IDLE;
      scl_o     <= 1'b1;
      sda_o     <= 1'b1;
      cmd_ready <= 1'b1;
      done      <= 1'b0;
      bitcnt    <= '0;
      sh        <= '0;
    end else begin
      done <= 1'b0;

      if (tick) begin
        unique case (st)
          IDLE: begin
            scl_o     <= 1'b1;
            sda_o     <= 1'b1;
            cmd_ready <= 1'b1;
            if (cmd_valid) begin
              cmd_ready <= 1'b0;
              sh        <= {cmd_addr7, 1'b0}; // write address byte
              bitcnt    <= 3'd7;
              st        <= START1;
            end
          end

          START1: begin
            // START: SDA low while SCL high
            scl_o <= 1'b1;
            sda_o <= 1'b0;
            st    <= START2;
          end

          START2: begin
            // pull SCL low to begin clocking
            scl_o <= 1'b0;
            st    <= BIT;
          end

          BIT: begin
            // drive data bit, then raise SCL
            sda_o <= sh[bitcnt];
            scl_o <= 1'b1;
            st    <= ACK;
          end

          ACK: begin
            // drop SCL, advance bit counter
            scl_o <= 1'b0;
            if (bitcnt == 0) begin
              // smoke: stop after address byte
              st <= STOP1;
            end else begin
              bitcnt <= bitcnt - 1'b1;
              st     <= BIT;
            end
          end

          STOP1: begin
            // ensure SDA low while SCL low, then raise SCL
            sda_o <= 1'b0;
            scl_o <= 1'b1;
            st    <= STOP2;
          end

          STOP2: begin
            // release SDA high while SCL high
            sda_o <= 1'b1;
            st    <= DONE;
          end

          DONE: begin
            done <= 1'b1;
            st   <= IDLE;
          end

          default: st <= IDLE;
        endcase
      end
    end
  end

endmodule
