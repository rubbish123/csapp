#include "cpu/register.h"
#include "memory/instruction.h"
#include <stdio.h>

int main(){
    cpu.rax=0x1234abcd5678ffaa;
    printf("eax:%08x\n",cpu.eax);
    printf("ax:%04x\n",cpu.ax);
    printf("al:%02x\n",cpu.al);
    printf("ah:%02x\n",cpu.ah);
    return 0;
}
