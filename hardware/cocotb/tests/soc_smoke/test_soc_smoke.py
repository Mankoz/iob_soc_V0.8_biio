import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, Timer


@cocotb.test()
async def soc_smoke(dut):
    # 100MHz clock
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())

    # Drive required inputs
    dut.cke_i.value = 1
    dut.rs232_rxd_i.value = 1   # UART RX idle
    dut.rs232_cts_i.value = 1   # assume "clear to send" (if active-low in your design, it won't break smoke)

    # Avoid X from external memories
    dut.bootrom_mem_r_data_i.value = 0
    dut.ext_mem_r_data_i.value = 0

    # Reset (arst_i is used as rst_i in many modules -> treat as active-high)
    dut.arst_i.value = 1
    await Timer(200, units="ns")
    dut.arst_i.value = 0

    # Run some cycles; watch UART TX for activity (optional)
    last_txd = int(dut.rs232_txd_o.value)
    toggles = 0

    for _ in range(20000):
        await RisingEdge(dut.clk_i)
        txd = int(dut.rs232_txd_o.value)
        if txd != last_txd:
            toggles += 1
            last_txd = txd
            if toggles >= 5:
                break

    dut._log.info(f"[soc_smoke] UART tx toggles observed: {toggles}")
    assert int(dut.arst_i.value) == 0
