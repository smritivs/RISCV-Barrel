# start_gui
create_project mt5stage /home/bala/git_stuff/RISCV-Vivado/mt5stage -part xc7a35tcpg236-1
import_files {/home/bala/git_stuff/RISCV-Barrel/v2/src/utils/adder.v /home/bala/git_stuff/RISCV-Barrel/v2/src/utils/ff.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/decode/decode.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/memory/data_memory.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/fetch/fetch.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/memory/memory.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/fetch/instr_mem.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/execute/alu.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_regs/pl_reg_mw.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/decode/mt_reg_file.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_regs/pl_reg_em.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/fetch/mt_pc.v /home/bala/git_stuff/RISCV-Barrel/v2/src/top/mt_cpu.v /home/bala/git_stuff/RISCV-Barrel/v2/src/utils/mux2.v /home/bala/git_stuff/RISCV-Barrel/v2/src/utils/mux4.v /home/bala/git_stuff/RISCV-Barrel/v2/src/utils/mux3.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/decode/reg_file.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/fetch/thread_sel.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/writeback/writeback.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/execute/execute.v /home/bala/git_stuff/RISCV-Barrel/v2/src/utils/reset_ff.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/decode/imm_ext.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/decode/control_unit.v /home/bala/git_stuff/RISCV-Barrel/v2/src/top/cpu.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_regs/pl_reg_de.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_regs/pl_reg_fd.v /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/hazard/hazard.v}
update_compile_order -fileset sources_1
update_compile_order -fileset sources_1
# Disabling source management mode.  This is to allow the top design properties to be set without GUI intervention.
set_property source_mgmt_mode None [current_project]
set_property top mt_cpu [current_fileset]
# Re-enabling previously disabled source management mode.
set_property source_mgmt_mode All [current_project]
update_compile_order -fileset sources_1
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
# launch_runs impl_1 -jobs 8
# wait_on_run impl_1
# open_run impl_1
# import_files -norecurse /home/bala/git_stuff/RISCV-Barrel/v2/src/pl_stages/fetch/code.mem
# reset_run synth_1
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
# close_design
# launch_runs impl_1 -jobs 8
# wait_on_run impl_1
# reset_run synth_1
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
# reset_run synth_1
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
# reset_run synth_1
# launch_runs synth_1 -jobs 8
# wait_on_run synth_1
file mkdir /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/sources_1/new
close [ open /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/sources_1/new/code.mem w ]
add_files /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/sources_1/new/code.mem
remove_files  /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/sources_1/imports/fetch/code.mem
reset_run synth_1
launch_runs synth_1 -jobs 8
wait_on_run synth_1
launch_runs impl_1 -jobs 8
wait_on_run impl_1
open_run impl_1
file mkdir /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/constrs_1
file mkdir /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/constrs_1/new
close [ open /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/constrs_1/new/c.xdc w ]
add_files -fileset constrs_1 /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/constrs_1/new/c.xdc
set_property target_constrs_file /home/bala/git_stuff/RISCV-Vivado/mt5stage/mt5stage.srcs/constrs_1/new/c.xdc [current_fileset -constrset]
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
report_timing_summary -delay_type min_max -report_unconstrained -check_timing_verbose -max_paths 10 -input_pins -routable_nets -name timing_1
reset_run synth_1
save_constraints -force
save_constraints -force
close_design
launch_runs synth_1 -jobs 8
wait_on_run synth_1
launch_runs impl_1 -jobs 8
wait_on_run impl_1
open_run impl_1
