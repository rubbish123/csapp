#include "./cpu/register.h"
#include "./memory/instruction.h"
#include <stdio.h>

int main(){
    cpu.rax=0x1234abcd5678ffaa;
    printf("eax:%08x\n",cpu.eax);
    printf("ax:%04x\n",cpu.ax);
    printf("al:%02x\n",cpu.al);
    printf("ah:%02x\n",cpu.ah);
    return 0;
}

uint64_t decode_od(od_t od){
    if(od.type==IMM){
        return od.imm;
    }
    else if(od.type==REG){
        return od.reg1;
    }
    else{
        uint64_t addr=MM_LEN+0xff;
        // mod mm的最大长度，防止数组越界
        return mm[addr%MM_LEN];
    }
}