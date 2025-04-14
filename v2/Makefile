# # SOURCES=./src/pl_stages/fetch/fetch.v ./src/pl_stages/decode/decode.v ./src/pl_stages/execute/execute.v ./src/pl_stages/memory/memory.v ./src/pl_stages/writeback/writeback.v ./src/utils ./src/pl_regs/
# SRC_STG=-Y .v -y ./src/pl_stages/fetch -Y .v -y ./src/pl_stages/decode -Y .v -y ./src/pl_stages/execute -Y .v -y ./src/pl_stages/memory -Y .v -y ./src/pl_stages/writeback -Y .v -y ./src/pl_stages/hazard
# SRC_REGS=-Y .v -y ./src/pl_regs
# SRC_UTILS=-Y .v -y ./src/utils
# SRC_TOP=-Y .v -y ./src/top

# SRC_ALL=$(SRC_STG) $(SRC_REGS) $(SRC_UTILS) $(SRC_TOP)

# # Project specific variables
# STAGES=5
# TYPE=base
# ver:
# ifeq ($(top),mt_cpu)
# 	iverilog -Wall $(SRC_ALL) ./test/top/mt_cpu_tb.v
# 	./a.out
# 	gtkwave dumpfile.vcd

# else
# 	iverilog -Wall $(SRC_ALL) -s ./test/pl_stages/$(stage)/$(target)_tb.v
# 	./a.out
# 	gtkwave dumpfile.vcd

# endif

# vermod:
# 	iverilog -Wall -Y .v -y ./src/pl_stages/$(stage)/  ./test/pl_stages/$(stage)/$(target)_tb.v
# 	./a.out
# 	gtkwave dumpfile.vcd

# gh:
# 	git add . -A
# 	git commit -m "$(msg)"
# 	xclip -sel c < ~/git_stuff/key.txt
# 	git push origin main

# svi:
# 	cat ./src/pl_stages/fetch/code.hex > ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	cat ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	python3 ./scripts/setup_vivado.py "$(TYPE)" "$(STAGES)"

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
# VERILATOR_FLAGS += -x-assign fast
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
SRC_STG=  -y ./src/pl_stages/fetch -y ./src/pl_stages/decode -y ./src/pl_stages/execute -y ./src/pl_stages/memory -y ./src/pl_stages/writeback -y ./src/pl_stages/hazard
SRC_REGS=  -y ./src/pl_regs
SRC_UTILS=  -y ./src/utils
SRC_TOP= -y ./src/top
TEST_PATH = ./test/$(module)_tb.v
VERILATOR_INPUT = $(TEST_PATH) $(SRC_STG) $(SRC_REGS) $(SRC_UTILS) $(SRC_TOP)

######################################################################
default: run

run:
	@echo
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	obj_dir/Vtop +trace


######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd coverage.dat core
