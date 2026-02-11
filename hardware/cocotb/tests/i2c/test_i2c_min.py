import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


@cocotb.test()
async def i2c_min_smoke(dut):
    cocotb.start_soon(Clock(dut.clk, 10, units="ns").start())

    dut.rst.value = 1
    dut.cmd_valid.value = 0
    dut.cmd_addr7.value = 0x50
    dut.cmd_rw.value = 0
    dut.cmd_wdata.value = 0xA5
    dut.sda_i.value = 1
    await Timer(200, units="ns")
    dut.rst.value = 0

    # wait ready high
    for _ in range(2000):
        await RisingEdge(dut.clk)
        if int(dut.cmd_ready.value) == 1:
            break
    assert int(dut.cmd_ready.value) == 1

    # IMPORTANT: hold cmd_valid long enough to be sampled on the internal tick
    dut.cmd_valid.value = 1
    accepted = False
    for _ in range(20000):  # up to ~200us at 10ns clk
        await RisingEdge(dut.clk)
        if int(dut.cmd_ready.value) == 0:  # accepted command
            accepted = True
            break
    dut.cmd_valid.value = 0
    assert accepted, "command was never accepted (cmd_ready never dropped)"

    # observe scl toggles + done
    scl_toggles = 0
    last_scl = int(dut.scl_o.value)

    for _ in range(300000):
        await RisingEdge(dut.clk)
        scl = int(dut.scl_o.value)
        if scl != last_scl:
            scl_toggles += 1
            last_scl = scl
        if int(dut.done.value) == 1:
            break

    dut._log.info(f"scl toggles observed: {scl_toggles}, done={int(dut.done.value)}")
    assert int(dut.done.value) == 1, "did not finish transaction"
    assert scl_toggles > 5, "SCL did not toggle enough (I2C activity missing)"
