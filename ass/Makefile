CC=/usr/bin/gcc-9
CFLAGS=-Wall -g -o2 -Werror -std=gnu99
EXE=program

CODE=./memory/instruction.c ./memory/dram.c ./cpu/mmu.c ./disk/code.c ./main.c
.PHONY: program
main:
	$(CC) $(CFLAGS) -I. $(CODE) -o $(EXE)

run:
	./$(EXE)