import os
import sys

input_files = ""
if(len(sys.argv) > 1):
	input_files = sys.argv[1]

else:
	input_files = "./scripts/test.c"

if __name__ == "__main__":
	if(".s" in input_files):
		os.system(f"riscv32-unknown-elf-as {input_files} -o temp.elf")

	elif(".c" in input_files):
		os.system(f"riscv32-unknown-elf-gcc {input_files} -o temp.elf")

	os.system("riscv64-unknown-elf-elf2hex --bit-width 32 --input temp.elf --output op.hex")
	os.system("rm *.elf")
	os.system("mv ./op.hex ./src/code.mem")
	# os.system("clear")
