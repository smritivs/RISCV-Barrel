riscv32-unknown-elf-gcc test.c -o a.elf
riscv64-unknown-elf-elf2hex --bit-width 32 --input a.elf --output op.elf2hex
rm *.elf *.o
clear
