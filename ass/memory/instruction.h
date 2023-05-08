#include <stdlib.h>
#include <stdint.h>
#define MM_LEN 1000

uint8_t mm[MM_LEN];

// 操作符
typedef enum OP{
    MOVE,
    PUSH,
    CALL
} op_t;

typedef enum OD_TYPE{
    IMM,REG,MM_IMM,MM_REG,MM_IMM_REG,
    MM_REG1_REG2,MM_IMM_REG1_REG2,
    MM_REG2_S,MM_IMM_REG2_S,
    MM_REG1_REG2_S,MM_IMM_REG1_REG2_S
} od_type_t;

// 操作数
typedef struct OD{
    // 用来标记当前是哪种寻址模式
    od_type_t type;
    int64_t imm;
    int64_t scal;
    uint64_t *reg1;
    uint64_t *reg2;

    char code[100];
} od_t;

typedef struct INSTRUCT_STRUCT{
    op_t op;
    od_t src;
    od_t dst;
} inst_t;

#define INST_LEN 100

inst_t program[INST_LEN];

uint64_t decode_od(od_t od);