#include "functions.h"

const struct opcode_def opcode_table[] = {
    /* 0x0 */ { "NOTIMPL", 0x0, 2, REG_NONE, INHERENT, notimpl },
    /* 0x1 */ { "NOTIMPL", 0x1, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2 */ { "NOTIMPL", 0x2, 2, REG_NONE, INHERENT, notimpl },
    /* 0x3 */ { "NOTIMPL", 0x3, 2, REG_NONE, INHERENT, notimpl },
    /* 0x4 */ { "NOTIMPL", 0x4, 2, REG_NONE, INHERENT, notimpl },
    /* 0x5 */ { "NOTIMPL", 0x5, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6 */ { "NOTIMPL", 0x6, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7 */ { "NOTIMPL", 0x7, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8 */ { "NOTIMPL", 0x8, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9 */ { "NOTIMPL", 0x9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA */ { "NOTIMPL", 0xA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB */ { "NOTIMPL", 0xB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC */ { "NOTIMPL", 0xC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD */ { "NOTIMPL", 0xD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE */ { "NOTIMPL", 0xE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF */ { "NOTIMPL", 0xF, 2, REG_NONE, INHERENT, notimpl },
    /* 0x10 */ { "NOTIMPL", 0x10, 2, REG_NONE, INHERENT, notimpl },
    /* 0x11 */ { "NOTIMPL", 0x11, 2, REG_NONE, INHERENT, notimpl },
    /* 0x12 */ { "NOP", OP_NOP, 2, REG_NONE, INHERENT, nop },
    /* 0x13 */ { "NOTIMPL", 0x13, 2, REG_NONE, INHERENT, notimpl },
    /* 0x14 */ { "NOTIMPL", 0x14, 2, REG_NONE, INHERENT, notimpl },
    /* 0x15 */ { "NOTIMPL", 0x15, 2, REG_NONE, INHERENT, notimpl },
    /* 0x16 */ { "NOTIMPL", 0x16, 2, REG_NONE, INHERENT, notimpl },
    /* 0x17 */ { "NOTIMPL", 0x17, 2, REG_NONE, INHERENT, notimpl },
    /* 0x18 */ { "NOTIMPL", 0x18, 2, REG_NONE, INHERENT, notimpl },
    /* 0x19 */ { "DAA", OP_DAA, 2, REG_NONE, INHERENT, daa },
    /* 0x1A */ { "NOTIMPL", 0x1A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x1B */ { "NOTIMPL", 0x1B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x1C */ { "NOTIMPL", 0x1C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x1D */ { "SEX", 0x1D, 2, REG_NONE, INHERENT, sex },
    /* 0x1E */ { "NOTIMPL", 0x1E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x1F */ { "NOTIMPL", 0x1F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x20 */ { "NOTIMPL", 0x20, 2, REG_NONE, INHERENT, notimpl },
    /* 0x21 */ { "NOTIMPL", 0x21, 2, REG_NONE, INHERENT, notimpl },
    /* 0x22 */ { "NOTIMPL", 0x22, 2, REG_NONE, INHERENT, notimpl },
    /* 0x23 */ { "NOTIMPL", 0x23, 2, REG_NONE, INHERENT, notimpl },
    /* 0x24 */ { "NOTIMPL", 0x24, 2, REG_NONE, INHERENT, notimpl },
    /* 0x25 */ { "NOTIMPL", 0x25, 2, REG_NONE, INHERENT, notimpl },
    /* 0x26 */ { "NOTIMPL", 0x26, 2, REG_NONE, INHERENT, notimpl },
    /* 0x27 */ { "NOTIMPL", 0x27, 2, REG_NONE, INHERENT, notimpl },
    /* 0x28 */ { "NOTIMPL", 0x28, 2, REG_NONE, INHERENT, notimpl },
    /* 0x29 */ { "NOTIMPL", 0x29, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2A */ { "NOTIMPL", 0x2A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2B */ { "NOTIMPL", 0x2B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2C */ { "NOTIMPL", 0x2C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2D */ { "NOTIMPL", 0x2D, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2E */ { "NOTIMPL", 0x2E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x2F */ { "NOTIMPL", 0x2F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x30 */ { "NOTIMPL", 0x30, 2, REG_NONE, INHERENT, notimpl },
    /* 0x31 */ { "NOTIMPL", 0x31, 2, REG_NONE, INHERENT, notimpl },
    /* 0x32 */ { "NOTIMPL", 0x32, 2, REG_NONE, INHERENT, notimpl },
    /* 0x33 */ { "NOTIMPL", 0x33, 2, REG_NONE, INHERENT, notimpl },
    /* 0x34 */ { "NOTIMPL", 0x34, 2, REG_NONE, INHERENT, notimpl },
    /* 0x35 */ { "NOTIMPL", 0x35, 2, REG_NONE, INHERENT, notimpl },
    /* 0x36 */ { "NOTIMPL", 0x36, 2, REG_NONE, INHERENT, notimpl },
    /* 0x37 */ { "NOTIMPL", 0x37, 2, REG_NONE, INHERENT, notimpl },
    /* 0x38 */ { "NOTIMPL", 0x38, 2, REG_NONE, INHERENT, notimpl },
    /* 0x39 */ { "NOTIMPL", 0x39, 2, REG_NONE, INHERENT, notimpl },
    /* 0x3A */ { "ABX", OP_ABX, 3, REG_NONE, INHERENT, abx },
    /* 0x3B */ { "NOTIMPL", 0x3B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x3C */ { "NOTIMPL", 0x3C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x3D */ { "MUL", 0x3D, 11, REG_NONE, INHERENT, mul },
    /* 0x3E */ { "NOTIMPL", 0x3E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x3F */ { "NOTIMPL", 0x3F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x40 */ { "NEGA", 0x40, 2, REG_A, INHERENT, neg },
    /* 0x41 */ { "NOTIMPL", 0x41, 2, REG_NONE, INHERENT, notimpl },
    /* 0x42 */ { "NOTIMPL", 0x42, 2, REG_NONE, INHERENT, notimpl },
    /* 0x43 */ { "COMA", OP_COMA, 2, REG_A, INHERENT, com },
    /* 0x44 */ { "LSRA", 0x44, 2, REG_A, INHERENT, lsr },
    /* 0x45 */ { "NOTIMPL", 0x45, 2, REG_NONE, INHERENT, notimpl },
    /* 0x46 */ { "NOTIMPL", 0x46, 2, REG_NONE, INHERENT, notimpl },
    /* 0x47 */ { "ASRA", OP_ASRA, 2, REG_A, INHERENT, asr },
    /* 0x48 */ { "ASLA", OP_ASLA, 2, REG_A, INHERENT, asl },
    /* 0x49 */ { "ROLA", OP_ROLA, 2, REG_A, INHERENT, rol },
    /* 0x4A */ { "DECA", 0x4A, 2, REG_A, INHERENT, dec },
    /* 0x4B */ { "NOTIMPL", 0x4B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x4C */ { "INCA", OP_INCA, 2, REG_A, INHERENT, inc },
    /* 0x4D */ { "TSTA", OP_TSTA, 2, REG_A, INHERENT, tst },
    /* 0x4E */ { "NOTIMPL", 0x4E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x4F */ { "CLRA", 0x4F, 2, REG_A, INHERENT, clr },
    /* 0x50 */ { "NEGB", 0x50, 2, REG_B, INHERENT, neg },
    /* 0x51 */ { "NOTIMPL", 0x51, 2, REG_NONE, INHERENT, notimpl },
    /* 0x52 */ { "NOTIMPL", 0x52, 2, REG_NONE, INHERENT, notimpl },
    /* 0x53 */ { "COMB", OP_COMB, 2, REG_B, INHERENT, com },
    /* 0x54 */ { "LSRB", 0x54, 2, REG_B, INHERENT, lsr },
    /* 0x55 */ { "NOTIMPL", 0x55, 2, REG_NONE, INHERENT, notimpl },
    /* 0x56 */ { "NOTIMPL", 0x56, 2, REG_NONE, INHERENT, notimpl },
    /* 0x57 */ { "ASRB", OP_ASRB, 2, REG_B, INHERENT, asr },
    /* 0x58 */ { "ASLB", OP_ASLB, 2, REG_B, INHERENT, asl },
    /* 0x59 */ { "ROLB", OP_ROLB, 2, REG_B, INHERENT, rol },
    /* 0x5A */ { "DECB", 0x5A, 2, REG_B, INHERENT, dec },
    /* 0x5B */ { "NOTIMPL", 0x5B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x5C */ { "INCB", OP_INCB, 2, REG_B, INHERENT, inc },
    /* 0x5D */ { "TSTB", OP_TSTB, 2, REG_B, INHERENT, tst },
    /* 0x5E */ { "NOTIMPL", 0x5E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x5F */ { "CLRB", 0x5F, 2, REG_B, INHERENT, clr },
    /* 0x60 */ { "NOTIMPL", 0x60, 2, REG_NONE, INHERENT, notimpl },
    /* 0x61 */ { "NOTIMPL", 0x61, 2, REG_NONE, INHERENT, notimpl },
    /* 0x62 */ { "NOTIMPL", 0x62, 2, REG_NONE, INHERENT, notimpl },
    /* 0x63 */ { "NOTIMPL", 0x63, 2, REG_NONE, INHERENT, notimpl },
    /* 0x64 */ { "NOTIMPL", 0x64, 2, REG_NONE, INHERENT, notimpl },
    /* 0x65 */ { "NOTIMPL", 0x65, 2, REG_NONE, INHERENT, notimpl },
    /* 0x66 */ { "NOTIMPL", 0x66, 2, REG_NONE, INHERENT, notimpl },
    /* 0x67 */ { "NOTIMPL", 0x67, 2, REG_NONE, INHERENT, notimpl },
    /* 0x68 */ { "NOTIMPL", 0x68, 2, REG_NONE, INHERENT, notimpl },
    /* 0x69 */ { "NOTIMPL", 0x69, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6A */ { "NOTIMPL", 0x6A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6B */ { "NOTIMPL", 0x6B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6C */ { "NOTIMPL", 0x6C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6D */ { "NOTIMPL", 0x6D, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6E */ { "NOTIMPL", 0x6E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x6F */ { "NOTIMPL", 0x6F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x70 */ { "NOTIMPL", 0x70, 2, REG_NONE, INHERENT, notimpl },
    /* 0x71 */ { "NOTIMPL", 0x71, 2, REG_NONE, INHERENT, notimpl },
    /* 0x72 */ { "NOTIMPL", 0x72, 2, REG_NONE, INHERENT, notimpl },
    /* 0x73 */ { "NOTIMPL", 0x73, 2, REG_NONE, INHERENT, notimpl },
    /* 0x74 */ { "NOTIMPL", 0x74, 2, REG_NONE, INHERENT, notimpl },
    /* 0x75 */ { "NOTIMPL", 0x75, 2, REG_NONE, INHERENT, notimpl },
    /* 0x76 */ { "NOTIMPL", 0x76, 2, REG_NONE, INHERENT, notimpl },
    /* 0x77 */ { "NOTIMPL", 0x77, 2, REG_NONE, INHERENT, notimpl },
    /* 0x78 */ { "NOTIMPL", 0x78, 2, REG_NONE, INHERENT, notimpl },
    /* 0x79 */ { "NOTIMPL", 0x79, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7A */ { "NOTIMPL", 0x7A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7B */ { "NOTIMPL", 0x7B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7C */ { "NOTIMPL", 0x7C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7D */ { "NOTIMPL", 0x7D, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7E */ { "NOTIMPL", 0x7E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x7F */ { "NOTIMPL", 0x7F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x80 */ { "NOTIMPL", 0x80, 2, REG_NONE, INHERENT, notimpl },
    /* 0x81 */ { "NOTIMPL", 0x81, 2, REG_NONE, INHERENT, notimpl },
    /* 0x82 */ { "NOTIMPL", 0x82, 2, REG_NONE, INHERENT, notimpl },
    /* 0x83 */ { "NOTIMPL", 0x83, 2, REG_NONE, INHERENT, notimpl },
    /* 0x84 */ { "NOTIMPL", 0x84, 2, REG_NONE, INHERENT, notimpl },
    /* 0x85 */ { "NOTIMPL", 0x85, 2, REG_NONE, INHERENT, notimpl },
    /* 0x86 */ { "NOTIMPL", 0x86, 2, REG_NONE, INHERENT, notimpl },
    /* 0x87 */ { "NOTIMPL", 0x87, 2, REG_NONE, INHERENT, notimpl },
    /* 0x88 */ { "NOTIMPL", 0x88, 2, REG_NONE, INHERENT, notimpl },
    /* 0x89 */ { "NOTIMPL", 0x89, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8A */ { "NOTIMPL", 0x8A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8B */ { "NOTIMPL", 0x8B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8C */ { "NOTIMPL", 0x8C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8D */ { "NOTIMPL", 0x8D, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8E */ { "NOTIMPL", 0x8E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x8F */ { "NOTIMPL", 0x8F, 2, REG_NONE, INHERENT, notimpl },
    /* 0x90 */ { "NOTIMPL", 0x90, 2, REG_NONE, INHERENT, notimpl },
    /* 0x91 */ { "NOTIMPL", 0x91, 2, REG_NONE, INHERENT, notimpl },
    /* 0x92 */ { "NOTIMPL", 0x92, 2, REG_NONE, INHERENT, notimpl },
    /* 0x93 */ { "NOTIMPL", 0x93, 2, REG_NONE, INHERENT, notimpl },
    /* 0x94 */ { "NOTIMPL", 0x94, 2, REG_NONE, INHERENT, notimpl },
    /* 0x95 */ { "NOTIMPL", 0x95, 2, REG_NONE, INHERENT, notimpl },
    /* 0x96 */ { "NOTIMPL", 0x96, 2, REG_NONE, INHERENT, notimpl },
    /* 0x97 */ { "NOTIMPL", 0x97, 2, REG_NONE, INHERENT, notimpl },
    /* 0x98 */ { "NOTIMPL", 0x98, 2, REG_NONE, INHERENT, notimpl },
    /* 0x99 */ { "NOTIMPL", 0x99, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9A */ { "NOTIMPL", 0x9A, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9B */ { "NOTIMPL", 0x9B, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9C */ { "NOTIMPL", 0x9C, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9D */ { "NOTIMPL", 0x9D, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9E */ { "NOTIMPL", 0x9E, 2, REG_NONE, INHERENT, notimpl },
    /* 0x9F */ { "NOTIMPL", 0x9F, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA0 */ { "NOTIMPL", 0xA0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA1 */ { "NOTIMPL", 0xA1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA2 */ { "NOTIMPL", 0xA2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA3 */ { "NOTIMPL", 0xA3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA4 */ { "NOTIMPL", 0xA4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA5 */ { "NOTIMPL", 0xA5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA6 */ { "NOTIMPL", 0xA6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA7 */ { "NOTIMPL", 0xA7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA8 */ { "NOTIMPL", 0xA8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xA9 */ { "NOTIMPL", 0xA9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAA */ { "NOTIMPL", 0xAA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAB */ { "NOTIMPL", 0xAB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAC */ { "NOTIMPL", 0xAC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAD */ { "NOTIMPL", 0xAD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAE */ { "NOTIMPL", 0xAE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xAF */ { "NOTIMPL", 0xAF, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB0 */ { "NOTIMPL", 0xB0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB1 */ { "NOTIMPL", 0xB1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB2 */ { "NOTIMPL", 0xB2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB3 */ { "NOTIMPL", 0xB3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB4 */ { "NOTIMPL", 0xB4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB5 */ { "NOTIMPL", 0xB5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB6 */ { "NOTIMPL", 0xB6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB7 */ { "NOTIMPL", 0xB7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB8 */ { "NOTIMPL", 0xB8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xB9 */ { "NOTIMPL", 0xB9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBA */ { "NOTIMPL", 0xBA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBB */ { "NOTIMPL", 0xBB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBC */ { "NOTIMPL", 0xBC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBD */ { "NOTIMPL", 0xBD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBE */ { "NOTIMPL", 0xBE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xBF */ { "NOTIMPL", 0xBF, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC0 */ { "NOTIMPL", 0xC0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC1 */ { "NOTIMPL", 0xC1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC2 */ { "NOTIMPL", 0xC2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC3 */ { "NOTIMPL", 0xC3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC4 */ { "NOTIMPL", 0xC4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC5 */ { "NOTIMPL", 0xC5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC6 */ { "NOTIMPL", 0xC6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC7 */ { "NOTIMPL", 0xC7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC8 */ { "NOTIMPL", 0xC8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xC9 */ { "NOTIMPL", 0xC9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCA */ { "NOTIMPL", 0xCA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCB */ { "NOTIMPL", 0xCB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCC */ { "NOTIMPL", 0xCC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCD */ { "NOTIMPL", 0xCD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCE */ { "NOTIMPL", 0xCE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xCF */ { "NOTIMPL", 0xCF, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD0 */ { "NOTIMPL", 0xD0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD1 */ { "NOTIMPL", 0xD1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD2 */ { "NOTIMPL", 0xD2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD3 */ { "NOTIMPL", 0xD3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD4 */ { "NOTIMPL", 0xD4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD5 */ { "NOTIMPL", 0xD5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD6 */ { "NOTIMPL", 0xD6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD7 */ { "NOTIMPL", 0xD7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD8 */ { "NOTIMPL", 0xD8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xD9 */ { "NOTIMPL", 0xD9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDA */ { "NOTIMPL", 0xDA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDB */ { "NOTIMPL", 0xDB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDC */ { "NOTIMPL", 0xDC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDD */ { "NOTIMPL", 0xDD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDE */ { "NOTIMPL", 0xDE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xDF */ { "NOTIMPL", 0xDF, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE0 */ { "NOTIMPL", 0xE0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE1 */ { "NOTIMPL", 0xE1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE2 */ { "NOTIMPL", 0xE2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE3 */ { "NOTIMPL", 0xE3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE4 */ { "NOTIMPL", 0xE4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE5 */ { "NOTIMPL", 0xE5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE6 */ { "NOTIMPL", 0xE6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE7 */ { "NOTIMPL", 0xE7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE8 */ { "NOTIMPL", 0xE8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xE9 */ { "NOTIMPL", 0xE9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xEA */ { "NOTIMPL", 0xEA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xEB */ { "NOTIMPL", 0xEB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xEC */ { "NOTIMPL", 0xEC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xED */ { "NOTIMPL", 0xED, 2, REG_NONE, INHERENT, notimpl },
    /* 0xEE */ { "NOTIMPL", 0xEE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xEF */ { "NOTIMPL", 0xEF, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF0 */ { "NOTIMPL", 0xF0, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF1 */ { "NOTIMPL", 0xF1, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF2 */ { "NOTIMPL", 0xF2, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF3 */ { "NOTIMPL", 0xF3, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF4 */ { "NOTIMPL", 0xF4, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF5 */ { "NOTIMPL", 0xF5, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF6 */ { "NOTIMPL", 0xF6, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF7 */ { "NOTIMPL", 0xF7, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF8 */ { "NOTIMPL", 0xF8, 2, REG_NONE, INHERENT, notimpl },
    /* 0xF9 */ { "NOTIMPL", 0xF9, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFA */ { "NOTIMPL", 0xFA, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFB */ { "NOTIMPL", 0xFB, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFC */ { "NOTIMPL", 0xFC, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFD */ { "NOTIMPL", 0xFD, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFE */ { "NOTIMPL", 0xFE, 2, REG_NONE, INHERENT, notimpl },
    /* 0xFF */ { "NOTIMPL", 0xFF, 2, REG_NONE, INHERENT, notimpl }
};
