Getting started with Cocotb for Ibex RISC V
===========================================

* Get repo:
git clone https://github.com/Biio-Inc/biio-v1.git
cd biio-v1.git

* Simulate with Verilator:
cd hw/cocotb
git submodule update --init --recursive
make -C tests/chip_top_ibex/ WAVES=1 [LOG_LEVEL=DEBUG]

* Open Verilator waveform:
make -C tests/i2c/ g

* Env. used for setup.
- Python 3.11.10
- Verilator 5.038 2025-07-08 rev v5.038-49-g318b1c1a3 (installed from source: https://verilator.org/guide/latest/install.html) 
- Icarus 13.0 (devel) (s20221226-463-g2299fc1b2)
- GTKWave v3.3.104
- cocotb 1.9.2

* Python Testbench: hw/cocotb/tests/chip_top_ibex/chip_top_ibex.py
* DUT wrapper:      hw/cocotb/shared/tb_top.sv
* RTL is in:        hw/rtl





===============================================================================
Note: Adding a git sub module:
$ cd hw/rtl

$ git submodule add https://github.com/IObundle/iob-soc-ibex
$ git submodule add https://github.com/Mankoz/iob_soc_V0.8_biio
$ git submodule add https://github.com/raumzeitt/rz-lib.git
$ git add ../../.gitmodules iob-soc-ibex iob_soc_V0.8_biio rz-lib
$ git commit -m "..."


===============================================================================
RZ Note: Compile in IOB_SOC_V0.8:
Updated iob_ibex2axi.sv to remove unused signals and clean up simulation warnings

Adjusted Cocotb Makefile for direct Verilator flow (no FuseSoC dependency)

Verified chip_top_ibex test runs successfully with waveform dump

Environment:
Verified with the following toolchain:
OS: Ubuntu 22.04 LTS (x86_64)
Verilator 5.020 (Debian 5.020-1, 2024-01-01)
Python 3.12.3
cocotb 1.9.2
GTKWave 3.3.116
GNU Make 4.3
g++ (system default on Ubuntu 22.04)