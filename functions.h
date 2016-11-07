#include "types.h"

void core_init();
void core_destroy();
int load_memory(struct mem_loader_def* defs, uint8 num_defs);

int abx(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int asl(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int asr(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int clr(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int com(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int daa(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int dec(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int inc(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int lsr(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int mul(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int neg(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int nop(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int notimpl(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int rol(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int ror(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int sex(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int tst(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
