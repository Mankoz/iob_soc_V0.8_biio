#
# Authored by: Robert Metchev / Raumzeit Technologies (robert@raumzeit.co)
# Copyright (C) 2026 Biio
#
import sys, os, time, random, logging
import numpy as np

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import ClockCycles, RisingEdge, FallingEdge, Timer

#from tb_top import SpiTransactor, clock_n_reset

from cocotbext.axi import AxiStreamBus, AxiStreamFrame, AxiStreamSource, AxiStreamSink
from cocotbext.apb import ApbMaster, ApbBus
from cocotb.binary import BinaryValue


        
class IbexTester():
    def __init__(self, dut):
        self._name = "IbexTester"
        self.dut = dut
        self.clk = self.dut.clk
        self.rst = self.dut.arst
    
        #logger
        self._log = logging.getLogger(self._name)
        self._log.setLevel(os.getenv("LOG_LEVEL","INFO")) # NOTSET=0 DEBUG=10 INFO=20 WARN=30 ERROR=40 CRITICAL=50

        #self._log.info('c')
        

    async def __call__(self):
        '''Allow to call instance'''
        cocotb.start_soon(self.start_tester())

    async def start_tester(self):
        cocotb.start_soon(self.clock_n_reset(1e6)) # 1M clock

        await ClockCycles(self.clk, 100)

    async def clock_n_reset(self, f):
        period = round(1e9/f, 2)
        self.rst.value = 1
        cocotb.start_soon(Clock(self.clk, period, units="ns").start())
        self.dut._log.debug(f"Starting clock {f}")
        # Hack/Fix for missing "negedge reset" in verilator, works OK in icarus
        await Timer(1, 'ns')
        self.rst.value = 0
        await Timer(1, 'ns')
        self.rst.value = 1
        await ClockCycles(self.clk, 50)
        self.rst.value = 0

@cocotb.test()
async def ibex_test0(dut):
    # instantiate the tester
    tester = IbexTester(dut)
    cocotb.start_soon(tester())
    
    await ClockCycles(dut.clk, 500)
    raise cocotb.result.TestSuccess("Test passed")

