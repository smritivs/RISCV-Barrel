import os
import sys
import glob
import subprocess
from const import sky_path

top_module = sys.argv[1]

if __name__ == "__main__":
	file_list = glob.glob("./src/*.v")

	with open("./scripts/file_list.txt","w") as file:
		for i in file_list:
			file.writelines(i + "\n")

	with open("./scripts/synth.ys","w") as file:
		lines = list()
		lines.append(f"read_liberty -lib {sky_path}\n")
		lines.append("read_verilog_file_list -f ./scripts/file_list.txt\n")
		lines.append(f"synth -top {top_module}\n")
		lines.append("flatten\n")
		lines.append(f"abc -liberty {sky_path}\n")
		file.writelines(lines)

	os.system("/bin/bash -c \"source ~/oss-cad-suite/environment && yosys ./scripts/synth.ys\"")
