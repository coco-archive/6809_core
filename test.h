#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

/* Core tests */
int test_setup(void **state);
int test_teardown(void **state);
void core_init_test(void **state);
void test_e_flag(void **state);
void test_f_flag(void **state);
void test_h_flag(void **state);
void test_i_flag(void **state);
void test_n_flag(void **state);
void test_z_flag(void **state);
void test_v_flag(void **state);
void test_c_flag(void **state);
void test_all_flags(void **state);
void test_load_memory(void **state);
void test_load_memory_too_big(void **state);
void test_load_memory_too_far(void **state);
void read_byte_from_memory_test(void **state);
void read_word_from_memory_test(void **state);
void read_byte_handler_immedidate_test(void **state);
void read_byte_handler_direct_test(void **state);
void read_byte_handler_extended_test(void **state);
void read_word_handler_immedidate_test(void **state);
void read_word_handler_direct_test(void **state);
void read_word_handler_extended_test(void **state);
void memory_clear_test(void **state);
void get_memory_address_from_postbyte_direct_test(void **state);
void get_memory_address_from_postbyte_immediate_test(void **state);
void get_memory_address_from_postbyte_extended_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_basic_x_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_basic_y_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_basic_u_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_basic_s_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_5bit_x_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_5bit_positive_x_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_8bit_y_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_16bit_s_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_16bit_s_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_8bit_s_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_constant_indirect_u_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_a_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_b_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_d_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_a_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_b_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_accumulator_d_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_inc_1_test(void **state);
void get_memory_address_from_postbyte_indexed_inc_2_test(void **state);
void get_memory_address_from_postbyte_indexed_dec_1_test(void **state);
void get_memory_address_from_postbyte_indexed_dec_2_test(void **state);
void get_memory_address_from_postbyte_indexed_inc_2_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_dec_2_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_pc_offset_8_test(void **state);
void get_memory_address_from_postbyte_indexed_pc_offset_16_test(void **state);
void get_memory_address_from_postbyte_indexed_pc_offset_8_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_pc_offset_16_indirect_test(void **state);
void get_memory_address_from_postbyte_indexed_extended_indirect_test(void **state);
void run_cycles_test(void **state);
void run_cycles_multiple_test(void **state);
void run_cycles_notimpl_test(void **state);
void decode_source_target_postbyte_test(void **state);
void decode_source_target_postbyte_2_test(void **state);
void decode_source_target_postbyte_invalid_test(void **state);
void get_reg_value_8_test(void **state);
void get_reg_value_8_invalid_test(void **state);
void set_reg_value_8_test(void **state);
void get_reg_value_16_test(void **state);
void get_reg_value_16_invalid_test(void **state);
void set_reg_value_16_test(void **state);

/* Immediate tests */
void adca_immediate_test(void **state);
void adcb_immediate_test(void **state);
void adca_immediate_carry_test(void **state);
void adcb_immediate_carry_test(void **state);
void adca_immediate_overflow_test(void **state);
void adcb_immediate_overflow_test(void **state);
void adca_immediate_carry_flag_test(void **state);
void adcb_immediate_carry_flag_test(void **state);
void adca_immediate_half_carry_test(void **state);
void adcb_immediate_half_carry_test(void **state);
void adca_immediate_zero_test(void **state);
void adcb_immediate_zero_test(void **state);
void adda_immediate_test(void **state);
void addb_immediate_test(void **state);
void adda_immediate_carry_test(void **state);
void addb_immediate_carry_test(void **state);
void adda_immediate_overflow_test(void **state);
void addb_immediate_overflow_test(void **state);
void adda_immediate_carry_flag_test(void **state);
void addb_immediate_carry_flag_test(void **state);
void adda_immediate_half_carry_test(void **state);
void addb_immediate_half_carry_test(void **state);
void adda_immediate_zero_test(void **state);
void addb_immediate_zero_test(void **state);
void addd_immediate_test(void **state);
void addd_immediate_overflow_test(void **state);
void addd_immediate_carry_flag_test(void **state);
void addd_immediate_zero_test(void **state);
void anda_immediate_test(void **state);
void andb_immediate_test(void **state);
void anda_immediate_zero_test(void **state);
void andb_immediate_zero_test(void **state);
void andcc_immediate_test(void **state);
void andcc_immediate_e_test(void **state);
void bita_immediate_test(void **state);
void bitb_immediate_test(void **state);
void bita_immediate_zero_test(void **state);
void bitb_immediate_zero_test(void **state);
void bita_immediate_negative_test(void **state);
void bitb_immediate_negative_test(void **state);
void cmpa_immediate_nocarry(void **state);
void cmpb_immediate_nocarry(void **state);
void cmpa_immediate_carry(void **state);
void cmpb_immediate_carry(void **state);
void cmpa_immediate_overflow(void **state);
void cmpb_immediate_overflow(void **state);
void cmpa_immediate_zero(void **state);
void cmpb_immediate_zero(void **state);
void cmpd_immediate_nocarry(void **state);
void cmpd_immediate_carry(void **state);
void cmpd_immediate_overflow(void **state);
void cmpd_immediate_zero(void **state);
void cmps_immediate_nocarry(void **state);
void cmps_immediate_carry(void **state);
void cmps_immediate_overflow(void **state);
void cmps_immediate_zero(void **state);
void cmpu_immediate_nocarry(void **state);
void cmpu_immediate_carry(void **state);
void cmpu_immediate_overflow(void **state);
void cmpu_immediate_zero(void **state);
void cmpx_immediate_nocarry(void **state);
void cmpx_immediate_carry(void **state);
void cmpx_immediate_overflow(void **state);
void cmpx_immediate_zero(void **state);
void cmpy_immediate_nocarry(void **state);
void cmpy_immediate_carry(void **state);
void cmpy_immediate_overflow(void **state);
void cmpy_immediate_zero(void **state);
void eora_immediate_test(void **state);
void eorb_immediate_test(void **state);
void eora_immediate_zero_test(void **state);
void eorb_immediate_zero_test(void **state);
void exg_basic_test(void **state);
void exg_basic_16_test(void **state);
void exg_basic_16_to_8_test(void **state);
void exg_basic_8_to_16_test(void **state);
void exg_a_d_8_to_16_test(void **state);
void exg_cc_x_8_to_16_test(void **state);
void exg_cc_invalid_test(void **state);
void exg_x_invalid_test(void **state);
void lda_basic_test(void **state);
void ldb_basic_test(void **state);
void ldd_basic_test(void **state);
void lds_basic_test(void **state);
void ldu_basic_test(void **state);
void ldx_basic_test(void **state);
void ldy_basic_test(void **state);
void ora_immediate_test(void **state);
void orb_immediate_test(void **state);
void orcc_immediate_test(void **state);
void pshs_immediate_test(void ** state);
void pshu_immediate_test(void ** state);
void pshs_nothing_test(void ** state);
void pshu_nothing_test(void ** state);
void pshs_one_test(void ** state);
void pshu_one_test(void ** state);
void pulu_immediate_test(void ** state);
void puls_immediate_test(void ** state);
void pulu_one_test(void ** state);
void puls_one_test(void ** state);
void pulu_nothing_test(void ** state);
void puls_nothing_test(void ** state);
void sbca_immediate_test(void ** state);
void sbcb_immediate_test(void ** state);
void sbca_carry_test(void ** state);
void sbcb_carry_test(void ** state);
void sbca_overflow_test(void ** state);
void sbcb_overflow_test(void ** state);
void suba_immediate_test(void ** state);
void subb_immediate_test(void ** state);
void suba_carry_test(void ** state);
void subb_carry_test(void ** state);
void suba_overflow_test(void ** state);
void subb_overflow_test(void ** state);
void sub16d_immediate_test(void ** state);
void sub16d_carry_test(void ** state);
void sub16d_overflow_test(void ** state);
void tfr_basic_test(void **state);
void tfr_basic_16_test(void **state);
void tfr_basic_16_to_8_test(void **state);
void tfr_basic_8_to_16_test(void **state);
void tfr_a_d_8_to_16_test(void **state);
void tfr_cc_x_8_to_16_test(void **state);
void tfr_cc_invalid_test(void **state);
void tfr_x_invalid_test(void **state);

/* Inherent tests */
void nop_test(void **state);
void nop_pc_test(void **state);
void abx_test(void **state);
void abx_test_add(void **state);
void abx_test_unsigned(void **state);
void asla_test(void **state);
void asla_flags_test(void **state);
void aslb_test(void **state);
void aslb_flags_test(void **state);
void asra_test(void **state);
void asra_flags_test(void **state);
void asra_negative_test(void **state);
void asrb_test(void **state);
void asrb_flags_test(void **state);
void asrb_negative_test(void **state);
void clra_flags_test(void **state);
void clrb_flags_test(void **state);
void coma_test(void **state);
void comb_test(void **state);
void coma_zero_test(void **state);
void comb_zero_test(void **state);
void daa_test(void **state);
void daa_not_adjusted_test(void **state);
void deca_test(void **state);
void decb_test(void **state);
void deca_zero_test(void **state);
void decb_zero_test(void **state);
void deca_negative_test(void **state);
void decb_negative_test(void **state);
void inca_test(void **state);
void incb_test(void **state);
void inca_overflow_test(void **state);
void incb_overflow_test(void **state);
void inca_zero_test(void **state);
void incb_zero_test(void **state);
void inca_multiple_pc_test(void **state);
void lsra_test(void **state);
void lsra_flags_test(void **state);
void lsra_negative_test(void **state);
void lsrb_test(void **state);
void lsrb_flags_test(void **state);
void lsrb_negative_test(void **state);
void mul_test(void **state);
void mul_signed_test(void **state);
void mul_zero_test(void **state);
void nega_test(void **state);
void negb_test(void **state);
void nega_minusone_test(void **state);
void negb_minusone_test(void **state);
void rola_test(void **state);
void rolb_test(void **state);
void rola_carry_test(void **state);
void rolb_carry_test(void **state);
void rola_rotate_test(void **state);
void rolb_rotate_test(void **state);
void rora_test(void **state);
void rorb_test(void **state);
void rora_carry_test(void **state);
void rorb_carry_test(void **state);
void rora_rotate_test(void **state);
void rorb_rotate_test(void **state);
void sex_test(void **state);
void sex_negative_test(void **state);
void sex_zero_test(void **state);
void tsta_test(void **state);
void tstb_test(void **state);
void tsta_negative_test(void **state);
void tstb_negative_test(void **state);
void tsta_zero_test(void **state);
void tstb_zero_test(void **state);

/* Direct tests */
void adca_direct_test(void **state);
void adcb_direct_test(void **state);
void adda_direct_test(void **state);
void addb_direct_test(void **state);
void addd_direct_test(void **state);
void anda_direct_test(void **state);
void andb_direct_test(void **state);
void asl_direct_test(void **state);
void asr_direct_test(void **state);
void bita_direct_test(void **state);
void bitb_direct_test(void **state);
void clr_direct_test(void **state);
void cmpa_direct_nocarry_test(void **state);
void cmpb_direct_nocarry_test(void **state);
void cmpd_direct_nocarry_test(void **state);
void cmps_direct_nocarry_test(void **state);
void cmpu_direct_nocarry_test(void **state);
void cmpx_direct_overflow_test(void **state);
void cmpy_direct_zero_test(void **state);
void com_direct_test(void **state);
void dec_direct_test(void **state);
void eora_direct_test(void **state);
void eorb_direct_test(void **state);
void inc_direct_test(void **state);
void jmp_direct_test(void **state);
void jsr_direct_test(void **state);
void lda_direct_test(void **state);
void ldb_direct_test(void **state);
void ldd_direct_test(void **state);
void lds_direct_test(void **state);
void ldu_direct_test(void **state);
void ldx_direct_test(void **state);
void ldy_direct_test(void **state);
void neg_direct_test(void **state);
void ora_direct_test(void **state);
void orb_direct_test(void **state);
void rol_direct_test(void **state);
void ror_direct_test(void **state);
void sbca_direct_test(void ** state);
void sbcb_direct_test(void ** state);
void sta_direct_test(void **state);
void stb_direct_test(void **state);
void std_direct_test(void **state);
void sts_direct_test(void **state);
void stu_direct_test(void **state);
void stx_direct_test(void **state);
void sty_direct_test(void **state);
void suba_direct_test(void ** state);
void subb_direct_test(void ** state);
void subd_direct_test(void ** state);
void tst_direct_test(void **state);

/* Extended tests */
void adca_extended_test(void **state);
void adcb_extended_test(void **state);
void adda_extended_test(void **state);
void addb_extended_test(void **state);
void addd_extended_test(void **state);
void anda_extended_test(void **state);
void andb_extended_test(void **state);
void asl_extended_test(void **state);
void asr_extended_test(void **state);
void bita_extended_test(void **state);
void bitb_extended_test(void **state);
void clr_extended_test(void **state);
void cmpa_extended_nocarry_test(void **state);
void cmpb_extended_nocarry_test(void **state);
void cmpd_extended_nocarry_test(void **state);
void cmps_extended_nocarry_test(void **state);
void cmpu_extended_nocarry_test(void **state);
void cmpx_extended_overflow_test(void **state);
void cmpy_extended_zero_test(void **state);
void com_extended_test(void **state);
void dec_extended_test(void **state);
void eora_extended_test(void **state);
void eorb_extended_test(void **state);
void inc_extended_test(void **state);
void jmp_extended_test(void **state);
void jsr_extended_test(void **state);
void lda_extended_test(void **state);
void ldb_extended_test(void **state);
void ldd_extended_test(void **state);
void lds_extended_test(void **state);
void ldu_extended_test(void **state);
void ldx_extended_test(void **state);
void ldy_extended_test(void **state);
void neg_extended_test(void **state);
void ora_extended_test(void **state);
void orb_extended_test(void **state);
void rol_extended_test(void **state);
void ror_extended_test(void **state);
void sbca_extended_test(void ** state);
void sbcb_extended_test(void ** state);
void sta_extended_test(void **state);
void stb_extended_test(void **state);
void std_extended_test(void **state);
void sts_extended_test(void **state);
void stu_extended_test(void **state);
void stx_extended_test(void **state);
void sty_extended_test(void **state);
void suba_extended_test(void ** state);
void subb_extended_test(void ** state);
void subd_extended_test(void ** state);
void tst_extended_test(void **state);

/* Indexed tests */
void adca_indexed_test(void **state);
void adcb_indexed_test(void **state);
void adda_indexed_test(void **state);
void addb_indexed_test(void **state);
void addd_indexed_test(void **state);
void anda_indexed_test(void **state);
void andb_indexed_test(void **state);
void asl_indexed_test(void **state);
void asr_indexed_test(void **state);
void bita_indexed_test(void **state);
void bitb_indexed_test(void **state);
void clr_indexed_test(void **state);
void cmpa_indexed_nocarry_test(void **state);
void cmpb_indexed_nocarry_test(void **state);
void cmpd_indexed_nocarry_test(void **state);
void cmps_indexed_nocarry_test(void **state);
void cmpu_indexed_nocarry_test(void **state);
void cmpx_indexed_overflow_test(void **state);
void cmpy_indexed_zero_test(void **state);
void com_indexed_test(void **state);
void dec_indexed_test(void **state);
void eora_indexed_test(void **state);
void eorb_indexed_test(void **state);
/* void inc_indexed_test(void **state); */
/* void jmp_indexed_test(void **state); */
/* void jsr_indexed_test(void **state); */
/* void lda_indexed_test(void **state); */
/* void ldb_indexed_test(void **state); */
/* void ldd_indexed_test(void **state); */
/* void lds_indexed_test(void **state); */
/* void ldu_indexed_test(void **state); */
/* void ldx_indexed_test(void **state); */
/* void ldy_indexed_test(void **state); */
/* void neg_indexed_test(void **state); */
/* void ora_indexed_test(void **state); */
/* void orb_indexed_test(void **state); */
/* void rol_indexed_test(void **state); */
/* void ror_indexed_test(void **state); */
/* void sbca_indexed_test(void ** state); */
/* void sbcb_indexed_test(void ** state); */
/* void sta_indexed_test(void **state); */
/* void stb_indexed_test(void **state); */
/* void std_indexed_test(void **state); */
/* void sts_indexed_test(void **state); */
/* void stu_indexed_test(void **state); */
/* void stx_indexed_test(void **state); */
/* void sty_indexed_test(void **state); */
/* void suba_indexed_test(void ** state); */
/* void subb_indexed_test(void ** state); */
/* void subd_indexed_test(void ** state); */
/* void tst_indexed_test(void **state); */

const struct CMUnitTest tests[] = {
    cmocka_unit_test_setup_teardown(core_init_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_e_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_f_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_h_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_i_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_n_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_z_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_v_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_c_flag, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_all_flags, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_load_memory, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_load_memory_too_big, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(test_load_memory_too_far, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(run_cycles_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(run_cycles_multiple_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(run_cycles_notimpl_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_byte_from_memory_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_word_from_memory_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_byte_handler_immedidate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_byte_handler_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_byte_handler_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_word_handler_immedidate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_word_handler_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(read_word_handler_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(memory_clear_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_basic_x_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_basic_y_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_basic_u_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_basic_s_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_5bit_x_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_5bit_positive_x_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_8bit_y_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_16bit_s_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_16bit_s_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_8bit_s_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_constant_indirect_u_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_a_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_b_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_d_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_a_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_b_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_accumulator_d_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_inc_1_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_inc_2_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_dec_1_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_dec_2_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_inc_2_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_dec_2_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_pc_offset_8_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_pc_offset_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_pc_offset_8_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_pc_offset_16_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_memory_address_from_postbyte_indexed_extended_indirect_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decode_source_target_postbyte_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decode_source_target_postbyte_2_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decode_source_target_postbyte_invalid_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_reg_value_8_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_reg_value_8_invalid_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(set_reg_value_8_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_reg_value_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(get_reg_value_16_invalid_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(set_reg_value_16_test, test_setup, test_teardown),

    cmocka_unit_test_setup_teardown(nop_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(nop_pc_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(abx_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(abx_test_add, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(abx_test_unsigned, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asla_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asla_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(aslb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(aslb_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asra_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asra_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asra_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asrb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asrb_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asrb_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(clra_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(clrb_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(coma_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(comb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(coma_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(comb_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(daa_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(daa_not_adjusted_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(deca_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(deca_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decb_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(deca_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(decb_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inca_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(incb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inca_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(incb_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inca_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(incb_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inca_multiple_pc_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsra_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsra_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsra_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsrb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsrb_flags_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lsrb_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(mul_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(mul_signed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(mul_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(nega_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(negb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(nega_minusone_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(negb_minusone_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rola_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rolb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rola_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rolb_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rola_rotate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rolb_rotate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rora_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rorb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rora_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rorb_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rora_rotate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rorb_rotate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sex_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sex_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sex_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tsta_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tstb_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tsta_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tstb_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tsta_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tstb_zero_test, test_setup, test_teardown),

    cmocka_unit_test_setup_teardown(adca_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adca_immediate_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adca_immediate_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adca_immediate_carry_flag_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_carry_flag_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adca_immediate_half_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_half_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adca_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_carry_flag_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_carry_flag_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_half_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_half_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_immediate_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_immediate_carry_flag_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(anda_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(anda_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andb_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andcc_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andcc_immediate_e_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_immediate_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_immediate_negative_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_immediate_nocarry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_immediate_carry, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_immediate_overflow, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_immediate_zero, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eora_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eorb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eora_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eorb_immediate_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_basic_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_basic_16_to_8_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_basic_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_a_d_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_cc_x_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_cc_invalid_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(exg_x_invalid_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lda_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldb_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldd_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lds_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldu_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldx_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldy_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ora_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(orb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(orcc_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshs_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshu_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshs_nothing_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshu_nothing_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshs_one_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pshu_one_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(puls_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pulu_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(puls_one_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pulu_one_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(puls_nothing_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(pulu_nothing_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbca_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbcb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbca_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbcb_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbca_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbcb_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(suba_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subb_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(suba_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subb_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(suba_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subb_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sub16d_immediate_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sub16d_carry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sub16d_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_basic_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_basic_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_basic_16_to_8_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_basic_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_a_d_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_cc_x_8_to_16_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tfr_cc_invalid_test, test_setup, test_teardown),

    cmocka_unit_test_setup_teardown(adca_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(anda_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asl_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asr_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(clr_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_direct_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_direct_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_direct_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_direct_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_direct_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_direct_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_direct_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(com_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(dec_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eora_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eorb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inc_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(jmp_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(jsr_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lda_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldd_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lds_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldu_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldx_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldy_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(neg_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ora_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(orb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rol_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ror_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbca_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbcb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sta_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(std_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sts_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stu_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stx_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sty_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(suba_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subb_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subd_direct_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tst_direct_test, test_setup, test_teardown),

    cmocka_unit_test_setup_teardown(adca_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(anda_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asl_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asr_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(clr_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_extended_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_extended_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_extended_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_extended_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_extended_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_extended_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_extended_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(com_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(dec_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eora_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eorb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(inc_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(jmp_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(jsr_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lda_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldd_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(lds_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldu_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldx_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ldy_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(neg_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ora_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(orb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(rol_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(ror_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbca_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sbcb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sta_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(std_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sts_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stu_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(stx_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(sty_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(suba_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subb_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(subd_extended_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(tst_extended_test, test_setup, test_teardown),

    cmocka_unit_test_setup_teardown(adca_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adcb_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(adda_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addb_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(addd_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(anda_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(andb_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asl_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(asr_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bita_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(bitb_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(clr_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpa_indexed_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpb_indexed_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpd_indexed_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmps_indexed_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpu_indexed_nocarry_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpx_indexed_overflow_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(cmpy_indexed_zero_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(com_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(dec_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eora_indexed_test, test_setup, test_teardown),
    cmocka_unit_test_setup_teardown(eorb_indexed_test, test_setup, test_teardown)
    /* cmocka_unit_test_setup_teardown(inc_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(jmp_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(jsr_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(lda_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ldb_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ldd_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(lds_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ldu_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ldx_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ldy_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(neg_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ora_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(orb_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(rol_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(ror_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(sbca_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(sbcb_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(sta_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(stb_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(std_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(sts_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(stu_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(stx_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(sty_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(suba_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(subb_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(subd_indexed_test, test_setup, test_teardown), */
    /* cmocka_unit_test_setup_teardown(tst_indexed_test, test_setup, test_teardown) */
};
