#include "types.h"

void core_init();

int nop(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
int notimpl(uint8 opcode, enum target_register t_r, enum addressing_mode a_m);
