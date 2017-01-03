#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "core.h"

extern struct cpu_state e_cpu_context;
extern struct opcode_def opcode_table[];
extern struct opcode_def opcode_ext_x10_table[];
extern struct opcode_def opcode_ext_x11_table[];

void adca_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;
    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ADCA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.a = 1;

    int cycles = run_cycles(opcode_table[OP_ADCA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0x3);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.h, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ADCA_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void adcb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;
    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ADCB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.b = 1;

    int cycles = run_cycles(opcode_table[OP_ADCB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x3);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.h, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ADCB_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void adda_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;
    uint8 lower_byte_address = 0x40;
    e_cpu_context.dp = S_POINTER >> 8;

    uint8 code_bytes[] = {
        OP_ADDA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.a = 1;

    int cycles = run_cycles(opcode_table[OP_ADDA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0x3);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.h, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ADDA_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void addb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;
    uint8 lower_byte_address = 0x40;
    e_cpu_context.dp = S_POINTER >> 8;

    uint8 code_bytes[] = {
        OP_ADDB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.b = 1;

    int cycles = run_cycles(opcode_table[OP_ADDB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x3);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.h, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ADDB_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void addd_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ADDD_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x12,
        0x34
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.d = 1;

    int cycles = run_cycles(opcode_table[OP_ADDD_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.d, 0x1235);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.h, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ADDD_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void anda_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;

    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ANDA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    e_cpu_context.d.byte_acc.a = 6;

    int cycles = run_cycles(opcode_table[OP_ANDA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 4);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ANDA_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void andb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;

    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ANDB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    e_cpu_context.d.byte_acc.b = 6;

    int cycles = run_cycles(opcode_table[OP_ANDB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 4);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_ANDB_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void asl_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ASL_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 8;
    int cycles = run_cycles(opcode_table[OP_ASL_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_ASL_E].cycle_count);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x4);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x8);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_true(post_pc > pre_pc);
}

void asr_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_ASR_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x2
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 8;
    int cycles = run_cycles(opcode_table[OP_ASR_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_ASR_E].cycle_count);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x1);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x8);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_true(post_pc > pre_pc);
}

void bita_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;
    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_BITA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    e_cpu_context.d.byte_acc.a = 6;

    int cycles = run_cycles(opcode_table[OP_BITA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    /* The accumulator should not get changed by this operation */
    assert_int_equal(e_cpu_context.d.byte_acc.a, 6);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x5);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_BITA_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void bitb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;
    uint8 lower_byte_address = 0x40;

    uint8 code_bytes[] = {
        OP_BITB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    e_cpu_context.d.byte_acc.b = 6;

    int cycles = run_cycles(opcode_table[OP_BITB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    /* The accumulator should not get changed by this operation */
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x5);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x6);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_BITB_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void clr_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;

    write_byte_to_memory(S_POINTER + lower_byte_address, 0xBB);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0xBB);

    uint8 code_bytes[] = {
        OP_CLR_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 }
    };
    load_memory(test_memory, 1);

    e_cpu_context.d.byte_acc.a = 1;
    e_cpu_context.d.byte_acc.b = 8;

    int cycles = run_cycles(opcode_table[OP_CLR_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_CLR_E].cycle_count);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 1);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 8);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address), 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 1);
    assert_int_equal(cycles, opcode_table[OP_CLR_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void cmpa_extended_nocarry_test(void **state) {
    (void) state; /* unused */

    int pre_pc = e_cpu_context.pc;
    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_CMPA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x11
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.a = 0xFF;

    int cycles = run_cycles(opcode_table[OP_CMPA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_CMPA_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void cmpb_extended_nocarry_test(void **state) {
    (void) state; /* unused */

    int pre_pc = e_cpu_context.pc;
    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_CMPB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x11
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.byte_acc.b = 0xFF;

    int cycles = run_cycles(opcode_table[OP_CMPB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_CMPB_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void cmpd_extended_nocarry_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    e_cpu_context.dp = S_POINTER >> 8;
    uint8 code_bytes[] = {
        OP_EXTENDED_X10,
        OP_CMPD_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x12,
        0x34
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 4 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.d.d = 0xFFFF;

    int cycles = run_cycles(opcode_ext_x10_table[OP_CMPD_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.d, 0xFFFF);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_ext_x10_table[OP_CMPD_E].cycle_count);
    assert_true(post_pc == pre_pc + 4);
}

void cmps_extended_nocarry_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_EXTENDED_X11,
        OP_CMPS_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x12,
        0x34
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 4 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };
    load_memory(test_memory, 2);
    e_cpu_context.s = 0xFFFF;

    int cycles = run_cycles(opcode_ext_x11_table[OP_CMPS_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.s, 0xFFFF);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_ext_x11_table[OP_CMPS_E].cycle_count);
    assert_true(post_pc == pre_pc + 4);
}

void cmpu_extended_nocarry_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    e_cpu_context.dp = S_POINTER >> 8;
    uint8 code_bytes[] = {
        OP_EXTENDED_X11,
        OP_CMPU_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x7A,
        0x7A
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 4 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };

    load_memory(test_memory, 2);
    e_cpu_context.u = 0x2727;

    int cycles = run_cycles(opcode_ext_x11_table[OP_CMPU_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.u, 0x2727);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.c, 1);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 1);
    assert_int_equal(cycles, opcode_ext_x11_table[OP_CMPU_E].cycle_count);
    assert_true(post_pc == pre_pc + 4);
}

void cmpx_extended_overflow_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    e_cpu_context.dp = S_POINTER >> 8;
    uint8 code_bytes[] = {
        OP_CMPX_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0xEE,
        0xEE
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };

    load_memory(test_memory, 2);
    e_cpu_context.x = 0xFFFF;

    int cycles = run_cycles(opcode_table[OP_CMPX_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.x, 0xFFFF);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 1);
    assert_int_equal(cycles, opcode_table[OP_CMPX_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void cmpy_extended_zero_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_EXTENDED_X10,
        OP_CMPY_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x69,
        0x69
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 4 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };

    load_memory(test_memory, 2);
    e_cpu_context.y = 0x6969;

    int cycles = run_cycles(opcode_ext_x10_table[OP_CMPY_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.y, 0x6969);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.c, 0);
    assert_int_equal(e_cpu_context.cc.z, 1);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_ext_x10_table[OP_CMPY_E].cycle_count);
    assert_true(post_pc == pre_pc + 4);
}

void com_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_COM_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x1
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_COM_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_COM_E].cycle_count);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0xFE);
    assert_int_equal(e_cpu_context.cc.c, 1);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(e_cpu_context.cc.n, 1);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(post_pc, pre_pc + 3);
}

void dec_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_DEC_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x45
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_DEC_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_DEC_E].cycle_count);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x44);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(post_pc, pre_pc + 3);
}

void eora_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_EORA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    /* b shouldn't be messed with */
    e_cpu_context.d.byte_acc.b = 0xFF;
    e_cpu_context.d.byte_acc.a = 4;

    int cycles = run_cycles(opcode_table[OP_EORA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 1);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0xFF);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_EORA_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void eorb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_EORB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x5
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    /* a shouldn't be messed with */
    e_cpu_context.d.byte_acc.a = 0xFF;
    e_cpu_context.d.byte_acc.b = 4;

    int cycles = run_cycles(opcode_table[OP_EORB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 1);
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0xFF);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(cycles, opcode_table[OP_EORB_E].cycle_count);
    assert_true(post_pc == pre_pc + 3);
}

void inc_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_INC_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x45
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_INC_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_INC_E].cycle_count);
    assert_int_equal(read_byte_from_memory(S_POINTER + lower_byte_address),
                     0x46);
    assert_int_equal(e_cpu_context.cc.n, 0);
    assert_int_equal(e_cpu_context.cc.z, 0);
    assert_int_equal(e_cpu_context.cc.v, 0);
    assert_int_equal(post_pc, pre_pc + 3);
}

void jmp_extended_test(void **state) {
    (void) state; /* unused */

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_JMP_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x45,
        0x45
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_JMP_E].cycle_count);
    int post_pc = e_cpu_context.pc;

    assert_int_equal(cycles, opcode_table[OP_JMP_E].cycle_count);
    assert_int_equal(post_pc, S_POINTER | lower_byte_address);
}

void jsr_extended_test(void **state) {
    (void) state; /* unused */

    uint16 pre_stack_pointer = e_cpu_context.s;
    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_JSR_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x45,
        0x45
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 2 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_JSR_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    uint16 post_stack_pointer = e_cpu_context.s;

    assert_int_equal(cycles, opcode_table[OP_JSR_E].cycle_count);
    assert_int_equal(post_pc, S_POINTER | lower_byte_address);
    assert_int_equal(post_stack_pointer, pre_stack_pointer - 2);
    assert_int_equal(read_word_from_memory(post_stack_pointer),
                     USER_SPACE_ROOT + 3);
}

void lda_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_LDA_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x1F
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_LDA_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0x1F);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0);
    assert_int_equal(cycles, opcode_table[OP_LDA_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}

void ldb_extended_test(void **state) {
    (void) state; /* unused */
    int pre_pc = e_cpu_context.pc;

    uint8 lower_byte_address = 0x40;
    uint8 code_bytes[] = {
        OP_LDB_E,
        S_POINTER >> 8,
        lower_byte_address
    };
    uint8 data_bytes[] = {
        0x1F
    };
    struct mem_loader_def test_memory[] = {
        { USER_SPACE_ROOT, code_bytes, 3 },
        { S_POINTER + lower_byte_address, data_bytes, 1 }
    };
    load_memory(test_memory, 2);

    int cycles = run_cycles(opcode_table[OP_LDB_E].cycle_count);
    int post_pc = e_cpu_context.pc;
    assert_int_equal(e_cpu_context.d.byte_acc.a, 0);
    assert_int_equal(e_cpu_context.d.byte_acc.b, 0x1F);
    assert_int_equal(cycles, opcode_table[OP_LDB_E].cycle_count);
    assert_int_equal(post_pc, pre_pc + 3);
}