import os
import sys
import glob
import subprocess
from const import sky_path

top_module = sys.argv[1]

if __name__ == "__main__":

	with open("./scripts/sta.tcl","w") as file:
		lines = list()
		lines.append(f"read_liberty {sky_path}\n")
		lines.append(f"read_verilog ./scripts/{top_module}.nl.v\n")
		lines.append(f"link_design {top_module}\n")
		lines.append("read_sdc ./scripts/cons.sdc\n")
		lines.append(f"set_power_activity -input -activity 0.5\n")
		lines.append(f"set_power_activity -input_port rst -activity 0\n")
		lines.append("report_power\n")

		file.writelines(lines)

	os.system("sta ./scripts/sta.tcl")
