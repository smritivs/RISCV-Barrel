import os
import sys
import re

input_file = sys.argv[1]

inputs = dict()
outputs = dict()
params = list()

tab = " " * 4

with open(input_file,'r') as file:
	lines = file.readlines()

	for i in range(len(lines)):
		current_line = lines[i]

		# input
		if "input" in current_line:
			# remove input from current line
			current_line = re.sub(r"input ","",current_line).strip()
			# vector input
			if "[" in current_line:
				start = current_line.find("[")
				end = current_line.find("]")
				input_len = current_line[start:end+1]
				current_line = current_line[end+1:].strip()
				# remove last comma if present
				current_line = current_line.rstrip(",")
				ports = current_line.split(",")

				for j in ports:
					inputs[j] = input_len

			# scalar input
			else:
				current_line = current_line.rstrip(",")
				ports = current_line.split(",")

				for j in ports:
					inputs[j] = ""


		# outputs
		elif "output" in current_line:
			# remove input from current line
			current_line = re.sub(r"output ","",current_line).strip()

			# remove reg keyword if present
			if "reg" in current_line:
				current_line = re.sub(r"reg ","",current_line)
			# vector output
			if "[" in current_line:
				start = current_line.find("[")
				end = current_line.find("]")
				output_len = current_line[start:end+1]
				current_line = current_line[end+1:].strip()
				current_line = current_line.rstrip(",")
				ports = current_line.split(",")

				for j in ports:
					outputs[j] = output_len

			# scalar input
			else:
				current_line = current_line.rstrip(",")
				ports = current_line.split(",")

				for j in ports:
					outputs[j] = ""

		elif 'parameter' in current_line:
			current_line = re.sub(r"parameter ","",current_line).strip()
			current_line = current_line.rstrip(",")
			params.append(current_line)


output_file = sys.argv[2]

module_name = input_file.split("/")[-1].strip()
module_name = re.sub(r".v","",module_name)

with open(output_file,'w') as file:
	new_lines = list()
	new_lines.append(f"module {module_name}_tb();\n")

	# write params

	for i in params:
		new_lines.append("parameter " + i + ";\n")

	for i in inputs.keys():
		# vector
		if(inputs[i]):
			new_lines.append(f"reg {inputs[i]} {i};\n")

		else:
			new_lines.append(f"reg {i};\n")

	for i in outputs.keys():
		# vector
		if(outputs[i]):
			new_lines.append(f"wire {outputs[i]} {i};\n")

		else:
			new_lines.append(f"wire {i};\n")

	new_lines.append(f"{module_name} dut(\n")

	for i in inputs.keys():
		new_lines.append(f".{i}({i}),\n")

	ops = list(outputs.keys())
	for i in ops:
		if i != ops[-1]:
			new_lines.append(f".{i}({i}),\n")

		else:
			new_lines.append(f".{i}({i})\n")

	new_lines.append(");\n")

	new_lines.append("initial begin\n")

	for i in inputs.keys():
		new_lines.append(f"{i} = 0;\n")

	new_lines.append("end\n")

	if "clk" in inputs.keys():
		new_lines.append(f"always\n{tab}#5 clk = ~clk;\n")

	new_lines.append("// Write testbench code here\n")
	new_lines.append("initial begin\n\n")
	new_lines.append("end\n")

	new_lines.append(f'initial begin\n$dumpfile("dumpfile.vcd");\n$dumpvars(0,{module_name}_tb);\nend\n')

	new_lines.append("endmodule\n")

	file.writelines(new_lines)


print(inputs)
print(outputs)
print(params)
