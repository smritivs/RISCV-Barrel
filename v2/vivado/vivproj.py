import os
import sys
import glob

proj_name = sys.argv[1]
proj_path = sys.argv[2]
src_dir = sys.argv[3]

if __name__ == "__main__":
	with open("./setup.tcl","w") as file:
		lines = list()
		lines.append(f"create_project {proj_name} {proj_path} -part xc7a35tcpg236-1")

		src_file_str = "import_files {"

		src_files = glob.glob(f"{src_dir}/**/*.v",recursive=True)

		for i in src_files:
			src_file_str = src_file_str + i

		src_file_str = src_file_str + "}"

		print(src_file_str)

		lines.append("update_compile_order -fileset sources_1")
		lines.append("set_property source_mgmt_mode None [current_project]")
		lines.append("set_property top mt_cpu [current_fileset]")
		lines.append("set_property source_mgmt_mode All [current_project]")
