import os
import sys

file_path = sys.argv[1]

module_name = ""

tb_name = ""
tb_lines = list()

regs = list()
wires = list()

init_lines = list()

dut_lines = list()

with open(file_path,"r") as file:

	lines = file.readlines()

	for line in lines:
		if "module" in line and "endmodule" not in line:
			words = line.split(" ")

			module_name = words[1]

			tb_name = module_name + "_tb"

			add_line = "module " + tb_name + "();\n"

			tb_lines.append(add_line)

		elif "parameter" in line:
			add_line = line
			add_line = add_line.replace(",","")
			add_line = add_line.replace(";","")

			add_line = add_line.strip()
			add_line = add_line+";\n"
			tb_lines.append(add_line)

		elif "input" in line:
			new = line.replace("input","reg")
			new = new.strip()
			new = new[:-1]
			new = new + ";\n"
			tb_lines.append(new)

			new = new.replace("reg ","")

			if "[" in new or "]" in new:
				first = new.find("[")
				last = new.find("]")

				new = new[last+1:]


			new = new.replace(";","=0;")
			new = new.replace(", ","=0;\n")
			new = new.lstrip()
			init_lines.append(new)

			new = new.replace("=0;","")

			if new.count("\n") > 1:
				new_list = new.split("\n")
				regs.extend(new_list)

			else:
				regs.append(new.strip())

		elif "output" in line:
			new = line.replace("output","wire")
			new = new.strip()
			if new[-1] == ",":
				new = new[:-1]

			new = new + ";\n"
			new = new.replace("reg ","")
			tb_lines.append(new)

			new = new.replace("wire ","")

			if "[" in new or "]" in new:
				first = new.find("[")
				last = new.find("]")

				new = new[last+1:]

			new = new.replace("reg ","")
			new = new.replace(";","=0;")
			new = new.replace(", ","=0;\n")
			new = new.lstrip()
			# init_lines.append(new)

			new = new.replace("=0;","")

			if new.count("\n") > 1:
				new_list = new.split("\n")
				wires.extend(new_list)

			else:
				wires.append(new.strip())


#add dut
dut_lines.append(module_name + " dut" + "(\n")

for i in regs:
	if i:
		dut_lines.append(f".{i}({i}),\n")

for i in wires:
	if i:
		dut_lines.append(f".{i}({i}),\n")

dut_lines[-1] = dut_lines[-1].replace(",","")
dut_lines.append(");\n\n")

tb_lines.extend(dut_lines)
# add intial block
tb_lines.append("\ninitial begin\n")
tb_lines.extend(init_lines)
# for i in regs:
# 	new_line = i + " = 0;"
# 	tb_lines.append(new_line)

tb_lines.append("end\n\n")

tb_lines.append("// Write testbench code here\ninitial begin\n\nend\n\n")
tb_lines.append(f"$dumpfile(\"dumpfile.vcd\");\n$dumpvars(0, {module_name}_tb);\n")
# add clock block
tb_lines.append("always\n#5 clk = ~clk;\n\n")
tb_lines.append("endmodule\n")



tb_file_path = "../test/" + tb_name + ".v"
tb_file_path = sys.argv[2]

with open(tb_file_path,"w") as file:
	file.writelines(tb_lines)
