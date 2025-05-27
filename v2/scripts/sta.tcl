read_liberty ~/skywater-pdk/libraries/sky130_fd_sc_hd/latest/timing/sky130_fd_sc_hd__tt_025C_1v80.lib
read_verilog ./scripts/mt_cpu.nl.v
link_design mt_cpu
read_sdc ./scripts/cons.sdc
set_power_activity -input -activity 0.5
set_power_activity -input_port rst -activity 0
report_power
