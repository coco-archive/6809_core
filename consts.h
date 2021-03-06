#define FALSE 0
#define TRUE 1

/* Allocate 64K of memory by default */
#define MEMORY_SIZE 0x10000
#define ROM_SIZE    0x2000

/* Start user space at 0x2000 given other reserved things in the CoCo
   memory map before it. This leaves 24K of usable user space under 0x7FFF. */
#define USER_SPACE_ROOT 0x2000

/* Pin the s and u stack pointers at 4KB intervals from the user space root */
#define S_POINTER 0x3000
#define U_POINTER 0x4000

/* The root addresses for Basic ROMs when in memory map mode (ty) */
#define EXT_BASIC_ROM   0x8000
#define COL_BASIC_ROM   0xA000
#define CARTRIDGE_ROM   0xC000
#define DISK_BASIC_ROM   0xC000

/* Interrupt vector / word pointer addresses */
#define RESET_VECTOR 0xFFFE
#define NMI_VECTOR   0xFFFC
#define SWI_VECTOR   0xFFFA
#define IRQ_VECTOR   0xFFF8
#define FIRQ_VECTOR  0xFFF6
#define SWI2_VECTOR  0xFFF4
#define SWI3_VECTOR  0xFFF2

#define DEFAULT_RESET_VECTOR 0xA027
#define DEFAULT_NMI_VECTOR   0x0109
#define DEFAULT_SWI_VECTOR   0x0106
#define DEFAULT_IRQ_VECTOR   0x010C
#define DEFAULT_FIRQ_VECTOR  0x010F
#define DEFAULT_SWI2_VECTOR  0x0103
#define DEFAULT_SWI3_VECTOR  0x0100

/* Halted states for SYNC and CWAI */
#define HS_NONE 0x0
#define HS_SYNC 0x1
#define HS_CWAI 0x2

enum swi_type {
    SWI_1,
    SWI_2,
    SWI_3
};

/* How many cycles to execute before running HSYNC/VSYNC cadence specific
   work */
#define HSYNC_CYCLES_TOTAL 57
#define VSYNC_CYCLES_TOTAL 14915

/* For cmocka, replace regular assert with mock_assert() which allows us to
   test for assert()'s in tests. */
#ifdef TESTS
extern void mock_assert(const int result, const char* const expression,
                        const char * const file, const int line);

#undef assert
#define assert(expression)                                              \
    mock_assert((int)(expression), #expression, __FILE__, __LINE__);
#endif

#define OP_NEG_D        0x0
#define OP_COM_D        0x3
#define OP_LSR_D        0x4
#define OP_ROR_D        0x6
#define OP_ASR_D        0x7
#define OP_ASL_D        0x8
#define OP_ROL_D        0x9
#define OP_DEC_D        0xA
#define OP_INC_D        0xC
#define OP_TST_D        0xD
#define OP_JMP_D        0xE
#define OP_CLR_D        0xF
#define OP_EXTENDED_X10 0x10
#define OP_EXTENDED_X11 0x11
#define OP_NOP          0x12
#define OP_SYNC         0x13
#define OP_LBRA         0x16
#define OP_LBSR         0x17
#define OP_DAA          0x19
#define OP_BRN          0x21
#define OP_ORCC         0x1A
#define OP_ANDCC        0x1C
#define OP_SEX          0x1D
#define OP_EXG          0x1E
#define OP_TFR          0x1F
#define OP_BRA          0x20
#define OP_BHI          0x22
#define OP_BLS          0x23
#define OP_BCC          0x24
#define OP_BHS          0x24
#define OP_BCS          0x25
#define OP_BNE          0x26
#define OP_BEQ          0x27
#define OP_BVC          0x28
#define OP_BVS          0X29
#define OP_BPL          0x2A
#define OP_BMI          0x2B
#define OP_BGE          0x2C
#define OP_BLT          0x2D
#define OP_BGT          0x2E
#define OP_BLE          0x2F
#define OP_LEAX_I       0x30
#define OP_LEAY_I       0x31
#define OP_LEAS_I       0x32
#define OP_LEAU_I       0x33
#define OP_PSHS         0x34
#define OP_PULS         0x35
#define OP_PSHU         0x36
#define OP_PULU         0x37
#define OP_RTS          0x39
#define OP_ABX          0x3A
#define OP_RTI          0x3B
#define OP_CWAI         0x3C
#define OP_MUL          0x3D
#define OP_SWI          0x3F
#define OP_NEGA         0x40
#define OP_COMA         0x43
#define OP_LSRA         0x44
#define OP_RORA         0x46
#define OP_ASRA         0x47
#define OP_ASLA         0x48
#define OP_ROLA         0x49
#define OP_DECA         0x4A
#define OP_INCA         0x4C
#define OP_TSTA         0x4D
#define OP_CLRA         0x4F
#define OP_NEGB         0x50
#define OP_COMB         0x53
#define OP_LSRB         0x54
#define OP_RORB         0x56
#define OP_ASRB         0x57
#define OP_ASLB         0x58
#define OP_ROLB         0x59
#define OP_DECB         0x5A
#define OP_INCB         0x5C
#define OP_TSTB         0x5D
#define OP_CLRB         0x5F
#define OP_NEG_I        0x60
#define OP_COM_I        0x63
#define OP_LSR_I        0x64
#define OP_ROR_I        0x66
#define OP_ASR_I        0x67
#define OP_ASL_I        0x68
#define OP_ROL_I        0x69
#define OP_DEC_I        0x6A
#define OP_INC_I        0x6C
#define OP_TST_I        0x6D
#define OP_JMP_I        0x6E
#define OP_CLR_I        0x6F
#define OP_NEG_E        0x70
#define OP_COM_E        0x73
#define OP_LSR_E        0x74
#define OP_ROR_E        0x76
#define OP_ASR_E        0x77
#define OP_ASL_E        0x78
#define OP_ROL_E        0x79
#define OP_DEC_E        0x7A
#define OP_INC_E        0x7C
#define OP_TST_E        0x7D
#define OP_JMP_E        0x7E
#define OP_CLR_E        0x7F
#define OP_SUBA         0x80
#define OP_CMPA         0x81
#define OP_SBCA         0x82
#define OP_SUBD         0x83
#define OP_ANDA         0x84
#define OP_BITA         0x85
#define OP_LDA          0x86
#define OP_EORA         0x88
#define OP_ADCA         0x89
#define OP_ORA          0x8A
#define OP_ADDA         0x8B
#define OP_CMPX         0x8C
#define OP_BSR          0x8D
#define OP_LDX          0x8E
#define OP_SUBA_D       0x90
#define OP_CMPA_D       0x91
#define OP_SBCA_D       0x92
#define OP_SUBD_D       0x93
#define OP_ANDA_D       0x94
#define OP_BITA_D       0x95
#define OP_LDA_D        0x96
#define OP_STA_D        0X97
#define OP_EORA_D       0x98
#define OP_ADCA_D       0x99
#define OP_ORA_D        0x9A
#define OP_ADDA_D       0x9B
#define OP_CMPX_D       0x9C
#define OP_JSR_D        0x9D
#define OP_LDX_D        0x9E
#define OP_STX_D        0x9F
#define OP_SUBA_I       0xA0
#define OP_CMPA_I       0xA1
#define OP_SBCA_I       0xA2
#define OP_SUBD_I       0xA3
#define OP_ANDA_I       0xA4
#define OP_BITA_I       0xA5
#define OP_LDA_I        0xA6
#define OP_STA_I        0xA7
#define OP_EORA_I       0xA8
#define OP_ADCA_I       0xA9
#define OP_ORA_I        0xAA
#define OP_ADDA_I       0xAB
#define OP_CMPX_I       0xAC
#define OP_JSR_I        0xAD
#define OP_LDX_I        0xAE
#define OP_STX_I        0xAF
#define OP_SUBA_E       0xB0
#define OP_CMPA_E       0xB1
#define OP_SBCA_E       0xB2
#define OP_SUBD_E       0xB3
#define OP_ANDA_E       0xB4
#define OP_BITA_E       0xB5
#define OP_LDA_E        0xB6
#define OP_STA_E        0xB7
#define OP_EORA_E       0xB8
#define OP_ADCA_E       0xB9
#define OP_ORA_E        0xBA
#define OP_ADDA_E       0xBB
#define OP_CMPX_E       0xBC
#define OP_JSR_E        0xBD
#define OP_LDX_E        0xBE
#define OP_STX_E        0xBF
#define OP_SUBB         0xC0
#define OP_CMPB         0xC1
#define OP_SBCB         0xC2
#define OP_ADDD         0xC3
#define OP_ANDB         0xC4
#define OP_BITB         0xC5
#define OP_LDB          0xC6
#define OP_EORB         0xC8
#define OP_ADCB         0xC9
#define OP_ORB          0xCA
#define OP_ADDB         0xCB
#define OP_LDD          0xCC
#define OP_LDU          0xCE
#define OP_SUBB_D       0xD0
#define OP_CMPB_D       0xD1
#define OP_SBCB_D       0xD2
#define OP_ADDD_D       0xD3
#define OP_ANDB_D       0xD4
#define OP_BITB_D       0xD5
#define OP_LDB_D        0xD6
#define OP_STB_D        0xD7
#define OP_EORB_D       0xD8
#define OP_ADCB_D       0xD9
#define OP_ORB_D        0xDA
#define OP_ADDB_D       0xDB
#define OP_LDD_D        0xDC
#define OP_STD_D        0xDD
#define OP_LDU_D        0xDE
#define OP_STU_D        0xDF
#define OP_SUBB_I       0xE0
#define OP_CMPB_I       0xE1
#define OP_SBCB_I       0xE2
#define OP_ADDD_I       0xE3
#define OP_ANDB_I       0xE4
#define OP_BITB_I       0xE5
#define OP_LDB_I        0xE6
#define OP_STB_I        0xE7
#define OP_EORB_I       0xE8
#define OP_ADCB_I       0xE9
#define OP_ORB_I        0xEA
#define OP_ADDB_I       0xEB
#define OP_LDD_I        0xEC
#define OP_STD_I        0xED
#define OP_LDU_I        0xEE
#define OP_STU_I        0xEF
#define OP_SUBB_E       0xF0
#define OP_CMPB_E       0xF1
#define OP_SBCB_E       0xF2
#define OP_ADDD_E       0xF3
#define OP_ANDB_E       0xF4
#define OP_BITB_E       0xF5
#define OP_LDB_E        0XF6
#define OP_STB_E        0xF7
#define OP_EORB_E       0xF8
#define OP_ADCB_E       0xF9
#define OP_ORB_E        0xFA
#define OP_ADDB_E       0xFB
#define OP_LDD_E        0xFC
#define OP_STD_E        0xFD
#define OP_LDU_E        0xFE
#define OP_STU_E        0xFF

/* Two byte opcodes - those have 0x10 as leading byte */

#define OP_LBRN   0x21
#define OP_LBHI   0x22
#define OP_LBLS   0x23
#define OP_LBCC   0x24
#define OP_LBHS   0x24
#define OP_LBCS   0x25
#define OP_LBNE   0x26
#define OP_LBEQ   0x27
#define OP_LBVC   0x28
#define OP_LBVS   0X29
#define OP_LBPL   0x2A
#define OP_LBMI   0x2B
#define OP_LBGE   0x2C
#define OP_LBLT   0x2D
#define OP_LBGT   0x2E
#define OP_LBLE   0x2F
#define OP_SWI2   0x3F
#define OP_CMPD   0x83
#define OP_CMPD_D 0x93
#define OP_CMPY_D 0x9C
#define OP_STY_D  0x9F
#define OP_LDY    0x8E
#define OP_CMPY   0x8C
#define OP_LDY_D  0x9E
#define OP_CMPD_I 0xA3
#define OP_CMPY_I 0xAC
#define OP_LDY_I  0xAE
#define OP_STY_I  0xAF
#define OP_CMPD_E 0xB3
#define OP_CMPY_E 0xBC
#define OP_LDY_E  0xBE
#define OP_STY_E  0xBF
#define OP_LDS    0xCE
#define OP_LDS_D  0xDE
#define OP_STS_D  0xDF
#define OP_LDS_I  0xEE
#define OP_STS_I  0xEF
#define OP_LDS_E  0xFE
#define OP_STS_E  0xFF

/* Two byte opcodes - those have 0x11 as leading byte */

#define OP_SWI3   0x3F
#define OP_CMPS   0x8C
#define OP_CMPU   0x83
#define OP_CMPU_D 0x93
#define OP_CMPS_D 0x9C
#define OP_CMPU_I 0xA3
#define OP_CMPS_I 0xAC
#define OP_CMPU_E 0xB3
#define OP_CMPS_E 0xBC
