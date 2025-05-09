# SOURCES=./src/pl_stages/fetch/fetch.v ./src/pl_stages/decode/decode.v ./src/pl_stages/execute/execute.v ./src/pl_stages/memory/memory.v ./src/pl_stages/writeback/writeback.v ./src/utils ./src/pl_regs/
SRC_STG=-Y .v -y ./src/pl_stages/fetch -Y .v -y ./src/pl_stages/decode -Y .v -y ./src/pl_stages/execute -Y .v -y ./src/pl_stages/memory -Y .v -y ./src/pl_stages/writeback -Y .v -y ./src/pl_stages/hazard
SRC_REGS=-Y .v -y ./src/pl_regs
SRC_UTILS=-Y .v -y ./src/utils
SRC_TOP=-Y .v -y ./src/top

SRC_STG_V=-y ./src/pl_stages/hazard/ -y ./src/pl_stages/fetch -y ./src/pl_stages/decode -y ./src/pl_stages/execute -y ./src/pl_stages/memory -y ./src/pl_stages/writeback
SRC_REGS_V=--y ./src/pl_regs
SRC_UTILS_V=-y ./src/utils
SRC_TOP_V=-y ./src/top

SRC_ALL=$(SRC_STG) $(SRC_REGS) $(SRC_UTILS) $(SRC_TOP)

SRC_ALL_V=$(SRC_STG_V) $(SRC_REGS_V) $(SRC_UTILS_V) $(SRC_TOP_V)

# Project specific variables
STAGES=5
TYPE=base
sim:
ifeq ($(top),cpu)
	iverilog -Wall $(SRC_ALL) ./test/top/cpu_tb.v
	./a.out
	gtkwave dumpfile.vcd

else
	iverilog $(SRC_ALL) ./test/pl_stages/$(target)/$(target)_tb.v
	./a.out
	gtkwave dumpfile.vcd

endif

ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

veril:
	@echo "-- Verilator hello-world simple binary example"
	@echo "-- VERILATE & BUILD --------"
	$(VERILATOR) --binary --trace -j 0 ./test/pl_stages/decode/decode_tb.v -y ./src/pl_stages
	@echo "-- RUN ---------------------"
	obj_dir/Vdecode_tb
	@echo "-- DONE --------------------"
	@echo "Note: Once this example is understood, see examples/make_hello_c."
	@echo "Note: See also https://verilator.org/guide/latest/examples.html"

gh:
	git add . -A
	git commit -m "$(msg)"
	xclip -sel c < ~/git_stuff/key.txt
	git push origin main

svi:
	cat ./src/pl_stages/fetch/code.hex > ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
	cat ~/git_stuff/RISCV-Vivado/$(TYPE)$(STAGES)stage/$(TYPE)$(STAGES)stage.srcs/sources_1/new/code.hex
	python3 ./scripts/setup_vivado.py "$(TYPE)" "$(STAGES)"


clean:
	rm -rf a.out dumpfile.vcd
	clear
