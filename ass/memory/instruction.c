#include "instruction.h"

// static uint64_t decode_od(od_t od){
//     if(od.type==IMM){
//         return od.imm;
//     }
//     else if(od.type==REG){
//         return (uint64_t)od.reg1;
//     }
//     // 在内存寻址
//     else{
//         uint64_t addr=MM_LEN+0xff;
//         // mod mm的最大长度，防止数组越界
//         return mm[addr%MM_LEN];
//     }
// }