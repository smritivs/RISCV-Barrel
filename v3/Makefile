# Create TCL based setup for the same
# svi:
# 	cat ./src/pl_stages/fetch/code.hex > ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	cat ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	python3 ./scripts/setup_vivado.py "$(TYPE)" "$(STAGES)"
SHELL := /bin/bash
brach = main

# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
VERILATOR_COVERAGE = $(VERILATOR_ROOT)/bin/verilator_coverage
endif

# Generate C++ in executable form
VERILATOR_FLAGS += --binary -j 0
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -x-assign fast
# Warn abount lint issues; may not want this on less solid designs
VERILATOR_FLAGS += -Wall
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
# VERILATOR_FLAGS += --assert
# Generate coverage analysis
# VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt

# Input files for Verilator
# SRC_STG=  -y ./src/pl_stages/fetch -y ./src/pl_stages/decode -y ./src/pl_stages/execute -y ./src/pl_stages/memory -y ./src/pl_stages/writeback -y ./src/pl_stages/hazard
# SRC_REGS=  -y ./src/pl_regs
# SRC_UTILS=  -y ./src/utils
SRC_FILES= -y ./src
TEST_PATH = ./test/$(top)_tb.v
VERILATOR_INPUT = $(TEST_PATH) $(SRC_FILES)

default: run

run:
	@echo "Compiling testbench"
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)
	./obj_dir/V$(top)_tb +trace
	gtkwave dumpfile.vcd

# Other targets
power:
	python ./scripts/power.py $(top)

syn:
	python ./scripts/synth.py "$(top)"

gh:
	python ./scripts/git.py "$(msg)" "$(branch)"

hex:
	python ./scripts/hex.py

help:
	@echo "Run commands using make [command] [args]"
	@echo "The command list is: "
	@echo "help - print out this message"
	@echo ""
	@echo "run - compiles and simulates the design"
	@echo "args"
	@echo "top - path to top module"
	@echo ""
	@echo "gh - pushes all changes to remote github repo"
	@echo "args"
	@echo "msg - commit message"
	@echo "branch - branch to push changes to"
	@echo ""
	@echo "hex - creates a hex file based on a test.c"
	@echo ""
	@echo "show-config - displays version"
	@echo ""
	@echo "clean - delete unecessary files"

show-config:
	$(VERILATOR) -V

clean:
	-rm -rf obj_dir logs *.log *.dmp *.vcd coverage.dat core
	clear
