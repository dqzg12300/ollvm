/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace R600 {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    INLINEASM_BR	= 2,
    CFI_INSTRUCTION	= 3,
    EH_LABEL	= 4,
    GC_LABEL	= 5,
    ANNOTATION_LABEL	= 6,
    KILL	= 7,
    EXTRACT_SUBREG	= 8,
    INSERT_SUBREG	= 9,
    IMPLICIT_DEF	= 10,
    SUBREG_TO_REG	= 11,
    COPY_TO_REGCLASS	= 12,
    DBG_VALUE	= 13,
    DBG_LABEL	= 14,
    REG_SEQUENCE	= 15,
    COPY	= 16,
    BUNDLE	= 17,
    LIFETIME_START	= 18,
    LIFETIME_END	= 19,
    STACKMAP	= 20,
    FENTRY_CALL	= 21,
    PATCHPOINT	= 22,
    LOAD_STACK_GUARD	= 23,
    STATEPOINT	= 24,
    LOCAL_ESCAPE	= 25,
    FAULTING_OP	= 26,
    PATCHABLE_OP	= 27,
    PATCHABLE_FUNCTION_ENTER	= 28,
    PATCHABLE_RET	= 29,
    PATCHABLE_FUNCTION_EXIT	= 30,
    PATCHABLE_TAIL_CALL	= 31,
    PATCHABLE_EVENT_CALL	= 32,
    PATCHABLE_TYPED_EVENT_CALL	= 33,
    ICALL_BRANCH_FUNNEL	= 34,
    G_ADD	= 35,
    G_SUB	= 36,
    G_MUL	= 37,
    G_SDIV	= 38,
    G_UDIV	= 39,
    G_SREM	= 40,
    G_UREM	= 41,
    G_AND	= 42,
    G_OR	= 43,
    G_XOR	= 44,
    G_IMPLICIT_DEF	= 45,
    G_PHI	= 46,
    G_FRAME_INDEX	= 47,
    G_GLOBAL_VALUE	= 48,
    G_EXTRACT	= 49,
    G_UNMERGE_VALUES	= 50,
    G_INSERT	= 51,
    G_MERGE_VALUES	= 52,
    G_BUILD_VECTOR	= 53,
    G_BUILD_VECTOR_TRUNC	= 54,
    G_CONCAT_VECTORS	= 55,
    G_PTRTOINT	= 56,
    G_INTTOPTR	= 57,
    G_BITCAST	= 58,
    G_INTRINSIC_TRUNC	= 59,
    G_INTRINSIC_ROUND	= 60,
    G_LOAD	= 61,
    G_SEXTLOAD	= 62,
    G_ZEXTLOAD	= 63,
    G_STORE	= 64,
    G_ATOMIC_CMPXCHG_WITH_SUCCESS	= 65,
    G_ATOMIC_CMPXCHG	= 66,
    G_ATOMICRMW_XCHG	= 67,
    G_ATOMICRMW_ADD	= 68,
    G_ATOMICRMW_SUB	= 69,
    G_ATOMICRMW_AND	= 70,
    G_ATOMICRMW_NAND	= 71,
    G_ATOMICRMW_OR	= 72,
    G_ATOMICRMW_XOR	= 73,
    G_ATOMICRMW_MAX	= 74,
    G_ATOMICRMW_MIN	= 75,
    G_ATOMICRMW_UMAX	= 76,
    G_ATOMICRMW_UMIN	= 77,
    G_FENCE	= 78,
    G_BRCOND	= 79,
    G_BRINDIRECT	= 80,
    G_INTRINSIC	= 81,
    G_INTRINSIC_W_SIDE_EFFECTS	= 82,
    G_ANYEXT	= 83,
    G_TRUNC	= 84,
    G_CONSTANT	= 85,
    G_FCONSTANT	= 86,
    G_VASTART	= 87,
    G_VAARG	= 88,
    G_SEXT	= 89,
    G_ZEXT	= 90,
    G_SHL	= 91,
    G_LSHR	= 92,
    G_ASHR	= 93,
    G_ICMP	= 94,
    G_FCMP	= 95,
    G_SELECT	= 96,
    G_UADDO	= 97,
    G_UADDE	= 98,
    G_USUBO	= 99,
    G_USUBE	= 100,
    G_SADDO	= 101,
    G_SADDE	= 102,
    G_SSUBO	= 103,
    G_SSUBE	= 104,
    G_UMULO	= 105,
    G_SMULO	= 106,
    G_UMULH	= 107,
    G_SMULH	= 108,
    G_FADD	= 109,
    G_FSUB	= 110,
    G_FMUL	= 111,
    G_FMA	= 112,
    G_FDIV	= 113,
    G_FREM	= 114,
    G_FPOW	= 115,
    G_FEXP	= 116,
    G_FEXP2	= 117,
    G_FLOG	= 118,
    G_FLOG2	= 119,
    G_FLOG10	= 120,
    G_FNEG	= 121,
    G_FPEXT	= 122,
    G_FPTRUNC	= 123,
    G_FPTOSI	= 124,
    G_FPTOUI	= 125,
    G_SITOFP	= 126,
    G_UITOFP	= 127,
    G_FABS	= 128,
    G_FCOPYSIGN	= 129,
    G_FCANONICALIZE	= 130,
    G_FMINNUM	= 131,
    G_FMAXNUM	= 132,
    G_FMINNUM_IEEE	= 133,
    G_FMAXNUM_IEEE	= 134,
    G_FMINIMUM	= 135,
    G_FMAXIMUM	= 136,
    G_GEP	= 137,
    G_PTR_MASK	= 138,
    G_SMIN	= 139,
    G_SMAX	= 140,
    G_UMIN	= 141,
    G_UMAX	= 142,
    G_BR	= 143,
    G_BRJT	= 144,
    G_INSERT_VECTOR_ELT	= 145,
    G_EXTRACT_VECTOR_ELT	= 146,
    G_SHUFFLE_VECTOR	= 147,
    G_CTTZ	= 148,
    G_CTTZ_ZERO_UNDEF	= 149,
    G_CTLZ	= 150,
    G_CTLZ_ZERO_UNDEF	= 151,
    G_CTPOP	= 152,
    G_BSWAP	= 153,
    G_FCEIL	= 154,
    G_FCOS	= 155,
    G_FSIN	= 156,
    G_FSQRT	= 157,
    G_FFLOOR	= 158,
    G_FRINT	= 159,
    G_FNEARBYINT	= 160,
    G_ADDRSPACE_CAST	= 161,
    G_BLOCK_ADDR	= 162,
    G_JUMP_TABLE	= 163,
    BRANCH	= 164,
    BRANCH_COND_f32	= 165,
    BRANCH_COND_i32	= 166,
    BREAK	= 167,
    BREAKC_f32	= 168,
    BREAKC_i32	= 169,
    BREAK_LOGICALNZ_f32	= 170,
    BREAK_LOGICALNZ_i32	= 171,
    BREAK_LOGICALZ_f32	= 172,
    BREAK_LOGICALZ_i32	= 173,
    CONST_COPY	= 174,
    CONTINUE	= 175,
    CONTINUEC_f32	= 176,
    CONTINUEC_i32	= 177,
    CONTINUE_LOGICALNZ_f32	= 178,
    CONTINUE_LOGICALNZ_i32	= 179,
    CONTINUE_LOGICALZ_f32	= 180,
    CONTINUE_LOGICALZ_i32	= 181,
    CUBE_eg_pseudo	= 182,
    CUBE_r600_pseudo	= 183,
    DEFAULT	= 184,
    DOT_4	= 185,
    DUMMY_CHAIN	= 186,
    ELSE	= 187,
    END	= 188,
    ENDFUNC	= 189,
    ENDIF	= 190,
    ENDLOOP	= 191,
    ENDMAIN	= 192,
    ENDSWITCH	= 193,
    FABS_R600	= 194,
    FNEG_R600	= 195,
    FUNC	= 196,
    IFC_f32	= 197,
    IFC_i32	= 198,
    IF_LOGICALNZ_f32	= 199,
    IF_LOGICALNZ_i32	= 200,
    IF_LOGICALZ_f32	= 201,
    IF_LOGICALZ_i32	= 202,
    IF_PREDICATE_SET	= 203,
    JUMP	= 204,
    JUMP_COND	= 205,
    MASK_WRITE	= 206,
    MOV_IMM_F32	= 207,
    MOV_IMM_GLOBAL_ADDR	= 208,
    MOV_IMM_I32	= 209,
    PRED_X	= 210,
    R600_EXTRACT_ELT_V2	= 211,
    R600_EXTRACT_ELT_V4	= 212,
    R600_INSERT_ELT_V2	= 213,
    R600_INSERT_ELT_V4	= 214,
    R600_RegisterLoad	= 215,
    R600_RegisterStore	= 216,
    RETDYN	= 217,
    RETURN	= 218,
    TXD	= 219,
    TXD_SHADOW	= 220,
    WHILELOOP	= 221,
    ADD	= 222,
    ADDC_UINT	= 223,
    ADD_INT	= 224,
    ALU_CLAUSE	= 225,
    AND_INT	= 226,
    ASHR_eg	= 227,
    ASHR_r600	= 228,
    BCNT_INT	= 229,
    BFE_INT_eg	= 230,
    BFE_UINT_eg	= 231,
    BFI_INT_eg	= 232,
    BFM_INT_eg	= 233,
    BIT_ALIGN_INT_eg	= 234,
    CEIL	= 235,
    CF_ALU	= 236,
    CF_ALU_BREAK	= 237,
    CF_ALU_CONTINUE	= 238,
    CF_ALU_ELSE_AFTER	= 239,
    CF_ALU_POP_AFTER	= 240,
    CF_ALU_PUSH_BEFORE	= 241,
    CF_CALL_FS_EG	= 242,
    CF_CALL_FS_R600	= 243,
    CF_CONTINUE_EG	= 244,
    CF_CONTINUE_R600	= 245,
    CF_ELSE_EG	= 246,
    CF_ELSE_R600	= 247,
    CF_END_CM	= 248,
    CF_END_EG	= 249,
    CF_END_R600	= 250,
    CF_JUMP_EG	= 251,
    CF_JUMP_R600	= 252,
    CF_PUSH_EG	= 253,
    CF_PUSH_ELSE_R600	= 254,
    CF_TC_EG	= 255,
    CF_TC_R600	= 256,
    CF_VC_EG	= 257,
    CF_VC_R600	= 258,
    CNDE_INT	= 259,
    CNDE_eg	= 260,
    CNDE_r600	= 261,
    CNDGE_INT	= 262,
    CNDGE_eg	= 263,
    CNDGE_r600	= 264,
    CNDGT_INT	= 265,
    CNDGT_eg	= 266,
    CNDGT_r600	= 267,
    COS_cm	= 268,
    COS_eg	= 269,
    COS_r600	= 270,
    COS_r700	= 271,
    CUBE_eg_real	= 272,
    CUBE_r600_real	= 273,
    DOT4_eg	= 274,
    DOT4_r600	= 275,
    EG_ExportBuf	= 276,
    EG_ExportSwz	= 277,
    END_LOOP_EG	= 278,
    END_LOOP_R600	= 279,
    EXP_IEEE_cm	= 280,
    EXP_IEEE_eg	= 281,
    EXP_IEEE_r600	= 282,
    FETCH_CLAUSE	= 283,
    FFBH_UINT	= 284,
    FFBL_INT	= 285,
    FLOOR	= 286,
    FLT16_TO_FLT32	= 287,
    FLT32_TO_FLT16	= 288,
    FLT_TO_INT_eg	= 289,
    FLT_TO_INT_r600	= 290,
    FLT_TO_UINT_eg	= 291,
    FLT_TO_UINT_r600	= 292,
    FMA_eg	= 293,
    FRACT	= 294,
    GROUP_BARRIER	= 295,
    INTERP_LOAD_P0	= 296,
    INTERP_PAIR_XY	= 297,
    INTERP_PAIR_ZW	= 298,
    INTERP_VEC_LOAD	= 299,
    INTERP_XY	= 300,
    INTERP_ZW	= 301,
    INT_TO_FLT_eg	= 302,
    INT_TO_FLT_r600	= 303,
    KILLGT	= 304,
    LDS_ADD	= 305,
    LDS_ADD_RET	= 306,
    LDS_AND	= 307,
    LDS_AND_RET	= 308,
    LDS_BYTE_READ_RET	= 309,
    LDS_BYTE_WRITE	= 310,
    LDS_CMPST	= 311,
    LDS_CMPST_RET	= 312,
    LDS_MAX_INT	= 313,
    LDS_MAX_INT_RET	= 314,
    LDS_MAX_UINT	= 315,
    LDS_MAX_UINT_RET	= 316,
    LDS_MIN_INT	= 317,
    LDS_MIN_INT_RET	= 318,
    LDS_MIN_UINT	= 319,
    LDS_MIN_UINT_RET	= 320,
    LDS_OR	= 321,
    LDS_OR_RET	= 322,
    LDS_READ_RET	= 323,
    LDS_SHORT_READ_RET	= 324,
    LDS_SHORT_WRITE	= 325,
    LDS_SUB	= 326,
    LDS_SUB_RET	= 327,
    LDS_UBYTE_READ_RET	= 328,
    LDS_USHORT_READ_RET	= 329,
    LDS_WRITE	= 330,
    LDS_WRXCHG	= 331,
    LDS_WRXCHG_RET	= 332,
    LDS_XOR	= 333,
    LDS_XOR_RET	= 334,
    LITERALS	= 335,
    LOG_CLAMPED_eg	= 336,
    LOG_CLAMPED_r600	= 337,
    LOG_IEEE_cm	= 338,
    LOG_IEEE_eg	= 339,
    LOG_IEEE_r600	= 340,
    LOOP_BREAK_EG	= 341,
    LOOP_BREAK_R600	= 342,
    LSHL_eg	= 343,
    LSHL_r600	= 344,
    LSHR_eg	= 345,
    LSHR_r600	= 346,
    MAX	= 347,
    MAX_DX10	= 348,
    MAX_INT	= 349,
    MAX_UINT	= 350,
    MIN	= 351,
    MIN_DX10	= 352,
    MIN_INT	= 353,
    MIN_UINT	= 354,
    MOV	= 355,
    MOVA_INT_eg	= 356,
    MUL	= 357,
    MULADD_IEEE_eg	= 358,
    MULADD_IEEE_r600	= 359,
    MULADD_INT24_cm	= 360,
    MULADD_UINT24_eg	= 361,
    MULADD_eg	= 362,
    MULADD_r600	= 363,
    MULHI_INT_cm	= 364,
    MULHI_INT_cm24	= 365,
    MULHI_INT_eg	= 366,
    MULHI_INT_r600	= 367,
    MULHI_UINT24_eg	= 368,
    MULHI_UINT_cm	= 369,
    MULHI_UINT_cm24	= 370,
    MULHI_UINT_eg	= 371,
    MULHI_UINT_r600	= 372,
    MULLO_INT_cm	= 373,
    MULLO_INT_eg	= 374,
    MULLO_INT_r600	= 375,
    MULLO_UINT_cm	= 376,
    MULLO_UINT_eg	= 377,
    MULLO_UINT_r600	= 378,
    MUL_IEEE	= 379,
    MUL_INT24_cm	= 380,
    MUL_LIT_eg	= 381,
    MUL_LIT_r600	= 382,
    MUL_UINT24_eg	= 383,
    NOT_INT	= 384,
    OR_INT	= 385,
    PAD	= 386,
    POP_EG	= 387,
    POP_R600	= 388,
    PRED_SETE	= 389,
    PRED_SETE_INT	= 390,
    PRED_SETGE	= 391,
    PRED_SETGE_INT	= 392,
    PRED_SETGT	= 393,
    PRED_SETGT_INT	= 394,
    PRED_SETNE	= 395,
    PRED_SETNE_INT	= 396,
    R600_ExportBuf	= 397,
    R600_ExportSwz	= 398,
    RAT_ATOMIC_ADD_NORET	= 399,
    RAT_ATOMIC_ADD_RTN	= 400,
    RAT_ATOMIC_AND_NORET	= 401,
    RAT_ATOMIC_AND_RTN	= 402,
    RAT_ATOMIC_CMPXCHG_INT_NORET	= 403,
    RAT_ATOMIC_CMPXCHG_INT_RTN	= 404,
    RAT_ATOMIC_DEC_UINT_NORET	= 405,
    RAT_ATOMIC_DEC_UINT_RTN	= 406,
    RAT_ATOMIC_INC_UINT_NORET	= 407,
    RAT_ATOMIC_INC_UINT_RTN	= 408,
    RAT_ATOMIC_MAX_INT_NORET	= 409,
    RAT_ATOMIC_MAX_INT_RTN	= 410,
    RAT_ATOMIC_MAX_UINT_NORET	= 411,
    RAT_ATOMIC_MAX_UINT_RTN	= 412,
    RAT_ATOMIC_MIN_INT_NORET	= 413,
    RAT_ATOMIC_MIN_INT_RTN	= 414,
    RAT_ATOMIC_MIN_UINT_NORET	= 415,
    RAT_ATOMIC_MIN_UINT_RTN	= 416,
    RAT_ATOMIC_OR_NORET	= 417,
    RAT_ATOMIC_OR_RTN	= 418,
    RAT_ATOMIC_RSUB_NORET	= 419,
    RAT_ATOMIC_RSUB_RTN	= 420,
    RAT_ATOMIC_SUB_NORET	= 421,
    RAT_ATOMIC_SUB_RTN	= 422,
    RAT_ATOMIC_XCHG_INT_NORET	= 423,
    RAT_ATOMIC_XCHG_INT_RTN	= 424,
    RAT_ATOMIC_XOR_NORET	= 425,
    RAT_ATOMIC_XOR_RTN	= 426,
    RAT_MSKOR	= 427,
    RAT_STORE_DWORD128	= 428,
    RAT_STORE_DWORD32	= 429,
    RAT_STORE_DWORD64	= 430,
    RAT_STORE_TYPED_cm	= 431,
    RAT_STORE_TYPED_eg	= 432,
    RAT_WRITE_CACHELESS_128_eg	= 433,
    RAT_WRITE_CACHELESS_32_eg	= 434,
    RAT_WRITE_CACHELESS_64_eg	= 435,
    RECIPSQRT_CLAMPED_cm	= 436,
    RECIPSQRT_CLAMPED_eg	= 437,
    RECIPSQRT_CLAMPED_r600	= 438,
    RECIPSQRT_IEEE_cm	= 439,
    RECIPSQRT_IEEE_eg	= 440,
    RECIPSQRT_IEEE_r600	= 441,
    RECIP_CLAMPED_cm	= 442,
    RECIP_CLAMPED_eg	= 443,
    RECIP_CLAMPED_r600	= 444,
    RECIP_IEEE_cm	= 445,
    RECIP_IEEE_eg	= 446,
    RECIP_IEEE_r600	= 447,
    RECIP_UINT_eg	= 448,
    RECIP_UINT_r600	= 449,
    RNDNE	= 450,
    SETE	= 451,
    SETE_DX10	= 452,
    SETE_INT	= 453,
    SETGE_DX10	= 454,
    SETGE_INT	= 455,
    SETGE_UINT	= 456,
    SETGT_DX10	= 457,
    SETGT_INT	= 458,
    SETGT_UINT	= 459,
    SETNE_DX10	= 460,
    SETNE_INT	= 461,
    SGE	= 462,
    SGT	= 463,
    SIN_cm	= 464,
    SIN_eg	= 465,
    SIN_r600	= 466,
    SIN_r700	= 467,
    SNE	= 468,
    SUBB_UINT	= 469,
    SUB_INT	= 470,
    TEX_GET_GRADIENTS_H	= 471,
    TEX_GET_GRADIENTS_V	= 472,
    TEX_GET_TEXTURE_RESINFO	= 473,
    TEX_LD	= 474,
    TEX_LDPTR	= 475,
    TEX_SAMPLE	= 476,
    TEX_SAMPLE_C	= 477,
    TEX_SAMPLE_C_G	= 478,
    TEX_SAMPLE_C_L	= 479,
    TEX_SAMPLE_C_LB	= 480,
    TEX_SAMPLE_G	= 481,
    TEX_SAMPLE_L	= 482,
    TEX_SAMPLE_LB	= 483,
    TEX_SET_GRADIENTS_H	= 484,
    TEX_SET_GRADIENTS_V	= 485,
    TEX_VTX_CONSTBUF	= 486,
    TEX_VTX_TEXBUF	= 487,
    TRUNC	= 488,
    UINT_TO_FLT_eg	= 489,
    UINT_TO_FLT_r600	= 490,
    VTX_READ_128_cm	= 491,
    VTX_READ_128_eg	= 492,
    VTX_READ_16_cm	= 493,
    VTX_READ_16_eg	= 494,
    VTX_READ_32_cm	= 495,
    VTX_READ_32_eg	= 496,
    VTX_READ_64_cm	= 497,
    VTX_READ_64_eg	= 498,
    VTX_READ_8_cm	= 499,
    VTX_READ_8_eg	= 500,
    WHILE_LOOP_EG	= 501,
    WHILE_LOOP_R600	= 502,
    XOR_INT	= 503,
    INSTRUCTION_LIST_END = 504
  };

} // end R600 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

#ifdef GET_INSTRINFO_SCHED_ENUM
#undef GET_INSTRINFO_SCHED_ENUM
namespace llvm {

namespace R600 {
namespace Sched {
  enum {
    NoInstrModel	= 0,
    NullALU	= 1,
    VecALU	= 2,
    AnyALU	= 3,
    TransALU	= 4,
    XALU	= 5,
    SCHED_LIST_END = 6
  };
} // end Sched namespace
} // end R600 namespace
} // end llvm namespace
#endif // GET_INSTRINFO_SCHED_ENUM

#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {


static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { -1, 0, MCOI::OPERAND_GENERIC_0, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_1, 0 }, { -1, 0, MCOI::OPERAND_GENERIC_2, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { R600::R600_Predicate_BitRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg64VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128VerticalRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { R600::R600_TReg32_ZRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { R600::R600_TReg32_YRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_Reg32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { R600::R600_PredicateRegClassID, 0|(1<<MCOI::Predicate), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { R600::R600_Reg128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { R600::R600_Reg64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { R600::R600_TReg32_XRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };

extern const MCInstrDesc R600Insts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2 = INLINEASM_BR
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = CFI_INSTRUCTION
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = EH_LABEL
  { 5,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #5 = GC_LABEL
  { 6,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = ANNOTATION_LABEL
  { 7,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #7 = KILL
  { 8,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #8 = EXTRACT_SUBREG
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #9 = INSERT_SUBREG
  { 10,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #10 = IMPLICIT_DEF
  { 11,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #11 = SUBREG_TO_REG
  { 12,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #12 = COPY_TO_REGCLASS
  { 13,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #13 = DBG_VALUE
  { 14,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #14 = DBG_LABEL
  { 15,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #15 = REG_SEQUENCE
  { 16,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #16 = COPY
  { 17,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #17 = BUNDLE
  { 18,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #18 = LIFETIME_START
  { 19,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #19 = LIFETIME_END
  { 20,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #20 = STACKMAP
  { 21,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #21 = FENTRY_CALL
  { 22,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #22 = PATCHPOINT
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #23 = LOAD_STACK_GUARD
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = STATEPOINT
  { 25,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #25 = LOCAL_ESCAPE
  { 26,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #26 = FAULTING_OP
  { 27,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #27 = PATCHABLE_OP
  { 28,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #28 = PATCHABLE_FUNCTION_ENTER
  { 29,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #29 = PATCHABLE_RET
  { 30,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #30 = PATCHABLE_FUNCTION_EXIT
  { 31,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #31 = PATCHABLE_TAIL_CALL
  { 32,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #32 = PATCHABLE_EVENT_CALL
  { 33,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #33 = PATCHABLE_TYPED_EVENT_CALL
  { 34,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #34 = ICALL_BRANCH_FUNNEL
  { 35,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #35 = G_ADD
  { 36,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #36 = G_SUB
  { 37,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #37 = G_MUL
  { 38,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #38 = G_SDIV
  { 39,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #39 = G_UDIV
  { 40,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #40 = G_SREM
  { 41,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #41 = G_UREM
  { 42,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #42 = G_AND
  { 43,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #43 = G_OR
  { 44,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #44 = G_XOR
  { 45,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #45 = G_IMPLICIT_DEF
  { 46,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #46 = G_PHI
  { 47,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #47 = G_FRAME_INDEX
  { 48,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #48 = G_GLOBAL_VALUE
  { 49,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #49 = G_EXTRACT
  { 50,	2,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #50 = G_UNMERGE_VALUES
  { 51,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #51 = G_INSERT
  { 52,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #52 = G_MERGE_VALUES
  { 53,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #53 = G_BUILD_VECTOR
  { 54,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #54 = G_BUILD_VECTOR_TRUNC
  { 55,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #55 = G_CONCAT_VECTORS
  { 56,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #56 = G_PTRTOINT
  { 57,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #57 = G_INTTOPTR
  { 58,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #58 = G_BITCAST
  { 59,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #59 = G_INTRINSIC_TRUNC
  { 60,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #60 = G_INTRINSIC_ROUND
  { 61,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #61 = G_LOAD
  { 62,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #62 = G_SEXTLOAD
  { 63,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #63 = G_ZEXTLOAD
  { 64,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #64 = G_STORE
  { 65,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #65 = G_ATOMIC_CMPXCHG_WITH_SUCCESS
  { 66,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #66 = G_ATOMIC_CMPXCHG
  { 67,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #67 = G_ATOMICRMW_XCHG
  { 68,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #68 = G_ATOMICRMW_ADD
  { 69,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #69 = G_ATOMICRMW_SUB
  { 70,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #70 = G_ATOMICRMW_AND
  { 71,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #71 = G_ATOMICRMW_NAND
  { 72,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #72 = G_ATOMICRMW_OR
  { 73,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = G_ATOMICRMW_XOR
  { 74,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #74 = G_ATOMICRMW_MAX
  { 75,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #75 = G_ATOMICRMW_MIN
  { 76,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #76 = G_ATOMICRMW_UMAX
  { 77,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #77 = G_ATOMICRMW_UMIN
  { 78,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #78 = G_FENCE
  { 79,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #79 = G_BRCOND
  { 80,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #80 = G_BRINDIRECT
  { 81,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #81 = G_INTRINSIC
  { 82,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #82 = G_INTRINSIC_W_SIDE_EFFECTS
  { 83,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #83 = G_ANYEXT
  { 84,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #84 = G_TRUNC
  { 85,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #85 = G_CONSTANT
  { 86,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #86 = G_FCONSTANT
  { 87,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #87 = G_VASTART
  { 88,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #88 = G_VAARG
  { 89,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #89 = G_SEXT
  { 90,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #90 = G_ZEXT
  { 91,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #91 = G_SHL
  { 92,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #92 = G_LSHR
  { 93,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #93 = G_ASHR
  { 94,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #94 = G_ICMP
  { 95,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #95 = G_FCMP
  { 96,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #96 = G_SELECT
  { 97,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #97 = G_UADDO
  { 98,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #98 = G_UADDE
  { 99,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = G_USUBO
  { 100,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #100 = G_USUBE
  { 101,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = G_SADDO
  { 102,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #102 = G_SADDE
  { 103,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #103 = G_SSUBO
  { 104,	5,	2,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #104 = G_SSUBE
  { 105,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #105 = G_UMULO
  { 106,	4,	2,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #106 = G_SMULO
  { 107,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #107 = G_UMULH
  { 108,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #108 = G_SMULH
  { 109,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #109 = G_FADD
  { 110,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #110 = G_FSUB
  { 111,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #111 = G_FMUL
  { 112,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #112 = G_FMA
  { 113,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #113 = G_FDIV
  { 114,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #114 = G_FREM
  { 115,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #115 = G_FPOW
  { 116,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #116 = G_FEXP
  { 117,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #117 = G_FEXP2
  { 118,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #118 = G_FLOG
  { 119,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #119 = G_FLOG2
  { 120,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #120 = G_FLOG10
  { 121,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #121 = G_FNEG
  { 122,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #122 = G_FPEXT
  { 123,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #123 = G_FPTRUNC
  { 124,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #124 = G_FPTOSI
  { 125,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #125 = G_FPTOUI
  { 126,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #126 = G_SITOFP
  { 127,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #127 = G_UITOFP
  { 128,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #128 = G_FABS
  { 129,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #129 = G_FCOPYSIGN
  { 130,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #130 = G_FCANONICALIZE
  { 131,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #131 = G_FMINNUM
  { 132,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #132 = G_FMAXNUM
  { 133,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #133 = G_FMINNUM_IEEE
  { 134,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #134 = G_FMAXNUM_IEEE
  { 135,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #135 = G_FMINIMUM
  { 136,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #136 = G_FMAXIMUM
  { 137,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #137 = G_GEP
  { 138,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #138 = G_PTR_MASK
  { 139,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #139 = G_SMIN
  { 140,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #140 = G_SMAX
  { 141,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #141 = G_UMIN
  { 142,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #142 = G_UMAX
  { 143,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #143 = G_BR
  { 144,	3,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #144 = G_BRJT
  { 145,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #145 = G_INSERT_VECTOR_ELT
  { 146,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #146 = G_EXTRACT_VECTOR_ELT
  { 147,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #147 = G_SHUFFLE_VECTOR
  { 148,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #148 = G_CTTZ
  { 149,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #149 = G_CTTZ_ZERO_UNDEF
  { 150,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #150 = G_CTLZ
  { 151,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #151 = G_CTLZ_ZERO_UNDEF
  { 152,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #152 = G_CTPOP
  { 153,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #153 = G_BSWAP
  { 154,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #154 = G_FCEIL
  { 155,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #155 = G_FCOS
  { 156,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #156 = G_FSIN
  { 157,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #157 = G_FSQRT
  { 158,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #158 = G_FFLOOR
  { 159,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #159 = G_FRINT
  { 160,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #160 = G_FNEARBYINT
  { 161,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #161 = G_ADDRSPACE_CAST
  { 162,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #162 = G_BLOCK_ADDR
  { 163,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #163 = G_JUMP_TABLE
  { 164,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #164 = BRANCH
  { 165,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #165 = BRANCH_COND_f32
  { 166,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #166 = BRANCH_COND_i32
  { 167,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #167 = BREAK
  { 168,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #168 = BREAKC_f32
  { 169,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #169 = BREAKC_i32
  { 170,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #170 = BREAK_LOGICALNZ_f32
  { 171,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #171 = BREAK_LOGICALNZ_i32
  { 172,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #172 = BREAK_LOGICALZ_f32
  { 173,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #173 = BREAK_LOGICALZ_i32
  { 174,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #174 = CONST_COPY
  { 175,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #175 = CONTINUE
  { 176,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #176 = CONTINUEC_f32
  { 177,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #177 = CONTINUEC_i32
  { 178,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #178 = CONTINUE_LOGICALNZ_f32
  { 179,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #179 = CONTINUE_LOGICALNZ_i32
  { 180,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #180 = CONTINUE_LOGICALZ_f32
  { 181,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #181 = CONTINUE_LOGICALZ_i32
  { 182,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #182 = CUBE_eg_pseudo
  { 183,	2,	1,	0,	2,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #183 = CUBE_r600_pseudo
  { 184,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #184 = DEFAULT
  { 185,	71,	1,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Predicable), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #185 = DOT_4
  { 186,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #186 = DUMMY_CHAIN
  { 187,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #187 = ELSE
  { 188,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #188 = END
  { 189,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #189 = ENDFUNC
  { 190,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #190 = ENDIF
  { 191,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #191 = ENDLOOP
  { 192,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #192 = ENDMAIN
  { 193,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #193 = ENDSWITCH
  { 194,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #194 = FABS_R600
  { 195,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #195 = FNEG_R600
  { 196,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #196 = FUNC
  { 197,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #197 = IFC_f32
  { 198,	2,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #198 = IFC_i32
  { 199,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #199 = IF_LOGICALNZ_f32
  { 200,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #200 = IF_LOGICALNZ_i32
  { 201,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #201 = IF_LOGICALZ_f32
  { 202,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #202 = IF_LOGICALZ_i32
  { 203,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #203 = IF_PREDICATE_SET
  { 204,	1,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #204 = JUMP
  { 205,	2,	0,	0,	3,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #205 = JUMP_COND
  { 206,	1,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #206 = MASK_WRITE
  { 207,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #207 = MOV_IMM_F32
  { 208,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #208 = MOV_IMM_GLOBAL_ADDR
  { 209,	2,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #209 = MOV_IMM_I32
  { 210,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x180ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #210 = PRED_X
  { 211,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #211 = R600_EXTRACT_ELT_V2
  { 212,	3,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #212 = R600_EXTRACT_ELT_V4
  { 213,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #213 = R600_INSERT_ELT_V2
  { 214,	4,	1,	0,	3,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #214 = R600_INSERT_ELT_V4
  { 215,	4,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad), 0x8000000000000000ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #215 = R600_RegisterLoad
  { 216,	4,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore), 0x4000000000000000ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #216 = R600_RegisterStore
  { 217,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #217 = RETDYN
  { 218,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #218 = RETURN
  { 219,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #219 = TXD
  { 220,	7,	1,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x2000ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #220 = TXD_SHADOW
  { 221,	0,	0,	0,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #221 = WHILELOOP
  { 222,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #222 = ADD
  { 223,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #223 = ADDC_UINT
  { 224,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #224 = ADD_INT
  { 225,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #225 = ALU_CLAUSE
  { 226,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #226 = AND_INT
  { 227,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #227 = ASHR_eg
  { 228,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #228 = ASHR_r600
  { 229,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #229 = BCNT_INT
  { 230,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #230 = BFE_INT_eg
  { 231,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #231 = BFE_UINT_eg
  { 232,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #232 = BFI_INT_eg
  { 233,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #233 = BFM_INT_eg
  { 234,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #234 = BIT_ALIGN_INT_eg
  { 235,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #235 = CEIL
  { 236,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #236 = CF_ALU
  { 237,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #237 = CF_ALU_BREAK
  { 238,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #238 = CF_ALU_CONTINUE
  { 239,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #239 = CF_ALU_ELSE_AFTER
  { 240,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #240 = CF_ALU_POP_AFTER
  { 241,	9,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #241 = CF_ALU_PUSH_BEFORE
  { 242,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #242 = CF_CALL_FS_EG
  { 243,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #243 = CF_CALL_FS_R600
  { 244,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #244 = CF_CONTINUE_EG
  { 245,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #245 = CF_CONTINUE_R600
  { 246,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #246 = CF_ELSE_EG
  { 247,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #247 = CF_ELSE_R600
  { 248,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #248 = CF_END_CM
  { 249,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #249 = CF_END_EG
  { 250,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #250 = CF_END_R600
  { 251,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #251 = CF_JUMP_EG
  { 252,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #252 = CF_JUMP_R600
  { 253,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #253 = CF_PUSH_EG
  { 254,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #254 = CF_PUSH_ELSE_R600
  { 255,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #255 = CF_TC_EG
  { 256,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #256 = CF_TC_R600
  { 257,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #257 = CF_VC_EG
  { 258,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #258 = CF_VC_R600
  { 259,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #259 = CNDE_INT
  { 260,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #260 = CNDE_eg
  { 261,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #261 = CNDE_r600
  { 262,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #262 = CNDGE_INT
  { 263,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #263 = CNDGE_eg
  { 264,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #264 = CNDGE_r600
  { 265,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #265 = CNDGT_INT
  { 266,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #266 = CNDGT_eg
  { 267,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #267 = CNDGT_r600
  { 268,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #268 = COS_cm
  { 269,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #269 = COS_eg
  { 270,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #270 = COS_r600
  { 271,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #271 = COS_r700
  { 272,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #272 = CUBE_eg_real
  { 273,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #273 = CUBE_r600_real
  { 274,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #274 = DOT4_eg
  { 275,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #275 = DOT4_r600
  { 276,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #276 = EG_ExportBuf
  { 277,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #277 = EG_ExportSwz
  { 278,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #278 = END_LOOP_EG
  { 279,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #279 = END_LOOP_R600
  { 280,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #280 = EXP_IEEE_cm
  { 281,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #281 = EXP_IEEE_eg
  { 282,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #282 = EXP_IEEE_r600
  { 283,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #283 = FETCH_CLAUSE
  { 284,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #284 = FFBH_UINT
  { 285,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #285 = FFBL_INT
  { 286,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #286 = FLOOR
  { 287,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #287 = FLT16_TO_FLT32
  { 288,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #288 = FLT32_TO_FLT16
  { 289,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #289 = FLT_TO_INT_eg
  { 290,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #290 = FLT_TO_INT_r600
  { 291,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #291 = FLT_TO_UINT_eg
  { 292,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #292 = FLT_TO_UINT_r600
  { 293,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #293 = FMA_eg
  { 294,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #294 = FRACT
  { 295,	0,	0,	0,	3,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x4000ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #295 = GROUP_BARRIER
  { 296,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #296 = INTERP_LOAD_P0
  { 297,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #297 = INTERP_PAIR_XY
  { 298,	5,	2,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo53, -1 ,nullptr },  // Inst #298 = INTERP_PAIR_ZW
  { 299,	2,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo54, -1 ,nullptr },  // Inst #299 = INTERP_VEC_LOAD
  { 300,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #300 = INTERP_XY
  { 301,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #301 = INTERP_ZW
  { 302,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #302 = INT_TO_FLT_eg
  { 303,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #303 = INT_TO_FLT_r600
  { 304,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #304 = KILLGT
  { 305,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #305 = LDS_ADD
  { 306,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #306 = LDS_ADD_RET
  { 307,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #307 = LDS_AND
  { 308,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #308 = LDS_AND_RET
  { 309,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #309 = LDS_BYTE_READ_RET
  { 310,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #310 = LDS_BYTE_WRITE
  { 311,	12,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x44200ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #311 = LDS_CMPST
  { 312,	13,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x44200ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #312 = LDS_CMPST_RET
  { 313,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #313 = LDS_MAX_INT
  { 314,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #314 = LDS_MAX_INT_RET
  { 315,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #315 = LDS_MAX_UINT
  { 316,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #316 = LDS_MAX_UINT_RET
  { 317,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #317 = LDS_MIN_INT
  { 318,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #318 = LDS_MIN_INT_RET
  { 319,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #319 = LDS_MIN_UINT
  { 320,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #320 = LDS_MIN_UINT_RET
  { 321,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #321 = LDS_OR
  { 322,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #322 = LDS_OR_RET
  { 323,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #323 = LDS_READ_RET
  { 324,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #324 = LDS_SHORT_READ_RET
  { 325,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #325 = LDS_SHORT_WRITE
  { 326,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #326 = LDS_SUB
  { 327,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #327 = LDS_SUB_RET
  { 328,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #328 = LDS_UBYTE_READ_RET
  { 329,	7,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0xc200ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #329 = LDS_USHORT_READ_RET
  { 330,	9,	0,	0,	5,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #330 = LDS_WRITE
  { 331,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #331 = LDS_WRXCHG
  { 332,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #332 = LDS_WRXCHG_RET
  { 333,	9,	0,	0,	5,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x14200ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #333 = LDS_XOR
  { 334,	10,	1,	0,	5,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UsesCustomInserter), 0x14200ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #334 = LDS_XOR_RET
  { 335,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #335 = LITERALS
  { 336,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #336 = LOG_CLAMPED_eg
  { 337,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #337 = LOG_CLAMPED_r600
  { 338,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #338 = LOG_IEEE_cm
  { 339,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #339 = LOG_IEEE_eg
  { 340,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #340 = LOG_IEEE_r600
  { 341,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #341 = LOOP_BREAK_EG
  { 342,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #342 = LOOP_BREAK_R600
  { 343,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #343 = LSHL_eg
  { 344,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #344 = LSHL_r600
  { 345,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #345 = LSHR_eg
  { 346,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #346 = LSHR_r600
  { 347,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #347 = MAX
  { 348,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #348 = MAX_DX10
  { 349,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #349 = MAX_INT
  { 350,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #350 = MAX_UINT
  { 351,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #351 = MIN
  { 352,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #352 = MIN_DX10
  { 353,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #353 = MIN_INT
  { 354,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #354 = MIN_UINT
  { 355,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #355 = MOV
  { 356,	14,	1,	0,	2,	0|(1ULL<<MCID::Predicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #356 = MOVA_INT_eg
  { 357,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #357 = MUL
  { 358,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #358 = MULADD_IEEE_eg
  { 359,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #359 = MULADD_IEEE_r600
  { 360,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #360 = MULADD_INT24_cm
  { 361,	19,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #361 = MULADD_UINT24_eg
  { 362,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #362 = MULADD_eg
  { 363,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #363 = MULADD_r600
  { 364,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #364 = MULHI_INT_cm
  { 365,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #365 = MULHI_INT_cm24
  { 366,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #366 = MULHI_INT_eg
  { 367,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #367 = MULHI_INT_r600
  { 368,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #368 = MULHI_UINT24_eg
  { 369,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #369 = MULHI_UINT_cm
  { 370,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #370 = MULHI_UINT_cm24
  { 371,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #371 = MULHI_UINT_eg
  { 372,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #372 = MULHI_UINT_r600
  { 373,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #373 = MULLO_INT_cm
  { 374,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #374 = MULLO_INT_eg
  { 375,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #375 = MULLO_INT_r600
  { 376,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a40ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #376 = MULLO_UINT_cm
  { 377,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #377 = MULLO_UINT_eg
  { 378,	21,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #378 = MULLO_UINT_r600
  { 379,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #379 = MUL_IEEE
  { 380,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #380 = MUL_INT24_cm
  { 381,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #381 = MUL_LIT_eg
  { 382,	19,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4220ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #382 = MUL_LIT_r600
  { 383,	21,	1,	0,	2,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #383 = MUL_UINT24_eg
  { 384,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #384 = NOT_INT
  { 385,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #385 = OR_INT
  { 386,	0,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #386 = PAD
  { 387,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #387 = POP_EG
  { 388,	2,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #388 = POP_R600
  { 389,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #389 = PRED_SETE
  { 390,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #390 = PRED_SETE_INT
  { 391,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #391 = PRED_SETGE
  { 392,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #392 = PRED_SETGE_INT
  { 393,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #393 = PRED_SETGT
  { 394,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #394 = PRED_SETGT_INT
  { 395,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #395 = PRED_SETNE
  { 396,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #396 = PRED_SETNE_INT
  { 397,	7,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #397 = R600_ExportBuf
  { 398,	9,	0,	0,	1,	0|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #398 = R600_ExportSwz
  { 399,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #399 = RAT_ATOMIC_ADD_NORET
  { 400,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #400 = RAT_ATOMIC_ADD_RTN
  { 401,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #401 = RAT_ATOMIC_AND_NORET
  { 402,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #402 = RAT_ATOMIC_AND_RTN
  { 403,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #403 = RAT_ATOMIC_CMPXCHG_INT_NORET
  { 404,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #404 = RAT_ATOMIC_CMPXCHG_INT_RTN
  { 405,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #405 = RAT_ATOMIC_DEC_UINT_NORET
  { 406,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #406 = RAT_ATOMIC_DEC_UINT_RTN
  { 407,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #407 = RAT_ATOMIC_INC_UINT_NORET
  { 408,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #408 = RAT_ATOMIC_INC_UINT_RTN
  { 409,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #409 = RAT_ATOMIC_MAX_INT_NORET
  { 410,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #410 = RAT_ATOMIC_MAX_INT_RTN
  { 411,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #411 = RAT_ATOMIC_MAX_UINT_NORET
  { 412,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #412 = RAT_ATOMIC_MAX_UINT_RTN
  { 413,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #413 = RAT_ATOMIC_MIN_INT_NORET
  { 414,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #414 = RAT_ATOMIC_MIN_INT_RTN
  { 415,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #415 = RAT_ATOMIC_MIN_UINT_NORET
  { 416,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #416 = RAT_ATOMIC_MIN_UINT_RTN
  { 417,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #417 = RAT_ATOMIC_OR_NORET
  { 418,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #418 = RAT_ATOMIC_OR_RTN
  { 419,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #419 = RAT_ATOMIC_RSUB_NORET
  { 420,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #420 = RAT_ATOMIC_RSUB_RTN
  { 421,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #421 = RAT_ATOMIC_SUB_NORET
  { 422,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #422 = RAT_ATOMIC_SUB_RTN
  { 423,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #423 = RAT_ATOMIC_XCHG_INT_NORET
  { 424,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #424 = RAT_ATOMIC_XCHG_INT_RTN
  { 425,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #425 = RAT_ATOMIC_XOR_NORET
  { 426,	3,	1,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #426 = RAT_ATOMIC_XOR_RTN
  { 427,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #427 = RAT_MSKOR
  { 428,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #428 = RAT_STORE_DWORD128
  { 429,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #429 = RAT_STORE_DWORD32
  { 430,	2,	0,	0,	1,	0|(1ULL<<MCID::MayStore), 0x20000ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #430 = RAT_STORE_DWORD64
  { 431,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #431 = RAT_STORE_TYPED_cm
  { 432,	4,	0,	0,	1,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x20000ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #432 = RAT_STORE_TYPED_eg
  { 433,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #433 = RAT_WRITE_CACHELESS_128_eg
  { 434,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo66, -1 ,nullptr },  // Inst #434 = RAT_WRITE_CACHELESS_32_eg
  { 435,	3,	0,	0,	1,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x20000ULL, nullptr, nullptr, OperandInfo67, -1 ,nullptr },  // Inst #435 = RAT_WRITE_CACHELESS_64_eg
  { 436,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #436 = RECIPSQRT_CLAMPED_cm
  { 437,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #437 = RECIPSQRT_CLAMPED_eg
  { 438,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #438 = RECIPSQRT_CLAMPED_r600
  { 439,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #439 = RECIPSQRT_IEEE_cm
  { 440,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #440 = RECIPSQRT_IEEE_eg
  { 441,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #441 = RECIPSQRT_IEEE_r600
  { 442,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #442 = RECIP_CLAMPED_cm
  { 443,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #443 = RECIP_CLAMPED_eg
  { 444,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #444 = RECIP_CLAMPED_r600
  { 445,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4640ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #445 = RECIP_IEEE_cm
  { 446,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #446 = RECIP_IEEE_eg
  { 447,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #447 = RECIP_IEEE_r600
  { 448,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #448 = RECIP_UINT_eg
  { 449,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #449 = RECIP_UINT_r600
  { 450,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #450 = RNDNE
  { 451,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #451 = SETE
  { 452,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #452 = SETE_DX10
  { 453,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #453 = SETE_INT
  { 454,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #454 = SETGE_DX10
  { 455,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #455 = SETGE_INT
  { 456,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #456 = SETGE_UINT
  { 457,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #457 = SETGT_DX10
  { 458,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #458 = SETGT_INT
  { 459,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #459 = SETGT_UINT
  { 460,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #460 = SETNE_DX10
  { 461,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #461 = SETNE_INT
  { 462,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #462 = SGE
  { 463,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #463 = SGT
  { 464,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4650ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #464 = SIN_cm
  { 465,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #465 = SIN_eg
  { 466,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #466 = SIN_r600
  { 467,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4610ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #467 = SIN_r700
  { 468,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #468 = SNE
  { 469,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #469 = SUBB_UINT
  { 470,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #470 = SUB_INT
  { 471,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #471 = TEX_GET_GRADIENTS_H
  { 472,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #472 = TEX_GET_GRADIENTS_V
  { 473,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #473 = TEX_GET_TEXTURE_RESINFO
  { 474,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #474 = TEX_LD
  { 475,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #475 = TEX_LDPTR
  { 476,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #476 = TEX_SAMPLE
  { 477,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #477 = TEX_SAMPLE_C
  { 478,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #478 = TEX_SAMPLE_C_G
  { 479,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #479 = TEX_SAMPLE_C_L
  { 480,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #480 = TEX_SAMPLE_C_LB
  { 481,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #481 = TEX_SAMPLE_G
  { 482,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #482 = TEX_SAMPLE_L
  { 483,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #483 = TEX_SAMPLE_LB
  { 484,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #484 = TEX_SET_GRADIENTS_H
  { 485,	19,	1,	0,	1,	0, 0x2000ULL, nullptr, nullptr, OperandInfo68, -1 ,nullptr },  // Inst #485 = TEX_SET_GRADIENTS_V
  { 486,	4,	1,	0,	1,	0, 0x1000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #486 = TEX_VTX_CONSTBUF
  { 487,	4,	1,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #487 = TEX_VTX_TEXBUF
  { 488,	14,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #488 = TRUNC
  { 489,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #489 = UINT_TO_FLT_eg
  { 490,	14,	1,	0,	4,	0|(1ULL<<MCID::Predicable), 0x4600ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #490 = UINT_TO_FLT_r600
  { 491,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #491 = VTX_READ_128_cm
  { 492,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #492 = VTX_READ_128_eg
  { 493,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #493 = VTX_READ_16_cm
  { 494,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #494 = VTX_READ_16_eg
  { 495,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #495 = VTX_READ_32_cm
  { 496,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #496 = VTX_READ_32_eg
  { 497,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #497 = VTX_READ_64_cm
  { 498,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #498 = VTX_READ_64_eg
  { 499,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #499 = VTX_READ_8_cm
  { 500,	4,	1,	0,	1,	0|(1ULL<<MCID::MayLoad), 0x1000ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #500 = VTX_READ_8_eg
  { 501,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #501 = WHILE_LOOP_EG
  { 502,	1,	0,	0,	1,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #502 = WHILE_LOOP_R600
  { 503,	21,	1,	0,	3,	0|(1ULL<<MCID::Predicable), 0x4a00ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #503 = XOR_INT
};

extern const char R600InstrNameData[] = {
  /* 0 */ 'C', 'F', '_', 'T', 'C', '_', 'R', '6', '0', '0', 0,
  /* 11 */ 'C', 'F', '_', 'V', 'C', '_', 'R', '6', '0', '0', 0,
  /* 22 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'R', '6', '0', '0', 0,
  /* 34 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 47 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'L', 'S', 'E', '_', 'R', '6', '0', '0', 0,
  /* 65 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'R', '6', '0', '0', 0,
  /* 82 */ 'F', 'N', 'E', 'G', '_', 'R', '6', '0', '0', 0,
  /* 92 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'R', '6', '0', '0', 0,
  /* 108 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'R', '6', '0', '0', 0,
  /* 121 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 135 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 151 */ 'P', 'O', 'P', '_', 'R', '6', '0', '0', 0,
  /* 160 */ 'F', 'A', 'B', 'S', '_', 'R', '6', '0', '0', 0,
  /* 170 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'R', '6', '0', '0', 0,
  /* 186 */ 'D', 'O', 'T', '4', '_', 'r', '6', '0', '0', 0,
  /* 196 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'r', '6', '0', '0', 0,
  /* 208 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 225 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 244 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'r', '6', '0', '0', 0,
  /* 267 */ 'C', 'N', 'D', 'E', '_', 'r', '6', '0', '0', 0,
  /* 277 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 294 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 308 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 324 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 338 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'r', '6', '0', '0', 0,
  /* 358 */ 'C', 'N', 'D', 'G', 'E', '_', 'r', '6', '0', '0', 0,
  /* 369 */ 'L', 'S', 'H', 'L', '_', 'r', '6', '0', '0', 0,
  /* 379 */ 'S', 'I', 'N', '_', 'r', '6', '0', '0', 0,
  /* 388 */ 'A', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 398 */ 'L', 'S', 'H', 'R', '_', 'r', '6', '0', '0', 0,
  /* 408 */ 'C', 'O', 'S', '_', 'r', '6', '0', '0', 0,
  /* 417 */ 'C', 'N', 'D', 'G', 'T', '_', 'r', '6', '0', '0', 0,
  /* 428 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'r', '6', '0', '0', 0,
  /* 441 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'r', '6', '0', '0', 0,
  /* 458 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 474 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 490 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 507 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 523 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 538 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 553 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'r', '6', '0', '0', 0,
  /* 569 */ 'S', 'I', 'N', '_', 'r', '7', '0', '0', 0,
  /* 578 */ 'C', 'O', 'S', '_', 'r', '7', '0', '0', 0,
  /* 587 */ 'G', '_', 'F', 'L', 'O', 'G', '1', '0', 0,
  /* 596 */ 'S', 'E', 'T', 'G', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 607 */ 'S', 'E', 'T', 'N', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 618 */ 'S', 'E', 'T', 'E', '_', 'D', 'X', '1', '0', 0,
  /* 628 */ 'M', 'I', 'N', '_', 'D', 'X', '1', '0', 0,
  /* 637 */ 'S', 'E', 'T', 'G', 'T', '_', 'D', 'X', '1', '0', 0,
  /* 648 */ 'M', 'A', 'X', '_', 'D', 'X', '1', '0', 0,
  /* 657 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'L', 'O', 'A', 'D', '_', 'P', '0', 0,
  /* 672 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '3', '2', 0,
  /* 690 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'F', '3', '2', 0,
  /* 702 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'I', '3', '2', 0,
  /* 714 */ 'F', 'L', 'T', '1', '6', '_', 'T', 'O', '_', 'F', 'L', 'T', '3', '2', 0,
  /* 729 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'f', '3', '2', 0,
  /* 743 */ 'I', 'F', 'C', '_', 'f', '3', '2', 0,
  /* 751 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'f', '3', '2', 0,
  /* 762 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'f', '3', '2', 0,
  /* 778 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 800 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 816 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'f', '3', '2', 0,
  /* 835 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 858 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 875 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'f', '3', '2', 0,
  /* 895 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 'C', '_', 'i', '3', '2', 0,
  /* 909 */ 'I', 'F', 'C', '_', 'i', '3', '2', 0,
  /* 917 */ 'B', 'R', 'E', 'A', 'K', 'C', '_', 'i', '3', '2', 0,
  /* 928 */ 'B', 'R', 'A', 'N', 'C', 'H', '_', 'C', 'O', 'N', 'D', '_', 'i', '3', '2', 0,
  /* 944 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 966 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 982 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'Z', '_', 'i', '3', '2', 0,
  /* 1001 */ 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1024 */ 'I', 'F', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1041 */ 'B', 'R', 'E', 'A', 'K', '_', 'L', 'O', 'G', 'I', 'C', 'A', 'L', 'N', 'Z', '_', 'i', '3', '2', 0,
  /* 1061 */ 'G', '_', 'F', 'L', 'O', 'G', '2', 0,
  /* 1069 */ 'G', '_', 'F', 'E', 'X', 'P', '2', 0,
  /* 1077 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1097 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '2', 0,
  /* 1116 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1132 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', '2', '4', 0,
  /* 1147 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '6', '4', 0,
  /* 1165 */ 'R', '6', '0', '0', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1185 */ 'R', '6', '0', '0', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'E', 'L', 'T', '_', 'V', '4', 0,
  /* 1204 */ 'D', 'O', 'T', '_', '4', 0,
  /* 1210 */ 'F', 'L', 'T', '3', '2', '_', 'T', 'O', '_', 'F', 'L', 'T', '1', '6', 0,
  /* 1225 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'D', 'W', 'O', 'R', 'D', '1', '2', '8', 0,
  /* 1244 */ 'G', '_', 'F', 'M', 'A', 0,
  /* 1250 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 'B', 0,
  /* 1266 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 'B', 0,
  /* 1280 */ 'G', '_', 'F', 'S', 'U', 'B', 0,
  /* 1287 */ 'G', '_', 'S', 'U', 'B', 0,
  /* 1293 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', 0,
  /* 1301 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'S', 'U', 'B', 0,
  /* 1317 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', 0,
  /* 1329 */ 'E', 'N', 'D', 'F', 'U', 'N', 'C', 0,
  /* 1337 */ 'G', '_', 'F', 'P', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1347 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1365 */ 'G', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1373 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'T', 'R', 'U', 'N', 'C', 0,
  /* 1394 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', 0,
  /* 1407 */ 'G', '_', 'S', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1418 */ 'G', '_', 'Z', 'E', 'X', 'T', 'L', 'O', 'A', 'D', 0,
  /* 1429 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'V', 'E', 'C', '_', 'L', 'O', 'A', 'D', 0,
  /* 1445 */ 'G', '_', 'L', 'O', 'A', 'D', 0,
  /* 1452 */ 'P', 'A', 'D', 0,
  /* 1456 */ 'G', '_', 'F', 'A', 'D', 'D', 0,
  /* 1463 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 1469 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', 0,
  /* 1477 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'D', 'D', 0,
  /* 1493 */ 'T', 'E', 'X', '_', 'L', 'D', 0,
  /* 1500 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'N', 'A', 'N', 'D', 0,
  /* 1517 */ 'G', '_', 'A', 'N', 'D', 0,
  /* 1523 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', 0,
  /* 1531 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'A', 'N', 'D', 0,
  /* 1547 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 1560 */ 'G', '_', 'B', 'R', 'C', 'O', 'N', 'D', 0,
  /* 1569 */ 'J', 'U', 'M', 'P', '_', 'C', 'O', 'N', 'D', 0,
  /* 1579 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'R', 'O', 'U', 'N', 'D', 0,
  /* 1597 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 1614 */ 'T', 'X', 'D', 0,
  /* 1618 */ 'G', '_', 'S', 'S', 'U', 'B', 'E', 0,
  /* 1626 */ 'G', '_', 'U', 'S', 'U', 'B', 'E', 0,
  /* 1634 */ 'G', '_', 'F', 'E', 'N', 'C', 'E', 0,
  /* 1642 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 1655 */ 'G', '_', 'S', 'A', 'D', 'D', 'E', 0,
  /* 1663 */ 'G', '_', 'U', 'A', 'D', 'D', 'E', 0,
  /* 1671 */ 'M', 'U', 'L', '_', 'I', 'E', 'E', 'E', 0,
  /* 1680 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1695 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', '_', 'I', 'E', 'E', 'E', 0,
  /* 1710 */ 'S', 'G', 'E', 0,
  /* 1714 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', 0,
  /* 1725 */ 'G', '_', 'J', 'U', 'M', 'P', '_', 'T', 'A', 'B', 'L', 'E', 0,
  /* 1738 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 1745 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', 0,
  /* 1756 */ 'R', 'N', 'D', 'N', 'E', 0,
  /* 1762 */ 'S', 'N', 'E', 0,
  /* 1766 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', 0,
  /* 1777 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 1790 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'U', 'S', 'H', '_', 'B', 'E', 'F', 'O', 'R', 'E', 0,
  /* 1809 */ 'G', '_', 'S', 'T', 'O', 'R', 'E', 0,
  /* 1817 */ 'E', 'L', 'S', 'E', 0,
  /* 1822 */ 'F', 'E', 'T', 'C', 'H', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1835 */ 'A', 'L', 'U', '_', 'C', 'L', 'A', 'U', 'S', 'E', 0,
  /* 1846 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', 0,
  /* 1856 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 1871 */ 'M', 'A', 'S', 'K', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 1882 */ 'L', 'D', 'S', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 1892 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'W', 'R', 'I', 'T', 'E', 0,
  /* 1908 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1918 */ 'G', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 1933 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', 0,
  /* 1949 */ 'G', '_', 'F', 'C', 'A', 'N', 'O', 'N', 'I', 'C', 'A', 'L', 'I', 'Z', 'E', 0,
  /* 1965 */ 'G', '_', 'C', 'T', 'L', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 1983 */ 'G', '_', 'C', 'T', 'T', 'Z', '_', 'Z', 'E', 'R', 'O', '_', 'U', 'N', 'D', 'E', 'F', 0,
  /* 2001 */ 'G', '_', 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 2016 */ 'E', 'N', 'D', 'I', 'F', 0,
  /* 2022 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'C', 'O', 'N', 'S', 'T', 'B', 'U', 'F', 0,
  /* 2039 */ 'T', 'E', 'X', '_', 'V', 'T', 'X', '_', 'T', 'E', 'X', 'B', 'U', 'F', 0,
  /* 2054 */ 'G', '_', 'F', 'N', 'E', 'G', 0,
  /* 2061 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2076 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 2090 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 2104 */ 'C', 'F', '_', 'T', 'C', '_', 'E', 'G', 0,
  /* 2113 */ 'C', 'F', '_', 'V', 'C', '_', 'E', 'G', 0,
  /* 2122 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'E', 'G', 0,
  /* 2132 */ 'C', 'F', '_', 'E', 'L', 'S', 'E', '_', 'E', 'G', 0,
  /* 2143 */ 'C', 'F', '_', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'E', '_', 'E', 'G', 0,
  /* 2158 */ 'C', 'F', '_', 'P', 'U', 'S', 'H', '_', 'E', 'G', 0,
  /* 2169 */ 'L', 'O', 'O', 'P', '_', 'B', 'R', 'E', 'A', 'K', '_', 'E', 'G', 0,
  /* 2183 */ 'C', 'F', '_', 'J', 'U', 'M', 'P', '_', 'E', 'G', 0,
  /* 2194 */ 'E', 'N', 'D', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2206 */ 'W', 'H', 'I', 'L', 'E', '_', 'L', 'O', 'O', 'P', '_', 'E', 'G', 0,
  /* 2220 */ 'P', 'O', 'P', '_', 'E', 'G', 0,
  /* 2227 */ 'C', 'F', '_', 'C', 'A', 'L', 'L', '_', 'F', 'S', '_', 'E', 'G', 0,
  /* 2241 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', 0,
  /* 2258 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', 0,
  /* 2269 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'C', 'H', 'G', 0,
  /* 2286 */ 'G', '_', 'F', 'L', 'O', 'G', 0,
  /* 2293 */ 'G', '_', 'V', 'A', 'A', 'R', 'G', 0,
  /* 2301 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'G', 0,
  /* 2316 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'G', 0,
  /* 2329 */ 'B', 'R', 'A', 'N', 'C', 'H', 0,
  /* 2336 */ 'E', 'N', 'D', 'S', 'W', 'I', 'T', 'C', 'H', 0,
  /* 2346 */ 'G', '_', 'S', 'M', 'U', 'L', 'H', 0,
  /* 2354 */ 'G', '_', 'U', 'M', 'U', 'L', 'H', 0,
  /* 2362 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2382 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'H', 0,
  /* 2402 */ 'G', '_', 'P', 'H', 'I', 0,
  /* 2408 */ 'G', '_', 'F', 'P', 'T', 'O', 'S', 'I', 0,
  /* 2417 */ 'G', '_', 'F', 'P', 'T', 'O', 'U', 'I', 0,
  /* 2426 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'B', 'R', 'E', 'A', 'K', 0,
  /* 2439 */ 'G', '_', 'P', 'T', 'R', '_', 'M', 'A', 'S', 'K', 0,
  /* 2450 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2459 */ 'D', 'B', 'G', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2469 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2478 */ 'A', 'N', 'N', 'O', 'T', 'A', 'T', 'I', 'O', 'N', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 2495 */ 'I', 'C', 'A', 'L', 'L', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'F', 'U', 'N', 'N', 'E', 'L', 0,
  /* 2515 */ 'G', '_', 'S', 'H', 'L', 0,
  /* 2521 */ 'G', '_', 'F', 'C', 'E', 'I', 'L', 0,
  /* 2529 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'A', 'I', 'L', '_', 'C', 'A', 'L', 'L', 0,
  /* 2549 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2576 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'E', 'V', 'E', 'N', 'T', '_', 'C', 'A', 'L', 'L', 0,
  /* 2597 */ 'F', 'E', 'N', 'T', 'R', 'Y', '_', 'C', 'A', 'L', 'L', 0,
  /* 2609 */ 'K', 'I', 'L', 'L', 0,
  /* 2614 */ 'G', '_', 'F', 'M', 'U', 'L', 0,
  /* 2621 */ 'G', '_', 'M', 'U', 'L', 0,
  /* 2627 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'C', '_', 'L', 0,
  /* 2642 */ 'T', 'E', 'X', '_', 'S', 'A', 'M', 'P', 'L', 'E', '_', 'L', 0,
  /* 2655 */ 'C', 'F', '_', 'E', 'N', 'D', '_', 'C', 'M', 0,
  /* 2665 */ 'G', '_', 'F', 'R', 'E', 'M', 0,
  /* 2672 */ 'G', '_', 'S', 'R', 'E', 'M', 0,
  /* 2679 */ 'G', '_', 'U', 'R', 'E', 'M', 0,
  /* 2686 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 2696 */ 'G', '_', 'F', 'M', 'I', 'N', 'I', 'M', 'U', 'M', 0,
  /* 2707 */ 'G', '_', 'F', 'M', 'A', 'X', 'I', 'M', 'U', 'M', 0,
  /* 2718 */ 'G', '_', 'F', 'M', 'I', 'N', 'N', 'U', 'M', 0,
  /* 2728 */ 'G', '_', 'F', 'M', 'A', 'X', 'N', 'U', 'M', 0,
  /* 2738 */ 'G', '_', 'F', 'C', 'O', 'P', 'Y', 'S', 'I', 'G', 'N', 0,
  /* 2750 */ 'D', 'U', 'M', 'M', 'Y', '_', 'C', 'H', 'A', 'I', 'N', 0,
  /* 2762 */ 'E', 'N', 'D', 'M', 'A', 'I', 'N', 0,
  /* 2770 */ 'G', '_', 'S', 'M', 'I', 'N', 0,
  /* 2777 */ 'G', '_', 'U', 'M', 'I', 'N', 0,
  /* 2784 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'I', 'N', 0,
  /* 2801 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'I', 'N', 0,
  /* 2817 */ 'G', '_', 'F', 'S', 'I', 'N', 0,
  /* 2824 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 2840 */ 'R', 'E', 'T', 'U', 'R', 'N', 0,
  /* 2847 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 2867 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'R', 'T', 'N', 0,
  /* 2886 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'R', 'T', 'N', 0,
  /* 2905 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'R', 'T', 'N', 0,
  /* 2924 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 2943 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'R', 'T', 'N', 0,
  /* 2961 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 2985 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3009 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3033 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3057 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3084 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3108 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3131 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'T', 'N', 0,
  /* 3154 */ 'R', 'E', 'T', 'D', 'Y', 'N', 0,
  /* 3161 */ 'G', '_', 'S', 'S', 'U', 'B', 'O', 0,
  /* 3169 */ 'G', '_', 'U', 'S', 'U', 'B', 'O', 0,
  /* 3177 */ 'G', '_', 'S', 'A', 'D', 'D', 'O', 0,
  /* 3185 */ 'G', '_', 'U', 'A', 'D', 'D', 'O', 0,
  /* 3193 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'T', 'E', 'X', 'T', 'U', 'R', 'E', '_', 'R', 'E', 'S', 'I', 'N', 'F', 'O', 0,
  /* 3217 */ 'G', '_', 'S', 'M', 'U', 'L', 'O', 0,
  /* 3225 */ 'G', '_', 'U', 'M', 'U', 'L', 'O', 0,
  /* 3233 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 3242 */ 'G', '_', 'B', 'S', 'W', 'A', 'P', 0,
  /* 3250 */ 'G', '_', 'G', 'E', 'P', 0,
  /* 3256 */ 'G', '_', 'S', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3265 */ 'G', '_', 'U', 'I', 'T', 'O', 'F', 'P', 0,
  /* 3274 */ 'G', '_', 'F', 'C', 'M', 'P', 0,
  /* 3281 */ 'G', '_', 'I', 'C', 'M', 'P', 0,
  /* 3288 */ 'J', 'U', 'M', 'P', 0,
  /* 3293 */ 'E', 'N', 'D', 'L', 'O', 'O', 'P', 0,
  /* 3301 */ 'W', 'H', 'I', 'L', 'E', 'L', 'O', 'O', 'P', 0,
  /* 3311 */ 'G', '_', 'C', 'T', 'P', 'O', 'P', 0,
  /* 3319 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 3332 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'O', 'P', 0,
  /* 3344 */ 'G', '_', 'F', 'E', 'X', 'P', 0,
  /* 3351 */ 'G', '_', 'B', 'R', 0,
  /* 3356 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', '_', 'B', 'R', 0,
  /* 3369 */ 'G', '_', 'B', 'L', 'O', 'C', 'K', '_', 'A', 'D', 'D', 'R', 0,
  /* 3382 */ 'M', 'O', 'V', '_', 'I', 'M', 'M', '_', 'G', 'L', 'O', 'B', 'A', 'L', '_', 'A', 'D', 'D', 'R', 0,
  /* 3402 */ 'G', 'R', 'O', 'U', 'P', '_', 'B', 'A', 'R', 'R', 'I', 'E', 'R', 0,
  /* 3416 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'E', 'L', 'S', 'E', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3434 */ 'C', 'F', '_', 'A', 'L', 'U', '_', 'P', 'O', 'P', '_', 'A', 'F', 'T', 'E', 'R', 0,
  /* 3451 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 3476 */ 'G', '_', 'A', 'S', 'H', 'R', 0,
  /* 3483 */ 'G', '_', 'L', 'S', 'H', 'R', 0,
  /* 3490 */ 'R', 'A', 'T', '_', 'M', 'S', 'K', 'O', 'R', 0,
  /* 3500 */ 'G', '_', 'F', 'F', 'L', 'O', 'O', 'R', 0,
  /* 3509 */ 'G', '_', 'B', 'U', 'I', 'L', 'D', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3524 */ 'G', '_', 'S', 'H', 'U', 'F', 'F', 'L', 'E', '_', 'V', 'E', 'C', 'T', 'O', 'R', 0,
  /* 3541 */ 'G', '_', 'X', 'O', 'R', 0,
  /* 3547 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', 0,
  /* 3555 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'X', 'O', 'R', 0,
  /* 3571 */ 'G', '_', 'O', 'R', 0,
  /* 3576 */ 'L', 'D', 'S', '_', 'O', 'R', 0,
  /* 3583 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'O', 'R', 0,
  /* 3598 */ 'T', 'E', 'X', '_', 'L', 'D', 'P', 'T', 'R', 0,
  /* 3608 */ 'G', '_', 'I', 'N', 'T', 'T', 'O', 'P', 'T', 'R', 0,
  /* 3619 */ 'G', '_', 'F', 'A', 'B', 'S', 0,
  /* 3626 */ 'G', '_', 'U', 'N', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3643 */ 'G', '_', 'M', 'E', 'R', 'G', 'E', '_', 'V', 'A', 'L', 'U', 'E', 'S', 0,
  /* 3658 */ 'L', 'I', 'T', 'E', 'R', 'A', 'L', 'S', 0,
  /* 3667 */ 'G', '_', 'F', 'C', 'O', 'S', 0,
  /* 3674 */ 'G', '_', 'C', 'O', 'N', 'C', 'A', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', 'S', 0,
  /* 3691 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 3708 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'W', 'I', 'T', 'H', '_', 'S', 'U', 'C', 'C', 'E', 'S', 'S', 0,
  /* 3738 */ 'G', '_', 'I', 'N', 'T', 'R', 'I', 'N', 'S', 'I', 'C', '_', 'W', '_', 'S', 'I', 'D', 'E', '_', 'E', 'F', 'F', 'E', 'C', 'T', 'S', 0,
  /* 3765 */ 'F', 'R', 'A', 'C', 'T', 0,
  /* 3771 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', 0,
  /* 3781 */ 'G', '_', 'S', 'E', 'L', 'E', 'C', 'T', 0,
  /* 3790 */ 'G', '_', 'B', 'R', 'I', 'N', 'D', 'I', 'R', 'E', 'C', 'T', 0,
  /* 3803 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'R', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3825 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'U', 'B', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3846 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'D', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3867 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'A', 'N', 'D', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3888 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3909 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'O', 'R', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3929 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'D', 'E', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3955 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'I', 'N', 'C', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 3981 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4007 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4033 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4062 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'X', 'C', 'H', 'G', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4088 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4113 */ 'R', 'A', 'T', '_', 'A', 'T', 'O', 'M', 'I', 'C', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'N', 'O', 'R', 'E', 'T', 0,
  /* 4138 */ 'L', 'D', 'S', '_', 'S', 'U', 'B', '_', 'R', 'E', 'T', 0,
  /* 4150 */ 'L', 'D', 'S', '_', 'U', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4169 */ 'L', 'D', 'S', '_', 'B', 'Y', 'T', 'E', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4187 */ 'L', 'D', 'S', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4200 */ 'L', 'D', 'S', '_', 'U', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4220 */ 'L', 'D', 'S', '_', 'S', 'H', 'O', 'R', 'T', '_', 'R', 'E', 'A', 'D', '_', 'R', 'E', 'T', 0,
  /* 4239 */ 'L', 'D', 'S', '_', 'A', 'D', 'D', '_', 'R', 'E', 'T', 0,
  /* 4251 */ 'L', 'D', 'S', '_', 'A', 'N', 'D', '_', 'R', 'E', 'T', 0,
  /* 4263 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 4277 */ 'L', 'D', 'S', '_', 'W', 'R', 'X', 'C', 'H', 'G', '_', 'R', 'E', 'T', 0,
  /* 4292 */ 'L', 'D', 'S', '_', 'X', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4304 */ 'L', 'D', 'S', '_', 'O', 'R', '_', 'R', 'E', 'T', 0,
  /* 4315 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4332 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4349 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4365 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', '_', 'R', 'E', 'T', 0,
  /* 4381 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', '_', 'R', 'E', 'T', 0,
  /* 4395 */ 'I', 'F', '_', 'P', 'R', 'E', 'D', 'I', 'C', 'A', 'T', 'E', '_', 'S', 'E', 'T', 0,
  /* 4412 */ 'K', 'I', 'L', 'L', 'G', 'T', 0,
  /* 4419 */ 'S', 'G', 'T', 0,
  /* 4423 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', 0,
  /* 4434 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'X', 'I', 'T', 0,
  /* 4458 */ 'G', '_', 'B', 'R', 'J', 'T', 0,
  /* 4465 */ 'G', '_', 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4486 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', '_', 'V', 'E', 'C', 'T', 'O', 'R', '_', 'E', 'L', 'T', 0,
  /* 4506 */ 'D', 'E', 'F', 'A', 'U', 'L', 'T', 0,
  /* 4514 */ 'G', '_', 'F', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4526 */ 'G', '_', 'C', 'O', 'N', 'S', 'T', 'A', 'N', 'T', 0,
  /* 4537 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4548 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 4559 */ 'G', '_', 'P', 'T', 'R', 'T', 'O', 'I', 'N', 'T', 0,
  /* 4570 */ 'G', '_', 'F', 'R', 'I', 'N', 'T', 0,
  /* 4578 */ 'S', 'U', 'B', 'B', '_', 'U', 'I', 'N', 'T', 0,
  /* 4588 */ 'A', 'D', 'D', 'C', '_', 'U', 'I', 'N', 'T', 0,
  /* 4598 */ 'S', 'E', 'T', 'G', 'E', '_', 'U', 'I', 'N', 'T', 0,
  /* 4609 */ 'F', 'F', 'B', 'H', '_', 'U', 'I', 'N', 'T', 0,
  /* 4619 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'U', 'I', 'N', 'T', 0,
  /* 4632 */ 'S', 'E', 'T', 'G', 'T', '_', 'U', 'I', 'N', 'T', 0,
  /* 4643 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'U', 'I', 'N', 'T', 0,
  /* 4656 */ 'G', '_', 'F', 'N', 'E', 'A', 'R', 'B', 'Y', 'I', 'N', 'T', 0,
  /* 4669 */ 'S', 'U', 'B', '_', 'I', 'N', 'T', 0,
  /* 4677 */ 'A', 'D', 'D', '_', 'I', 'N', 'T', 0,
  /* 4685 */ 'A', 'N', 'D', '_', 'I', 'N', 'T', 0,
  /* 4693 */ 'C', 'N', 'D', 'E', '_', 'I', 'N', 'T', 0,
  /* 4702 */ 'C', 'N', 'D', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4712 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'E', '_', 'I', 'N', 'T', 0,
  /* 4727 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'N', 'E', '_', 'I', 'N', 'T', 0,
  /* 4742 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'E', '_', 'I', 'N', 'T', 0,
  /* 4756 */ 'F', 'F', 'B', 'L', '_', 'I', 'N', 'T', 0,
  /* 4765 */ 'L', 'D', 'S', '_', 'M', 'I', 'N', '_', 'I', 'N', 'T', 0,
  /* 4777 */ 'X', 'O', 'R', '_', 'I', 'N', 'T', 0,
  /* 4785 */ 'C', 'N', 'D', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 4795 */ 'P', 'R', 'E', 'D', '_', 'S', 'E', 'T', 'G', 'T', '_', 'I', 'N', 'T', 0,
  /* 4810 */ 'B', 'C', 'N', 'T', '_', 'I', 'N', 'T', 0,
  /* 4819 */ 'N', 'O', 'T', '_', 'I', 'N', 'T', 0,
  /* 4827 */ 'L', 'D', 'S', '_', 'M', 'A', 'X', '_', 'I', 'N', 'T', 0,
  /* 4839 */ 'G', '_', 'V', 'A', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4849 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 4864 */ 'G', '_', 'I', 'N', 'S', 'E', 'R', 'T', 0,
  /* 4873 */ 'G', '_', 'F', 'S', 'Q', 'R', 'T', 0,
  /* 4881 */ 'G', '_', 'B', 'I', 'T', 'C', 'A', 'S', 'T', 0,
  /* 4891 */ 'G', '_', 'A', 'D', 'D', 'R', 'S', 'P', 'A', 'C', 'E', '_', 'C', 'A', 'S', 'T', 0,
  /* 4908 */ 'L', 'D', 'S', '_', 'C', 'M', 'P', 'S', 'T', 0,
  /* 4918 */ 'G', '_', 'F', 'P', 'E', 'X', 'T', 0,
  /* 4926 */ 'G', '_', 'S', 'E', 'X', 'T', 0,
  /* 4933 */ 'G', '_', 'A', 'N', 'Y', 'E', 'X', 'T', 0,
  /* 4942 */ 'G', '_', 'Z', 'E', 'X', 'T', 0,
  /* 4949 */ 'C', 'F', '_', 'A', 'L', 'U', 0,
  /* 4956 */ 'G', '_', 'F', 'D', 'I', 'V', 0,
  /* 4963 */ 'G', '_', 'S', 'D', 'I', 'V', 0,
  /* 4970 */ 'G', '_', 'U', 'D', 'I', 'V', 0,
  /* 4977 */ 'M', 'O', 'V', 0,
  /* 4981 */ 'T', 'E', 'X', '_', 'G', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5001 */ 'T', 'E', 'X', '_', 'S', 'E', 'T', '_', 'G', 'R', 'A', 'D', 'I', 'E', 'N', 'T', 'S', '_', 'V', 0,
  /* 5021 */ 'T', 'X', 'D', '_', 'S', 'H', 'A', 'D', 'O', 'W', 0,
  /* 5032 */ 'G', '_', 'F', 'P', 'O', 'W', 0,
  /* 5039 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'Z', 'W', 0,
  /* 5049 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'Z', 'W', 0,
  /* 5064 */ 'G', '_', 'S', 'M', 'A', 'X', 0,
  /* 5071 */ 'G', '_', 'U', 'M', 'A', 'X', 0,
  /* 5078 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'U', 'M', 'A', 'X', 0,
  /* 5095 */ 'G', '_', 'A', 'T', 'O', 'M', 'I', 'C', 'R', 'M', 'W', '_', 'M', 'A', 'X', 0,
  /* 5111 */ 'G', '_', 'F', 'R', 'A', 'M', 'E', '_', 'I', 'N', 'D', 'E', 'X', 0,
  /* 5125 */ 'P', 'R', 'E', 'D', '_', 'X', 0,
  /* 5132 */ 'C', 'O', 'N', 'S', 'T', '_', 'C', 'O', 'P', 'Y', 0,
  /* 5143 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'X', 'Y', 0,
  /* 5153 */ 'I', 'N', 'T', 'E', 'R', 'P', '_', 'P', 'A', 'I', 'R', '_', 'X', 'Y', 0,
  /* 5168 */ 'G', '_', 'C', 'T', 'L', 'Z', 0,
  /* 5175 */ 'G', '_', 'C', 'T', 'T', 'Z', 0,
  /* 5182 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'L', 'o', 'a', 'd', 0,
  /* 5200 */ 'R', '6', '0', '0', '_', 'R', 'e', 'g', 'i', 's', 't', 'e', 'r', 'S', 't', 'o', 'r', 'e', 0,
  /* 5219 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5234 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'B', 'u', 'f', 0,
  /* 5247 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5262 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '3', '2', '_', 'e', 'g', 0,
  /* 5288 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5305 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5321 */ 'M', 'U', 'L', '_', 'U', 'I', 'N', 'T', '2', '4', '_', 'e', 'g', 0,
  /* 5335 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5350 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '6', '4', '_', 'e', 'g', 0,
  /* 5376 */ 'D', 'O', 'T', '4', '_', 'e', 'g', 0,
  /* 5384 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'e', 'g', 0,
  /* 5399 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5415 */ 'R', 'A', 'T', '_', 'W', 'R', 'I', 'T', 'E', '_', 'C', 'A', 'C', 'H', 'E', 'L', 'E', 'S', 'S', '_', '1', '2', '8', '_', 'e', 'g', 0,
  /* 5442 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'e', 'g', 0,
  /* 5456 */ 'F', 'M', 'A', '_', 'e', 'g', 0,
  /* 5463 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'e', 'g', 0,
  /* 5473 */ 'L', 'O', 'G', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5488 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5505 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5526 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'e', 'g', 0,
  /* 5545 */ 'C', 'N', 'D', 'E', '_', 'e', 'g', 0,
  /* 5553 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5568 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5580 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5594 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5606 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'e', 'g', 0,
  /* 5624 */ 'C', 'N', 'D', 'G', 'E', '_', 'e', 'g', 0,
  /* 5633 */ 'L', 'S', 'H', 'L', '_', 'e', 'g', 0,
  /* 5641 */ 'S', 'I', 'N', '_', 'e', 'g', 0,
  /* 5648 */ 'A', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5656 */ 'L', 'S', 'H', 'R', '_', 'e', 'g', 0,
  /* 5664 */ 'C', 'O', 'S', '_', 'e', 'g', 0,
  /* 5671 */ 'C', 'N', 'D', 'G', 'T', '_', 'e', 'g', 0,
  /* 5680 */ 'M', 'U', 'L', '_', 'L', 'I', 'T', '_', 'e', 'g', 0,
  /* 5691 */ 'U', 'I', 'N', 'T', '_', 'T', 'O', '_', 'F', 'L', 'T', '_', 'e', 'g', 0,
  /* 5706 */ 'B', 'F', 'E', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5718 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5732 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5746 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5761 */ 'R', 'E', 'C', 'I', 'P', '_', 'U', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5775 */ 'M', 'O', 'V', 'A', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5787 */ 'B', 'F', 'E', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5798 */ 'B', 'F', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5809 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5822 */ 'B', 'F', 'M', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5833 */ 'B', 'I', 'T', '_', 'A', 'L', 'I', 'G', 'N', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5850 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5863 */ 'F', 'L', 'T', '_', 'T', 'O', '_', 'I', 'N', 'T', '_', 'e', 'g', 0,
  /* 5877 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'r', 'e', 'a', 'l', 0,
  /* 5892 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'r', 'e', 'a', 'l', 0,
  /* 5905 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '3', '2', '_', 'c', 'm', 0,
  /* 5920 */ 'M', 'U', 'L', 'A', 'D', 'D', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 5936 */ 'M', 'U', 'L', '_', 'I', 'N', 'T', '2', '4', '_', 'c', 'm', 0,
  /* 5949 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '6', '4', '_', 'c', 'm', 0,
  /* 5964 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '6', '_', 'c', 'm', 0,
  /* 5979 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '1', '2', '8', '_', 'c', 'm', 0,
  /* 5995 */ 'V', 'T', 'X', '_', 'R', 'E', 'A', 'D', '_', '8', '_', 'c', 'm', 0,
  /* 6009 */ 'R', 'E', 'C', 'I', 'P', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6026 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'C', 'L', 'A', 'M', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6047 */ 'R', 'A', 'T', '_', 'S', 'T', 'O', 'R', 'E', '_', 'T', 'Y', 'P', 'E', 'D', '_', 'c', 'm', 0,
  /* 6066 */ 'L', 'O', 'G', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6078 */ 'R', 'E', 'C', 'I', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6092 */ 'E', 'X', 'P', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6104 */ 'R', 'E', 'C', 'I', 'P', 'S', 'Q', 'R', 'T', '_', 'I', 'E', 'E', 'E', '_', 'c', 'm', 0,
  /* 6122 */ 'S', 'I', 'N', '_', 'c', 'm', 0,
  /* 6129 */ 'C', 'O', 'S', '_', 'c', 'm', 0,
  /* 6136 */ 'M', 'U', 'L', 'H', 'I', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6150 */ 'M', 'U', 'L', 'L', 'O', '_', 'U', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6164 */ 'M', 'U', 'L', 'H', 'I', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6177 */ 'M', 'U', 'L', 'L', 'O', '_', 'I', 'N', 'T', '_', 'c', 'm', 0,
  /* 6190 */ 'C', 'U', 'B', 'E', '_', 'r', '6', '0', '0', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6207 */ 'C', 'U', 'B', 'E', '_', 'e', 'g', '_', 'p', 's', 'e', 'u', 'd', 'o', 0,
  /* 6222 */ 'R', '6', '0', '0', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
  /* 6237 */ 'E', 'G', '_', 'E', 'x', 'p', 'o', 'r', 't', 'S', 'w', 'z', 0,
};

extern const unsigned R600InstrNameIndices[] = {
    2404U, 2686U, 3356U, 2824U, 2469U, 2450U, 2478U, 2609U, 
    2061U, 2076U, 2003U, 2090U, 3691U, 1908U, 2459U, 1642U, 
    5138U, 1738U, 4849U, 1547U, 3233U, 2597U, 4548U, 1597U, 
    4537U, 1777U, 3332U, 3319U, 3451U, 4263U, 4434U, 2529U, 
    2576U, 2549U, 2495U, 1463U, 1287U, 2621U, 4963U, 4970U, 
    2672U, 2679U, 1517U, 3571U, 3541U, 2001U, 2402U, 5111U, 
    1918U, 3771U, 3626U, 4864U, 3643U, 3509U, 1373U, 3674U, 
    4559U, 3608U, 4881U, 1347U, 1579U, 1445U, 1407U, 1418U, 
    1809U, 3708U, 2241U, 2269U, 1477U, 1301U, 1531U, 1500U, 
    3583U, 3555U, 5095U, 2801U, 5078U, 2784U, 1634U, 1560U, 
    3790U, 1317U, 3738U, 4933U, 1365U, 4526U, 4514U, 4839U, 
    2293U, 4926U, 4942U, 2515U, 3483U, 3476U, 3281U, 3274U, 
    3781U, 3185U, 1663U, 3169U, 1626U, 3177U, 1655U, 3161U, 
    1618U, 3225U, 3217U, 2354U, 2346U, 1456U, 1280U, 2614U, 
    1244U, 4956U, 2665U, 5032U, 3344U, 1069U, 2286U, 1061U, 
    587U, 2054U, 4918U, 1337U, 2408U, 2417U, 3256U, 3265U, 
    3619U, 2738U, 1949U, 2718U, 2728U, 1680U, 1695U, 2696U, 
    2707U, 3250U, 2439U, 2770U, 5064U, 2777U, 5071U, 3351U, 
    4458U, 4486U, 4465U, 3524U, 5175U, 1983U, 5168U, 1965U, 
    3311U, 3242U, 2521U, 3667U, 2817U, 4873U, 3500U, 4570U, 
    4656U, 4891U, 3369U, 1725U, 2329U, 762U, 928U, 2433U, 
    751U, 917U, 875U, 1041U, 816U, 982U, 5132U, 1940U, 
    729U, 895U, 835U, 1001U, 778U, 944U, 6207U, 6190U, 
    4506U, 1204U, 2750U, 1817U, 1556U, 1329U, 2016U, 3293U, 
    2762U, 2336U, 160U, 82U, 1332U, 743U, 909U, 858U, 
    1024U, 800U, 966U, 4395U, 3288U, 1569U, 1871U, 690U, 
    3382U, 702U, 5125U, 1077U, 1165U, 1097U, 1185U, 5182U, 
    5200U, 3154U, 2840U, 1614U, 5021U, 3301U, 1459U, 4588U, 
    4677U, 1835U, 4685U, 5648U, 388U, 4810U, 5787U, 5706U, 
    5798U, 5822U, 5833U, 2524U, 4949U, 2426U, 1933U, 3416U, 
    3434U, 1790U, 2227U, 170U, 2143U, 65U, 2132U, 34U, 
    2655U, 2122U, 22U, 2183U, 108U, 2158U, 47U, 2104U, 
    0U, 2113U, 11U, 4693U, 5545U, 267U, 4702U, 5624U, 
    358U, 4785U, 5671U, 417U, 6129U, 5664U, 408U, 578U, 
    5892U, 5877U, 5376U, 186U, 5234U, 6237U, 2194U, 121U, 
    6092U, 5594U, 324U, 1822U, 4609U, 4756U, 3503U, 714U, 
    1210U, 5863U, 553U, 5746U, 490U, 5456U, 3765U, 3402U, 
    657U, 5153U, 5049U, 1429U, 5143U, 5039U, 5692U, 442U, 
    4412U, 1469U, 4239U, 1523U, 4251U, 4169U, 1856U, 4908U, 
    4381U, 4827U, 4365U, 4643U, 4332U, 4765U, 4349U, 4619U, 
    4315U, 3576U, 4304U, 4187U, 4220U, 1892U, 1293U, 4138U, 
    4150U, 4200U, 1882U, 2258U, 4277U, 3547U, 4292U, 3658U, 
    5473U, 208U, 6066U, 5568U, 294U, 2169U, 92U, 5633U, 
    369U, 5656U, 398U, 5067U, 648U, 4831U, 4647U, 2773U, 
    628U, 4769U, 4623U, 4977U, 5775U, 2617U, 5553U, 277U, 
    5920U, 5288U, 5463U, 196U, 6164U, 1132U, 5809U, 523U, 
    5305U, 6136U, 1116U, 5718U, 458U, 6177U, 5850U, 538U, 
    6150U, 5732U, 474U, 1671U, 5936U, 5680U, 428U, 5321U, 
    4819U, 4778U, 1452U, 2220U, 151U, 1846U, 4742U, 1714U, 
    4712U, 4423U, 4795U, 1766U, 4727U, 5219U, 6222U, 3846U, 
    2886U, 3867U, 2905U, 4033U, 3057U, 3929U, 2961U, 3955U, 
    2985U, 4113U, 3131U, 4007U, 3033U, 4088U, 3108U, 3981U, 
    3009U, 3909U, 2943U, 3803U, 2847U, 3825U, 2867U, 4062U, 
    3084U, 3888U, 2924U, 3490U, 1225U, 672U, 1147U, 6047U, 
    5526U, 5415U, 5262U, 5350U, 6026U, 5505U, 244U, 6104U, 
    5606U, 338U, 6009U, 5488U, 225U, 6078U, 5580U, 308U, 
    5761U, 507U, 1756U, 1851U, 618U, 4747U, 596U, 4717U, 
    4598U, 637U, 4800U, 4632U, 607U, 4732U, 1710U, 4419U, 
    6122U, 5641U, 379U, 569U, 1762U, 4578U, 4669U, 2362U, 
    4981U, 3193U, 1493U, 3598U, 1745U, 1394U, 2301U, 2627U, 
    1250U, 2316U, 2642U, 1266U, 2382U, 5001U, 2022U, 2039U, 
    1341U, 5691U, 441U, 5979U, 5399U, 5964U, 5384U, 5905U, 
    5247U, 5949U, 5335U, 5995U, 5442U, 2206U, 135U, 4777U, 
};

static inline void InitR600MCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 504);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct R600GenInstrInfo : public TargetInstrInfo {
  explicit R600GenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
  ~R600GenInstrInfo() override = default;

};
} // end llvm namespace
#endif // GET_INSTRINFO_HEADER

#ifdef GET_INSTRINFO_HELPER_DECLS
#undef GET_INSTRINFO_HELPER_DECLS


#endif // GET_INSTRINFO_HELPER_DECLS

#ifdef GET_INSTRINFO_HELPERS
#undef GET_INSTRINFO_HELPERS

#endif // GET_INSTRINFO_HELPERS

#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc R600Insts[];
extern const unsigned R600InstrNameIndices[];
extern const char R600InstrNameData[];
R600GenInstrInfo::R600GenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(R600Insts, R600InstrNameIndices, R600InstrNameData, 504);
}
} // end llvm namespace
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace R600 {
namespace OpName {
enum {
  ADDR = 98,
  COUNT = 105,
  Enabled = 106,
  KCACHE_ADDR0 = 103,
  KCACHE_ADDR1 = 104,
  KCACHE_BANK0 = 99,
  KCACHE_BANK1 = 100,
  KCACHE_MODE0 = 101,
  KCACHE_MODE1 = 102,
  addr = 72,
  bank_swizzle = 93,
  chan = 73,
  clamp = 80,
  clamp_W = 58,
  clamp_X = 7,
  clamp_Y = 24,
  clamp_Z = 41,
  dst = 0,
  dst_rel = 79,
  dst_rel_W = 57,
  dst_rel_X = 6,
  dst_rel_Y = 23,
  dst_rel_Z = 40,
  last = 90,
  literal = 92,
  literal0 = 70,
  literal1 = 71,
  omod = 78,
  omod_W = 56,
  omod_X = 5,
  omod_Y = 22,
  omod_Z = 39,
  pred_sel = 91,
  pred_sel_W = 69,
  pred_sel_X = 18,
  pred_sel_Y = 35,
  pred_sel_Z = 52,
  src0 = 1,
  src0_W = 59,
  src0_X = 8,
  src0_Y = 25,
  src0_Z = 42,
  src0_abs = 83,
  src0_abs_W = 62,
  src0_abs_X = 11,
  src0_abs_Y = 28,
  src0_abs_Z = 45,
  src0_neg = 81,
  src0_neg_W = 60,
  src0_neg_X = 9,
  src0_neg_Y = 26,
  src0_neg_Z = 43,
  src0_rel = 82,
  src0_rel_W = 61,
  src0_rel_X = 10,
  src0_rel_Y = 27,
  src0_rel_Z = 44,
  src0_sel = 84,
  src0_sel_W = 63,
  src0_sel_X = 12,
  src0_sel_Y = 29,
  src0_sel_Z = 46,
  src1 = 85,
  src1_W = 64,
  src1_X = 13,
  src1_Y = 30,
  src1_Z = 47,
  src1_abs = 88,
  src1_abs_W = 67,
  src1_abs_X = 16,
  src1_abs_Y = 33,
  src1_abs_Z = 50,
  src1_neg = 86,
  src1_neg_W = 65,
  src1_neg_X = 14,
  src1_neg_Y = 31,
  src1_neg_Z = 48,
  src1_rel = 87,
  src1_rel_W = 66,
  src1_rel_X = 15,
  src1_rel_Y = 32,
  src1_rel_Z = 49,
  src1_sel = 89,
  src1_sel_W = 68,
  src1_sel_X = 17,
  src1_sel_Y = 34,
  src1_sel_Z = 51,
  src2 = 94,
  src2_neg = 95,
  src2_rel = 96,
  src2_sel = 97,
  update_exec_mask = 75,
  update_exec_mask_W = 53,
  update_exec_mask_X = 2,
  update_exec_mask_Y = 19,
  update_exec_mask_Z = 36,
  update_pred = 76,
  update_pred_W = 54,
  update_pred_X = 3,
  update_pred_Y = 20,
  update_pred_Z = 37,
  val = 74,
  write = 77,
  write_W = 55,
  write_X = 4,
  write_Y = 21,
  write_Z = 38,
OPERAND_LAST
};
} // end namespace OpName
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM

#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace R600 {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  static const int16_t OperandMap [][107] = {
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 7, 8, -1, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, 4, -1, 5, -1, 6, 10, 11, -1, 12, 7, -1, 8, 9, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 3, -1, -1, -1, -1, -1, 4, 5, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 4, 5, -1, 6, 7, 8, 9, -1, 10, 15, 16, 17, 18, 11, 12, 13, 14, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 5, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 6, 7, 8, 9, -1, -1, -1, -1, -1, 10, 11, 12, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, 7, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 2, 3, 4, 5, 6, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 6, 7, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 2, 3, -1, 4, -1, 5, 9, 10, -1, 11, 6, -1, 7, 8, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 3, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, },
{-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, },
};
  switch(Opcode) {
  case R600::CUBE_eg_pseudo:
  case R600::CUBE_r600_pseudo:
    return OperandMap[0][NamedIdx];
  case R600::LDS_ADD_RET:
  case R600::LDS_AND_RET:
  case R600::LDS_MAX_INT_RET:
  case R600::LDS_MAX_UINT_RET:
  case R600::LDS_MIN_INT_RET:
  case R600::LDS_MIN_UINT_RET:
  case R600::LDS_OR_RET:
  case R600::LDS_SUB_RET:
  case R600::LDS_WRXCHG_RET:
  case R600::LDS_XOR_RET:
    return OperandMap[1][NamedIdx];
  case R600::LDS_CMPST_RET:
    return OperandMap[2][NamedIdx];
  case R600::LDS_BYTE_READ_RET:
  case R600::LDS_READ_RET:
  case R600::LDS_SHORT_READ_RET:
  case R600::LDS_UBYTE_READ_RET:
  case R600::LDS_USHORT_READ_RET:
    return OperandMap[3][NamedIdx];
  case R600::BFE_INT_eg:
  case R600::BFE_UINT_eg:
  case R600::BFI_INT_eg:
  case R600::BIT_ALIGN_INT_eg:
  case R600::CNDE_INT:
  case R600::CNDE_eg:
  case R600::CNDE_r600:
  case R600::CNDGE_INT:
  case R600::CNDGE_eg:
  case R600::CNDGE_r600:
  case R600::CNDGT_INT:
  case R600::CNDGT_eg:
  case R600::CNDGT_r600:
  case R600::FMA_eg:
  case R600::MULADD_IEEE_eg:
  case R600::MULADD_IEEE_r600:
  case R600::MULADD_INT24_cm:
  case R600::MULADD_UINT24_eg:
  case R600::MULADD_eg:
  case R600::MULADD_r600:
  case R600::MUL_LIT_eg:
  case R600::MUL_LIT_r600:
    return OperandMap[4][NamedIdx];
  case R600::BCNT_INT:
  case R600::CEIL:
  case R600::COS_cm:
  case R600::COS_eg:
  case R600::COS_r600:
  case R600::COS_r700:
  case R600::EXP_IEEE_cm:
  case R600::EXP_IEEE_eg:
  case R600::EXP_IEEE_r600:
  case R600::FFBH_UINT:
  case R600::FFBL_INT:
  case R600::FLOOR:
  case R600::FLT16_TO_FLT32:
  case R600::FLT32_TO_FLT16:
  case R600::FLT_TO_INT_eg:
  case R600::FLT_TO_INT_r600:
  case R600::FLT_TO_UINT_eg:
  case R600::FLT_TO_UINT_r600:
  case R600::FRACT:
  case R600::INTERP_LOAD_P0:
  case R600::INT_TO_FLT_eg:
  case R600::INT_TO_FLT_r600:
  case R600::LOG_CLAMPED_eg:
  case R600::LOG_CLAMPED_r600:
  case R600::LOG_IEEE_cm:
  case R600::LOG_IEEE_eg:
  case R600::LOG_IEEE_r600:
  case R600::MOV:
  case R600::MOVA_INT_eg:
  case R600::NOT_INT:
  case R600::RECIPSQRT_CLAMPED_cm:
  case R600::RECIPSQRT_CLAMPED_eg:
  case R600::RECIPSQRT_CLAMPED_r600:
  case R600::RECIPSQRT_IEEE_cm:
  case R600::RECIPSQRT_IEEE_eg:
  case R600::RECIPSQRT_IEEE_r600:
  case R600::RECIP_CLAMPED_cm:
  case R600::RECIP_CLAMPED_eg:
  case R600::RECIP_CLAMPED_r600:
  case R600::RECIP_IEEE_cm:
  case R600::RECIP_IEEE_eg:
  case R600::RECIP_IEEE_r600:
  case R600::RECIP_UINT_eg:
  case R600::RECIP_UINT_r600:
  case R600::RNDNE:
  case R600::SIN_cm:
  case R600::SIN_eg:
  case R600::SIN_r600:
  case R600::SIN_r700:
  case R600::TRUNC:
  case R600::UINT_TO_FLT_eg:
  case R600::UINT_TO_FLT_r600:
    return OperandMap[5][NamedIdx];
  case R600::ADD:
  case R600::ADDC_UINT:
  case R600::ADD_INT:
  case R600::AND_INT:
  case R600::ASHR_eg:
  case R600::ASHR_r600:
  case R600::BFM_INT_eg:
  case R600::CUBE_eg_real:
  case R600::CUBE_r600_real:
  case R600::DOT4_eg:
  case R600::DOT4_r600:
  case R600::INTERP_XY:
  case R600::INTERP_ZW:
  case R600::KILLGT:
  case R600::LSHL_eg:
  case R600::LSHL_r600:
  case R600::LSHR_eg:
  case R600::LSHR_r600:
  case R600::MAX:
  case R600::MAX_DX10:
  case R600::MAX_INT:
  case R600::MAX_UINT:
  case R600::MIN:
  case R600::MIN_DX10:
  case R600::MIN_INT:
  case R600::MIN_UINT:
  case R600::MUL:
  case R600::MULHI_INT_cm:
  case R600::MULHI_INT_cm24:
  case R600::MULHI_INT_eg:
  case R600::MULHI_INT_r600:
  case R600::MULHI_UINT24_eg:
  case R600::MULHI_UINT_cm:
  case R600::MULHI_UINT_cm24:
  case R600::MULHI_UINT_eg:
  case R600::MULHI_UINT_r600:
  case R600::MULLO_INT_cm:
  case R600::MULLO_INT_eg:
  case R600::MULLO_INT_r600:
  case R600::MULLO_UINT_cm:
  case R600::MULLO_UINT_eg:
  case R600::MULLO_UINT_r600:
  case R600::MUL_IEEE:
  case R600::MUL_INT24_cm:
  case R600::MUL_UINT24_eg:
  case R600::OR_INT:
  case R600::PRED_SETE:
  case R600::PRED_SETE_INT:
  case R600::PRED_SETGE:
  case R600::PRED_SETGE_INT:
  case R600::PRED_SETGT:
  case R600::PRED_SETGT_INT:
  case R600::PRED_SETNE:
  case R600::PRED_SETNE_INT:
  case R600::SETE:
  case R600::SETE_DX10:
  case R600::SETE_INT:
  case R600::SETGE_DX10:
  case R600::SETGE_INT:
  case R600::SETGE_UINT:
  case R600::SETGT_DX10:
  case R600::SETGT_INT:
  case R600::SETGT_UINT:
  case R600::SETNE_DX10:
  case R600::SETNE_INT:
  case R600::SGE:
  case R600::SGT:
  case R600::SNE:
  case R600::SUBB_UINT:
  case R600::SUB_INT:
  case R600::XOR_INT:
    return OperandMap[6][NamedIdx];
  case R600::DOT_4:
    return OperandMap[7][NamedIdx];
  case R600::R600_RegisterLoad:
    return OperandMap[8][NamedIdx];
  case R600::LDS_ADD:
  case R600::LDS_AND:
  case R600::LDS_BYTE_WRITE:
  case R600::LDS_MAX_INT:
  case R600::LDS_MAX_UINT:
  case R600::LDS_MIN_INT:
  case R600::LDS_MIN_UINT:
  case R600::LDS_OR:
  case R600::LDS_SHORT_WRITE:
  case R600::LDS_SUB:
  case R600::LDS_WRITE:
  case R600::LDS_WRXCHG:
  case R600::LDS_XOR:
    return OperandMap[9][NamedIdx];
  case R600::LDS_CMPST:
    return OperandMap[10][NamedIdx];
  case R600::R600_RegisterStore:
    return OperandMap[11][NamedIdx];
  case R600::CF_ALU:
  case R600::CF_ALU_BREAK:
  case R600::CF_ALU_CONTINUE:
  case R600::CF_ALU_ELSE_AFTER:
  case R600::CF_ALU_POP_AFTER:
  case R600::CF_ALU_PUSH_BEFORE:
    return OperandMap[12][NamedIdx];
    default: return -1;
  }
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace R600 {
namespace OpTypes {
enum OperandType {
  ABS = 0,
  BANK_SWIZZLE = 1,
  CLAMP = 2,
  CT = 3,
  FRAMEri = 4,
  InstFlag = 5,
  KCACHE = 6,
  LAST = 7,
  LITERAL = 8,
  MEMrr = 9,
  MEMxi = 10,
  NEG = 11,
  OMOD = 12,
  R600_Pred = 13,
  REL = 14,
  RSel = 15,
  SEL = 16,
  UEM = 17,
  UP = 18,
  WRITE = 19,
  brtarget = 20,
  f32imm = 21,
  f64imm = 22,
  i16imm = 23,
  i1imm = 24,
  i32imm = 25,
  i64imm = 26,
  i8imm = 27,
  ptype0 = 28,
  ptype1 = 29,
  ptype2 = 30,
  ptype3 = 31,
  ptype4 = 32,
  ptype5 = 33,
  s16imm = 34,
  type0 = 35,
  type1 = 36,
  type2 = 37,
  type3 = 38,
  type4 = 39,
  type5 = 40,
  u16imm = 41,
  u32imm = 42,
  u8imm = 43,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace R600
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM

#ifdef GET_INSTRINFO_OPERAND_TYPE
#undef GET_INSTRINFO_OPERAND_TYPE
namespace llvm {
namespace R600 {
LLVM_READONLY
int getOperandType(uint16_t Opcode, uint16_t OpIdx) {
  const int Offsets[] = {
    0,
    1,
    1,
    1,
    2,
    3,
    4,
    5,
    5,
    8,
    12,
    13,
    17,
    20,
    20,
    21,
    23,
    25,
    25,
    26,
    27,
    29,
    29,
    35,
    36,
    36,
    38,
    39,
    39,
    39,
    39,
    39,
    39,
    41,
    44,
    44,
    47,
    50,
    53,
    56,
    59,
    62,
    65,
    68,
    71,
    74,
    75,
    76,
    78,
    80,
    83,
    85,
    89,
    91,
    93,
    95,
    97,
    99,
    101,
    103,
    105,
    107,
    109,
    111,
    113,
    115,
    120,
    124,
    127,
    130,
    133,
    136,
    139,
    142,
    145,
    148,
    151,
    154,
    157,
    159,
    161,
    162,
    163,
    164,
    166,
    168,
    170,
    172,
    173,
    176,
    178,
    180,
    183,
    186,
    189,
    193,
    197,
    201,
    205,
    210,
    214,
    219,
    223,
    228,
    232,
    237,
    241,
    245,
    248,
    251,
    254,
    257,
    260,
    264,
    267,
    270,
    273,
    275,
    277,
    279,
    281,
    283,
    285,
    287,
    289,
    291,
    293,
    295,
    297,
    299,
    302,
    304,
    307,
    310,
    313,
    316,
    319,
    322,
    325,
    328,
    331,
    334,
    337,
    340,
    341,
    344,
    348,
    351,
    355,
    357,
    359,
    361,
    363,
    365,
    367,
    369,
    371,
    373,
    375,
    377,
    379,
    381,
    383,
    385,
    387,
    388,
    390,
    392,
    392,
    394,
    396,
    397,
    398,
    399,
    400,
    402,
    402,
    404,
    406,
    407,
    408,
    409,
    410,
    412,
    414,
    414,
    485,
    485,
    485,
    485,
    485,
    485,
    485,
    485,
    485,
    487,
    489,
    489,
    491,
    493,
    494,
    495,
    496,
    497,
    498,
    499,
    501,
    502,
    504,
    506,
    508,
    512,
    515,
    518,
    522,
    526,
    530,
    534,
    534,
    534,
    541,
    548,
    548,
    569,
    590,
    611,
    612,
    633,
    654,
    675,
    689,
    708,
    727,
    746,
    767,
    786,
    800,
    809,
    818,
    827,
    836,
    845,
    854,
    854,
    854,
    855,
    856,
    858,
    860,
    860,
    860,
    860,
    862,
    864,
    866,
    867,
    869,
    871,
    873,
    875,
    894,
    913,
    932,
    951,
    970,
    989,
    1008,
    1027,
    1046,
    1060,
    1074,
    1088,
    1102,
    1123,
    1144,
    1165,
    1186,
    1193,
    1202,
    1203,
    1204,
    1218,
    1232,
    1246,
    1247,
    1261,
    1275,
    1289,
    1303,
    1317,
    1331,
    1345,
    1359,
    1373,
    1392,
    1406,
    1406,
    1420,
    1425,
    1430,
    1432,
    1453,
    1474,
    1488,
    1502,
    1523,
    1532,
    1542,
    1551,
    1561,
    1568,
    1577,
    1589,
    1602,
    1611,
    1621,
    1630,
    1640,
    1649,
    1659,
    1668,
    1678,
    1687,
    1697,
    1704,
    1711,
    1720,
    1729,
    1739,
    1746,
    1753,
    1762,
    1771,
    1781,
    1790,
    1800,
    1802,
    1816,
    1830,
    1844,
    1858,
    1872,
    1873,
    1874,
    1895,
    1916,
    1937,
    1958,
    1979,
    2000,
    2021,
    2042,
    2063,
    2084,
    2105,
    2126,
    2140,
    2154,
    2175,
    2194,
    2213,
    2232,
    2251,
    2270,
    2289,
    2310,
    2331,
    2352,
    2373,
    2394,
    2415,
    2436,
    2457,
    2478,
    2499,
    2520,
    2541,
    2562,
    2583,
    2604,
    2625,
    2646,
    2665,
    2684,
    2705,
    2719,
    2740,
    2740,
    2742,
    2744,
    2765,
    2786,
    2807,
    2828,
    2849,
    2870,
    2891,
    2912,
    2919,
    2928,
    2931,
    2934,
    2937,
    2940,
    2943,
    2946,
    2949,
    2952,
    2955,
    2958,
    2961,
    2964,
    2967,
    2970,
    2973,
    2976,
    2979,
    2982,
    2985,
    2988,
    2991,
    2994,
    2997,
    3000,
    3003,
    3006,
    3009,
    3012,
    3014,
    3016,
    3018,
    3020,
    3024,
    3028,
    3031,
    3034,
    3037,
    3051,
    3065,
    3079,
    3093,
    3107,
    3121,
    3135,
    3149,
    3163,
    3177,
    3191,
    3205,
    3219,
    3233,
    3247,
    3268,
    3289,
    3310,
    3331,
    3352,
    3373,
    3394,
    3415,
    3436,
    3457,
    3478,
    3499,
    3520,
    3534,
    3548,
    3562,
    3576,
    3597,
    3618,
    3639,
    3658,
    3677,
    3696,
    3715,
    3734,
    3753,
    3772,
    3791,
    3810,
    3829,
    3848,
    3867,
    3886,
    3905,
    3924,
    3928,
    3932,
    3946,
    3960,
    3974,
    3978,
    3982,
    3986,
    3990,
    3994,
    3998,
    4002,
    4006,
    4010,
    4014,
    4015,
    4016,
  };
  const int OpcodeOperandTypes[] = {
    -1, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    /**/
    -1, -1, OpTypes::i32imm, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, 
    -1, -1, -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, 
    /**/
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i64imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::i64imm, OpTypes::i32imm, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, 
    /**/
    -1, OpTypes::i32imm, 
    -1, 
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, OpTypes::i8imm, 
    OpTypes::i16imm, -1, OpTypes::i32imm, 
    /**/
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::ptype1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::type0, OpTypes::ptype1, OpTypes::type0, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    -1, 
    -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, -1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, -1, OpTypes::type1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, -1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, OpTypes::type0, 
    -1, 
    OpTypes::ptype0, -1, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, OpTypes::type1, OpTypes::type2, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type0, 
    OpTypes::type0, OpTypes::type1, 
    OpTypes::type0, -1, 
    OpTypes::type0, -1, 
    OpTypes::brtarget, 
    OpTypes::brtarget, -1, 
    OpTypes::brtarget, -1, 
    /**/
    -1, -1, 
    -1, -1, 
    -1, 
    -1, 
    -1, 
    -1, 
    -1, OpTypes::i32imm, 
    /**/
    -1, -1, 
    -1, -1, 
    -1, 
    -1, 
    -1, 
    -1, 
    -1, -1, 
    -1, -1, 
    /**/
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::LITERAL, OpTypes::LITERAL, 
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    /**/
    -1, -1, 
    -1, -1, 
    /**/
    -1, -1, 
    -1, -1, 
    -1, 
    -1, 
    -1, 
    -1, 
    -1, 
    OpTypes::brtarget, 
    OpTypes::brtarget, -1, 
    -1, 
    -1, OpTypes::f32imm, 
    -1, OpTypes::i32imm, 
    -1, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, -1, 
    -1, -1, -1, -1, 
    -1, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    -1, -1, -1, -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    -1, -1, -1, -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::KCACHE, OpTypes::KCACHE, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    /**/
    /**/
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::i32imm, -1, -1, 
    -1, -1, OpTypes::i32imm, -1, -1, 
    -1, OpTypes::i32imm, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::REL, OpTypes::SEL, -1, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::BANK_SWIZZLE, 
    OpTypes::LITERAL, OpTypes::LITERAL, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    /**/
    OpTypes::i32imm, OpTypes::i32imm, 
    OpTypes::i32imm, OpTypes::i32imm, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, 
    -1, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, 
    -1, -1, OpTypes::i32imm, OpTypes::InstFlag, 
    -1, -1, OpTypes::i32imm, OpTypes::InstFlag, 
    -1, -1, OpTypes::InstFlag, 
    -1, -1, OpTypes::InstFlag, 
    -1, -1, OpTypes::InstFlag, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::i32imm, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::RSel, OpTypes::i32imm, OpTypes::i32imm, OpTypes::CT, OpTypes::CT, OpTypes::CT, OpTypes::CT, 
    -1, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i32imm, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    -1, -1, OpTypes::i32imm, OpTypes::i8imm, 
    OpTypes::i32imm, 
    OpTypes::i32imm, 
    -1, OpTypes::UEM, OpTypes::UP, OpTypes::WRITE, OpTypes::OMOD, OpTypes::REL, OpTypes::CLAMP, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, -1, OpTypes::NEG, OpTypes::REL, OpTypes::ABS, OpTypes::SEL, OpTypes::LAST, -1, OpTypes::LITERAL, OpTypes::BANK_SWIZZLE, 
  };
  return OpcodeOperandTypes[Offsets[Opcode] + OpIdx];
}
} // end namespace R600
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_TYPE

#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace R600 {

enum DisableEncoding {
	DisableEncoding_
};

// getLDSNoRetOp
LLVM_READONLY
int getLDSNoRetOp(uint16_t Opcode) {
static const uint16_t getLDSNoRetOpTable[][2] = {
  { R600::LDS_ADD_RET, R600::LDS_ADD },
  { R600::LDS_AND_RET, R600::LDS_AND },
  { R600::LDS_MAX_INT_RET, R600::LDS_MAX_INT },
  { R600::LDS_MAX_UINT_RET, R600::LDS_MAX_UINT },
  { R600::LDS_MIN_INT_RET, R600::LDS_MIN_INT },
  { R600::LDS_MIN_UINT_RET, R600::LDS_MIN_UINT },
  { R600::LDS_OR_RET, R600::LDS_OR },
  { R600::LDS_SUB_RET, R600::LDS_SUB },
  { R600::LDS_WRXCHG_RET, R600::LDS_WRXCHG },
  { R600::LDS_XOR_RET, R600::LDS_XOR },
}; // End of getLDSNoRetOpTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 10;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == getLDSNoRetOpTable[mid][0]) {
      break;
    }
    if (Opcode < getLDSNoRetOpTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  return getLDSNoRetOpTable[mid][1];
}

} // End R600 namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

