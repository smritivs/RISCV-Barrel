read_liberty ~/skywater-pdk/libraries/sky130_fd_sc_hd/latest/timing/sky130_fd_sc_hd__tt_025C_1v80.lib
read_verilog ./syn/nl.v
link_design fpuseq
read_sdc ./syn/cons.sdc
set_power_activity -input -activity 0.5
report_checks
report_power
