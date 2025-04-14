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

# lint:
# ifeq ($(top),cpu)
# 	verilator --lint-only ./test/top/cpu_tb.v  $(SRC_ALL_V)
# else
# 	verilator --lint-only --top-module ./test/pl_stages/$(stage)/$(stage)_tb.v ./src/pl_stages/$(stage)/*.v ./src/utils/*.v
# endif



# svi:
# 	cat ./src/pl_stages/fetch/code.hex > ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	cat ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
# 	python3 ./scripts/setup_vivado.py "$(TYPE)" "$(STAGES)"



	######################################################################
#
# DESCRIPTION: Verilator Example: Small Makefile
#
# This calls the object directory makefile.  That allows the objects to
# be placed in the "current directory" which simplifies the Makefile.
#
# This file ONLY is placed under the Creative Commons Public Domain, for
# any use, without warranty, 2020 by Wilson Snyder.
# SPDX-License-Identifier: CC0-1.0
#
######################################################################
# Check for sanity to avoid later confusion

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################

# This is intended to be a minimal example.  Before copying this to start a
# real project, it is better to start with a more complete example,
# e.g. examples/make_tracing_c.

# If $VERILATOR_ROOT isn't in the environment, we assume it is part of a
# package install, and verilator is in your path. Otherwise find the
# binary relative to $VERILATOR_ROOT (such as when inside the git sources).
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

default:
		$(VERILATOR) --binary -j 0 ./test/pl_stages/fetch/mt_pc_tb.v ./src/pl_stages/fetch/mt_pc.v
		# obj_dir/Vtop

# gh:
# 	git add . -A
# 	git commit -m "$(msg)"
# 	xclip -sel c < ~/git_stuff/key.txt
# 	git push origin main

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
		-rm -rf obj_dir *.log *.dmp *.vpd core
