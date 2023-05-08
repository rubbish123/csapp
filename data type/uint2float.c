#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

uint32_t uint2float(uint32_t u){
    if(u==0){
        return 0;
    }
    // 获得符号位，就是u的最高位
    uint32_t s=u&0x80000000;
    uint32_t f;
    uint32_t e;
    // 舍去u的最高位，也即符号位
    u=u&0x7fffffff;
    int n=0;
    for(int i=0;i<31;i++){
        // 找到最高位1
        if((u>>i)==0x1){
            n=i;
            break;
        }
    }
    // no near
    if(n<=23){
        f=u&(0xffffffff>>(32-n));
        e=n+127;
        return s|(e<<23)|f;
    }
    // should near
    else{} 
    return 0;
}
int main(){
    unsigned x=0x80800000;
    printf("0x%x\n",x);
    uint32_t res=uint2float(x);
    printf("0x%x\n",res);
    return 0;
}