read_liberty ~/skywater-pdk/libraries/sky130_fd_sc_hs/latest/timing/sky130_fd_sc_hs__tt_025C_2v10.lib
read_verilog ./scripts/syn.v
link_design mt_cpu
read_sdc ./scripts/cons.sdc
set_power_activity -input -activity 0.1
set_power_activity -input_port rst -activity 0
report_power
