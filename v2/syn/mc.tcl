read_liberty ~/skywater-pdk/libraries/sky130_fd_sc_hd/latest/timing/sky130_fd_sc_hd__tt_025C_1v80.lib
read_verilog ./syn/lp/nl.v
link_design fpuseq
read_sdc ./syn/lp/cons.sdc
read_vcd ./lp_dumpfile.vcd
report_checks
report_power > ./syn/lp_timing.txt
report_power > ./syn/lp_power.txt
exit
