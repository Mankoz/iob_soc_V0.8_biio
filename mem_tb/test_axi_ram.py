import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge


# ----------------------------
# Helpers
# ----------------------------
def _int(x):
    return int(x.value)


async def reset_dut(dut, cycles=5):
    dut.rst_i.value = 1

    # Drive AXI inputs to known values during reset
    dut.axi_araddr_i.value = 0
    dut.axi_arprot_i.value = 0
    dut.axi_arvalid_i.value = 0
    dut.axi_rready_i.value = 0
    dut.axi_arid_i.value = 0
    dut.axi_arlen_i.value = 0
    dut.axi_arsize_i.value = 2  # 4 bytes
    dut.axi_arburst_i.value = 1  # INCR
    dut.axi_arlock_i.value = 0
    dut.axi_arcache_i.value = 0
    dut.axi_arqos_i.value = 0

    dut.axi_awaddr_i.value = 0
    dut.axi_awprot_i.value = 0
    dut.axi_awvalid_i.value = 0
    dut.axi_awid_i.value = 0
    dut.axi_awlen_i.value = 0
    dut.axi_awsize_i.value = 2  # 4 bytes
    dut.axi_awburst_i.value = 1  # INCR
    dut.axi_awlock_i.value = 0
    dut.axi_awcache_i.value = 0
    dut.axi_awqos_i.value = 0

    dut.axi_wdata_i.value = 0
    dut.axi_wstrb_i.value = 0
    dut.axi_wvalid_i.value = 0
    dut.axi_wlast_i.value = 0

    dut.axi_bready_i.value = 0

    for _ in range(cycles):
        await RisingEdge(dut.clk_i)
    dut.rst_i.value = 0
    for _ in range(cycles):
        await RisingEdge(dut.clk_i)


async def axi_write_single(dut, addr, data, wstrb=0xF, awid=0):
    """Single-beat write: AW (len=0) + W (last=1) + wait B"""
    # AW
    dut.axi_awaddr_i.value = addr
    dut.axi_awid_i.value = awid
    dut.axi_awlen_i.value = 0
    dut.axi_awsize_i.value = 2  # 4 bytes
    dut.axi_awburst_i.value = 1  # INCR
    dut.axi_awvalid_i.value = 1

    # Wait for AW handshake
    while True:
        await RisingEdge(dut.clk_i)
        if _int(dut.axi_awvalid_i) and _int(dut.axi_awready_o):
            break
    dut.axi_awvalid_i.value = 0

    # W
    dut.axi_wdata_i.value = data
    dut.axi_wstrb_i.value = wstrb
    dut.axi_wlast_i.value = 1
    dut.axi_wvalid_i.value = 1

    while True:
        await RisingEdge(dut.clk_i)
        if _int(dut.axi_wvalid_i) and _int(dut.axi_wready_o):
            break
    dut.axi_wvalid_i.value = 0
    dut.axi_wlast_i.value = 0
    dut.axi_wstrb_i.value = 0

    # B
    dut.axi_bready_i.value = 1
    while True:
        await RisingEdge(dut.clk_i)
        if _int(dut.axi_bvalid_o):
            break
    bresp = _int(dut.axi_bresp_o)
    bid = _int(dut.axi_bid_o)
    dut.axi_bready_i.value = 0
    return bresp, bid


async def axi_read_single(dut, addr, arid=0):
    """Single-beat read: AR (len=0) + wait R"""
    dut.axi_araddr_i.value = addr
    dut.axi_arid_i.value = arid
    dut.axi_arlen_i.value = 0
    dut.axi_arsize_i.value = 2  # 4 bytes
    dut.axi_arburst_i.value = 1  # INCR
    dut.axi_arvalid_i.value = 1

    # Wait AR handshake
    while True:
        await RisingEdge(dut.clk_i)
        if _int(dut.axi_arvalid_i) and _int(dut.axi_arready_o):
            break
    dut.axi_arvalid_i.value = 0

    # R
    dut.axi_rready_i.value = 1
    while True:
        await RisingEdge(dut.clk_i)
        if _int(dut.axi_rvalid_o):
            break
    rdata = _int(dut.axi_rdata_o)
    rresp = _int(dut.axi_rresp_o)
    rid = _int(dut.axi_rid_o)
    rlast = _int(dut.axi_rlast_o)
    dut.axi_rready_i.value = 0
    return rdata, rresp, rid, rlast


# ----------------------------
# Tests
# ----------------------------
@cocotb.test()
async def smoke_reset(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    await reset_dut(dut, cycles=5)


@cocotb.test()
async def single_write_read(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    await reset_dut(dut, cycles=5)

    addr = 0x10  # byte address
    data = 0xDEADBEEF

    bresp, bid = await axi_write_single(dut, addr, data, wstrb=0xF, awid=3)
    assert bresp == 0, f"BRESP != OKAY, got {bresp}"
    assert bid == 3, f"BID mismatch, got {bid}"

    rdata, rresp, rid, rlast = await axi_read_single(dut, addr, arid=7)
    assert rresp == 0, f"RRESP != OKAY, got {rresp}"
    assert rid == 7, f"RID mismatch, got {rid}"
    assert rlast == 1, f"RLAST expected 1 on single beat, got {rlast}"
    assert rdata == data, f"Readback mismatch: got 0x{rdata:08X}, expected 0x{data:08X}"


@cocotb.test()
async def byte_enable_write(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    await reset_dut(dut, cycles=5)

    addr = 0x20
    # Initialize full word
    await axi_write_single(dut, addr, 0x11223344, wstrb=0xF, awid=1)

    # Overwrite only bytes [15:8] and [7:0] (little-endian)
    # wstrb bit0 -> byte[7:0], bit1 -> byte[15:8], bit2 -> byte[23:16], bit3 -> byte[31:24]
    await axi_write_single(dut, addr, 0xAABBCCDD, wstrb=0x3, awid=2)

    rdata, _, _, _ = await axi_read_single(dut, addr, arid=2)
    # expected: upper two bytes remain 0x1122, lower two bytes become 0xCCDD
    exp = 0x1122CCDD
    assert rdata == exp, f"Byte-enable mismatch: got 0x{rdata:08X}, expected 0x{exp:08X}"

async def axi_write_burst(dut, addr, data_list, wstrb=0xF, awid=0):
    """INCR burst write. data_list length = beats, awlen = beats-1"""
    beats = len(data_list)

    # AW
    dut.axi_awaddr_i.value = addr
    dut.axi_awid_i.value = awid
    dut.axi_awlen_i.value = beats - 1
    dut.axi_awsize_i.value = 2  # 4 bytes
    dut.axi_awburst_i.value = 1  # INCR
    dut.axi_awvalid_i.value = 1

    while True:
        await RisingEdge(dut.clk_i)
        if int(dut.axi_awready_o.value):
            break
    dut.axi_awvalid_i.value = 0

    # W beats
    for i, d in enumerate(data_list):
        dut.axi_wdata_i.value = d
        dut.axi_wstrb_i.value = wstrb
        dut.axi_wlast_i.value = 1 if (i == beats - 1) else 0
        dut.axi_wvalid_i.value = 1

        while True:
            await RisingEdge(dut.clk_i)
            if int(dut.axi_wready_o.value):
                break

    dut.axi_wvalid_i.value = 0
    dut.axi_wlast_i.value = 0
    dut.axi_wstrb_i.value = 0

    # B
    dut.axi_bready_i.value = 1
    while True:
        await RisingEdge(dut.clk_i)
        if int(dut.axi_bvalid_o.value):
            break
    bresp = int(dut.axi_bresp_o.value)
    bid = int(dut.axi_bid_o.value)
    dut.axi_bready_i.value = 0
    return bresp, bid


async def axi_read_burst(dut, addr, beats, arid=0):
    """INCR burst read. Returns list of rdata."""
    dut.axi_araddr_i.value = addr
    dut.axi_arid_i.value = arid
    dut.axi_arlen_i.value = beats - 1
    dut.axi_arsize_i.value = 2  # 4 bytes
    dut.axi_arburst_i.value = 1  # INCR
    dut.axi_arvalid_i.value = 1

    while True:
        await RisingEdge(dut.clk_i)
        if int(dut.axi_arready_o.value):
            break
    dut.axi_arvalid_i.value = 0

    dut.axi_rready_i.value = 1
    out = []
    for i in range(beats):
        while True:
            await RisingEdge(dut.clk_i)
            if int(dut.axi_rvalid_o.value):
                break
        out.append(int(dut.axi_rdata_o.value))
        rlast = int(dut.axi_rlast_o.value)
        if i == beats - 1:
            assert rlast == 1, f"Expected RLAST=1 on last beat, got {rlast}"
        else:
            assert rlast == 0, f"Expected RLAST=0 on non-last beat, got {rlast}"
    dut.axi_rready_i.value = 0
    return out


@cocotb.test()
async def burst_write_read(dut):
    cocotb.start_soon(Clock(dut.clk_i, 10, units="ns").start())
    await reset_dut(dut, cycles=5)

    base = 0x100
    data = [0x11111111, 0x22222222, 0x33333333, 0x44444444]

    bresp, bid = await axi_write_burst(dut, base, data, wstrb=0xF, awid=5)
    assert bresp == 0, f"BRESP != OKAY, got {bresp}"
    assert bid == 5, f"BID mismatch, got {bid}"

    rdata = await axi_read_burst(dut, base, beats=len(data), arid=6)
    assert rdata == data, f"Burst readback mismatch: got {[hex(x) for x in rdata]} expected {[hex(x) for x in data]}"

