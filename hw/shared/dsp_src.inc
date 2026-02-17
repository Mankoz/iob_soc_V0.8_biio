# Top
VERILOG_FILES += \
        $(RTL_DIR)/chip_top.sv

# DSP
VERILOG_FILES += \
        $(RTL_DIR)/dsp/biquad_df2t_1mul_1add_q31.sv \
        $(RTL_DIR)/dsp/dsp_left_biquad_seqncr.sv \
        $(RTL_DIR)/dsp/dsp_left_biquads.sv \
        $(RTL_DIR)/dsp/dsp_left_qc.sv \
        $(RTL_DIR)/dsp/dsp_left.sv

# i2c
VERILOG_FILES += \
        $(RZ_RTL_DIR)/i2c/rz_i2c_master.sv \
        $(RZ_RTL_DIR)/i2c/cycle_timer.sv \

# Other stuff
VERILOG_FILES += \
        $(RTL_DIR)/sampfetcher/sampfetcher3.sv \
        $(RTL_DIR)/featext/featext.sv \
        $(RTL_DIR)/featext/featext_util_funcs.sv \
        $(RTL_DIR)/featext/featext_stream_pipe.sv \
        $(RTL_DIR)/filteng/filteng_v4.sv \
        $(RTL_DIR)/filteng/fir_filt_mr.sv \
        $(RTL_DIR)/filteng/derivative.sv \
        $(RTL_DIR)/serout/serout.sv \

# FIFOs
VERILOG_FILES += \
        $(RTL_DIR)/fifo/fifo.sv \
        $(RZ_RTL_DIR)/fifo/axis_data_afifo_0.sv \
        $(RZ_RTL_DIR)/fifo/afifo.v \
        $(RZ_RTL_DIR)/fifo/afifo_1d.sv \
        $(RZ_RTL_DIR)/fifo/sfifo.sv \
        $(RZ_RTL_DIR)/fifo/pipe.sv \

# Bram
# inferrable RAM models
VERILOG_FILES += \
        $(RTL_DIR)/filteng/xilinx_bram.sv \
        $(RZ_RTL_DIR)/bram/dp_ram_be.sv \
        $(RZ_RTL_DIR)/bram/dp_ram.sv

# Misc
VERILOG_FILES += \
        $(RZ_RTL_DIR)/sync/reset_sync.sv \

# Xilinx primitives      
VERILOG_SOURCES += \
        $(XILINX_VIVADO)/data/verilog/src/glbl.v \
        $(XILINX_UNISIMS)/IOBUF.v \
        $(XILINX_UNISIMS)/IBUF.v \

VERILOG_FILES += \
        $(COCOTB_SHARED_DIR)/tb_top.sv


VERILOG_SOURCES += $(realpath $(VERILOG_FILES))
VERILOG_INCLUDE_DIRS += \
        . \
        $(RTL_DIR)/dsp \
        $(RTL_DIR) $(RTL_DIR)/junque $(RTL_DIR)/featext
