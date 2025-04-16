import os
import sys

input_files = ""
if(len(sys.argv) > 0):
	input_files = sys.argv[1]

else:
	input_files = "test.c"

if __name__ == "__main__":
	os.system(f"riscv32-unknown-elf-gcc {input_files} -o temp.elf")
	os.system("riscv64-unknown-elf-elf2hex --bit-width 32 --input temp.elf --output op.hex")
	os.system("rm *.elf")
	os.system("clear")
