#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "core.h"
#include "tests/test.h"

extern struct cpu_state e_cpu_context;
extern struct opcode_def opcode_table[];
extern const char* root_test_path;

void program_8_bit_addition_test(void **state) {
    (void) state; /* unused */

    struct test_check checks[] = {
        { 0x5000, 0x38 },
        { 0x5001, 0x2B },
        { 0x5002, 0x63 }
    };

    char* program_path = get_test_program_path("8-bit_addition.bin");
    init_from_decb_file(program_path);
    free(program_path);

    uint16 num_cycles = run_cycles(opcode_table[OP_LDA_E].cycle_count +
                                   opcode_table[OP_ADDA_E].cycle_count +
                                   opcode_table[OP_STA_E].cycle_count);
    perform_memory_checks(checks, sizeof(checks) / sizeof(checks[0]));
    assert_int_equal(e_cpu_context.pc, 0x2009);
    assert_int_equal(num_cycles, opcode_table[OP_LDA_E].cycle_count +
                     opcode_table[OP_ADDA_E].cycle_count +
                     opcode_table[OP_STA_E].cycle_count);

}

void program_shift_left_1_bit_test(void **state) {
    (void) state; /* unused */

    struct test_check checks[] = {
        { 0x5000, 0x6F },
        { 0x5001, 0xDE }
    };

    char* program_path = get_test_program_path("shift_left_1_bit.bin");
    init_from_decb_file(program_path);
    free(program_path);

    run_cycles(opcode_table[OP_LDB_E].cycle_count +
               opcode_table[OP_ASLB].cycle_count +
               opcode_table[OP_STB_E].cycle_count);
    perform_memory_checks(checks, sizeof(checks) / sizeof(checks[0]));
    assert_int_equal(e_cpu_context.pc, 0x2007);
}

void program_mask_off_most_significant_four_bits_test(void **state) {
    (void) state; /* unused */

    struct test_check checks[] = {
        { 0x5000, 0x3D },
        { 0x5001, 0x0D }
    };

    char* program_path = get_test_program_path("mask_off_most_significant_four_bits.bin");
    init_from_decb_file(program_path);
    free(program_path);

    run_cycles(opcode_table[OP_LDA_E].cycle_count +
               opcode_table[OP_ANDA].cycle_count +
               opcode_table[OP_STA_E].cycle_count);
    perform_memory_checks(checks, sizeof(checks) / sizeof(checks[0]));
    assert_int_equal(e_cpu_context.pc, 0x2008);
}


void program_find_larger_of_two_numbers_test(void **state) {
    (void) state; /* unused */

    struct test_check checks[] = {
        { 0x5000, 0x3F },
        { 0x5001, 0x2B },
        { 0x5002, 0x3F }
    };

    char* program_path = get_test_program_path("find_larger_of_two_numbers.bin");
    init_from_decb_file(program_path);
    free(program_path);

    run_cycles(opcode_table[OP_LDA_E].cycle_count +
               opcode_table[OP_CMPA].cycle_count +
               opcode_table[OP_BHS].cycle_count +
               opcode_table[OP_STA_E].cycle_count);
    perform_memory_checks(checks, sizeof(checks) / sizeof(checks[0]));
    assert_int_equal(e_cpu_context.pc, 0x200E);
}

void program_table_of_squares_test(void **state) {
    (void) state; /* unused */

    struct test_check checks[] = {
        { 0x50, 0 },
        { 0x51, 1 },
        { 0x52, 4 },
        { 0x53, 9 },
        { 0x54, 16 },
        { 0x55, 25 },
        { 0x56, 36 },
        { 0x57, 47 },
        { 0x41, 3 },
        { 0x42, 9 }
    };

    char* program_path = get_test_program_path("table_of_squares.bin");
    init_from_decb_file(program_path);
    free(program_path);

    run_cycles(opcode_table[OP_LDB_D].cycle_count +
               opcode_table[OP_LDX_I].cycle_count +
               opcode_table[OP_LDA_I].cycle_count +
               opcode_table[OP_STA_D].cycle_count);
    perform_memory_checks(checks, sizeof(checks) / sizeof(checks[0]));
    assert_int_equal(e_cpu_context.pc, 0xB);
}