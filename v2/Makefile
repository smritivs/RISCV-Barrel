# SOURCES=./src/pl_stages/fetch/fetch.v ./src/pl_stages/decode/decode.v ./src/pl_stages/execute/execute.v ./src/pl_stages/memory/memory.v ./src/pl_stages/writeback/writeback.v ./src/utils ./src/pl_regs/
SRC_STG=-Y .v -y ./src/pl_stages/fetch -Y .v -y ./src/pl_stages/decode -Y .v -y ./src/pl_stages/execute -Y .v -y ./src/pl_stages/memory -Y .v -y ./src/pl_stages/writeback -Y .v -y ./src/pl_stages/hazard
SRC_REGS=-Y .v -y ./src/pl_regs
SRC_UTILS=-Y .v -y ./src/utils
SRC_TOP=-Y .v -y ./src/top

SRC_ALL=$(SRC_STG) $(SRC_REGS) $(SRC_UTILS) $(SRC_TOP)

# Project specific variables
STAGES=5
TYPE=base
ver:
ifeq ($(top),mt_cpu)
	iverilog -Wall $(SRC_ALL) ./test/top/mt_cpu_tb.v
	./a.out
	gtkwave dumpfile.vcd

else
	iverilog -Wall $(SRC_ALL) -s ./test/pl_stages/$(stage)/$(target)_tb.v
	./a.out
	gtkwave dumpfile.vcd

endif

vermod:
	iverilog -Wall -Y .v -y ./src/pl_stages/$(stage)/  ./test/pl_stages/$(stage)/$(target)_tb.v
	./a.out
	gtkwave dumpfile.vcd

lint:
ifeq ($(top),cpu)
	verilator --lint-only ./test/top/cpu_tb.v  $(SRC_ALL_V)
else
	verilator --lint-only --top-module ./test/pl_stages/$(stage)/$(stage)_tb.v ./src/pl_stages/$(stage)/*.v ./src/utils/*.v
endif

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
