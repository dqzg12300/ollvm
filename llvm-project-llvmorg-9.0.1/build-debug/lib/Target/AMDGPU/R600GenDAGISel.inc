/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* DAG Instruction Selector for the R600 target                               *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// If GET_DAGISEL_DECL is #defined with any value, only function
// declarations will be included when this file is included.
// If GET_DAGISEL_BODY is #defined, its value should be the name of
// the instruction selector class. Function bodies will be emitted
// and each function's name will be qualified with the name of the
// class.
//
// When neither of the GET_DAGISEL* macros is defined, the functions
// are emitted inline.

#if defined(GET_DAGISEL_DECL) && defined(GET_DAGISEL_BODY)
#error GET_DAGISEL_DECL and GET_DAGISEL_BODY cannot be both defined, undef both for inline definitions
#endif

#ifdef GET_DAGISEL_BODY
#define LOCAL_DAGISEL_STRINGIZE(X) LOCAL_DAGISEL_STRINGIZE_(X)
#define LOCAL_DAGISEL_STRINGIZE_(X) #X
static_assert(sizeof(LOCAL_DAGISEL_STRINGIZE(GET_DAGISEL_BODY)) > 1,
   "GET_DAGISEL_BODY is empty: it should be defined with the class name");
#undef LOCAL_DAGISEL_STRINGIZE_
#undef LOCAL_DAGISEL_STRINGIZE
#endif

#if !defined(GET_DAGISEL_DECL) && !defined(GET_DAGISEL_BODY)
#define DAGISEL_INLINE 1
#else
#define DAGISEL_INLINE 0
#endif

#if !DAGISEL_INLINE
#define DAGISEL_CLASS_COLONCOLON GET_DAGISEL_BODY ::
#else
#define DAGISEL_CLASS_COLONCOLON
#endif

#ifdef GET_DAGISEL_DECL
void SelectCode(SDNode *N);
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
void DAGISEL_CLASS_COLONCOLON SelectCode(SDNode *N)
{
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*     0*/  OPC_SwitchOpcode /*99 cases */, 99|128,2/*355*/, TARGET_VAL(ISD::SRL),// ->360
/*     5*/    OPC_Scope, 11|128,1/*139*/, /*->147*/ // 2 children in Scope
/*     8*/      OPC_MoveChild0,
/*     9*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*    12*/      OPC_RecordChild0, // #0 = $src
/*    13*/      OPC_MoveChild1,
/*    14*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    17*/      OPC_CheckChild0Integer, 32, 
/*    19*/      OPC_RecordChild1, // #1 = $width
/*    20*/      OPC_CheckType, MVT::i32,
/*    22*/      OPC_MoveParent,
/*    23*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*    25*/      OPC_MoveParent,
/*    26*/      OPC_MoveChild1,
/*    27*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*    30*/      OPC_CheckChild0Integer, 32, 
/*    32*/      OPC_CheckChild1Same, 1,
/*    34*/      OPC_CheckType, MVT::i32,
/*    36*/      OPC_MoveParent,
/*    37*/      OPC_CheckType, MVT::i32,
/*    39*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*    41*/      OPC_EmitInteger, MVT::i32, 0, 
/*    44*/      OPC_EmitInteger, MVT::i32, 0, 
/*    47*/      OPC_EmitInteger, MVT::i32, 0, 
/*    50*/      OPC_EmitInteger, MVT::i32, 0, 
/*    53*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    65*/      OPC_EmitInteger, MVT::i32, 0, 
/*    68*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*    75*/      OPC_EmitInteger, MVT::i32, 0, 
/*    78*/      OPC_EmitInteger, MVT::i32, 0, 
/*    81*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*    93*/      OPC_EmitInteger, MVT::i32, 0, 
/*    96*/      OPC_EmitInteger, MVT::i32, 0, 
/*    99*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   111*/      OPC_EmitInteger, MVT::i32, 1, 
/*   114*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   117*/      OPC_EmitInteger, MVT::i32, 0, 
/*   120*/      OPC_EmitInteger, MVT::i32, 0, 
/*   123*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (srl:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   147*/    /*Scope*/ 82|128,1/*210*/, /*->359*/
/*   149*/      OPC_RecordChild0, // #0 = $src0
/*   150*/      OPC_RecordChild1, // #1 = $src1
/*   151*/      OPC_CheckChild1Type, MVT::i32,
/*   153*/      OPC_CheckType, MVT::i32,
/*   155*/      OPC_Scope, 100, /*->257*/ // 2 children in Scope
/*   157*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   159*/        OPC_EmitInteger, MVT::i32, 0, 
/*   162*/        OPC_EmitInteger, MVT::i32, 0, 
/*   165*/        OPC_EmitInteger, MVT::i32, 1, 
/*   168*/        OPC_EmitInteger, MVT::i32, 0, 
/*   171*/        OPC_EmitInteger, MVT::i32, 0, 
/*   174*/        OPC_EmitInteger, MVT::i32, 0, 
/*   177*/        OPC_EmitInteger, MVT::i32, 0, 
/*   180*/        OPC_EmitInteger, MVT::i32, 0, 
/*   183*/        OPC_EmitInteger, MVT::i32, 0, 
/*   186*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   198*/        OPC_EmitInteger, MVT::i32, 0, 
/*   201*/        OPC_EmitInteger, MVT::i32, 0, 
/*   204*/        OPC_EmitInteger, MVT::i32, 0, 
/*   207*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   219*/        OPC_EmitInteger, MVT::i32, 1, 
/*   222*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   225*/        OPC_EmitInteger, MVT::i32, 0, 
/*   228*/        OPC_EmitInteger, MVT::i32, 0, 
/*   231*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   257*/      /*Scope*/ 100, /*->358*/
/*   258*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   260*/        OPC_EmitInteger, MVT::i32, 0, 
/*   263*/        OPC_EmitInteger, MVT::i32, 0, 
/*   266*/        OPC_EmitInteger, MVT::i32, 1, 
/*   269*/        OPC_EmitInteger, MVT::i32, 0, 
/*   272*/        OPC_EmitInteger, MVT::i32, 0, 
/*   275*/        OPC_EmitInteger, MVT::i32, 0, 
/*   278*/        OPC_EmitInteger, MVT::i32, 0, 
/*   281*/        OPC_EmitInteger, MVT::i32, 0, 
/*   284*/        OPC_EmitInteger, MVT::i32, 0, 
/*   287*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   299*/        OPC_EmitInteger, MVT::i32, 0, 
/*   302*/        OPC_EmitInteger, MVT::i32, 0, 
/*   305*/        OPC_EmitInteger, MVT::i32, 0, 
/*   308*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   320*/        OPC_EmitInteger, MVT::i32, 1, 
/*   323*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   326*/        OPC_EmitInteger, MVT::i32, 0, 
/*   329*/        OPC_EmitInteger, MVT::i32, 0, 
/*   332*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LSHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (srl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (LSHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   358*/      0, /*End of Scope*/
/*   359*/    0, /*End of Scope*/
/*   360*/  /*SwitchOpcode*/ 99|128,2/*355*/, TARGET_VAL(ISD::SRA),// ->719
/*   364*/    OPC_Scope, 11|128,1/*139*/, /*->506*/ // 2 children in Scope
/*   367*/      OPC_MoveChild0,
/*   368*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   371*/      OPC_RecordChild0, // #0 = $src
/*   372*/      OPC_MoveChild1,
/*   373*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   376*/      OPC_CheckChild0Integer, 32, 
/*   378*/      OPC_RecordChild1, // #1 = $width
/*   379*/      OPC_CheckType, MVT::i32,
/*   381*/      OPC_MoveParent,
/*   382*/      OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   384*/      OPC_MoveParent,
/*   385*/      OPC_MoveChild1,
/*   386*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*   389*/      OPC_CheckChild0Integer, 32, 
/*   391*/      OPC_CheckChild1Same, 1,
/*   393*/      OPC_CheckType, MVT::i32,
/*   395*/      OPC_MoveParent,
/*   396*/      OPC_CheckType, MVT::i32,
/*   398*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   400*/      OPC_EmitInteger, MVT::i32, 0, 
/*   403*/      OPC_EmitInteger, MVT::i32, 0, 
/*   406*/      OPC_EmitInteger, MVT::i32, 0, 
/*   409*/      OPC_EmitInteger, MVT::i32, 0, 
/*   412*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   424*/      OPC_EmitInteger, MVT::i32, 0, 
/*   427*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   434*/      OPC_EmitInteger, MVT::i32, 0, 
/*   437*/      OPC_EmitInteger, MVT::i32, 0, 
/*   440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   452*/      OPC_EmitInteger, MVT::i32, 0, 
/*   455*/      OPC_EmitInteger, MVT::i32, 0, 
/*   458*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   470*/      OPC_EmitInteger, MVT::i32, 1, 
/*   473*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   476*/      OPC_EmitInteger, MVT::i32, 0, 
/*   479*/      OPC_EmitInteger, MVT::i32, 0, 
/*   482*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sra:{ *:[i32] } (shl:{ *:[i32] } i32:{ *:[i32] }:$src, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_shl_oneuse>>, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width)) - Complexity = 23
                // Dst: (BFE_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   506*/    /*Scope*/ 82|128,1/*210*/, /*->718*/
/*   508*/      OPC_RecordChild0, // #0 = $src0
/*   509*/      OPC_RecordChild1, // #1 = $src1
/*   510*/      OPC_CheckChild1Type, MVT::i32,
/*   512*/      OPC_CheckType, MVT::i32,
/*   514*/      OPC_Scope, 100, /*->616*/ // 2 children in Scope
/*   516*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   518*/        OPC_EmitInteger, MVT::i32, 0, 
/*   521*/        OPC_EmitInteger, MVT::i32, 0, 
/*   524*/        OPC_EmitInteger, MVT::i32, 1, 
/*   527*/        OPC_EmitInteger, MVT::i32, 0, 
/*   530*/        OPC_EmitInteger, MVT::i32, 0, 
/*   533*/        OPC_EmitInteger, MVT::i32, 0, 
/*   536*/        OPC_EmitInteger, MVT::i32, 0, 
/*   539*/        OPC_EmitInteger, MVT::i32, 0, 
/*   542*/        OPC_EmitInteger, MVT::i32, 0, 
/*   545*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   557*/        OPC_EmitInteger, MVT::i32, 0, 
/*   560*/        OPC_EmitInteger, MVT::i32, 0, 
/*   563*/        OPC_EmitInteger, MVT::i32, 0, 
/*   566*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   578*/        OPC_EmitInteger, MVT::i32, 1, 
/*   581*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   584*/        OPC_EmitInteger, MVT::i32, 0, 
/*   587*/        OPC_EmitInteger, MVT::i32, 0, 
/*   590*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_r600), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   616*/      /*Scope*/ 100, /*->717*/
/*   617*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   619*/        OPC_EmitInteger, MVT::i32, 0, 
/*   622*/        OPC_EmitInteger, MVT::i32, 0, 
/*   625*/        OPC_EmitInteger, MVT::i32, 1, 
/*   628*/        OPC_EmitInteger, MVT::i32, 0, 
/*   631*/        OPC_EmitInteger, MVT::i32, 0, 
/*   634*/        OPC_EmitInteger, MVT::i32, 0, 
/*   637*/        OPC_EmitInteger, MVT::i32, 0, 
/*   640*/        OPC_EmitInteger, MVT::i32, 0, 
/*   643*/        OPC_EmitInteger, MVT::i32, 0, 
/*   646*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   658*/        OPC_EmitInteger, MVT::i32, 0, 
/*   661*/        OPC_EmitInteger, MVT::i32, 0, 
/*   664*/        OPC_EmitInteger, MVT::i32, 0, 
/*   667*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   679*/        OPC_EmitInteger, MVT::i32, 1, 
/*   682*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   685*/        OPC_EmitInteger, MVT::i32, 0, 
/*   688*/        OPC_EmitInteger, MVT::i32, 0, 
/*   691*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ASHR_eg), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (sra:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ASHR_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*   717*/      0, /*End of Scope*/
/*   718*/    0, /*End of Scope*/
/*   719*/  /*SwitchOpcode*/ 126, TARGET_VAL(AMDGPUISD::R600_EXPORT),// ->848
/*   722*/    OPC_RecordNode, // #0 = 'R600_EXPORT' chained node
/*   723*/    OPC_RecordChild1, // #1 = $src
/*   724*/    OPC_CheckChild1Type, MVT::v4f32,
/*   726*/    OPC_RecordChild2, // #2 = $base
/*   727*/    OPC_MoveChild2,
/*   728*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   731*/    OPC_CheckType, MVT::i32,
/*   733*/    OPC_MoveParent,
/*   734*/    OPC_RecordChild3, // #3 = $type
/*   735*/    OPC_MoveChild3,
/*   736*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   739*/    OPC_CheckType, MVT::i32,
/*   741*/    OPC_MoveParent,
/*   742*/    OPC_RecordChild4, // #4 = $swz_x
/*   743*/    OPC_MoveChild4,
/*   744*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   747*/    OPC_CheckType, MVT::i32,
/*   749*/    OPC_MoveParent,
/*   750*/    OPC_RecordChild5, // #5 = $swz_y
/*   751*/    OPC_MoveChild5,
/*   752*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   755*/    OPC_CheckType, MVT::i32,
/*   757*/    OPC_MoveParent,
/*   758*/    OPC_RecordChild6, // #6 = $swz_z
/*   759*/    OPC_MoveChild6,
/*   760*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   763*/    OPC_CheckType, MVT::i32,
/*   765*/    OPC_MoveParent,
/*   766*/    OPC_RecordChild7, // #7 = $swz_w
/*   767*/    OPC_MoveChild7,
/*   768*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*   771*/    OPC_CheckType, MVT::i32,
/*   773*/    OPC_MoveParent,
/*   774*/    OPC_Scope, 35, /*->811*/ // 2 children in Scope
/*   776*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*   778*/      OPC_EmitMergeInputChains1_0,
/*   779*/      OPC_EmitConvertToTarget, 3,
/*   781*/      OPC_EmitConvertToTarget, 2,
/*   783*/      OPC_EmitConvertToTarget, 4,
/*   785*/      OPC_EmitConvertToTarget, 5,
/*   787*/      OPC_EmitConvertToTarget, 6,
/*   789*/      OPC_EmitConvertToTarget, 7,
/*   791*/      OPC_EmitInteger, MVT::i32, 39, 
/*   794*/      OPC_EmitInteger, MVT::i32, 0, 
/*   797*/      OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (R600_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 39:{ *:[i32] }, 0:{ *:[i32] })
/*   811*/    /*Scope*/ 35, /*->847*/
/*   812*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   814*/      OPC_EmitMergeInputChains1_0,
/*   815*/      OPC_EmitConvertToTarget, 3,
/*   817*/      OPC_EmitConvertToTarget, 2,
/*   819*/      OPC_EmitConvertToTarget, 4,
/*   821*/      OPC_EmitConvertToTarget, 5,
/*   823*/      OPC_EmitConvertToTarget, 6,
/*   825*/      OPC_EmitConvertToTarget, 7,
/*   827*/      OPC_EmitInteger, MVT::i32, 83, 
/*   830*/      OPC_EmitInteger, MVT::i32, 0, 
/*   833*/      OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportSwz), 0|OPFL_Chain,
                    9/*#Ops*/, 1, 8, 9, 10, 11, 12, 13, 14, 15, 
                // Src: (R600_EXPORT R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w) - Complexity = 21
                // Dst: (EG_ExportSwz R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$type, (imm:{ *:[i32] }):$base, (imm:{ *:[i32] }):$swz_x, (imm:{ *:[i32] }):$swz_y, (imm:{ *:[i32] }):$swz_z, (imm:{ *:[i32] }):$swz_w, 83:{ *:[i32] }, 0:{ *:[i32] })
/*   847*/    0, /*End of Scope*/
/*   848*/  /*SwitchOpcode*/ 84|128,8/*1108*/, TARGET_VAL(ISD::AND),// ->1960
/*   852*/    OPC_Scope, 37|128,2/*293*/, /*->1148*/ // 5 children in Scope
/*   855*/      OPC_RecordChild0, // #0 = $src
/*   856*/      OPC_MoveChild1,
/*   857*/      OPC_SwitchOpcode /*2 cases */, 8|128,1/*136*/, TARGET_VAL(ISD::ADD),// ->998
/*   862*/        OPC_MoveChild0,
/*   863*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*   866*/        OPC_CheckChild0Integer, 1, 
/*   868*/        OPC_RecordChild1, // #1 = $width
/*   869*/        OPC_CheckChild1Type, MVT::i32,
/*   871*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*   873*/        OPC_MoveParent,
/*   874*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   885*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*   887*/        OPC_MoveParent,
/*   888*/        OPC_CheckType, MVT::i32,
/*   890*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*   892*/        OPC_EmitInteger, MVT::i32, 0, 
/*   895*/        OPC_EmitInteger, MVT::i32, 0, 
/*   898*/        OPC_EmitInteger, MVT::i32, 0, 
/*   901*/        OPC_EmitInteger, MVT::i32, 0, 
/*   904*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   916*/        OPC_EmitInteger, MVT::i32, 0, 
/*   919*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*   926*/        OPC_EmitInteger, MVT::i32, 0, 
/*   929*/        OPC_EmitInteger, MVT::i32, 0, 
/*   932*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   944*/        OPC_EmitInteger, MVT::i32, 0, 
/*   947*/        OPC_EmitInteger, MVT::i32, 0, 
/*   950*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*   962*/        OPC_EmitInteger, MVT::i32, 1, 
/*   965*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*   968*/        OPC_EmitInteger, MVT::i32, 0, 
/*   971*/        OPC_EmitInteger, MVT::i32, 0, 
/*   974*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*   998*/      /*SwitchOpcode*/ 17|128,1/*145*/, TARGET_VAL(ISD::XOR),// ->1147
/*  1002*/        OPC_MoveChild0,
/*  1003*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1006*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1017*/        OPC_RecordChild1, // #1 = $width
/*  1018*/        OPC_CheckChild1Type, MVT::i32,
/*  1020*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1022*/        OPC_MoveParent,
/*  1023*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1034*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1036*/        OPC_MoveParent,
/*  1037*/        OPC_CheckType, MVT::i32,
/*  1039*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1041*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1044*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1047*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1050*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1053*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1065*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1068*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1075*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1078*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1081*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1093*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1096*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1099*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1111*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1114*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1117*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1120*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1123*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1147*/      0, // EndSwitchOpcode
/*  1148*/    /*Scope*/ 38|128,2/*294*/, /*->1444*/
/*  1150*/      OPC_MoveChild0,
/*  1151*/      OPC_SwitchOpcode /*2 cases */, 9|128,1/*137*/, TARGET_VAL(ISD::ADD),// ->1293
/*  1156*/        OPC_MoveChild0,
/*  1157*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1160*/        OPC_CheckChild0Integer, 1, 
/*  1162*/        OPC_RecordChild1, // #0 = $width
/*  1163*/        OPC_CheckChild1Type, MVT::i32,
/*  1165*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1167*/        OPC_MoveParent,
/*  1168*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1179*/        OPC_CheckPredicate, 0, // Predicate_add_oneuse
/*  1181*/        OPC_MoveParent,
/*  1182*/        OPC_RecordChild1, // #1 = $src
/*  1183*/        OPC_CheckType, MVT::i32,
/*  1185*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1187*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1190*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1193*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1196*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1199*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1211*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1214*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1221*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1224*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1227*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1239*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1242*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1245*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1257*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1260*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1263*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1266*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1269*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (add:{ *:[i32] } (shl:{ *:[i32] } 1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_add_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1293*/      /*SwitchOpcode*/ 18|128,1/*146*/, TARGET_VAL(ISD::XOR),// ->1443
/*  1297*/        OPC_MoveChild0,
/*  1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*  1301*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1312*/        OPC_RecordChild1, // #0 = $width
/*  1313*/        OPC_CheckChild1Type, MVT::i32,
/*  1315*/        OPC_CheckPredicate, 0, // Predicate_shl_oneuse
/*  1317*/        OPC_MoveParent,
/*  1318*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1329*/        OPC_CheckPredicate, 0, // Predicate_xor_oneuse
/*  1331*/        OPC_MoveParent,
/*  1332*/        OPC_RecordChild1, // #1 = $src
/*  1333*/        OPC_CheckType, MVT::i32,
/*  1335*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1337*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1340*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1343*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1346*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1349*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1361*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1364*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1371*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1374*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1377*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1389*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1392*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1395*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1407*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1410*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1413*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1416*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1419*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (xor:{ *:[i32] } (shl:{ *:[i32] } -1:{ *:[i32] }, i32:{ *:[i32] }:$width)<<P:Predicate_shl_oneuse>>, -1:{ *:[i32] })<<P:Predicate_xor_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 21
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1443*/      0, // EndSwitchOpcode
/*  1444*/    /*Scope*/ 11|128,1/*139*/, /*->1585*/
/*  1446*/      OPC_RecordChild0, // #0 = $src
/*  1447*/      OPC_MoveChild1,
/*  1448*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1451*/      OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1462*/      OPC_MoveChild1,
/*  1463*/      OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1466*/      OPC_CheckChild0Integer, 32, 
/*  1468*/      OPC_RecordChild1, // #1 = $width
/*  1469*/      OPC_CheckType, MVT::i32,
/*  1471*/      OPC_MoveParent,
/*  1472*/      OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1474*/      OPC_MoveParent,
/*  1475*/      OPC_CheckType, MVT::i32,
/*  1477*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1479*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1482*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1485*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1488*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1491*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1503*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1506*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1513*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1516*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1519*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1531*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1534*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1537*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1549*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1552*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1555*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1558*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1561*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (and:{ *:[i32] } i32:{ *:[i32] }:$src, (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>) - Complexity = 20
                // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1585*/    /*Scope*/ 11|128,2/*267*/, /*->1854*/
/*  1587*/      OPC_MoveChild0,
/*  1588*/      OPC_CheckOpcode, TARGET_VAL(ISD::SRL),
/*  1591*/      OPC_Scope, 7|128,1/*135*/, /*->1729*/ // 2 children in Scope
/*  1594*/        OPC_CheckChild0Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1605*/        OPC_MoveChild1,
/*  1606*/        OPC_CheckOpcode, TARGET_VAL(ISD::SUB),
/*  1609*/        OPC_CheckChild0Integer, 32, 
/*  1611*/        OPC_RecordChild1, // #0 = $width
/*  1612*/        OPC_CheckType, MVT::i32,
/*  1614*/        OPC_MoveParent,
/*  1615*/        OPC_CheckPredicate, 0, // Predicate_srl_oneuse
/*  1617*/        OPC_MoveParent,
/*  1618*/        OPC_RecordChild1, // #1 = $src
/*  1619*/        OPC_CheckType, MVT::i32,
/*  1621*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1623*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1626*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1629*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1632*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1635*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1647*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1650*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 7,  // Results = #8
/*  1657*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1660*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1663*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1675*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1678*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1681*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1693*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1696*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1699*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1702*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1705*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 2, 3, 1, 4, 5, 6, 8, 9, 10, 11, 0, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } -1:{ *:[i32] }, (sub:{ *:[i32] } 32:{ *:[i32] }, i32:{ *:[i32] }:$width))<<P:Predicate_srl_oneuse>>, i32:{ *:[i32] }:$src) - Complexity = 20
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, (MOV_IMM_I32:{ *:[i32] } 0:{ *:[i32] }), ?:{ *:[i32] }:$width)
/*  1729*/      /*Scope*/ 123, /*->1853*/
/*  1730*/        OPC_RecordChild0, // #0 = $src
/*  1731*/        OPC_RecordChild1, // #1 = $rshift
/*  1732*/        OPC_CheckChild1Type, MVT::i32,
/*  1734*/        OPC_MoveParent,
/*  1735*/        OPC_RecordChild1, // #2 = $mask
/*  1736*/        OPC_MoveChild1,
/*  1737*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1740*/        OPC_CheckPredicate, 1, // Predicate_IMMZeroBasedBitfieldMask
/*  1742*/        OPC_MoveParent,
/*  1743*/        OPC_CheckType, MVT::i32,
/*  1745*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1747*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1750*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1753*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1756*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1759*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1771*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1774*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1777*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1789*/        OPC_EmitNodeXForm, 0, 2, // IMMPopCount
/*  1792*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 11,  // Results = #12
/*  1799*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1802*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1805*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1817*/        OPC_EmitInteger, MVT::i32, 1, 
/*  1820*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1823*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1826*/        OPC_EmitInteger, MVT::i32, 0, 
/*  1829*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (and:{ *:[i32] } (srl:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$rshift), (imm:{ *:[i32] })<<P:Predicate_IMMZeroBasedBitfieldMask>>:$mask) - Complexity = 10
                  // Dst: (BFE_UINT_eg:{ *:[i32] } ?:{ *:[i32] }:$src, ?:{ *:[i32] }:$rshift, (MOV_IMM_I32:{ *:[i32] } (IMMPopCount:{ *:[i32] } ?:{ *:[i32] }:$mask)))
/*  1853*/      0, /*End of Scope*/
/*  1854*/    /*Scope*/ 104, /*->1959*/
/*  1855*/      OPC_RecordChild0, // #0 = $src0
/*  1856*/      OPC_RecordChild1, // #1 = $src1
/*  1857*/      OPC_CheckType, MVT::i32,
/*  1859*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  1861*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1864*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1867*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1870*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1873*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1876*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1879*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1882*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1885*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1888*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1900*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1903*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1906*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1909*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  1921*/      OPC_EmitInteger, MVT::i32, 1, 
/*  1924*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  1927*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1930*/      OPC_EmitInteger, MVT::i32, 0, 
/*  1933*/      OPC_MorphNodeTo1, TARGET_VAL(R600::AND_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (and:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (AND_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/*  1959*/    0, /*End of Scope*/
/*  1960*/  /*SwitchOpcode*/ 118|128,3/*502*/, TARGET_VAL(ISD::INTRINSIC_VOID),// ->2466
/*  1964*/    OPC_RecordNode, // #0 = 'intrinsic_void' chained node
/*  1965*/    OPC_Scope, 64|128,2/*320*/, /*->2288*/ // 4 children in Scope
/*  1968*/      OPC_CheckChild1Integer, 11|128,43/*5515*/, 
/*  1971*/      OPC_RecordChild2, // #1 = $src
/*  1972*/      OPC_RecordChild3, // #2 = $arraybase
/*  1973*/      OPC_MoveChild3,
/*  1974*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1977*/      OPC_MoveParent,
/*  1978*/      OPC_Scope, 76, /*->2056*/ // 4 children in Scope
/*  1980*/        OPC_CheckChild4Integer, 0, 
/*  1982*/        OPC_RecordChild5, // #3 = $mask
/*  1983*/        OPC_MoveChild5,
/*  1984*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  1987*/        OPC_MoveParent,
/*  1988*/        OPC_Scope, 32, /*->2022*/ // 2 children in Scope
/*  1990*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  1992*/          OPC_EmitMergeInputChains1_0,
/*  1993*/          OPC_EmitInteger, MVT::i32, 0, 
/*  1996*/          OPC_EmitConvertToTarget, 2,
/*  1998*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2002*/          OPC_EmitConvertToTarget, 3,
/*  2004*/          OPC_EmitInteger, MVT::i32, 32, 
/*  2007*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2010*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 32:{ *:[i32] }, 0:{ *:[i32] })
/*  2022*/        /*Scope*/ 32, /*->2055*/
/*  2023*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2025*/          OPC_EmitMergeInputChains1_0,
/*  2026*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2029*/          OPC_EmitConvertToTarget, 2,
/*  2031*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2035*/          OPC_EmitConvertToTarget, 3,
/*  2037*/          OPC_EmitInteger, MVT::i32, 64, 
/*  2040*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2043*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 0:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf R600_Reg128:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 64:{ *:[i32] }, 0:{ *:[i32] })
/*  2055*/        0, /*End of Scope*/
/*  2056*/      /*Scope*/ 76, /*->2133*/
/*  2057*/        OPC_CheckChild4Integer, 1, 
/*  2059*/        OPC_RecordChild5, // #3 = $mask
/*  2060*/        OPC_MoveChild5,
/*  2061*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2064*/        OPC_MoveParent,
/*  2065*/        OPC_Scope, 32, /*->2099*/ // 2 children in Scope
/*  2067*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2069*/          OPC_EmitMergeInputChains1_0,
/*  2070*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2073*/          OPC_EmitConvertToTarget, 2,
/*  2075*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2079*/          OPC_EmitConvertToTarget, 3,
/*  2081*/          OPC_EmitInteger, MVT::i32, 33, 
/*  2084*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2087*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 33:{ *:[i32] }, 0:{ *:[i32] })
/*  2099*/        /*Scope*/ 32, /*->2132*/
/*  2100*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2102*/          OPC_EmitMergeInputChains1_0,
/*  2103*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2106*/          OPC_EmitConvertToTarget, 2,
/*  2108*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2112*/          OPC_EmitConvertToTarget, 3,
/*  2114*/          OPC_EmitInteger, MVT::i32, 65, 
/*  2117*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2120*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 1:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 65:{ *:[i32] }, 0:{ *:[i32] })
/*  2132*/        0, /*End of Scope*/
/*  2133*/      /*Scope*/ 76, /*->2210*/
/*  2134*/        OPC_CheckChild4Integer, 2, 
/*  2136*/        OPC_RecordChild5, // #3 = $mask
/*  2137*/        OPC_MoveChild5,
/*  2138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2141*/        OPC_MoveParent,
/*  2142*/        OPC_Scope, 32, /*->2176*/ // 2 children in Scope
/*  2144*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2146*/          OPC_EmitMergeInputChains1_0,
/*  2147*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2150*/          OPC_EmitConvertToTarget, 2,
/*  2152*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2156*/          OPC_EmitConvertToTarget, 3,
/*  2158*/          OPC_EmitInteger, MVT::i32, 34, 
/*  2161*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2164*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 34:{ *:[i32] }, 0:{ *:[i32] })
/*  2176*/        /*Scope*/ 32, /*->2209*/
/*  2177*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2179*/          OPC_EmitMergeInputChains1_0,
/*  2180*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2183*/          OPC_EmitConvertToTarget, 2,
/*  2185*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2189*/          OPC_EmitConvertToTarget, 3,
/*  2191*/          OPC_EmitInteger, MVT::i32, 66, 
/*  2194*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2197*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 2:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 66:{ *:[i32] }, 0:{ *:[i32] })
/*  2209*/        0, /*End of Scope*/
/*  2210*/      /*Scope*/ 76, /*->2287*/
/*  2211*/        OPC_CheckChild4Integer, 3, 
/*  2213*/        OPC_RecordChild5, // #3 = $mask
/*  2214*/        OPC_MoveChild5,
/*  2215*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2218*/        OPC_MoveParent,
/*  2219*/        OPC_Scope, 32, /*->2253*/ // 2 children in Scope
/*  2221*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/*  2223*/          OPC_EmitMergeInputChains1_0,
/*  2224*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2227*/          OPC_EmitConvertToTarget, 2,
/*  2229*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2233*/          OPC_EmitConvertToTarget, 3,
/*  2235*/          OPC_EmitInteger, MVT::i32, 35, 
/*  2238*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2241*/          OPC_MorphNodeTo0, TARGET_VAL(R600::R600_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (R600_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 35:{ *:[i32] }, 0:{ *:[i32] })
/*  2253*/        /*Scope*/ 32, /*->2286*/
/*  2254*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2256*/          OPC_EmitMergeInputChains1_0,
/*  2257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2260*/          OPC_EmitConvertToTarget, 2,
/*  2262*/          OPC_EmitInteger, MVT::i32, 127|128,31/*4095*/, 
/*  2266*/          OPC_EmitConvertToTarget, 3,
/*  2268*/          OPC_EmitInteger, MVT::i32, 67, 
/*  2271*/          OPC_EmitInteger, MVT::i32, 0, 
/*  2274*/          OPC_MorphNodeTo0, TARGET_VAL(R600::EG_ExportBuf), 0|OPFL_Chain,
                        7/*#Ops*/, 1, 4, 5, 6, 7, 8, 9, 
                    // Src: (intrinsic_void 5515:{ *:[iPTR] }, R600_Reg128:{ *:[v4f32] }:$src, (imm:{ *:[i32] }):$arraybase, 3:{ *:[i32] }, (imm:{ *:[i32] }):$mask) - Complexity = 19
                    // Dst: (EG_ExportBuf ?:{ *:[v4f32] }:$src, 0:{ *:[i32] }, (imm:{ *:[i32] }):$arraybase, 4095:{ *:[i32] }, (imm:{ *:[i32] }):$mask, 67:{ *:[i32] }, 0:{ *:[i32] })
/*  2286*/        0, /*End of Scope*/
/*  2287*/      0, /*End of Scope*/
/*  2288*/    /*Scope*/ 49, /*->2338*/
/*  2289*/      OPC_CheckChild1Integer, 121|128,42/*5497*/, 
/*  2292*/      OPC_RecordChild2, // #1 = $rw_gpr
/*  2293*/      OPC_RecordChild3, // #2 = $index_gpr
/*  2294*/      OPC_RecordChild4, // #3 = $rat_id
/*  2295*/      OPC_MoveChild4,
/*  2296*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*  2299*/      OPC_MoveParent,
/*  2300*/      OPC_Scope, 17, /*->2319*/ // 2 children in Scope
/*  2302*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/*  2304*/        OPC_EmitMergeInputChains1_0,
/*  2305*/        OPC_EmitConvertToTarget, 3,
/*  2307*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2310*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_cm), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 5497:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_cm R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2319*/      /*Scope*/ 17, /*->2337*/
/*  2320*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2322*/        OPC_EmitMergeInputChains1_0,
/*  2323*/        OPC_EmitConvertToTarget, 3,
/*  2325*/        OPC_EmitInteger, MVT::i32, 0, 
/*  2328*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_TYPED_eg), 0|OPFL_Chain,
                      4/*#Ops*/, 1, 2, 4, 5, 
                  // Src: (intrinsic_void 5497:{ *:[iPTR] }, R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id) - Complexity = 11
                  // Dst: (RAT_STORE_TYPED_eg R600_Reg128:{ *:[v4i32] }:$rw_gpr, R600_Reg128:{ *:[v4i32] }:$index_gpr, (imm:{ *:[i32] }):$rat_id)
/*  2337*/      0, /*End of Scope*/
/*  2338*/    /*Scope*/ 11, /*->2350*/
/*  2339*/      OPC_CheckChild1Integer, 118|128,42/*5494*/, 
/*  2342*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2344*/      OPC_EmitMergeInputChains1_0,
/*  2345*/      OPC_MorphNodeTo0, TARGET_VAL(R600::GROUP_BARRIER), 0|OPFL_Chain,
                    0/*#Ops*/, 
                // Src: (intrinsic_void 5494:{ *:[iPTR] }) - Complexity = 8
                // Dst: (GROUP_BARRIER)
/*  2350*/    /*Scope*/ 114, /*->2465*/
/*  2351*/      OPC_CheckChild1Integer, 120|128,42/*5496*/, 
/*  2354*/      OPC_RecordChild2, // #1 = $src0
/*  2355*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2357*/      OPC_EmitMergeInputChains1_0,
/*  2358*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2361*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2364*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2367*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2370*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2373*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2376*/      OPC_EmitRegister, MVT::f32, R600::ZERO,
/*  2379*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2382*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2385*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2388*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2400*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2403*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2406*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2409*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2421*/      OPC_EmitInteger, MVT::i32, 1, 
/*  2424*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2427*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2430*/      OPC_EmitInteger, MVT::i32, 0, 
/*  2433*/      OPC_EmitNode1, TARGET_VAL(R600::KILLGT), 0|OPFL_Chain,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 1, 13, 14, 15, 16, 17, 18, 19, 20,  // Results = #21
/*  2459*/      OPC_MorphNodeTo0, TARGET_VAL(R600::MASK_WRITE), 0|OPFL_Chain,
                    1/*#Ops*/, 21, 
                // Src: (intrinsic_void 5496:{ *:[iPTR] }, f32:{ *:[f32] }:$src0) - Complexity = 8
                // Dst: (MASK_WRITE (KILLGT:{ *:[i32] } ZERO:{ *:[f32] }, ?:{ *:[f32] }:$src0))
/*  2465*/    0, /*End of Scope*/
/*  2466*/  /*SwitchOpcode*/ 15|128,116/*14863*/, TARGET_VAL(ISD::OR),// ->17333
/*  2470*/    OPC_Scope, 34|128,115/*14754*/, /*->17227*/ // 2 children in Scope
/*  2473*/      OPC_MoveChild0,
/*  2474*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2477*/      OPC_Scope, 93|128,5/*733*/, /*->3213*/ // 8 children in Scope
/*  2480*/        OPC_RecordChild0, // #0 = $y
/*  2481*/        OPC_Scope, 108|128,3/*492*/, /*->2976*/ // 2 children in Scope
/*  2484*/          OPC_RecordChild1, // #1 = $x
/*  2485*/          OPC_MoveParent,
/*  2486*/          OPC_MoveChild1,
/*  2487*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  2490*/          OPC_Scope, 120, /*->2612*/ // 4 children in Scope
/*  2492*/            OPC_RecordChild0, // #2 = $z
/*  2493*/            OPC_MoveChild1,
/*  2494*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2497*/            OPC_CheckChild0Same, 1,
/*  2499*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2510*/            OPC_MoveParent,
/*  2511*/            OPC_MoveParent,
/*  2512*/            OPC_CheckType, MVT::i32,
/*  2514*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2519*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2522*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2525*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2528*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2540*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2543*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2546*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2558*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2561*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2564*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2576*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2579*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2588*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2612*/          /*Scope*/ 120, /*->2733*/
/*  2613*/            OPC_MoveChild0,
/*  2614*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2617*/            OPC_CheckChild0Same, 1,
/*  2619*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2630*/            OPC_MoveParent,
/*  2631*/            OPC_RecordChild1, // #2 = $z
/*  2632*/            OPC_MoveParent,
/*  2633*/            OPC_CheckType, MVT::i32,
/*  2635*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2637*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2640*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2643*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2646*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2649*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2661*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2664*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2667*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2682*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2685*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2697*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2700*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2703*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2706*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2709*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 0, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2733*/          /*Scope*/ 120, /*->2854*/
/*  2734*/            OPC_RecordChild0, // #2 = $z
/*  2735*/            OPC_MoveChild1,
/*  2736*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2739*/            OPC_CheckChild0Same, 0,
/*  2741*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2752*/            OPC_MoveParent,
/*  2753*/            OPC_MoveParent,
/*  2754*/            OPC_CheckType, MVT::i32,
/*  2756*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2758*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2761*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2782*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2785*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2788*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2800*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2803*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2806*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2818*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2821*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2824*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2827*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2830*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }))) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2854*/          /*Scope*/ 120, /*->2975*/
/*  2855*/            OPC_MoveChild0,
/*  2856*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2859*/            OPC_CheckChild0Same, 0,
/*  2861*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2872*/            OPC_MoveParent,
/*  2873*/            OPC_RecordChild1, // #2 = $z
/*  2874*/            OPC_MoveParent,
/*  2875*/            OPC_CheckType, MVT::i32,
/*  2877*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  2879*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2882*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2885*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2888*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2891*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2903*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2906*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2909*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2921*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2924*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2939*/            OPC_EmitInteger, MVT::i32, 1, 
/*  2942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  2945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  2951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  2975*/          0, /*End of Scope*/
/*  2976*/        /*Scope*/ 106|128,1/*234*/, /*->3212*/
/*  2978*/          OPC_MoveChild1,
/*  2979*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  2982*/          OPC_RecordChild0, // #1 = $x
/*  2983*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  2994*/          OPC_MoveParent,
/*  2995*/          OPC_MoveParent,
/*  2996*/          OPC_MoveChild1,
/*  2997*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3000*/          OPC_Scope, 104, /*->3106*/ // 2 children in Scope
/*  3002*/            OPC_RecordChild0, // #2 = $y
/*  3003*/            OPC_CheckChild1Same, 1,
/*  3005*/            OPC_MoveParent,
/*  3006*/            OPC_CheckType, MVT::i32,
/*  3008*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3010*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3013*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3016*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3019*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3022*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3034*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3037*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3040*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3070*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3073*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3076*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3079*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3082*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3106*/          /*Scope*/ 104, /*->3211*/
/*  3107*/            OPC_CheckChild0Same, 1,
/*  3109*/            OPC_RecordChild1, // #2 = $y
/*  3110*/            OPC_MoveParent,
/*  3111*/            OPC_CheckType, MVT::i32,
/*  3113*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3115*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3118*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3121*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3124*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3127*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3139*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3145*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3163*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3175*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3178*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3181*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3187*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] })), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                      // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3211*/          0, /*End of Scope*/
/*  3212*/        0, /*End of Scope*/
/*  3213*/      /*Scope*/ 107|128,1/*235*/, /*->3450*/
/*  3215*/        OPC_MoveChild0,
/*  3216*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3219*/        OPC_RecordChild0, // #0 = $x
/*  3220*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3231*/        OPC_MoveParent,
/*  3232*/        OPC_RecordChild1, // #1 = $z
/*  3233*/        OPC_MoveParent,
/*  3234*/        OPC_MoveChild1,
/*  3235*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3238*/        OPC_Scope, 104, /*->3344*/ // 2 children in Scope
/*  3240*/          OPC_RecordChild0, // #2 = $y
/*  3241*/          OPC_CheckChild1Same, 0,
/*  3243*/          OPC_MoveParent,
/*  3244*/          OPC_CheckType, MVT::i32,
/*  3246*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3248*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3251*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3254*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3257*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3260*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3272*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3275*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3278*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3290*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3293*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3296*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3308*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3311*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3314*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3317*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3320*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$x)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3344*/        /*Scope*/ 104, /*->3449*/
/*  3345*/          OPC_CheckChild0Same, 0,
/*  3347*/          OPC_RecordChild1, // #2 = $y
/*  3348*/          OPC_MoveParent,
/*  3349*/          OPC_CheckType, MVT::i32,
/*  3351*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3353*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3356*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3359*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3362*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3365*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3377*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3383*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3398*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3401*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3413*/          OPC_EmitInteger, MVT::i32, 1, 
/*  3416*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3419*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3422*/          OPC_EmitInteger, MVT::i32, 0, 
/*  3425*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$x, -1:{ *:[i32] }), i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y)) - Complexity = 17
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/*  3449*/        0, /*End of Scope*/
/*  3450*/      /*Scope*/ 39|128,14/*1831*/, /*->5283*/
/*  3452*/        OPC_RecordChild0, // #0 = $y
/*  3453*/        OPC_Scope, 72|128,9/*1224*/, /*->4680*/ // 2 children in Scope
/*  3456*/          OPC_RecordChild1, // #1 = $x
/*  3457*/          OPC_MoveParent,
/*  3458*/          OPC_MoveChild1,
/*  3459*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  3462*/          OPC_Scope, 46|128,2/*302*/, /*->3767*/ // 4 children in Scope
/*  3465*/            OPC_RecordChild0, // #2 = $z
/*  3466*/            OPC_MoveChild1,
/*  3467*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3470*/            OPC_CheckChild0Same, 1,
/*  3472*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3483*/            OPC_MoveParent,
/*  3484*/            OPC_MoveParent,
/*  3485*/            OPC_CheckType, MVT::i64,
/*  3487*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3489*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3492*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3495*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3498*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3501*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3509*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3512*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3515*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3527*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3530*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3538*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3541*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3544*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3556*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3559*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3567*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3570*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3573*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3585*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3588*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3591*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3594*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3597*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3621*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3624*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3630*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3633*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3641*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3644*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3647*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3659*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3662*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3670*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3673*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3676*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3688*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3691*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  3699*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3702*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3705*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3717*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3720*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3723*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3726*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3729*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  3753*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3756*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  3767*/          /*Scope*/ 46|128,2/*302*/, /*->4071*/
/*  3769*/            OPC_MoveChild0,
/*  3770*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  3773*/            OPC_CheckChild0Same, 1,
/*  3775*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3786*/            OPC_MoveParent,
/*  3787*/            OPC_RecordChild1, // #2 = $z
/*  3788*/            OPC_MoveParent,
/*  3789*/            OPC_CheckType, MVT::i64,
/*  3791*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  3793*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  3796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3799*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3802*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3805*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  3813*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3816*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3819*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3831*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3834*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/*  3842*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3845*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3848*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3860*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3863*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  3871*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3874*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3889*/            OPC_EmitInteger, MVT::i32, 1, 
/*  3892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  3895*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3898*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3901*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  3925*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  3928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3931*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3934*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3937*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  3945*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3948*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3951*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3963*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3966*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/*  3974*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3977*/            OPC_EmitInteger, MVT::i32, 0, 
/*  3980*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  3992*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  3995*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4003*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4009*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4021*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4024*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4027*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4030*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4033*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4057*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4060*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4071*/          /*Scope*/ 46|128,2/*302*/, /*->4375*/
/*  4073*/            OPC_RecordChild0, // #2 = $z
/*  4074*/            OPC_MoveChild1,
/*  4075*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4078*/            OPC_CheckChild0Same, 0,
/*  4080*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4091*/            OPC_MoveParent,
/*  4092*/            OPC_MoveParent,
/*  4093*/            OPC_CheckType, MVT::i64,
/*  4095*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4097*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4100*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4103*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4106*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4117*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4120*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4149*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4164*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4167*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4175*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4178*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4181*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4193*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4196*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4199*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4202*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4205*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4229*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4232*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4235*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4238*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4241*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4252*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4255*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4270*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4278*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4281*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4284*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4296*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4299*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4307*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4310*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4313*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4325*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4328*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4331*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4334*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4337*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4361*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4364*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }))) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4375*/          /*Scope*/ 46|128,2/*302*/, /*->4679*/
/*  4377*/            OPC_MoveChild0,
/*  4378*/            OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4381*/            OPC_CheckChild0Same, 0,
/*  4383*/            OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4394*/            OPC_MoveParent,
/*  4395*/            OPC_RecordChild1, // #2 = $z
/*  4396*/            OPC_MoveParent,
/*  4397*/            OPC_CheckType, MVT::i64,
/*  4399*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4401*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4404*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4407*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4410*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4413*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  4421*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4424*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4427*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4439*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4442*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/*  4450*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4453*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4456*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4468*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4471*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/*  4479*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4482*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4485*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4497*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4500*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4503*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4506*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4509*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4533*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4536*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4539*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4542*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4545*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  4553*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4556*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4559*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4571*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4574*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/*  4582*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4585*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4588*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4600*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4603*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/*  4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4614*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4617*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4629*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4632*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4635*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4638*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4641*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4665*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4668*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y), (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4679*/          0, /*End of Scope*/
/*  4680*/        /*Scope*/ 88|128,4/*600*/, /*->5282*/
/*  4682*/          OPC_MoveChild1,
/*  4683*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  4686*/          OPC_RecordChild0, // #1 = $x
/*  4687*/          OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4698*/          OPC_MoveParent,
/*  4699*/          OPC_MoveParent,
/*  4700*/          OPC_MoveChild1,
/*  4701*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  4704*/          OPC_Scope, 30|128,2/*286*/, /*->4993*/ // 2 children in Scope
/*  4707*/            OPC_RecordChild0, // #2 = $y
/*  4708*/            OPC_CheckChild1Same, 1,
/*  4710*/            OPC_MoveParent,
/*  4711*/            OPC_CheckType, MVT::i64,
/*  4713*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  4715*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  4718*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4721*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4724*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4727*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  4735*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4738*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4741*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4753*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4756*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  4764*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4767*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4770*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4782*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4785*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  4793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4811*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4823*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  4847*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  4850*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4856*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4859*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  4867*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4870*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4873*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4885*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4888*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  4896*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4899*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4902*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4914*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4917*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  4925*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4928*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4931*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  4943*/            OPC_EmitInteger, MVT::i32, 1, 
/*  4946*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  4949*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4952*/            OPC_EmitInteger, MVT::i32, 0, 
/*  4955*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  4979*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  4982*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  4993*/          /*Scope*/ 30|128,2/*286*/, /*->5281*/
/*  4995*/            OPC_CheckChild0Same, 1,
/*  4997*/            OPC_RecordChild1, // #2 = $y
/*  4998*/            OPC_MoveParent,
/*  4999*/            OPC_CheckType, MVT::i64,
/*  5001*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5003*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5006*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5009*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5012*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5015*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/*  5023*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5026*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5029*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5041*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5044*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5052*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5055*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5058*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5070*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5073*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/*  5081*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5084*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5087*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5099*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5102*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5105*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5108*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5111*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5135*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5138*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5141*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5144*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5147*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/*  5155*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5158*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5161*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5173*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5176*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5184*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5190*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5202*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5205*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/*  5213*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5216*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5219*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5231*/            OPC_EmitInteger, MVT::i32, 1, 
/*  5234*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5237*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5240*/            OPC_EmitInteger, MVT::i32, 0, 
/*  5243*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5267*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5270*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] })), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5281*/          0, /*End of Scope*/
/*  5282*/        0, /*End of Scope*/
/*  5283*/      /*Scope*/ 89|128,4/*601*/, /*->5886*/
/*  5285*/        OPC_MoveChild0,
/*  5286*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*  5289*/        OPC_RecordChild0, // #0 = $x
/*  5290*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5301*/        OPC_MoveParent,
/*  5302*/        OPC_RecordChild1, // #1 = $z
/*  5303*/        OPC_MoveParent,
/*  5304*/        OPC_MoveChild1,
/*  5305*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5308*/        OPC_Scope, 30|128,2/*286*/, /*->5597*/ // 2 children in Scope
/*  5311*/          OPC_RecordChild0, // #2 = $y
/*  5312*/          OPC_CheckChild1Same, 0,
/*  5314*/          OPC_MoveParent,
/*  5315*/          OPC_CheckType, MVT::i64,
/*  5317*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5319*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5322*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5325*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5328*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5331*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5339*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5342*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5345*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5357*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5360*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5374*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5386*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5389*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5397*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5400*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5403*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5415*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5418*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5421*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5424*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5427*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5451*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5454*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5457*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5460*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5463*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5471*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5474*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5477*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5489*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5492*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5500*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5503*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5506*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5518*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5521*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5535*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5547*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5550*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5553*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5556*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5559*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5583*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5586*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$x)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5597*/        /*Scope*/ 30|128,2/*286*/, /*->5885*/
/*  5599*/          OPC_CheckChild0Same, 0,
/*  5601*/          OPC_RecordChild1, // #2 = $y
/*  5602*/          OPC_MoveParent,
/*  5603*/          OPC_CheckType, MVT::i64,
/*  5605*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5607*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  5610*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5613*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5616*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5619*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/*  5627*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5630*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5633*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5645*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5648*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/*  5656*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5659*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5662*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5674*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5677*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/*  5685*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5688*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5691*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5703*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5706*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5709*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5712*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5715*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/*  5739*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/*  5742*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5745*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5748*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5751*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/*  5759*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5762*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5765*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5777*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5780*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/*  5788*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5791*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5794*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5806*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5809*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/*  5817*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5820*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5823*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5835*/          OPC_EmitInteger, MVT::i32, 1, 
/*  5838*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5841*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5844*/          OPC_EmitInteger, MVT::i32, 0, 
/*  5847*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/*  5871*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/*  5874*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$x, -1:{ *:[i64] }), i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$y)) - Complexity = 17
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  5885*/        0, /*End of Scope*/
/*  5886*/      /*Scope*/ 18|128,19/*2450*/, /*->8338*/
/*  5888*/        OPC_RecordChild0, // #0 = $x
/*  5889*/        OPC_Scope, 30|128,13/*1694*/, /*->7586*/ // 2 children in Scope
/*  5892*/          OPC_RecordChild1, // #1 = $z
/*  5893*/          OPC_MoveParent,
/*  5894*/          OPC_MoveChild1,
/*  5895*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  5898*/          OPC_Scope, 35|128,3/*419*/, /*->6320*/ // 4 children in Scope
/*  5901*/            OPC_RecordChild0, // #2 = $y
/*  5902*/            OPC_MoveChild1,
/*  5903*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  5906*/            OPC_Scope, 76|128,1/*204*/, /*->6113*/ // 2 children in Scope
/*  5909*/              OPC_CheckChild0Same, 0,
/*  5911*/              OPC_CheckChild1Same, 1,
/*  5913*/              OPC_MoveParent,
/*  5914*/              OPC_MoveParent,
/*  5915*/              OPC_CheckType, MVT::i32,
/*  5917*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  5919*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5922*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5925*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5928*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5931*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5934*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5937*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5940*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5943*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5946*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5949*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5952*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5964*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5967*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5970*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5973*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  5985*/              OPC_EmitInteger, MVT::i32, 1, 
/*  5988*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  5991*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5994*/              OPC_EmitInteger, MVT::i32, 0, 
/*  5997*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6023*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6026*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6029*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6041*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6044*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6047*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6059*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6062*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6077*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6083*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6086*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6089*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6113*/            /*Scope*/ 76|128,1/*204*/, /*->6319*/
/*  6115*/              OPC_CheckChild0Same, 1,
/*  6117*/              OPC_CheckChild1Same, 0,
/*  6119*/              OPC_MoveParent,
/*  6120*/              OPC_MoveParent,
/*  6121*/              OPC_CheckType, MVT::i32,
/*  6123*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6125*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6128*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6131*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6134*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6137*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6140*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6143*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6146*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6149*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6152*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6155*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6158*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6170*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6173*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6176*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6179*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6191*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6194*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6197*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6200*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6203*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6229*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6232*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6235*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6247*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6250*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6265*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6268*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6271*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6283*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6286*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6289*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6292*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6295*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6319*/            0, /*End of Scope*/
/*  6320*/          /*Scope*/ 36|128,3/*420*/, /*->6742*/
/*  6322*/            OPC_MoveChild0,
/*  6323*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6326*/            OPC_Scope, 77|128,1/*205*/, /*->6534*/ // 2 children in Scope
/*  6329*/              OPC_CheckChild0Same, 0,
/*  6331*/              OPC_CheckChild1Same, 1,
/*  6333*/              OPC_MoveParent,
/*  6334*/              OPC_RecordChild1, // #2 = $y
/*  6335*/              OPC_MoveParent,
/*  6336*/              OPC_CheckType, MVT::i32,
/*  6338*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6340*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6343*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6346*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6349*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6352*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6355*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6358*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6361*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6364*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6373*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6391*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6394*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6406*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6409*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6412*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6415*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6418*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6444*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6447*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6450*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6480*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6483*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6486*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6498*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6501*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6504*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6507*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6510*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6534*/            /*Scope*/ 77|128,1/*205*/, /*->6741*/
/*  6536*/              OPC_CheckChild0Same, 1,
/*  6538*/              OPC_CheckChild1Same, 0,
/*  6540*/              OPC_MoveParent,
/*  6541*/              OPC_RecordChild1, // #2 = $y
/*  6542*/              OPC_MoveParent,
/*  6543*/              OPC_CheckType, MVT::i32,
/*  6545*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6547*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6550*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6553*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6556*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6559*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6562*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6565*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6568*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6571*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6574*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6577*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6580*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6592*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6595*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6598*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6601*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6613*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6616*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6619*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6622*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6625*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6651*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6654*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6657*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6675*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6687*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6690*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6693*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6705*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6708*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6711*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6714*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6717*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6741*/            0, /*End of Scope*/
/*  6742*/          /*Scope*/ 35|128,3/*419*/, /*->7163*/
/*  6744*/            OPC_RecordChild0, // #2 = $y
/*  6745*/            OPC_MoveChild1,
/*  6746*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  6749*/            OPC_Scope, 76|128,1/*204*/, /*->6956*/ // 2 children in Scope
/*  6752*/              OPC_CheckChild0Same, 1,
/*  6754*/              OPC_CheckChild1Same, 0,
/*  6756*/              OPC_MoveParent,
/*  6757*/              OPC_MoveParent,
/*  6758*/              OPC_CheckType, MVT::i32,
/*  6760*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6762*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6765*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6768*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6771*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6774*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6777*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6780*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6783*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6786*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6807*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6810*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6813*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6816*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6828*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6831*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6834*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6837*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6840*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  6866*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6869*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6887*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6890*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6902*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6905*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6908*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  6920*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6923*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  6926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6929*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6932*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  6956*/            /*Scope*/ 76|128,1/*204*/, /*->7162*/
/*  6958*/              OPC_CheckChild0Same, 0,
/*  6960*/              OPC_CheckChild1Same, 1,
/*  6962*/              OPC_MoveParent,
/*  6963*/              OPC_MoveParent,
/*  6964*/              OPC_CheckType, MVT::i32,
/*  6966*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  6968*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6971*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6974*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6977*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6980*/              OPC_EmitInteger, MVT::i32, 1, 
/*  6983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6989*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6992*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6995*/              OPC_EmitInteger, MVT::i32, 0, 
/*  6998*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7001*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7013*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7016*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7019*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7022*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7034*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7037*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7046*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7072*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7075*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7078*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7090*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7093*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7096*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7108*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7111*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7114*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7126*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7129*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7138*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7162*/            0, /*End of Scope*/
/*  7163*/          /*Scope*/ 36|128,3/*420*/, /*->7585*/
/*  7165*/            OPC_MoveChild0,
/*  7166*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7169*/            OPC_Scope, 77|128,1/*205*/, /*->7377*/ // 2 children in Scope
/*  7172*/              OPC_CheckChild0Same, 1,
/*  7174*/              OPC_CheckChild1Same, 0,
/*  7176*/              OPC_MoveParent,
/*  7177*/              OPC_RecordChild1, // #2 = $y
/*  7178*/              OPC_MoveParent,
/*  7179*/              OPC_CheckType, MVT::i32,
/*  7181*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7183*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7186*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7189*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7192*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7195*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7198*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7201*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7204*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7207*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7210*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7213*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7216*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7228*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7231*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7234*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7237*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7249*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7252*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7258*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7261*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7287*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7290*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7293*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7305*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7308*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7311*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7323*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7326*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7329*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7341*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7344*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7347*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7350*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7353*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7377*/            /*Scope*/ 77|128,1/*205*/, /*->7584*/
/*  7379*/              OPC_CheckChild0Same, 0,
/*  7381*/              OPC_CheckChild1Same, 1,
/*  7383*/              OPC_MoveParent,
/*  7384*/              OPC_RecordChild1, // #2 = $y
/*  7385*/              OPC_MoveParent,
/*  7386*/              OPC_CheckType, MVT::i32,
/*  7388*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7390*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7393*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7396*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7399*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7402*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7411*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7414*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7417*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7420*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7423*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7435*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7438*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7441*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7444*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7456*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7459*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7462*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7465*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7468*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7494*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7497*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7500*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7512*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7515*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7518*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7530*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7533*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7536*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7548*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7551*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7557*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7560*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7584*/            0, /*End of Scope*/
/*  7585*/          0, /*End of Scope*/
/*  7586*/        /*Scope*/ 109|128,5/*749*/, /*->8337*/
/*  7588*/          OPC_MoveChild1,
/*  7589*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  7592*/          OPC_RecordChild0, // #1 = $x
/*  7593*/          OPC_RecordChild1, // #2 = $z
/*  7594*/          OPC_MoveParent,
/*  7595*/          OPC_MoveParent,
/*  7596*/          OPC_MoveChild1,
/*  7597*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  7600*/          OPC_Scope, 75|128,1/*203*/, /*->7806*/ // 3 children in Scope
/*  7603*/            OPC_CheckChild0Same, 1,
/*  7605*/            OPC_CheckChild1Same, 2,
/*  7607*/            OPC_MoveParent,
/*  7608*/            OPC_CheckType, MVT::i32,
/*  7610*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7612*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7615*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7618*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7621*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7624*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7627*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7630*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7633*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7636*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7639*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7642*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7645*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7657*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7660*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7663*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7678*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7684*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7687*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7690*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7716*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7719*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7722*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7734*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7737*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7740*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7752*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7755*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7758*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7770*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7773*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7776*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7779*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7782*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  7806*/          /*Scope*/ 67|128,2/*323*/, /*->8131*/
/*  7808*/            OPC_CheckChild0Same, 2,
/*  7810*/            OPC_CheckChild1Same, 1,
/*  7812*/            OPC_MoveParent,
/*  7813*/            OPC_CheckType, MVT::i32,
/*  7815*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  7817*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7820*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7823*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7826*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7829*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7835*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7838*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7841*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7844*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7847*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7850*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7862*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7865*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7868*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7871*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7883*/            OPC_EmitInteger, MVT::i32, 1, 
/*  7886*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7889*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7892*/            OPC_EmitInteger, MVT::i32, 0, 
/*  7895*/            OPC_Scope, 116, /*->8013*/ // 2 children in Scope
/*  7897*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  7923*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7926*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7929*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7941*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7944*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7947*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7959*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7962*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7965*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  7977*/              OPC_EmitInteger, MVT::i32, 1, 
/*  7980*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  7983*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7986*/              OPC_EmitInteger, MVT::i32, 0, 
/*  7989*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 2, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8013*/            /*Scope*/ 116, /*->8130*/
/*  8014*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8040*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8043*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8046*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8058*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8061*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8064*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8076*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8079*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8082*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8094*/              OPC_EmitInteger, MVT::i32, 1, 
/*  8097*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8100*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8103*/              OPC_EmitInteger, MVT::i32, 0, 
/*  8106*/              OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                        // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                        // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8130*/            0, /*End of Scope*/
/*  8131*/          /*Scope*/ 75|128,1/*203*/, /*->8336*/
/*  8133*/            OPC_CheckChild0Same, 1,
/*  8135*/            OPC_CheckChild1Same, 2,
/*  8137*/            OPC_MoveParent,
/*  8138*/            OPC_CheckType, MVT::i32,
/*  8140*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8142*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8145*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8148*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8151*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8154*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8157*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8160*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8163*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8166*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8169*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8172*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8175*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8187*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8190*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8193*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8196*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8208*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8211*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8214*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8217*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8220*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 2, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8246*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8249*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8252*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8264*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8267*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8270*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8282*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8285*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8288*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8300*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8303*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8306*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8309*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8312*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 0, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8336*/          0, /*End of Scope*/
/*  8337*/        0, /*End of Scope*/
/*  8338*/      /*Scope*/ 110|128,5/*750*/, /*->9090*/
/*  8340*/        OPC_MoveChild0,
/*  8341*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  8344*/        OPC_RecordChild0, // #0 = $x
/*  8345*/        OPC_RecordChild1, // #1 = $z
/*  8346*/        OPC_MoveParent,
/*  8347*/        OPC_RecordChild1, // #2 = $y
/*  8348*/        OPC_MoveParent,
/*  8349*/        OPC_MoveChild1,
/*  8350*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  8353*/        OPC_Scope, 75|128,1/*203*/, /*->8559*/ // 3 children in Scope
/*  8356*/          OPC_CheckChild0Same, 0,
/*  8358*/          OPC_CheckChild1Same, 1,
/*  8360*/          OPC_MoveParent,
/*  8361*/          OPC_CheckType, MVT::i32,
/*  8363*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8365*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8368*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8371*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8374*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8377*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8380*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8383*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8386*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8389*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8392*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8395*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8398*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8410*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8413*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8416*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8419*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8431*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8434*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8437*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8440*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8443*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8469*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8472*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8475*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8487*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8490*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8493*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8505*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8508*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8511*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8523*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8526*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8529*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8532*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8535*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8559*/        /*Scope*/ 67|128,2/*323*/, /*->8884*/
/*  8561*/          OPC_CheckChild0Same, 1,
/*  8563*/          OPC_CheckChild1Same, 0,
/*  8565*/          OPC_MoveParent,
/*  8566*/          OPC_CheckType, MVT::i32,
/*  8568*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8570*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8573*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8576*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8579*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8582*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8585*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8588*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8591*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8594*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8597*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8600*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8603*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8615*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8618*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8621*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8624*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8636*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8639*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8642*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8645*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8648*/          OPC_Scope, 116, /*->8766*/ // 2 children in Scope
/*  8650*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 0, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8676*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8679*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8682*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8694*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8697*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8700*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8712*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8715*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8718*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8730*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8733*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8736*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8739*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8742*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 1, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8766*/          /*Scope*/ 116, /*->8883*/
/*  8767*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8793*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8796*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8811*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8814*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8817*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8829*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8832*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8835*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8847*/            OPC_EmitInteger, MVT::i32, 1, 
/*  8850*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8853*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8856*/            OPC_EmitInteger, MVT::i32, 0, 
/*  8859*/            OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                      // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)) - Complexity = 12
                      // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  8883*/          0, /*End of Scope*/
/*  8884*/        /*Scope*/ 75|128,1/*203*/, /*->9089*/
/*  8886*/          OPC_CheckChild0Same, 0,
/*  8888*/          OPC_CheckChild1Same, 1,
/*  8890*/          OPC_MoveParent,
/*  8891*/          OPC_CheckType, MVT::i32,
/*  8893*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  8895*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8898*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8901*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8904*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8907*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8910*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8913*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8916*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8919*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8922*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8925*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8928*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8940*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8943*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8946*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8949*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  8961*/          OPC_EmitInteger, MVT::i32, 1, 
/*  8964*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  8967*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8970*/          OPC_EmitInteger, MVT::i32, 0, 
/*  8973*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 1, 11, 12, 13, 14, 2, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/*  8999*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9002*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9005*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9017*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9020*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9023*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9035*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9038*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9041*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9053*/          OPC_EmitInteger, MVT::i32, 1, 
/*  9056*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9059*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9062*/          OPC_EmitInteger, MVT::i32, 0, 
/*  9065*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 23, 24, 25, 26, 0, 27, 28, 29, 2, 30, 31, 32, 33, 34, 35, 36, 
                    // Src: (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)) - Complexity = 12
                    // Dst: (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
/*  9089*/        0, /*End of Scope*/
/*  9090*/      /*Scope*/ 108|128,47/*6124*/, /*->15216*/
/*  9092*/        OPC_RecordChild0, // #0 = $x
/*  9093*/        OPC_Scope, 14|128,32/*4110*/, /*->13206*/ // 2 children in Scope
/*  9096*/          OPC_RecordChild1, // #1 = $z
/*  9097*/          OPC_MoveParent,
/*  9098*/          OPC_MoveChild1,
/*  9099*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*  9102*/          OPC_Scope, 127|128,7/*1023*/, /*->10128*/ // 4 children in Scope
/*  9105*/            OPC_RecordChild0, // #2 = $y
/*  9106*/            OPC_MoveChild1,
/*  9107*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*  9110*/            OPC_Scope, 122|128,3/*506*/, /*->9619*/ // 2 children in Scope
/*  9113*/              OPC_CheckChild0Same, 0,
/*  9115*/              OPC_CheckChild1Same, 1,
/*  9117*/              OPC_MoveParent,
/*  9118*/              OPC_MoveParent,
/*  9119*/              OPC_CheckType, MVT::i64,
/*  9121*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9123*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9126*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9129*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9132*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9135*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9138*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9141*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9144*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9147*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9150*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9153*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9161*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9164*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9167*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9170*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9182*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9185*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9193*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9196*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9199*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9202*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9214*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9217*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9220*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9223*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9226*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9252*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9255*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9258*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9270*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9273*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9281*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9284*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9287*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9299*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9302*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9310*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9313*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9316*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9328*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9331*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9334*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9337*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9340*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9364*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9367*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9370*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9373*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9376*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9379*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9382*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9385*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9388*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9391*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9394*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9402*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9405*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9408*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9411*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9423*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9426*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9434*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9437*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9440*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9443*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9455*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9458*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9461*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9464*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9467*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/*  9493*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9496*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9499*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9511*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9514*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/*  9522*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9525*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9528*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9540*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9543*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/*  9551*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9554*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9557*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9569*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9572*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9575*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9578*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9581*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/*  9605*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9608*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/*  9619*/            /*Scope*/ 122|128,3/*506*/, /*->10127*/
/*  9621*/              OPC_CheckChild0Same, 1,
/*  9623*/              OPC_CheckChild1Same, 0,
/*  9625*/              OPC_MoveParent,
/*  9626*/              OPC_MoveParent,
/*  9627*/              OPC_CheckType, MVT::i64,
/*  9629*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/*  9631*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/*  9634*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9637*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9640*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9643*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9646*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9649*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9652*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9655*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9658*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9661*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/*  9669*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9672*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9675*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9678*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9690*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9693*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/*  9701*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9704*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9707*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9710*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9722*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9725*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9728*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9731*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9734*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/*  9760*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9763*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9766*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9778*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9781*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/*  9789*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9792*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9795*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9807*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9810*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/*  9818*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9821*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9824*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9836*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9839*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9842*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9845*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9848*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/*  9872*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/*  9875*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9878*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9881*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9884*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9887*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9890*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9893*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9896*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9899*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9902*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/*  9910*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9913*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9916*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9919*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9931*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/*  9934*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/*  9942*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9945*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9948*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9951*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*  9963*/              OPC_EmitInteger, MVT::i32, 1, 
/*  9966*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/*  9969*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9972*/              OPC_EmitInteger, MVT::i32, 0, 
/*  9975*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10007*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10019*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10022*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10033*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10036*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10048*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10051*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10062*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10065*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10077*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10080*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10086*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10089*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10113*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10116*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10127*/            0, /*End of Scope*/
/* 10128*/          /*Scope*/ 0|128,8/*1024*/, /*->11154*/
/* 10130*/            OPC_MoveChild0,
/* 10131*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 10134*/            OPC_Scope, 123|128,3/*507*/, /*->10644*/ // 2 children in Scope
/* 10137*/              OPC_CheckChild0Same, 0,
/* 10139*/              OPC_CheckChild1Same, 1,
/* 10141*/              OPC_MoveParent,
/* 10142*/              OPC_RecordChild1, // #2 = $y
/* 10143*/              OPC_MoveParent,
/* 10144*/              OPC_CheckType, MVT::i64,
/* 10146*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10148*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10151*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10154*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10157*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10163*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10166*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10169*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10172*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10175*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10178*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10189*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10195*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10207*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10210*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10221*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10224*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10227*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10239*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10242*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10245*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10251*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10277*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10283*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10295*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10298*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10309*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10312*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10324*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10327*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10338*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10341*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10353*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10356*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10359*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10362*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10365*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10389*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10392*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10395*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10398*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10401*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10407*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10416*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10419*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10430*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10436*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10448*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10451*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10462*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10465*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10468*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10480*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10483*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10486*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10492*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 10518*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10524*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10536*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10539*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 10547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10550*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10553*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10565*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10568*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 10576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10579*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10582*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10594*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10597*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10600*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10603*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10606*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 10630*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10633*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 10644*/            /*Scope*/ 123|128,3/*507*/, /*->11153*/
/* 10646*/              OPC_CheckChild0Same, 1,
/* 10648*/              OPC_CheckChild1Same, 0,
/* 10650*/              OPC_MoveParent,
/* 10651*/              OPC_RecordChild1, // #2 = $y
/* 10652*/              OPC_MoveParent,
/* 10653*/              OPC_CheckType, MVT::i64,
/* 10655*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 10657*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 10660*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10663*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10666*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10669*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10672*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10675*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10678*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10681*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10684*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10687*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 10695*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10698*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10701*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10704*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10716*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10719*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 10727*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10730*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10733*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10736*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10748*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10751*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10754*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10757*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10760*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 10786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10789*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10792*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10804*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10807*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 10815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10833*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10836*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 10844*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10847*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10850*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10862*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10865*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10868*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10874*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 10898*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 10901*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10904*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10907*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10910*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10916*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10925*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10928*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 10936*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10939*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10942*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10945*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10957*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 10960*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 10968*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10971*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10974*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10977*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 10989*/              OPC_EmitInteger, MVT::i32, 1, 
/* 10992*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 10995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 10998*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11001*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11030*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11033*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11045*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11048*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 11056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11074*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11077*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11085*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11088*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11091*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11103*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11106*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11109*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11115*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11139*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11142*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11153*/            0, /*End of Scope*/
/* 11154*/          /*Scope*/ 127|128,7/*1023*/, /*->12179*/
/* 11156*/            OPC_RecordChild0, // #2 = $y
/* 11157*/            OPC_MoveChild1,
/* 11158*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 11161*/            OPC_Scope, 122|128,3/*506*/, /*->11670*/ // 2 children in Scope
/* 11164*/              OPC_CheckChild0Same, 1,
/* 11166*/              OPC_CheckChild1Same, 0,
/* 11168*/              OPC_MoveParent,
/* 11169*/              OPC_MoveParent,
/* 11170*/              OPC_CheckType, MVT::i64,
/* 11172*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11174*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11177*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11180*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11183*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11186*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11189*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11192*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11195*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11198*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11201*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11204*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11212*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11215*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11218*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11221*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11233*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11236*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11244*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11247*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11250*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11253*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11265*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11268*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11271*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11274*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11277*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11303*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11306*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11309*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11321*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11324*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11332*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11335*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11338*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11350*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11353*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11361*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11364*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11367*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11379*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11382*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11385*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11388*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11391*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11415*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11418*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11427*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11430*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11433*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11436*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11439*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11442*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11445*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11453*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11456*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11459*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11462*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11474*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11477*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11485*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11488*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11491*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11494*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11506*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11509*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11512*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11515*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11518*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 11544*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11547*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11550*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11562*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11565*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 11573*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11576*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11579*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11591*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11594*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 11602*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11605*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11608*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11620*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11623*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11626*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11629*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11632*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 11656*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11659*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 11670*/            /*Scope*/ 122|128,3/*506*/, /*->12178*/
/* 11672*/              OPC_CheckChild0Same, 0,
/* 11674*/              OPC_CheckChild1Same, 1,
/* 11676*/              OPC_MoveParent,
/* 11677*/              OPC_MoveParent,
/* 11678*/              OPC_CheckType, MVT::i64,
/* 11680*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 11682*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 11685*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11688*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11691*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11694*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11697*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11700*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11703*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11706*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11709*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11712*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 11720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11723*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11729*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11741*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11744*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 11752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11755*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11758*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11761*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11773*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11776*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11779*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11782*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11785*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 11811*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11814*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11817*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11829*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11832*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 11840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11843*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11846*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11858*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11861*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 11869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11872*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11875*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11887*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11890*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 11893*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11896*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11899*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 11923*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 11926*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11935*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11938*/              OPC_EmitInteger, MVT::i32, 1, 
/* 11941*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11944*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11947*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11950*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11953*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 11961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11964*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11970*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 11982*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 11985*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 11993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11996*/              OPC_EmitInteger, MVT::i32, 0, 
/* 11999*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12002*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12014*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12017*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12020*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12023*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12026*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12052*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12055*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12058*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12070*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12073*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12084*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12087*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12099*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12102*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12113*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12116*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12128*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12131*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12134*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12137*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12140*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12164*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12167*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x))) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12178*/            0, /*End of Scope*/
/* 12179*/          /*Scope*/ 0|128,8/*1024*/, /*->13205*/
/* 12181*/            OPC_MoveChild0,
/* 12182*/            OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 12185*/            OPC_Scope, 123|128,3/*507*/, /*->12695*/ // 2 children in Scope
/* 12188*/              OPC_CheckChild0Same, 1,
/* 12190*/              OPC_CheckChild1Same, 0,
/* 12192*/              OPC_MoveParent,
/* 12193*/              OPC_RecordChild1, // #2 = $y
/* 12194*/              OPC_MoveParent,
/* 12195*/              OPC_CheckType, MVT::i64,
/* 12197*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12199*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12202*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12205*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12208*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12211*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12214*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12217*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12220*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12223*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12226*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12229*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12237*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12240*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12243*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12246*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12258*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12261*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12269*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12272*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12275*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12278*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12290*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12293*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12296*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12299*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12302*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12328*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12331*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12334*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12346*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12349*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12357*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12360*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12363*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12375*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12378*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12386*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12389*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12392*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12404*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12407*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12410*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12413*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12416*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12440*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12443*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12446*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12449*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12452*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12455*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12458*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12461*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12464*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12467*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12470*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12478*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12481*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12484*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12487*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12499*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12502*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 12510*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12513*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12516*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12519*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12531*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12534*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12537*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12540*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12543*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 12569*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12572*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12575*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12587*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12590*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 12598*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12601*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12604*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12616*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12619*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 12627*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12630*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12633*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12645*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12648*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12651*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12654*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12657*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 12681*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12684*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 12695*/            /*Scope*/ 123|128,3/*507*/, /*->13204*/
/* 12697*/              OPC_CheckChild0Same, 0,
/* 12699*/              OPC_CheckChild1Same, 1,
/* 12701*/              OPC_MoveParent,
/* 12702*/              OPC_RecordChild1, // #2 = $y
/* 12703*/              OPC_MoveParent,
/* 12704*/              OPC_CheckType, MVT::i64,
/* 12706*/              OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 12708*/              OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 12711*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12714*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12717*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12720*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12723*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12726*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12729*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12732*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12735*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12738*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 12746*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12749*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12752*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12755*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12767*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12770*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 12778*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12781*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12784*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12787*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12799*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12802*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12805*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12808*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12811*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 12837*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12840*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12843*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12855*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12858*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 12866*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12869*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12872*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12884*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12887*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 12895*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12898*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12901*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 12913*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12916*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 12919*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12922*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12925*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 12949*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 12952*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12955*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12958*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12961*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12964*/              OPC_EmitInteger, MVT::i32, 1, 
/* 12967*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12970*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12973*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12976*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 12979*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 12987*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12990*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12993*/              OPC_EmitInteger, MVT::i32, 0, 
/* 12996*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13008*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13011*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 13019*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13022*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13025*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13028*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13040*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13043*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13046*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13049*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13052*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13078*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13081*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13084*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13096*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13099*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 13107*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13110*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13113*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13125*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13128*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 13136*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13139*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13142*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13154*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13157*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13160*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13163*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13166*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13190*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13193*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13204*/            0, /*End of Scope*/
/* 13205*/          0, /*End of Scope*/
/* 13206*/        /*Scope*/ 87|128,15/*2007*/, /*->15215*/
/* 13208*/          OPC_MoveChild1,
/* 13209*/          OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 13212*/          OPC_RecordChild0, // #1 = $x
/* 13213*/          OPC_RecordChild1, // #2 = $z
/* 13214*/          OPC_MoveParent,
/* 13215*/          OPC_MoveParent,
/* 13216*/          OPC_MoveChild1,
/* 13217*/          OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 13220*/          OPC_Scope, 121|128,3/*505*/, /*->13728*/ // 3 children in Scope
/* 13223*/            OPC_CheckChild0Same, 1,
/* 13225*/            OPC_CheckChild1Same, 2,
/* 13227*/            OPC_MoveParent,
/* 13228*/            OPC_CheckType, MVT::i64,
/* 13230*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13232*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13235*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13238*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13241*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13244*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13247*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13250*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13253*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13256*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13259*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13262*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13270*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13273*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13276*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13279*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13291*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13294*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13302*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13305*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13308*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13311*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13323*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13326*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13329*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13332*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13335*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13361*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13364*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13367*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13379*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13382*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13390*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13393*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13396*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13408*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13411*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13419*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13422*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13425*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13437*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13440*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13443*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13446*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13449*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13473*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13476*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13479*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13482*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13485*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13488*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13491*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13494*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13497*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13500*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13503*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 13511*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13514*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13517*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13520*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13532*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13535*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 13543*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13546*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13549*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13552*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13564*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13567*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13570*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13573*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13576*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 13602*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13608*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13620*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13623*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 13631*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13634*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13637*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13649*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13652*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 13660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13666*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13678*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13681*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13690*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 13714*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 13717*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 13728*/          /*Scope*/ 81|128,7/*977*/, /*->14707*/
/* 13730*/            OPC_CheckChild0Same, 2,
/* 13732*/            OPC_CheckChild1Same, 1,
/* 13734*/            OPC_MoveParent,
/* 13735*/            OPC_CheckType, MVT::i64,
/* 13737*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 13739*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 13742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13745*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13748*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13754*/            OPC_EmitInteger, MVT::i32, 1, 
/* 13757*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 13766*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13769*/            OPC_Scope, 82|128,3/*466*/, /*->14238*/ // 2 children in Scope
/* 13772*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 13780*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13783*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13786*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13789*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13801*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13804*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 13812*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13815*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13818*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13821*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13833*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13836*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13839*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13842*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13845*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 13871*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13874*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13877*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13889*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13892*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 32,  // Results = #33
/* 13900*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13903*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13906*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13918*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13921*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 13929*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13932*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13935*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 13947*/              OPC_EmitInteger, MVT::i32, 1, 
/* 13950*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 13953*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13956*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13959*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 13983*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 13986*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13989*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13992*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13995*/              OPC_EmitInteger, MVT::i32, 0, 
/* 13998*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14001*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14004*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14007*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14010*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14013*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 14021*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14024*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14027*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14030*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14042*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14045*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14053*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14056*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14059*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14062*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14074*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14077*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14080*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14083*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14086*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14112*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14115*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14118*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14130*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14133*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 76,  // Results = #77
/* 14141*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14144*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14147*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14159*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14162*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14170*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14173*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14176*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14188*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14191*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14194*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14197*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14200*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14224*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14227*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14238*/            /*Scope*/ 82|128,3/*466*/, /*->14706*/
/* 14240*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14248*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14251*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14254*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14257*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14269*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14272*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14280*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14283*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14286*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14289*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14301*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14304*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14307*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14310*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14313*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14339*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14342*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14345*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14357*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14360*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14368*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14371*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14374*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14386*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14389*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14397*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14400*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14403*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14415*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14418*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14421*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14424*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14427*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14451*/              OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14454*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14457*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14460*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14463*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14466*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14469*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14472*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14475*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14478*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14481*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14489*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14492*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14495*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14498*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14510*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14513*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 14521*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14524*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14527*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14530*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14542*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14545*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14548*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14551*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14554*/              OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                            MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 14580*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14583*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14586*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14598*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14601*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 14609*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14612*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14615*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14627*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14630*/              OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                            MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 14638*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14641*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14644*/              OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14656*/              OPC_EmitInteger, MVT::i32, 1, 
/* 14659*/              OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14662*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14665*/              OPC_EmitInteger, MVT::i32, 0, 
/* 14668*/              OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                            MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 14692*/              OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14695*/              OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                            MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                        // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                        // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 14706*/            0, /*End of Scope*/
/* 14707*/          /*Scope*/ 121|128,3/*505*/, /*->15214*/
/* 14709*/            OPC_CheckChild0Same, 1,
/* 14711*/            OPC_CheckChild1Same, 2,
/* 14713*/            OPC_MoveParent,
/* 14714*/            OPC_CheckType, MVT::i64,
/* 14716*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 14718*/            OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 14721*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14724*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14727*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14730*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14733*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14736*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14739*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14742*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14745*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14748*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 12,  // Results = #13
/* 14756*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14759*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14762*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14765*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14777*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14780*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 18,  // Results = #19
/* 14788*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14797*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14809*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14812*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14815*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14818*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14821*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 14847*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14853*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14865*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14868*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 14876*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14882*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14894*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14897*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 37,  // Results = #38
/* 14905*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14908*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14911*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 14923*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14926*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 14929*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14932*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14935*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 14959*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 14962*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14965*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14968*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14971*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14974*/            OPC_EmitInteger, MVT::i32, 1, 
/* 14977*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14980*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14983*/            OPC_EmitInteger, MVT::i32, 0, 
/* 14986*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 14989*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 56,  // Results = #57
/* 14997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15006*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15018*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15021*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 62,  // Results = #63
/* 15029*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15038*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15050*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15053*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15056*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15059*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15062*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15088*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15094*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15106*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15109*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15117*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15120*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15123*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15135*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15138*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 81,  // Results = #82
/* 15146*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15149*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15152*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15164*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15167*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15170*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15173*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15176*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15200*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15203*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$y, (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15214*/          0, /*End of Scope*/
/* 15215*/        0, /*End of Scope*/
/* 15216*/      /*Scope*/ 88|128,15/*2008*/, /*->17226*/
/* 15218*/        OPC_MoveChild0,
/* 15219*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/* 15222*/        OPC_RecordChild0, // #0 = $x
/* 15223*/        OPC_RecordChild1, // #1 = $z
/* 15224*/        OPC_MoveParent,
/* 15225*/        OPC_RecordChild1, // #2 = $y
/* 15226*/        OPC_MoveParent,
/* 15227*/        OPC_MoveChild1,
/* 15228*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 15231*/        OPC_Scope, 121|128,3/*505*/, /*->15739*/ // 3 children in Scope
/* 15234*/          OPC_CheckChild0Same, 0,
/* 15236*/          OPC_CheckChild1Same, 1,
/* 15238*/          OPC_MoveParent,
/* 15239*/          OPC_CheckType, MVT::i64,
/* 15241*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15243*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15246*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15249*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15252*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15255*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15258*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15261*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15264*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15267*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15270*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15273*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15281*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15284*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15287*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15290*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15302*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15305*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15313*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15316*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15319*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15322*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15334*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15337*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15340*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15343*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15346*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15372*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15375*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15378*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15390*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15393*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15401*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15404*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15407*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15419*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15422*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15430*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15436*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15448*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15451*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15454*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15457*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15460*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15484*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15487*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15490*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15493*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15496*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15499*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15508*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15511*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15514*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 15522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15525*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15528*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15531*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15543*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15546*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 15554*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15557*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15560*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15563*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15575*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15578*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15581*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15584*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15587*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 15613*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15616*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15619*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15631*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15634*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 15642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15648*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15660*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15663*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 15671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15677*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15689*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15692*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15695*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15698*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15701*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 15725*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 15728*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 15739*/        /*Scope*/ 81|128,7/*977*/, /*->16718*/
/* 15741*/          OPC_CheckChild0Same, 1,
/* 15743*/          OPC_CheckChild1Same, 0,
/* 15745*/          OPC_MoveParent,
/* 15746*/          OPC_CheckType, MVT::i64,
/* 15748*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 15750*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 15753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15756*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15759*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15762*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15765*/          OPC_EmitInteger, MVT::i32, 1, 
/* 15768*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15771*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 15777*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15780*/          OPC_Scope, 82|128,3/*466*/, /*->16249*/ // 2 children in Scope
/* 15783*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 12,  // Results = #13
/* 15791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15797*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15800*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15812*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15815*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 15823*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15826*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15832*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15844*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15847*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15850*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15856*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 15882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15885*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15888*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15900*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15903*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 32,  // Results = #33
/* 15911*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15914*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15917*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15929*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15932*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 15940*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15943*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15946*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 15958*/            OPC_EmitInteger, MVT::i32, 1, 
/* 15961*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 15964*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15967*/            OPC_EmitInteger, MVT::i32, 0, 
/* 15970*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 15994*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 15997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16009*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16012*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16015*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16018*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16021*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16024*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 56,  // Results = #57
/* 16032*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16035*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16038*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16041*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16053*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16056*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16064*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16067*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16070*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16073*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16085*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16088*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16097*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16123*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16126*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16129*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16141*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16144*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 76,  // Results = #77
/* 16152*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16155*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16158*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16170*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16173*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16181*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16184*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16187*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16199*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16202*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16205*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16208*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16211*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16235*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16238*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16249*/          /*Scope*/ 82|128,3/*466*/, /*->16717*/
/* 16251*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16259*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16262*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16265*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16268*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16280*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16283*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16291*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16294*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16297*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16300*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16312*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16315*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16318*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16321*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16324*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16350*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16353*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16356*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16368*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16371*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16379*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16382*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16385*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16397*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16400*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16408*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16411*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16414*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16426*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16429*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16432*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16435*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16438*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16462*/            OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16465*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16468*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16471*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16474*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16477*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16480*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16483*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16486*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16489*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16492*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 16500*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16503*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16506*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16509*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16521*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16524*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 16532*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16535*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16538*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16541*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16553*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16556*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16559*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16562*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16565*/            OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                          MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 16591*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16594*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16597*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16609*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16612*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 16620*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16623*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16626*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16638*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16641*/            OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                          MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 16649*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16652*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16655*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16667*/            OPC_EmitInteger, MVT::i32, 1, 
/* 16670*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16673*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16676*/            OPC_EmitInteger, MVT::i32, 0, 
/* 16679*/            OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                          MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 16703*/            OPC_EmitInteger, MVT::i32, R600::sub1,
/* 16706*/            OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                          MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                      // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$x, i64:{ *:[i64] }:$z)) - Complexity = 12
                      // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 16717*/          0, /*End of Scope*/
/* 16718*/        /*Scope*/ 121|128,3/*505*/, /*->17225*/
/* 16720*/          OPC_CheckChild0Same, 0,
/* 16722*/          OPC_CheckChild1Same, 1,
/* 16724*/          OPC_MoveParent,
/* 16725*/          OPC_CheckType, MVT::i64,
/* 16727*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 16729*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 16732*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16735*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16738*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16741*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16744*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16747*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16750*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16753*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16756*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16759*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 16767*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16770*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16773*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16776*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16788*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16791*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 18,  // Results = #19
/* 16799*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16802*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16805*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16808*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16820*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16823*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16832*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 13, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 16858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16861*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16864*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16876*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16879*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 32,  // Results = #33
/* 16887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16890*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16893*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16905*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16908*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 37,  // Results = #38
/* 16916*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16919*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16922*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 16934*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16937*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 16940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16946*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 41, 42, 43, 44, 45,  // Results = #46
/* 16970*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 16973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16985*/          OPC_EmitInteger, MVT::i32, 1, 
/* 16988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 16997*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17000*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 56,  // Results = #57
/* 17008*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17011*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17017*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17029*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17032*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 62,  // Results = #63
/* 17040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17049*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17061*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17064*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17067*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17070*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17073*/          OPC_EmitNode1, TARGET_VAL(R600::XOR_INT), 0,
                        MVT::i32, 20/*#Ops*/, 50, 51, 52, 53, 54, 55, 57, 58, 59, 60, 61, 63, 64, 65, 66, 67, 68, 69, 70, 71,  // Results = #72
/* 17099*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17102*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17105*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17117*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17120*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 76,  // Results = #77
/* 17128*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17131*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17134*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17146*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17149*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 81,  // Results = #82
/* 17157*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17160*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17163*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17175*/          OPC_EmitInteger, MVT::i32, 1, 
/* 17178*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17181*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 17187*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 48, 49, 72, 73, 74, 75, 77, 78, 79, 80, 82, 83, 84, 85, 86, 87, 88, 89,  // Results = #90
/* 17211*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 17214*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 46, 47, 90, 91, 
                    // Src: (or:{ *:[i64] } (and:{ *:[i64] } (or:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$y), (and:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$x)) - Complexity = 12
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (XOR_INT:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 17225*/        0, /*End of Scope*/
/* 17226*/      0, /*End of Scope*/
/* 17227*/    /*Scope*/ 104, /*->17332*/
/* 17228*/      OPC_RecordChild0, // #0 = $src0
/* 17229*/      OPC_RecordChild1, // #1 = $src1
/* 17230*/      OPC_CheckType, MVT::i32,
/* 17232*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17234*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17240*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17255*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17261*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17279*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17282*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17294*/      OPC_EmitInteger, MVT::i32, 1, 
/* 17297*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 17306*/      OPC_MorphNodeTo1, TARGET_VAL(R600::OR_INT), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (or:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (OR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 17332*/    0, /*End of Scope*/
/* 17333*/  /*SwitchOpcode*/ 25, TARGET_VAL(AMDGPUISD::REGISTER_LOAD),// ->17361
/* 17336*/    OPC_RecordNode, // #0 = 'AMDGPUregister_load' chained node
/* 17337*/    OPC_RecordChild1, // #1 = $addr
/* 17338*/    OPC_RecordChild2, // #2 = $chan
/* 17339*/    OPC_MoveChild2,
/* 17340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17343*/    OPC_CheckType, MVT::i32,
/* 17345*/    OPC_MoveParent,
/* 17346*/    OPC_CheckType, MVT::i32,
/* 17348*/    OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #3 #4
/* 17351*/    OPC_EmitMergeInputChains1_0,
/* 17352*/    OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain,
                  MVT::i32, 3/*#Ops*/, 3, 4, 2, 
              // Src: (AMDGPUregister_load:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterLoad:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17361*/  /*SwitchOpcode*/ 26, TARGET_VAL(AMDGPUISD::REGISTER_STORE),// ->17390
/* 17364*/    OPC_RecordNode, // #0 = 'AMDGPUregister_store' chained node
/* 17365*/    OPC_RecordChild1, // #1 = $val
/* 17366*/    OPC_CheckChild1Type, MVT::i32,
/* 17368*/    OPC_RecordChild2, // #2 = $addr
/* 17369*/    OPC_RecordChild3, // #3 = $chan
/* 17370*/    OPC_MoveChild3,
/* 17371*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/* 17374*/    OPC_CheckType, MVT::i32,
/* 17376*/    OPC_MoveParent,
/* 17377*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #4 #5
/* 17380*/    OPC_EmitMergeInputChains1_0,
/* 17381*/    OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain,
                  4/*#Ops*/, 1, 4, 5, 3, 
              // Src: (AMDGPUregister_store i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan) - Complexity = 15
              // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr, (timm:{ *:[i32] }):$chan)
/* 17390*/  /*SwitchOpcode*/ 24|128,23/*2968*/, TARGET_VAL(ISD::SELECT_CC),// ->20362
/* 17394*/    OPC_RecordChild0, // #0 = $src0
/* 17395*/    OPC_Scope, 5|128,12/*1541*/, /*->18939*/ // 2 children in Scope
/* 17398*/      OPC_CheckChild0Type, MVT::f32,
/* 17400*/      OPC_Scope, 126|128,6/*894*/, /*->18297*/ // 2 children in Scope
/* 17403*/        OPC_RecordChild1, // #1 = $src1
/* 17404*/        OPC_Scope, 59|128,3/*443*/, /*->17850*/ // 2 children in Scope
/* 17407*/          OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17418*/          OPC_CheckChild3Integer, 0, 
/* 17420*/          OPC_MoveChild4,
/* 17421*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 17424*/          OPC_Scope, 105, /*->17531*/ // 4 children in Scope
/* 17426*/            OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 17428*/            OPC_MoveParent,
/* 17429*/            OPC_CheckType, MVT::i32,
/* 17431*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17433*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17436*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17439*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17442*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17445*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17448*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17451*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17454*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17457*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17460*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17472*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17475*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17478*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17481*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17493*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17496*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17499*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17502*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17505*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 13
                      // Dst: (SETE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17531*/          /*Scope*/ 105, /*->17637*/
/* 17532*/            OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 17534*/            OPC_MoveParent,
/* 17535*/            OPC_CheckType, MVT::i32,
/* 17537*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17539*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17542*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17545*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17548*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17551*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17554*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17557*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17560*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17563*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17566*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17578*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17581*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17584*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17587*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17599*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17602*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17608*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17611*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 13
                      // Dst: (SETGT_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17637*/          /*Scope*/ 105, /*->17743*/
/* 17638*/            OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 17640*/            OPC_MoveParent,
/* 17641*/            OPC_CheckType, MVT::i32,
/* 17643*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17648*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17651*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17654*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17657*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17660*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17669*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17672*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17684*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17690*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17693*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17705*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17708*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17711*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17714*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17717*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 13
                      // Dst: (SETGE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17743*/          /*Scope*/ 105, /*->17849*/
/* 17744*/            OPC_CheckPredicate, 5, // Predicate_COND_UNE_NE
/* 17746*/            OPC_MoveParent,
/* 17747*/            OPC_CheckType, MVT::i32,
/* 17749*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17751*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17754*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17757*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17760*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17763*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17766*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17769*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17772*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17775*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17778*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17790*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17793*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17796*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17799*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17811*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17814*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17817*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17820*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17823*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_DX10), 0,
                          MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, (cond:{ *:[Other] })<<P:Predicate_COND_UNE_NE>>) - Complexity = 13
                      // Dst: (SETNE_DX10:{ *:[i32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17849*/          0, /*End of Scope*/
/* 17850*/        /*Scope*/ 60|128,3/*444*/, /*->18296*/
/* 17852*/          OPC_MoveChild2,
/* 17853*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 17856*/          OPC_CheckPredicate, 6, // Predicate_FP_ONE
/* 17858*/          OPC_MoveParent,
/* 17859*/          OPC_MoveChild3,
/* 17860*/          OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 17863*/          OPC_CheckPredicate, 7, // Predicate_FP_ZERO
/* 17865*/          OPC_MoveParent,
/* 17866*/          OPC_MoveChild4,
/* 17867*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 17870*/          OPC_Scope, 105, /*->17977*/ // 4 children in Scope
/* 17872*/            OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 17874*/            OPC_MoveParent,
/* 17875*/            OPC_CheckType, MVT::f32,
/* 17877*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17879*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17882*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17885*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17888*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17891*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17894*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17897*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17900*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17903*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17906*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17918*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17921*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17924*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17927*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 17939*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17942*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 17945*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17948*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17951*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SETE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 11
                      // Dst: (SETE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 17977*/          /*Scope*/ 105, /*->18083*/
/* 17978*/            OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 17980*/            OPC_MoveParent,
/* 17981*/            OPC_CheckType, MVT::f32,
/* 17983*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 17985*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17988*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17991*/            OPC_EmitInteger, MVT::i32, 1, 
/* 17994*/            OPC_EmitInteger, MVT::i32, 0, 
/* 17997*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18000*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18003*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18006*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18009*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18012*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18024*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18027*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18030*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18033*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18045*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18048*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18051*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18054*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18057*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGT), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 11
                      // Dst: (SGT:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18083*/          /*Scope*/ 105, /*->18189*/
/* 18084*/            OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18086*/            OPC_MoveParent,
/* 18087*/            OPC_CheckType, MVT::f32,
/* 18089*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18091*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18094*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18097*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18100*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18103*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18106*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18109*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18112*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18115*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18118*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18130*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18133*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18136*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18139*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18151*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18154*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18157*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18160*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18163*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SGE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 11
                      // Dst: (SGE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18189*/          /*Scope*/ 105, /*->18295*/
/* 18190*/            OPC_CheckPredicate, 5, // Predicate_COND_UNE_NE
/* 18192*/            OPC_MoveParent,
/* 18193*/            OPC_CheckType, MVT::f32,
/* 18195*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18197*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18200*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18203*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18206*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18209*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18212*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18215*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18218*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18221*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18224*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18236*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18239*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18242*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18245*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18257*/            OPC_EmitInteger, MVT::i32, 1, 
/* 18260*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18263*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18266*/            OPC_EmitInteger, MVT::i32, 0, 
/* 18269*/            OPC_MorphNodeTo1, TARGET_VAL(R600::SNE), 0,
                          MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                      // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, (cond:{ *:[Other] })<<P:Predicate_COND_UNE_NE>>) - Complexity = 11
                      // Dst: (SNE:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
/* 18295*/          0, /*End of Scope*/
/* 18296*/        0, /*End of Scope*/
/* 18297*/      /*Scope*/ 127|128,4/*639*/, /*->18938*/
/* 18299*/        OPC_MoveChild1,
/* 18300*/        OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 18303*/        OPC_CheckPredicate, 7, // Predicate_FP_ZERO
/* 18305*/        OPC_MoveParent,
/* 18306*/        OPC_RecordChild2, // #1 = $src1
/* 18307*/        OPC_RecordChild3, // #2 = $src2
/* 18308*/        OPC_MoveChild4,
/* 18309*/        OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 18312*/        OPC_Scope, 103, /*->18417*/ // 6 children in Scope
/* 18314*/          OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 18316*/          OPC_MoveParent,
/* 18317*/          OPC_CheckType, MVT::f32,
/* 18319*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18321*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18324*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18333*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18345*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18348*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18351*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18363*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18366*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18369*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18381*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18384*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18387*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18390*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18393*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 7
                    // Dst: (CNDE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18417*/        /*Scope*/ 103, /*->18521*/
/* 18418*/          OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 18420*/          OPC_MoveParent,
/* 18421*/          OPC_CheckType, MVT::f32,
/* 18423*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18425*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18428*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18431*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18434*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18437*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18449*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18452*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18455*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18467*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18470*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18473*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18485*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18488*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18491*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18497*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 7
                    // Dst: (CNDGT_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18521*/        /*Scope*/ 103, /*->18625*/
/* 18522*/          OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18524*/          OPC_MoveParent,
/* 18525*/          OPC_CheckType, MVT::f32,
/* 18527*/          OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 18529*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18532*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18535*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18538*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18541*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18553*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18556*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18559*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18571*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18574*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18577*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18589*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18592*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18595*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18598*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18601*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_r600), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 7
                    // Dst: (CNDGE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18625*/        /*Scope*/ 103, /*->18729*/
/* 18626*/          OPC_CheckPredicate, 2, // Predicate_COND_OEQ
/* 18628*/          OPC_MoveParent,
/* 18629*/          OPC_CheckType, MVT::f32,
/* 18631*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18633*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18636*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18639*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18645*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18657*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18660*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18663*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18675*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18678*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18681*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18693*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18696*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18699*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18702*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18705*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OEQ>>) - Complexity = 7
                    // Dst: (CNDE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18729*/        /*Scope*/ 103, /*->18833*/
/* 18730*/          OPC_CheckPredicate, 3, // Predicate_COND_OGT
/* 18732*/          OPC_MoveParent,
/* 18733*/          OPC_CheckType, MVT::f32,
/* 18735*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18737*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18740*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18743*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18746*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18749*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18761*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18764*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18767*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18779*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18782*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18785*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18797*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18800*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18803*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18806*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18809*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGT>>) - Complexity = 7
                    // Dst: (CNDGT_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18833*/        /*Scope*/ 103, /*->18937*/
/* 18834*/          OPC_CheckPredicate, 4, // Predicate_COND_OGE
/* 18836*/          OPC_MoveParent,
/* 18837*/          OPC_CheckType, MVT::f32,
/* 18839*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18841*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18844*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18847*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18850*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18853*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18865*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18868*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18871*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18883*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18886*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18889*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18901*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18904*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 18907*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18910*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18913*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_eg), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } f32:{ *:[f32] }:$src0, (fpimm:{ *:[f32] })<<P:Predicate_FP_ZERO>>, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_OGE>>) - Complexity = 7
                    // Dst: (CNDGE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 18937*/        0, /*End of Scope*/
/* 18938*/      0, /*End of Scope*/
/* 18939*/    /*Scope*/ 12|128,11/*1420*/, /*->20361*/
/* 18941*/      OPC_CheckChild0Type, MVT::i32,
/* 18943*/      OPC_Scope, 13|128,5/*653*/, /*->19599*/ // 3 children in Scope
/* 18946*/        OPC_RecordChild1, // #1 = $src1
/* 18947*/        OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 18958*/        OPC_CheckChild3Integer, 0, 
/* 18960*/        OPC_MoveChild4,
/* 18961*/        OPC_Scope, 105, /*->19068*/ // 6 children in Scope
/* 18963*/          OPC_CheckCondCode, ISD::SETEQ,
/* 18965*/          OPC_MoveParent,
/* 18966*/          OPC_CheckType, MVT::i32,
/* 18968*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 18970*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18973*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18976*/          OPC_EmitInteger, MVT::i32, 1, 
/* 18979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18982*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18985*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18988*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18991*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18994*/          OPC_EmitInteger, MVT::i32, 0, 
/* 18997*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19009*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19012*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19015*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19018*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19030*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19033*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19036*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19039*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19042*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETEQ:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19068*/        /*Scope*/ 105, /*->19174*/
/* 19069*/          OPC_CheckCondCode, ISD::SETGT,
/* 19071*/          OPC_MoveParent,
/* 19072*/          OPC_CheckType, MVT::i32,
/* 19074*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19076*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19079*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19082*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19085*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19088*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19091*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19094*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19097*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19100*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19103*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19115*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19118*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19121*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19124*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19136*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19139*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19148*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19174*/        /*Scope*/ 105, /*->19280*/
/* 19175*/          OPC_CheckCondCode, ISD::SETGE,
/* 19177*/          OPC_MoveParent,
/* 19178*/          OPC_CheckType, MVT::i32,
/* 19180*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19182*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19188*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19191*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19194*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19197*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19200*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19203*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19209*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19221*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19227*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19230*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19242*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19245*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19251*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19254*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19280*/        /*Scope*/ 105, /*->19386*/
/* 19281*/          OPC_CheckCondCode, ISD::SETNE,
/* 19283*/          OPC_MoveParent,
/* 19284*/          OPC_CheckType, MVT::i32,
/* 19286*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19288*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19291*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19294*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19297*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19300*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19303*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19306*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19309*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19312*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19315*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19330*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19333*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19336*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19348*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19351*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19354*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19357*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19360*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETNE_INT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETNE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETNE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19386*/        /*Scope*/ 105, /*->19492*/
/* 19387*/          OPC_CheckCondCode, ISD::SETUGT,
/* 19389*/          OPC_MoveParent,
/* 19390*/          OPC_CheckType, MVT::i32,
/* 19392*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19394*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19397*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19400*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19403*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19406*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19409*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19412*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19415*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19418*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19421*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19433*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19436*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19439*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19442*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19454*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19457*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19460*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19463*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19466*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGT_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGT:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGT_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19492*/        /*Scope*/ 105, /*->19598*/
/* 19493*/          OPC_CheckCondCode, ISD::SETUGE,
/* 19495*/          OPC_MoveParent,
/* 19496*/          OPC_CheckType, MVT::i32,
/* 19498*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19506*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19509*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19512*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19515*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19518*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19521*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19524*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19527*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19545*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19548*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19560*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19563*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19566*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19569*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19572*/          OPC_MorphNodeTo1, TARGET_VAL(R600::SETGE_UINT), 0,
                        MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                    // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, -1:{ *:[i32] }, 0:{ *:[i32] }, SETUGE:{ *:[Other] }) - Complexity = 13
                    // Dst: (SETGE_UINT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 19598*/        0, /*End of Scope*/
/* 19599*/      /*Scope*/ 126|128,4/*638*/, /*->20239*/
/* 19601*/        OPC_CheckChild1Integer, 0, 
/* 19603*/        OPC_RecordChild2, // #1 = $src1
/* 19604*/        OPC_RecordChild3, // #2 = $src2
/* 19605*/        OPC_MoveChild4,
/* 19606*/        OPC_Scope, 61|128,2/*317*/, /*->19926*/ // 4 children in Scope
/* 19609*/          OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 19612*/          OPC_Scope, 103, /*->19717*/ // 3 children in Scope
/* 19614*/            OPC_CheckPredicate, 8, // Predicate_COND_EQ
/* 19616*/            OPC_MoveParent,
/* 19617*/            OPC_CheckType, MVT::i32,
/* 19619*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19621*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19624*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19627*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19630*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19633*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19645*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19648*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19651*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19663*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19666*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19669*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19681*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19684*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19687*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19690*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19693*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_EQ>>) - Complexity = 8
                      // Dst: (CNDE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19717*/          /*Scope*/ 103, /*->19821*/
/* 19718*/            OPC_CheckPredicate, 9, // Predicate_COND_SGE
/* 19720*/            OPC_MoveParent,
/* 19721*/            OPC_CheckType, MVT::i32,
/* 19723*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19725*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19728*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19731*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19734*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19737*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19749*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19752*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19755*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19767*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19770*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19773*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19785*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19788*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19791*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19794*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19797*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGE>>) - Complexity = 8
                      // Dst: (CNDGE_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19821*/          /*Scope*/ 103, /*->19925*/
/* 19822*/            OPC_CheckPredicate, 10, // Predicate_COND_SGT
/* 19824*/            OPC_MoveParent,
/* 19825*/            OPC_CheckType, MVT::i32,
/* 19827*/            OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19829*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19832*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19835*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19838*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19841*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19853*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19856*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19859*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19871*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19874*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19877*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19889*/            OPC_EmitInteger, MVT::i32, 1, 
/* 19892*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 19895*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19898*/            OPC_EmitInteger, MVT::i32, 0, 
/* 19901*/            OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                          MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                      // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGT>>) - Complexity = 8
                      // Dst: (CNDGT_INT:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 19925*/          0, /*End of Scope*/
/* 19926*/        /*Scope*/ 103, /*->20030*/
/* 19927*/          OPC_CheckCondCode, ISD::SETEQ,
/* 19929*/          OPC_MoveParent,
/* 19930*/          OPC_CheckType, MVT::f32,
/* 19932*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 19934*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19937*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19940*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19943*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19946*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19958*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19961*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19964*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19976*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19979*/          OPC_EmitInteger, MVT::i32, 0, 
/* 19982*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 19994*/          OPC_EmitInteger, MVT::i32, 1, 
/* 19997*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20000*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20003*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20006*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETEQ:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20030*/        /*Scope*/ 103, /*->20134*/
/* 20031*/          OPC_CheckCondCode, ISD::SETGT,
/* 20033*/          OPC_MoveParent,
/* 20034*/          OPC_CheckType, MVT::f32,
/* 20036*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20038*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20041*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20044*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20047*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20050*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20062*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20065*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20068*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20080*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20083*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20086*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20098*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20101*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20104*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20107*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20110*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGT_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGT:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGT_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20134*/        /*Scope*/ 103, /*->20238*/
/* 20135*/          OPC_CheckCondCode, ISD::SETGE,
/* 20137*/          OPC_MoveParent,
/* 20138*/          OPC_CheckType, MVT::f32,
/* 20140*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20148*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20151*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20154*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20166*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20169*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20172*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20184*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20187*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20190*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20202*/          OPC_EmitInteger, MVT::i32, 1, 
/* 20205*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20208*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20211*/          OPC_EmitInteger, MVT::i32, 0, 
/* 20214*/          OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                        MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (selectcc:{ *:[f32] } i32:{ *:[i32] }:$src0, 0:{ *:[i32] }, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2, SETGE:{ *:[Other] }) - Complexity = 8
                    // Dst: (CNDGE_INT:{ *:[f32] } ?:{ *:[i32] }:$src0, ?:{ *:[f32] }:$src1, ?:{ *:[f32] }:$src2)
/* 20238*/        0, /*End of Scope*/
/* 20239*/      /*Scope*/ 120, /*->20360*/
/* 20240*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20251*/        OPC_RecordChild2, // #1 = $src1
/* 20252*/        OPC_RecordChild3, // #2 = $src2
/* 20253*/        OPC_MoveChild4,
/* 20254*/        OPC_CheckOpcode, TARGET_VAL(ISD::CONDCODE),
/* 20257*/        OPC_CheckPredicate, 10, // Predicate_COND_SGT
/* 20259*/        OPC_MoveParent,
/* 20260*/        OPC_CheckType, MVT::i32,
/* 20262*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20264*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20267*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20270*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20273*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20276*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20288*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20291*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20294*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20306*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20309*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20312*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20324*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20327*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20330*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20333*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20336*/        OPC_MorphNodeTo1, TARGET_VAL(R600::CNDGE_INT), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (selectcc:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] }, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, (cond:{ *:[Other] })<<P:Predicate_COND_SGT>>) - Complexity = 8
                  // Dst: (CNDGE_INT:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 20360*/      0, /*End of Scope*/
/* 20361*/    0, /*End of Scope*/
/* 20362*/  /*SwitchOpcode*/ 100|128,7/*996*/, TARGET_VAL(ISD::LOAD),// ->21362
/* 20366*/    OPC_RecordMemRef,
/* 20367*/    OPC_RecordNode, // #0 = 'ld' chained node
/* 20368*/    OPC_RecordChild1, // #1 = $addr
/* 20369*/    OPC_CheckPredicate, 11, // Predicate_unindexedload
/* 20371*/    OPC_Scope, 22, /*->20395*/ // 4 children in Scope
/* 20373*/      OPC_CheckPredicate, 12, // Predicate_load_private
/* 20375*/      OPC_CheckType, MVT::i32,
/* 20377*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20379*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRIndirect:$addr #2 #3
/* 20382*/      OPC_EmitMergeInputChains1_0,
/* 20383*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20386*/      OPC_MorphNodeTo1, TARGET_VAL(R600::R600_RegisterLoad), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:{ *:[i32] } ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load_private>> - Complexity = 13
                // Dst: (R600_RegisterLoad:{ *:[i32] } FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 20395*/    /*Scope*/ 66|128,3/*450*/, /*->20847*/
/* 20397*/      OPC_CheckChild1Type, MVT::i32,
/* 20399*/      OPC_CheckType, MVT::i32,
/* 20401*/      OPC_Scope, 50, /*->20453*/ // 12 children in Scope
/* 20403*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20405*/        OPC_Scope, 22, /*->20429*/ // 2 children in Scope
/* 20407*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20409*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_az_extloadi8
/* 20411*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20413*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20416*/          OPC_EmitMergeInputChains1_0,
/* 20417*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20420*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20429*/        /*Scope*/ 22, /*->20452*/
/* 20430*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20432*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_az_extloadi16
/* 20434*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20436*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20439*/          OPC_EmitMergeInputChains1_0,
/* 20440*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20443*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20452*/        0, /*End of Scope*/
/* 20453*/      /*Scope*/ 22, /*->20476*/
/* 20454*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20456*/        OPC_CheckPredicate, 15, // Predicate_vtx_id3_load
/* 20458*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20460*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20463*/        OPC_EmitMergeInputChains1_0,
/* 20464*/        OPC_EmitInteger, MVT::i8, 3, 
/* 20467*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20476*/      /*Scope*/ 50, /*->20527*/
/* 20477*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20479*/        OPC_Scope, 22, /*->20503*/ // 2 children in Scope
/* 20481*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20483*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi8
/* 20485*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20487*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20490*/          OPC_EmitMergeInputChains1_0,
/* 20491*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20494*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20503*/        /*Scope*/ 22, /*->20526*/
/* 20504*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20506*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi16
/* 20508*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20510*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20513*/          OPC_EmitMergeInputChains1_0,
/* 20514*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20517*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20526*/        0, /*End of Scope*/
/* 20527*/      /*Scope*/ 22, /*->20550*/
/* 20528*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20530*/        OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 20532*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20534*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20537*/        OPC_EmitMergeInputChains1_0,
/* 20538*/        OPC_EmitInteger, MVT::i8, 2, 
/* 20541*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20550*/      /*Scope*/ 50, /*->20601*/
/* 20551*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20553*/        OPC_Scope, 22, /*->20577*/ // 2 children in Scope
/* 20555*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20557*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi8
/* 20559*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20561*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20564*/          OPC_EmitMergeInputChains1_0,
/* 20565*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20568*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20577*/        /*Scope*/ 22, /*->20600*/
/* 20578*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20580*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi16
/* 20582*/          OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20584*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20587*/          OPC_EmitMergeInputChains1_0,
/* 20588*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20591*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_eg), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20600*/        0, /*End of Scope*/
/* 20601*/      /*Scope*/ 22, /*->20624*/
/* 20602*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20604*/        OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 20606*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 20608*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20611*/        OPC_EmitMergeInputChains1_0,
/* 20612*/        OPC_EmitInteger, MVT::i8, 1, 
/* 20615*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_eg:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20624*/      /*Scope*/ 50, /*->20675*/
/* 20625*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20627*/        OPC_Scope, 22, /*->20651*/ // 2 children in Scope
/* 20629*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20631*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_az_extloadi8
/* 20633*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20635*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20638*/          OPC_EmitMergeInputChains1_0,
/* 20639*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20642*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id3_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20651*/        /*Scope*/ 22, /*->20674*/
/* 20652*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20654*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_az_extloadi16
/* 20656*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20658*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20661*/          OPC_EmitMergeInputChains1_0,
/* 20662*/          OPC_EmitInteger, MVT::i8, 3, 
/* 20665*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id3_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20674*/        0, /*End of Scope*/
/* 20675*/      /*Scope*/ 22, /*->20698*/
/* 20676*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20678*/        OPC_CheckPredicate, 15, // Predicate_vtx_id3_load
/* 20680*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20682*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20685*/        OPC_EmitMergeInputChains1_0,
/* 20686*/        OPC_EmitInteger, MVT::i8, 3, 
/* 20689*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 20698*/      /*Scope*/ 50, /*->20749*/
/* 20699*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20701*/        OPC_Scope, 22, /*->20725*/ // 2 children in Scope
/* 20703*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20705*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi8
/* 20707*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20709*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20712*/          OPC_EmitMergeInputChains1_0,
/* 20713*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20716*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id2_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20725*/        /*Scope*/ 22, /*->20748*/
/* 20726*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20728*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_az_extloadi16
/* 20730*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20732*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20735*/          OPC_EmitMergeInputChains1_0,
/* 20736*/          OPC_EmitInteger, MVT::i8, 2, 
/* 20739*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id2_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20748*/        0, /*End of Scope*/
/* 20749*/      /*Scope*/ 22, /*->20772*/
/* 20750*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20752*/        OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 20754*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20756*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20759*/        OPC_EmitMergeInputChains1_0,
/* 20760*/        OPC_EmitInteger, MVT::i8, 2, 
/* 20763*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 20772*/      /*Scope*/ 50, /*->20823*/
/* 20773*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20775*/        OPC_Scope, 22, /*->20799*/ // 2 children in Scope
/* 20777*/          OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20779*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi8
/* 20781*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20783*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20786*/          OPC_EmitMergeInputChains1_0,
/* 20787*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20790*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_8_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_vtx_id1_az_extloadi8>> - Complexity = 13
                    // Dst: (VTX_READ_8_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20799*/        /*Scope*/ 22, /*->20822*/
/* 20800*/          OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 20802*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_az_extloadi16
/* 20804*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20806*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20809*/          OPC_EmitMergeInputChains1_0,
/* 20810*/          OPC_EmitInteger, MVT::i8, 1, 
/* 20813*/          OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_16_cm), 0|OPFL_Chain|OPFL_MemRefs,
                        MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                    // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_vtx_id1_az_extloadi16>> - Complexity = 13
                    // Dst: (VTX_READ_16_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20822*/        0, /*End of Scope*/
/* 20823*/      /*Scope*/ 22, /*->20846*/
/* 20824*/        OPC_CheckPredicate, 17, // Predicate_load
/* 20826*/        OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 20828*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 20830*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 20833*/        OPC_EmitMergeInputChains1_0,
/* 20834*/        OPC_EmitInteger, MVT::i8, 1, 
/* 20837*/        OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_32_cm), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:{ *:[i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                  // Dst: (VTX_READ_32_cm:{ *:[i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 20846*/      0, /*End of Scope*/
/* 20847*/    /*Scope*/ 43, /*->20891*/
/* 20848*/      OPC_CheckPredicate, 20, // Predicate_load_local
/* 20850*/      OPC_CheckType, MVT::i32,
/* 20852*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20854*/      OPC_EmitMergeInputChains1_0,
/* 20855*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20858*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20870*/      OPC_EmitInteger, MVT::i32, 1, 
/* 20873*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20876*/      OPC_EmitInteger, MVT::i32, 0, 
/* 20879*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                // Src: (ld:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_load_local>> - Complexity = 4
                // Dst: (LDS_READ_RET:{ *:[i32] } R600_Reg32:{ *:[iPTR] }:$src0)
/* 20891*/    /*Scope*/ 84|128,3/*468*/, /*->21361*/
/* 20893*/      OPC_CheckChild1Type, MVT::i32,
/* 20895*/      OPC_Scope, 45, /*->20942*/ // 5 children in Scope
/* 20897*/        OPC_CheckPredicate, 21, // Predicate_sextload
/* 20899*/        OPC_CheckPredicate, 22, // Predicate_sextloadi8_local
/* 20901*/        OPC_CheckType, MVT::i32,
/* 20903*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20905*/        OPC_EmitMergeInputChains1_0,
/* 20906*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20909*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20921*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20924*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20927*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20930*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_BYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_local>> - Complexity = 4
                  // Dst: (LDS_BYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 20942*/      /*Scope*/ 47, /*->20990*/
/* 20943*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 20945*/        OPC_CheckPredicate, 14, // Predicate_az_extloadi8
/* 20947*/        OPC_CheckPredicate, 23, // Predicate_az_extloadi8_local
/* 20949*/        OPC_CheckType, MVT::i32,
/* 20951*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20953*/        OPC_EmitMergeInputChains1_0,
/* 20954*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20957*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 20969*/        OPC_EmitInteger, MVT::i32, 1, 
/* 20972*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 20975*/        OPC_EmitInteger, MVT::i32, 0, 
/* 20978*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_UBYTE_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi8>><<P:Predicate_az_extloadi8_local>> - Complexity = 4
                  // Dst: (LDS_UBYTE_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 20990*/      /*Scope*/ 45, /*->21036*/
/* 20991*/        OPC_CheckPredicate, 21, // Predicate_sextload
/* 20993*/        OPC_CheckPredicate, 24, // Predicate_sextloadi16_local
/* 20995*/        OPC_CheckType, MVT::i32,
/* 20997*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 20999*/        OPC_EmitMergeInputChains1_0,
/* 21000*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21003*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21015*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21018*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21021*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21024*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_local>> - Complexity = 4
                  // Dst: (LDS_SHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 21036*/      /*Scope*/ 47, /*->21084*/
/* 21037*/        OPC_CheckPredicate, 13, // Predicate_az_extload
/* 21039*/        OPC_CheckPredicate, 16, // Predicate_az_extloadi16
/* 21041*/        OPC_CheckPredicate, 23, // Predicate_az_extloadi16_local
/* 21043*/        OPC_CheckType, MVT::i32,
/* 21045*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21047*/        OPC_EmitMergeInputChains1_0,
/* 21048*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21051*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21063*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21066*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21069*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21072*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_USHORT_READ_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 6/*#Ops*/, 1, 2, 3, 4, 5, 6, 
                  // Src: (ld:{ *:[i32] } i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedload>><<P:Predicate_az_extload>><<P:Predicate_az_extloadi16>><<P:Predicate_az_extloadi16_local>> - Complexity = 4
                  // Dst: (LDS_USHORT_READ_RET:{ *:[i32] } i32:{ *:[i32] }:$src0)
/* 21084*/      /*Scope*/ 18|128,2/*274*/, /*->21360*/
/* 21086*/        OPC_CheckPredicate, 17, // Predicate_load
/* 21088*/        OPC_Scope, 44, /*->21134*/ // 6 children in Scope
/* 21090*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_load
/* 21092*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21113
/* 21095*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21097*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21100*/            OPC_EmitMergeInputChains1_0,
/* 21101*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21104*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21113*/          /*SwitchType*/ 18, MVT::v4i32,// ->21133
/* 21115*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21117*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21120*/            OPC_EmitMergeInputChains1_0,
/* 21121*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21124*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21133*/          0, // EndSwitchType
/* 21134*/        /*Scope*/ 44, /*->21179*/
/* 21135*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 21137*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21158
/* 21140*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21142*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21145*/            OPC_EmitMergeInputChains1_0,
/* 21146*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21149*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21158*/          /*SwitchType*/ 18, MVT::v4i32,// ->21178
/* 21160*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21162*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21165*/            OPC_EmitMergeInputChains1_0,
/* 21166*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21169*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21178*/          0, // EndSwitchType
/* 21179*/        /*Scope*/ 44, /*->21224*/
/* 21180*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 21182*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21203
/* 21185*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21187*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21190*/            OPC_EmitMergeInputChains1_0,
/* 21191*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21194*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_eg:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21203*/          /*SwitchType*/ 18, MVT::v4i32,// ->21223
/* 21205*/            OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 21207*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21210*/            OPC_EmitMergeInputChains1_0,
/* 21211*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21214*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_eg:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21223*/          0, // EndSwitchType
/* 21224*/        /*Scope*/ 44, /*->21269*/
/* 21225*/          OPC_CheckPredicate, 15, // Predicate_vtx_id3_load
/* 21227*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21248
/* 21230*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21232*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21235*/            OPC_EmitMergeInputChains1_0,
/* 21236*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21239*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21248*/          /*SwitchType*/ 18, MVT::v4i32,// ->21268
/* 21250*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21252*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21255*/            OPC_EmitMergeInputChains1_0,
/* 21256*/            OPC_EmitInteger, MVT::i8, 3, 
/* 21259*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id3_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 3:{ *:[i8] })
/* 21268*/          0, // EndSwitchType
/* 21269*/        /*Scope*/ 44, /*->21314*/
/* 21270*/          OPC_CheckPredicate, 18, // Predicate_vtx_id2_load
/* 21272*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21293
/* 21275*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21277*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21280*/            OPC_EmitMergeInputChains1_0,
/* 21281*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21284*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21293*/          /*SwitchType*/ 18, MVT::v4i32,// ->21313
/* 21295*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21297*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21300*/            OPC_EmitMergeInputChains1_0,
/* 21301*/            OPC_EmitInteger, MVT::i8, 2, 
/* 21304*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id2_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 2:{ *:[i8] })
/* 21313*/          0, // EndSwitchType
/* 21314*/        /*Scope*/ 44, /*->21359*/
/* 21315*/          OPC_CheckPredicate, 19, // Predicate_vtx_id1_load
/* 21317*/          OPC_SwitchType /*2 cases */, 18, MVT::v2i32,// ->21338
/* 21320*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21322*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21325*/            OPC_EmitMergeInputChains1_0,
/* 21326*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21329*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_64_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v2i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_64_cm:{ *:[v2i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21338*/          /*SwitchType*/ 18, MVT::v4i32,// ->21358
/* 21340*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21342*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRVTX_READ:$src_gpr #2 #3
/* 21345*/            OPC_EmitMergeInputChains1_0,
/* 21346*/            OPC_EmitInteger, MVT::i8, 1, 
/* 21349*/            OPC_MorphNodeTo1, TARGET_VAL(R600::VTX_READ_128_cm), 0|OPFL_Chain|OPFL_MemRefs,
                          MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (ld:{ *:[v4i32] } ADDRVTX_READ:{ *:[i32] }:$src_gpr)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_vtx_id1_load>> - Complexity = 13
                      // Dst: (VTX_READ_128_cm:{ *:[v4i32] } MEMxi:{ *:[i32] }:$src_gpr, 1:{ *:[i8] })
/* 21358*/          0, // EndSwitchType
/* 21359*/        0, /*End of Scope*/
/* 21360*/      0, /*End of Scope*/
/* 21361*/    0, /*End of Scope*/
/* 21362*/  /*SwitchOpcode*/ 74|128,2/*330*/, TARGET_VAL(ISD::STORE),// ->21696
/* 21366*/    OPC_RecordMemRef,
/* 21367*/    OPC_RecordNode, // #0 = 'st' chained node
/* 21368*/    OPC_RecordChild1, // #1 = $val
/* 21369*/    OPC_Scope, 119|128,1/*247*/, /*->21619*/ // 3 children in Scope
/* 21372*/      OPC_CheckChild1Type, MVT::i32,
/* 21374*/      OPC_RecordChild2, // #2 = $addr
/* 21375*/      OPC_CheckPredicate, 25, // Predicate_unindexedstore
/* 21377*/      OPC_Scope, 20, /*->21399*/ // 3 children in Scope
/* 21379*/        OPC_CheckPredicate, 26, // Predicate_store_private
/* 21381*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21383*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRIndirect:$addr #3 #4
/* 21386*/        OPC_EmitMergeInputChains1_0,
/* 21387*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21390*/        OPC_MorphNodeTo0, TARGET_VAL(R600::R600_RegisterStore), 0|OPFL_Chain|OPFL_MemRefs,
                      4/*#Ops*/, 1, 3, 4, 5, 
                  // Src: (st i32:{ *:[i32] }:$val, ADDRIndirect:{ *:[iPTR] }:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store_private>> - Complexity = 13
                  // Dst: (R600_RegisterStore i32:{ *:[i32] }:$val, FRAMEri:{ *:[iPTR] }:$addr, 0:{ *:[i32] })
/* 21399*/      /*Scope*/ 58, /*->21458*/
/* 21400*/        OPC_CheckPredicate, 27, // Predicate_store_local
/* 21402*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21404*/        OPC_EmitMergeInputChains1_0,
/* 21405*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21408*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21420*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21423*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21435*/        OPC_EmitInteger, MVT::i32, 1, 
/* 21438*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21441*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21444*/        OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                      9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                  // Src: (st R600_Reg32:{ *:[i32] }:$src1, R600_Reg32:{ *:[iPTR] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_store_local>> - Complexity = 4
                  // Dst: (LDS_WRITE R600_Reg32:{ *:[iPTR] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 21458*/      /*Scope*/ 30|128,1/*158*/, /*->21618*/
/* 21460*/        OPC_CheckChild2Type, MVT::i32,
/* 21462*/        OPC_Scope, 122, /*->21586*/ // 2 children in Scope
/* 21464*/          OPC_CheckPredicate, 28, // Predicate_truncstore
/* 21466*/          OPC_Scope, 58, /*->21526*/ // 2 children in Scope
/* 21468*/            OPC_CheckPredicate, 22, // Predicate_truncstorei8_local
/* 21470*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21472*/            OPC_EmitMergeInputChains1_0,
/* 21473*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21476*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21488*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21491*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21503*/            OPC_EmitInteger, MVT::i32, 1, 
/* 21506*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21509*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21512*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_BYTE_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_local>> - Complexity = 4
                      // Dst: (LDS_BYTE_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21526*/          /*Scope*/ 58, /*->21585*/
/* 21527*/            OPC_CheckPredicate, 24, // Predicate_truncstorei16_local
/* 21529*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21531*/            OPC_EmitMergeInputChains1_0,
/* 21532*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21535*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21547*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21550*/            OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21562*/            OPC_EmitInteger, MVT::i32, 1, 
/* 21565*/            OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21568*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21571*/            OPC_MorphNodeTo0, TARGET_VAL(R600::LDS_SHORT_WRITE), 0|OPFL_Chain|OPFL_MemRefs,
                          9/*#Ops*/, 2, 3, 4, 1, 5, 6, 7, 8, 9, 
                      // Src: (st i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_local>> - Complexity = 4
                      // Dst: (LDS_SHORT_WRITE i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 21585*/          0, /*End of Scope*/
/* 21586*/        /*Scope*/ 30, /*->21617*/
/* 21587*/          OPC_CheckPredicate, 29, // Predicate_store_global
/* 21589*/          OPC_Scope, 10, /*->21601*/ // 2 children in Scope
/* 21591*/            OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21593*/            OPC_EmitMergeInputChains1_0,
/* 21594*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD32), 0|OPFL_Chain|OPFL_MemRefs,
                          2/*#Ops*/, 1, 2, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_STORE_DWORD32 i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21601*/          /*Scope*/ 14, /*->21616*/
/* 21602*/            OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21604*/            OPC_EmitMergeInputChains1_0,
/* 21605*/            OPC_EmitInteger, MVT::i32, 0, 
/* 21608*/            OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_32_eg), 0|OPFL_Chain|OPFL_MemRefs,
                          3/*#Ops*/, 1, 2, 3, 
                      // Src: (st i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                      // Dst: (RAT_WRITE_CACHELESS_32_eg i32:{ *:[i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21616*/          0, /*End of Scope*/
/* 21617*/        0, /*End of Scope*/
/* 21618*/      0, /*End of Scope*/
/* 21619*/    /*Scope*/ 37, /*->21657*/
/* 21620*/      OPC_CheckChild1Type, MVT::v2i32,
/* 21622*/      OPC_RecordChild2, // #2 = $index_gpr
/* 21623*/      OPC_CheckChild2Type, MVT::i32,
/* 21625*/      OPC_CheckPredicate, 25, // Predicate_unindexedstore
/* 21627*/      OPC_CheckPredicate, 29, // Predicate_store_global
/* 21629*/      OPC_Scope, 10, /*->21641*/ // 2 children in Scope
/* 21631*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21633*/        OPC_EmitMergeInputChains1_0,
/* 21634*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD64), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD64 v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21641*/      /*Scope*/ 14, /*->21656*/
/* 21642*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21644*/        OPC_EmitMergeInputChains1_0,
/* 21645*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21648*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_64_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_64_eg v2i32:{ *:[v2i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21656*/      0, /*End of Scope*/
/* 21657*/    /*Scope*/ 37, /*->21695*/
/* 21658*/      OPC_CheckChild1Type, MVT::v4i32,
/* 21660*/      OPC_RecordChild2, // #2 = $index_gpr
/* 21661*/      OPC_CheckChild2Type, MVT::i32,
/* 21663*/      OPC_CheckPredicate, 25, // Predicate_unindexedstore
/* 21665*/      OPC_CheckPredicate, 29, // Predicate_store_global
/* 21667*/      OPC_Scope, 10, /*->21679*/ // 2 children in Scope
/* 21669*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 21671*/        OPC_EmitMergeInputChains1_0,
/* 21672*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_STORE_DWORD128), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#Ops*/, 1, 2, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_STORE_DWORD128 v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21679*/      /*Scope*/ 14, /*->21694*/
/* 21680*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21682*/        OPC_EmitMergeInputChains1_0,
/* 21683*/        OPC_EmitInteger, MVT::i32, 0, 
/* 21686*/        OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_WRITE_CACHELESS_128_eg), 0|OPFL_Chain|OPFL_MemRefs,
                      3/*#Ops*/, 1, 2, 3, 
                  // Src: (st v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_unindexedstore>><<P:Predicate_store_global>> - Complexity = 4
                  // Dst: (RAT_WRITE_CACHELESS_128_eg v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 21694*/      0, /*End of Scope*/
/* 21695*/    0, /*End of Scope*/
/* 21696*/  /*SwitchOpcode*/ 113|128,26/*3441*/, TARGET_VAL(ISD::XOR),// ->25141
/* 21700*/    OPC_Scope, 66|128,3/*450*/, /*->22153*/ // 5 children in Scope
/* 21703*/      OPC_RecordChild0, // #0 = $z
/* 21704*/      OPC_MoveChild1,
/* 21705*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 21708*/      OPC_Scope, 91|128,1/*219*/, /*->21930*/ // 2 children in Scope
/* 21711*/        OPC_RecordChild0, // #1 = $x
/* 21712*/        OPC_MoveChild1,
/* 21713*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 21716*/        OPC_Scope, 105, /*->21823*/ // 2 children in Scope
/* 21718*/          OPC_RecordChild0, // #2 = $y
/* 21719*/          OPC_CheckChild1Same, 0,
/* 21721*/          OPC_MoveParent,
/* 21722*/          OPC_MoveParent,
/* 21723*/          OPC_CheckType, MVT::i32,
/* 21725*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21727*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21730*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21733*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21736*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21739*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21751*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21754*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21757*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21769*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21772*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21775*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21787*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21790*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21793*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21796*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21799*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 21823*/        /*Scope*/ 105, /*->21929*/
/* 21824*/          OPC_CheckChild0Same, 0,
/* 21826*/          OPC_RecordChild1, // #2 = $y
/* 21827*/          OPC_MoveParent,
/* 21828*/          OPC_MoveParent,
/* 21829*/          OPC_CheckType, MVT::i32,
/* 21831*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21833*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21836*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21839*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21842*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21845*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21857*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21860*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21863*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21875*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21878*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21881*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21893*/          OPC_EmitInteger, MVT::i32, 1, 
/* 21896*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 21899*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21902*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21905*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y))) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 21929*/        0, /*End of Scope*/
/* 21930*/      /*Scope*/ 92|128,1/*220*/, /*->22152*/
/* 21932*/        OPC_MoveChild0,
/* 21933*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 21936*/        OPC_Scope, 106, /*->22044*/ // 2 children in Scope
/* 21938*/          OPC_RecordChild0, // #1 = $y
/* 21939*/          OPC_CheckChild1Same, 0,
/* 21941*/          OPC_MoveParent,
/* 21942*/          OPC_RecordChild1, // #2 = $x
/* 21943*/          OPC_MoveParent,
/* 21944*/          OPC_CheckType, MVT::i32,
/* 21946*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 21948*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21951*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21954*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21957*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21960*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21972*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21975*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21978*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 21990*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21993*/          OPC_EmitInteger, MVT::i32, 0, 
/* 21996*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22008*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22011*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22014*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22017*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22020*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22044*/        /*Scope*/ 106, /*->22151*/
/* 22045*/          OPC_CheckChild0Same, 0,
/* 22047*/          OPC_RecordChild1, // #1 = $y
/* 22048*/          OPC_MoveParent,
/* 22049*/          OPC_RecordChild1, // #2 = $x
/* 22050*/          OPC_MoveParent,
/* 22051*/          OPC_CheckType, MVT::i32,
/* 22053*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22055*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22058*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22061*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22064*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22067*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22079*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22082*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22085*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22097*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22100*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22103*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22115*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22118*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22121*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22124*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22127*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } i32:{ *:[i32] }:$z, (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x)) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22151*/        0, /*End of Scope*/
/* 22152*/      0, /*End of Scope*/
/* 22153*/    /*Scope*/ 56|128,3/*440*/, /*->22595*/
/* 22155*/      OPC_MoveChild0,
/* 22156*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 22159*/      OPC_Scope, 87|128,1/*215*/, /*->22377*/ // 2 children in Scope
/* 22162*/        OPC_RecordChild0, // #0 = $x
/* 22163*/        OPC_MoveChild1,
/* 22164*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22167*/        OPC_RecordChild0, // #1 = $y
/* 22168*/        OPC_RecordChild1, // #2 = $z
/* 22169*/        OPC_MoveParent,
/* 22170*/        OPC_MoveParent,
/* 22171*/        OPC_CheckType, MVT::i32,
/* 22173*/        OPC_Scope, 100, /*->22275*/ // 2 children in Scope
/* 22175*/          OPC_CheckChild1Same, 2,
/* 22177*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22179*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22182*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22185*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22188*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22191*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22203*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22206*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22209*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22221*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22224*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22227*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22239*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22242*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22245*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22248*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22251*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22275*/        /*Scope*/ 100, /*->22376*/
/* 22276*/          OPC_CheckChild1Same, 1,
/* 22278*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22280*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22283*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22286*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22289*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22292*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22304*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22307*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22310*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22322*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22325*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22328*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22340*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22343*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22346*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22349*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22352*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 2, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22376*/        0, /*End of Scope*/
/* 22377*/      /*Scope*/ 87|128,1/*215*/, /*->22594*/
/* 22379*/        OPC_MoveChild0,
/* 22380*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22383*/        OPC_RecordChild0, // #0 = $y
/* 22384*/        OPC_RecordChild1, // #1 = $z
/* 22385*/        OPC_MoveParent,
/* 22386*/        OPC_RecordChild1, // #2 = $x
/* 22387*/        OPC_MoveParent,
/* 22388*/        OPC_CheckType, MVT::i32,
/* 22390*/        OPC_Scope, 100, /*->22492*/ // 2 children in Scope
/* 22392*/          OPC_CheckChild1Same, 1,
/* 22394*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22396*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22399*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22402*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22405*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22408*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22420*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22423*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22426*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22438*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22441*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22444*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22456*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22459*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22462*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22465*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22468*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 0, 8, 9, 10, 1, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$y, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22492*/        /*Scope*/ 100, /*->22593*/
/* 22493*/          OPC_CheckChild1Same, 0,
/* 22495*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22497*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22500*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22503*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22506*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22509*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22521*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22524*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22527*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22539*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22542*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22545*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22557*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22560*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22563*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22566*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22569*/          OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 2, 5, 6, 7, 1, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (xor:{ *:[i32] } (and:{ *:[i32] } (xor:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$z) - Complexity = 9
                    // Dst: (BFI_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$x, ?:{ *:[i32] }:$y, ?:{ *:[i32] }:$z)
/* 22593*/        0, /*End of Scope*/
/* 22594*/      0, /*End of Scope*/
/* 22595*/    /*Scope*/ 30|128,9/*1182*/, /*->23779*/
/* 22597*/      OPC_RecordChild0, // #0 = $z
/* 22598*/      OPC_MoveChild1,
/* 22599*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 22602*/      OPC_Scope, 73|128,4/*585*/, /*->23190*/ // 2 children in Scope
/* 22605*/        OPC_RecordChild0, // #1 = $x
/* 22606*/        OPC_MoveChild1,
/* 22607*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 22610*/        OPC_Scope, 31|128,2/*287*/, /*->22900*/ // 2 children in Scope
/* 22613*/          OPC_RecordChild0, // #2 = $y
/* 22614*/          OPC_CheckChild1Same, 0,
/* 22616*/          OPC_MoveParent,
/* 22617*/          OPC_MoveParent,
/* 22618*/          OPC_CheckType, MVT::i64,
/* 22620*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22622*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 22625*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22628*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22631*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22634*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 22642*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22645*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22648*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22660*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22663*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 22671*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22674*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22677*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22689*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22692*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 22700*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22703*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22706*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22718*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22721*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22724*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22727*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22730*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 22754*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22757*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22760*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22763*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22766*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 22774*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22777*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22780*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22792*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22795*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 22803*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22806*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22809*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22821*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22824*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 22832*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22835*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22838*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22850*/          OPC_EmitInteger, MVT::i32, 1, 
/* 22853*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 22856*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22859*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22862*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 22886*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 22889*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 22900*/        /*Scope*/ 31|128,2/*287*/, /*->23189*/
/* 22902*/          OPC_CheckChild0Same, 0,
/* 22904*/          OPC_RecordChild1, // #2 = $y
/* 22905*/          OPC_MoveParent,
/* 22906*/          OPC_MoveParent,
/* 22907*/          OPC_CheckType, MVT::i64,
/* 22909*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 22911*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 22914*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22917*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22920*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22923*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 6,  // Results = #7
/* 22931*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22934*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22937*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22949*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22952*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 22960*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22963*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22966*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 22978*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 22981*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 22989*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22992*/          OPC_EmitInteger, MVT::i32, 0, 
/* 22995*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23007*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23010*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23013*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23016*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23019*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23043*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23046*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23049*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23052*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23055*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 29,  // Results = #30
/* 23063*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23066*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23069*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23081*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23084*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 23092*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23095*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23098*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23110*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23113*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23121*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23124*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23127*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23139*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23142*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23145*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23148*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23151*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23175*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23178*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y))) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23189*/        0, /*End of Scope*/
/* 23190*/      /*Scope*/ 74|128,4/*586*/, /*->23778*/
/* 23192*/        OPC_MoveChild0,
/* 23193*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 23196*/        OPC_Scope, 32|128,2/*288*/, /*->23487*/ // 2 children in Scope
/* 23199*/          OPC_RecordChild0, // #1 = $y
/* 23200*/          OPC_CheckChild1Same, 0,
/* 23202*/          OPC_MoveParent,
/* 23203*/          OPC_RecordChild1, // #2 = $x
/* 23204*/          OPC_MoveParent,
/* 23205*/          OPC_CheckType, MVT::i64,
/* 23207*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23209*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23212*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23215*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23218*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23221*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 23229*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23232*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23235*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23247*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23250*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23258*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23261*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23264*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23276*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23279*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 23287*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23290*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23293*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23305*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23308*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23311*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23314*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23317*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23341*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23344*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23347*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23350*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23353*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 23361*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23364*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23367*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23379*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23382*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 23390*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23393*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23396*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23408*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23411*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23419*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23422*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23425*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23437*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23440*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23443*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23446*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23449*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23473*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23476*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23487*/        /*Scope*/ 32|128,2/*288*/, /*->23777*/
/* 23489*/          OPC_CheckChild0Same, 0,
/* 23491*/          OPC_RecordChild1, // #1 = $y
/* 23492*/          OPC_MoveParent,
/* 23493*/          OPC_RecordChild1, // #2 = $x
/* 23494*/          OPC_MoveParent,
/* 23495*/          OPC_CheckType, MVT::i64,
/* 23497*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23499*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23502*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23505*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23508*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23511*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 23519*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23522*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23525*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23537*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23540*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23548*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23551*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23554*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23566*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23569*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 23577*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23580*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23583*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23595*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23598*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23601*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23604*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23607*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23631*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23634*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23637*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23640*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23643*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 23651*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23654*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23657*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23669*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23672*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 23680*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23683*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23686*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23698*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23701*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 23709*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23712*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23715*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23727*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23730*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23733*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23736*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23739*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 23763*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23766*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } i64:{ *:[i64] }:$z, (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x)) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 23777*/        0, /*End of Scope*/
/* 23778*/      0, /*End of Scope*/
/* 23779*/    /*Scope*/ 20|128,9/*1172*/, /*->24953*/
/* 23781*/      OPC_MoveChild0,
/* 23782*/      OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/* 23785*/      OPC_Scope, 69|128,4/*581*/, /*->24369*/ // 2 children in Scope
/* 23788*/        OPC_RecordChild0, // #0 = $x
/* 23789*/        OPC_MoveChild1,
/* 23790*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 23793*/        OPC_RecordChild0, // #1 = $y
/* 23794*/        OPC_RecordChild1, // #2 = $z
/* 23795*/        OPC_MoveParent,
/* 23796*/        OPC_MoveParent,
/* 23797*/        OPC_CheckType, MVT::i64,
/* 23799*/        OPC_Scope, 26|128,2/*282*/, /*->24084*/ // 2 children in Scope
/* 23802*/          OPC_CheckChild1Same, 2,
/* 23804*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 23806*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 23809*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23812*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23815*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23818*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 23826*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23829*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23832*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23844*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23847*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 23855*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23858*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23861*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23873*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23876*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 16,  // Results = #17
/* 23884*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23887*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23890*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23902*/          OPC_EmitInteger, MVT::i32, 1, 
/* 23905*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 23908*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23911*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23914*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 23938*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 23941*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23944*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23947*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23950*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 23958*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23961*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23964*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 23976*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 23979*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 23987*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23990*/          OPC_EmitInteger, MVT::i32, 0, 
/* 23993*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24005*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24008*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 39,  // Results = #40
/* 24016*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24019*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24022*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24034*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24037*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24040*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24043*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24046*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24070*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24073*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24084*/        /*Scope*/ 26|128,2/*282*/, /*->24368*/
/* 24086*/          OPC_CheckChild1Same, 1,
/* 24088*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24090*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24093*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24096*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24099*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24102*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 6,  // Results = #7
/* 24110*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24113*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24116*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24128*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24131*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 11,  // Results = #12
/* 24139*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24142*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24145*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24157*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24160*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 24168*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24171*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24174*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24186*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24189*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24192*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24195*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24198*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24222*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24225*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24228*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24231*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24234*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 29,  // Results = #30
/* 24242*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24245*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24248*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24260*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24263*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 34,  // Results = #35
/* 24271*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24274*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24277*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24289*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24292*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 24300*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24303*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24306*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24318*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24321*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24324*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24327*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24330*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24354*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24357*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } i64:{ *:[i64] }:$x, (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y)), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24368*/        0, /*End of Scope*/
/* 24369*/      /*Scope*/ 69|128,4/*581*/, /*->24952*/
/* 24371*/        OPC_MoveChild0,
/* 24372*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/* 24375*/        OPC_RecordChild0, // #0 = $y
/* 24376*/        OPC_RecordChild1, // #1 = $z
/* 24377*/        OPC_MoveParent,
/* 24378*/        OPC_RecordChild1, // #2 = $x
/* 24379*/        OPC_MoveParent,
/* 24380*/        OPC_CheckType, MVT::i64,
/* 24382*/        OPC_Scope, 26|128,2/*282*/, /*->24667*/ // 2 children in Scope
/* 24385*/          OPC_CheckChild1Same, 1,
/* 24387*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24389*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24392*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24395*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24398*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24401*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 24409*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24412*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24415*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24427*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24430*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 11,  // Results = #12
/* 24438*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24441*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24444*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24456*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24459*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 16,  // Results = #17
/* 24467*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24470*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24473*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24485*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24488*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24491*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24494*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24497*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24521*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24524*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24527*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24530*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24533*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 24541*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24544*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24547*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24559*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24562*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 34,  // Results = #35
/* 24570*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24573*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24576*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24588*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24591*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 39,  // Results = #40
/* 24599*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24602*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24605*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24617*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24620*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24623*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24626*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24629*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24653*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24656*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$y, i64:{ *:[i64] }:$z), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24667*/        /*Scope*/ 26|128,2/*282*/, /*->24951*/
/* 24669*/          OPC_CheckChild1Same, 0,
/* 24671*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24673*/          OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 24676*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24679*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24682*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24685*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 6,  // Results = #7
/* 24693*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24696*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24699*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24711*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24714*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 11,  // Results = #12
/* 24722*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24725*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24728*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24740*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24743*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 16,  // Results = #17
/* 24751*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24754*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24757*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24769*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24772*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24775*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24778*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24781*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 4, 5, 7, 8, 9, 10, 12, 13, 14, 15, 17, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 24805*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 24808*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24811*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24814*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24817*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 2, 29,  // Results = #30
/* 24825*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24828*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24831*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24843*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24846*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 1, 34,  // Results = #35
/* 24854*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24857*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24860*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24872*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24875*/          OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 39,  // Results = #40
/* 24883*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24886*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24889*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24901*/          OPC_EmitInteger, MVT::i32, 1, 
/* 24904*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 24907*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24910*/          OPC_EmitInteger, MVT::i32, 0, 
/* 24913*/          OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                        MVT::i32, 18/*#Ops*/, 27, 28, 30, 31, 32, 33, 35, 36, 37, 38, 40, 41, 42, 43, 44, 45, 46, 47,  // Results = #48
/* 24937*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 24940*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                        MVT::i64, 5/*#Ops*/, 3, 25, 26, 48, 49, 
                    // Src: (xor:{ *:[i64] } (and:{ *:[i64] } (xor:{ *:[i64] } i64:{ *:[i64] }:$z, i64:{ *:[i64] }:$y), i64:{ *:[i64] }:$x), i64:{ *:[i64] }:$z) - Complexity = 9
                    // Dst: (REG_SEQUENCE:{ *:[i64] } R600_Reg64:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub0:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub0:{ *:[i32] })), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$x, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$y, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[i64] }:$z, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 24951*/        0, /*End of Scope*/
/* 24952*/      0, /*End of Scope*/
/* 24953*/    /*Scope*/ 57|128,1/*185*/, /*->25140*/
/* 24955*/      OPC_RecordChild0, // #0 = $src0
/* 24956*/      OPC_CheckType, MVT::i32,
/* 24958*/      OPC_Scope, 77, /*->25037*/ // 2 children in Scope
/* 24960*/        OPC_CheckChild1Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 24971*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 24973*/        OPC_EmitInteger, MVT::i32, 1, 
/* 24976*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24979*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24982*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24985*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24988*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24991*/        OPC_EmitInteger, MVT::i32, 0, 
/* 24994*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25006*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25009*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25012*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25015*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25018*/        OPC_MorphNodeTo1, TARGET_VAL(R600::NOT_INT), 0,
                      MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, -1:{ *:[i32] }) - Complexity = 8
                  // Dst: (NOT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 25037*/      /*Scope*/ 101, /*->25139*/
/* 25038*/        OPC_RecordChild1, // #1 = $src1
/* 25039*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25041*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25044*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25047*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25050*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25053*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25056*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25059*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25062*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25065*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25068*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25080*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25083*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25086*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25089*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25101*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25104*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25107*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25110*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25113*/        OPC_MorphNodeTo1, TARGET_VAL(R600::XOR_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (xor:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (XOR_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 25139*/      0, /*End of Scope*/
/* 25140*/    0, /*End of Scope*/
/* 25141*/  /*SwitchOpcode*/ 45, TARGET_VAL(AMDGPUISD::CONST_ADDRESS),// ->25189
/* 25144*/    OPC_RecordChild0, // #0 = $src
/* 25145*/    OPC_CheckChild0Type, MVT::i32,
/* 25147*/    OPC_Scope, 12, /*->25161*/ // 2 children in Scope
/* 25149*/      OPC_CheckType, MVT::i32,
/* 25151*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectGlobalValueConstantOffset:$src #1
/* 25154*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CONST_COPY), 0|OPFL_Variadic1,
                    MVT::i32, 1/*#Ops*/, 1, 
                // Src: (CONST_ADDRESS:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src) - Complexity = 9
                // Dst: (CONST_COPY:{ *:[i32] } ADDRGA_CONST_OFFSET:{ *:[i32] }:$src)
/* 25161*/    /*Scope*/ 26, /*->25188*/
/* 25162*/      OPC_RecordChild1, // #1 = $buffer_id
/* 25163*/      OPC_MoveChild1,
/* 25164*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 25167*/      OPC_CheckType, MVT::i32,
/* 25169*/      OPC_MoveParent,
/* 25170*/      OPC_CheckType, MVT::v4i32,
/* 25172*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25174*/      OPC_CheckComplexPat, /*CP*/3, /*#*/0, // SelectGlobalValueVariableOffset:$ptr #2 #3
/* 25177*/      OPC_EmitConvertToTarget, 1,
/* 25179*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_VTX_CONSTBUF), 0|OPFL_Variadic2,
                    MVT::v4i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (CONST_ADDRESS:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id) - Complexity = 15
                // Dst: (TEX_VTX_CONSTBUF:{ *:[v4i32] } ADDRGA_VAR_OFFSET:{ *:[i32] }:$ptr, (imm:{ *:[i32] }):$buffer_id)
/* 25188*/    0, /*End of Scope*/
/* 25189*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->25446
/* 25193*/    OPC_RecordMemRef,
/* 25194*/    OPC_RecordNode, // #0 = 'atomic_load_add' chained node
/* 25195*/    OPC_RecordChild1, // #1 = $ptr
/* 25196*/    OPC_CheckChild1Type, MVT::i32,
/* 25198*/    OPC_CheckType, MVT::i32,
/* 25200*/    OPC_Scope, 63, /*->25265*/ // 3 children in Scope
/* 25202*/      OPC_CheckChild2Integer, 1, 
/* 25204*/      OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25206*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25208*/      OPC_EmitMergeInputChains1_0,
/* 25209*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25215*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25227*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25234*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25237*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25246*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25254*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25257*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_add_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25265*/    /*Scope*/ 72, /*->25338*/
/* 25266*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25277*/      OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25279*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25281*/      OPC_EmitMergeInputChains1_0,
/* 25282*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25288*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25300*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25307*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25310*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25319*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25327*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25330*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_add_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25338*/    /*Scope*/ 106, /*->25445*/
/* 25339*/      OPC_RecordChild2, // #2 = $data
/* 25340*/      OPC_Scope, 42, /*->25384*/ // 2 children in Scope
/* 25342*/        OPC_CheckPredicate, 30, // Predicate_atomic_add_global_noret
/* 25344*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25346*/        OPC_EmitMergeInputChains1_0,
/* 25347*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 25353*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25356*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 25365*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_ADD_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 25373*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25376*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_add_global_noret>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_ADD_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25384*/      /*Scope*/ 59, /*->25444*/
/* 25385*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_add_local
/* 25387*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25389*/        OPC_EmitMergeInputChains1_0,
/* 25390*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25393*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25405*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25408*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25420*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25423*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25426*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25429*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_ADD_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_add:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_add_local>> - Complexity = 4
                  // Dst: (LDS_ADD_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 25444*/      0, /*End of Scope*/
/* 25445*/    0, /*End of Scope*/
/* 25446*/  /*SwitchOpcode*/ 125|128,1/*253*/, TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->25703
/* 25450*/    OPC_RecordMemRef,
/* 25451*/    OPC_RecordNode, // #0 = 'atomic_load_sub' chained node
/* 25452*/    OPC_RecordChild1, // #1 = $ptr
/* 25453*/    OPC_CheckChild1Type, MVT::i32,
/* 25455*/    OPC_CheckType, MVT::i32,
/* 25457*/    OPC_Scope, 72, /*->25531*/ // 3 children in Scope
/* 25459*/      OPC_CheckChild2Integer, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25470*/      OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25472*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25474*/      OPC_EmitMergeInputChains1_0,
/* 25475*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25481*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25493*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25500*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25503*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25512*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_INC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25520*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25523*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, -1:{ *:[i32] })<<P:Predicate_atomic_sub_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_INC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25531*/    /*Scope*/ 63, /*->25595*/
/* 25532*/      OPC_CheckChild2Integer, 1, 
/* 25534*/      OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25536*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25538*/      OPC_EmitMergeInputChains1_0,
/* 25539*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #2
/* 25545*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25557*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 3,  // Results = #4
/* 25564*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25567*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 2, 4, 5,  // Results = #6
/* 25576*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_DEC_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 6, 1,  // Results = #7
/* 25584*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25587*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 7, 8, 
                // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, 1:{ *:[i32] })<<P:Predicate_atomic_sub_global_noret>> - Complexity = 9
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_DEC_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), (MOV_IMM_I32:{ *:[i32] } -1:{ *:[i32] }), sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25595*/    /*Scope*/ 106, /*->25702*/
/* 25596*/      OPC_RecordChild2, // #2 = $data
/* 25597*/      OPC_Scope, 42, /*->25641*/ // 2 children in Scope
/* 25599*/        OPC_CheckPredicate, 30, // Predicate_atomic_sub_global_noret
/* 25601*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25603*/        OPC_EmitMergeInputChains1_0,
/* 25604*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                      MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 25610*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25613*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 25622*/        OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_SUB_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 25630*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25633*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                      MVT::i32, 2/*#Ops*/, 6, 7, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_sub_global_noret>> - Complexity = 4
                  // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_SUB_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 25641*/      /*Scope*/ 59, /*->25701*/
/* 25642*/        OPC_CheckPredicate, 23, // Predicate_atomic_load_sub_local
/* 25644*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25646*/        OPC_EmitMergeInputChains1_0,
/* 25647*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25650*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25662*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25665*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 25677*/        OPC_EmitInteger, MVT::i32, 1, 
/* 25680*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 25683*/        OPC_EmitInteger, MVT::i32, 0, 
/* 25686*/        OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_SUB_RET), 0|OPFL_Chain|OPFL_MemRefs,
                      MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                  // Src: (atomic_load_sub:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_sub_local>> - Complexity = 4
                  // Dst: (LDS_SUB_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 25701*/      0, /*End of Scope*/
/* 25702*/    0, /*End of Scope*/
/* 25703*/  /*SwitchOpcode*/ 25|128,2/*281*/, TARGET_VAL(ISD::EXTRACT_VECTOR_ELT),// ->25988
/* 25707*/    OPC_RecordChild0, // #0 = $src
/* 25708*/    OPC_SwitchType /*2 cases */, 8|128,1/*136*/, MVT::i32,// ->25848
/* 25712*/      OPC_Scope, 82, /*->25796*/ // 2 children in Scope
/* 25714*/        OPC_CheckChild0Type, MVT::v4i32,
/* 25716*/        OPC_Scope, 15, /*->25733*/ // 5 children in Scope
/* 25718*/          OPC_CheckChild1Integer, 0, 
/* 25720*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25722*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25725*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub0:{ *:[i32] })
/* 25733*/        /*Scope*/ 15, /*->25749*/
/* 25734*/          OPC_CheckChild1Integer, 1, 
/* 25736*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25738*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25741*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub1:{ *:[i32] })
/* 25749*/        /*Scope*/ 15, /*->25765*/
/* 25750*/          OPC_CheckChild1Integer, 2, 
/* 25752*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25754*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 25757*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub2:{ *:[i32] })
/* 25765*/        /*Scope*/ 15, /*->25781*/
/* 25766*/          OPC_CheckChild1Integer, 3, 
/* 25768*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25770*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 25773*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v4i32] }:$src, sub3:{ *:[i32] })
/* 25781*/        /*Scope*/ 13, /*->25795*/
/* 25782*/          OPC_RecordChild1, // #1 = $index
/* 25783*/          OPC_CheckChild1Type, MVT::i32,
/* 25785*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25787*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$index)
/* 25795*/        0, /*End of Scope*/
/* 25796*/      /*Scope*/ 50, /*->25847*/
/* 25797*/        OPC_CheckChild0Type, MVT::v2i32,
/* 25799*/        OPC_Scope, 15, /*->25816*/ // 3 children in Scope
/* 25801*/          OPC_CheckChild1Integer, 0, 
/* 25803*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25805*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25808*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub0:{ *:[i32] })
/* 25816*/        /*Scope*/ 15, /*->25832*/
/* 25817*/          OPC_CheckChild1Integer, 1, 
/* 25819*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25821*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25824*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[v2i32] }:$src, sub1:{ *:[i32] })
/* 25832*/        /*Scope*/ 13, /*->25846*/
/* 25833*/          OPC_RecordChild1, // #1 = $index
/* 25834*/          OPC_CheckChild1Type, MVT::i32,
/* 25836*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25838*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$index)
/* 25846*/        0, /*End of Scope*/
/* 25847*/      0, /*End of Scope*/
/* 25848*/    /*SwitchType*/ 8|128,1/*136*/, MVT::f32,// ->25987
/* 25851*/      OPC_Scope, 82, /*->25935*/ // 2 children in Scope
/* 25853*/        OPC_CheckChild0Type, MVT::v4f32,
/* 25855*/        OPC_Scope, 15, /*->25872*/ // 5 children in Scope
/* 25857*/          OPC_CheckChild1Integer, 0, 
/* 25859*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25861*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25864*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub0:{ *:[i32] })
/* 25872*/        /*Scope*/ 15, /*->25888*/
/* 25873*/          OPC_CheckChild1Integer, 1, 
/* 25875*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25877*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25880*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub1:{ *:[i32] })
/* 25888*/        /*Scope*/ 15, /*->25904*/
/* 25889*/          OPC_CheckChild1Integer, 2, 
/* 25891*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25893*/          OPC_EmitInteger, MVT::i32, R600::sub2,
/* 25896*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 2:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub2:{ *:[i32] })
/* 25904*/        /*Scope*/ 15, /*->25920*/
/* 25905*/          OPC_CheckChild1Integer, 3, 
/* 25907*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25909*/          OPC_EmitInteger, MVT::i32, R600::sub3,
/* 25912*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$src, 3:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v4f32] }:$src, sub3:{ *:[i32] })
/* 25920*/        /*Scope*/ 13, /*->25934*/
/* 25921*/          OPC_RecordChild1, // #1 = $index
/* 25922*/          OPC_CheckChild1Type, MVT::i32,
/* 25924*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25926*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V4), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v4f32:{ *:[v4f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V4:{ *:[f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[i32] }:$index)
/* 25934*/        0, /*End of Scope*/
/* 25935*/      /*Scope*/ 50, /*->25986*/
/* 25936*/        OPC_CheckChild0Type, MVT::v2f32,
/* 25938*/        OPC_Scope, 15, /*->25955*/ // 3 children in Scope
/* 25940*/          OPC_CheckChild1Integer, 0, 
/* 25942*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25944*/          OPC_EmitInteger, MVT::i32, R600::sub0,
/* 25947*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 0:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub0:{ *:[i32] })
/* 25955*/        /*Scope*/ 15, /*->25971*/
/* 25956*/          OPC_CheckChild1Integer, 1, 
/* 25958*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25960*/          OPC_EmitInteger, MVT::i32, R600::sub1,
/* 25963*/          OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$src, 1:{ *:[iPTR] }) - Complexity = 8
                    // Dst: (EXTRACT_SUBREG:{ *:[f32] } ?:{ *:[v2f32] }:$src, sub1:{ *:[i32] })
/* 25971*/        /*Scope*/ 13, /*->25985*/
/* 25972*/          OPC_RecordChild1, // #1 = $index
/* 25973*/          OPC_CheckChild1Type, MVT::i32,
/* 25975*/          OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 25977*/          OPC_MorphNodeTo1, TARGET_VAL(R600::R600_EXTRACT_ELT_V2), 0,
                        MVT::f32, 2/*#Ops*/, 0, 1, 
                    // Src: (extractelt:{ *:[f32] } v2f32:{ *:[v2f32] }:$vec, i32:{ *:[i32] }:$index) - Complexity = 3
                    // Dst: (R600_EXTRACT_ELT_V2:{ *:[f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[i32] }:$index)
/* 25985*/        0, /*End of Scope*/
/* 25986*/      0, /*End of Scope*/
/* 25987*/    0, // EndSwitchType
/* 25988*/  /*SwitchOpcode*/ 35|128,4/*547*/, TARGET_VAL(ISD::ADD),// ->26539
/* 25992*/    OPC_Scope, 89|128,1/*217*/, /*->26212*/ // 2 children in Scope
/* 25995*/      OPC_MoveChild0,
/* 25996*/      OPC_SwitchOpcode /*2 cases */, 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->26104
/* 26000*/        OPC_RecordChild0, // #0 = $src0
/* 26001*/        OPC_RecordChild1, // #1 = $src1
/* 26002*/        OPC_MoveParent,
/* 26003*/        OPC_RecordChild1, // #2 = $src2
/* 26004*/        OPC_CheckType, MVT::i32,
/* 26006*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26008*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26011*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26014*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26017*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26020*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26032*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26035*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26038*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26050*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26053*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26056*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26068*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26071*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26074*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26077*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26080*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26104*/      /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->26211
/* 26107*/        OPC_RecordChild0, // #0 = $src0
/* 26108*/        OPC_RecordChild1, // #1 = $src1
/* 26109*/        OPC_MoveParent,
/* 26110*/        OPC_RecordChild1, // #2 = $src2
/* 26111*/        OPC_CheckType, MVT::i32,
/* 26113*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 26115*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26118*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26121*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26124*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26127*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26139*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26142*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26145*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26157*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26160*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26163*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26175*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26178*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26181*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26184*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26187*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                      MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                  // Src: (add:{ *:[i32] } (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1), i32:{ *:[i32] }:$src2) - Complexity = 8
                  // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26211*/      0, // EndSwitchOpcode
/* 26212*/    /*Scope*/ 68|128,2/*324*/, /*->26538*/
/* 26214*/      OPC_RecordChild0, // #0 = $src2
/* 26215*/      OPC_Scope, 87|128,1/*215*/, /*->26433*/ // 2 children in Scope
/* 26218*/        OPC_MoveChild1,
/* 26219*/        OPC_SwitchOpcode /*2 cases */, 103, TARGET_VAL(AMDGPUISD::MUL_U24),// ->26326
/* 26223*/          OPC_RecordChild0, // #1 = $src0
/* 26224*/          OPC_RecordChild1, // #2 = $src1
/* 26225*/          OPC_MoveParent,
/* 26226*/          OPC_CheckType, MVT::i32,
/* 26228*/          OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26230*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26233*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26236*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26239*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26242*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26254*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26257*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26260*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26272*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26275*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26278*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26290*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26293*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26296*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26299*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26302*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_UINT24_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26326*/        /*SwitchOpcode*/ 103, TARGET_VAL(AMDGPUISD::MUL_I24),// ->26432
/* 26329*/          OPC_RecordChild0, // #1 = $src0
/* 26330*/          OPC_RecordChild1, // #2 = $src1
/* 26331*/          OPC_MoveParent,
/* 26332*/          OPC_CheckType, MVT::i32,
/* 26334*/          OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 26336*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26339*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26342*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26345*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26348*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26360*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26363*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26366*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26378*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26381*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26384*/          OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26396*/          OPC_EmitInteger, MVT::i32, 1, 
/* 26399*/          OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26402*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26405*/          OPC_EmitInteger, MVT::i32, 0, 
/* 26408*/          OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                        MVT::i32, 18/*#Ops*/, 3, 4, 1, 5, 6, 7, 2, 8, 9, 10, 0, 11, 12, 13, 14, 15, 16, 17, 
                    // Src: (add:{ *:[i32] } i32:{ *:[i32] }:$src2, (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)) - Complexity = 8
                    // Dst: (MULADD_INT24_cm:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1, ?:{ *:[i32] }:$src2)
/* 26432*/        0, // EndSwitchOpcode
/* 26433*/      /*Scope*/ 103, /*->26537*/
/* 26434*/        OPC_RecordChild1, // #1 = $src1
/* 26435*/        OPC_CheckType, MVT::i32,
/* 26437*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26439*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26442*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26445*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26448*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26451*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26454*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26457*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26460*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26463*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26466*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26478*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26481*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26484*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26487*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26499*/        OPC_EmitInteger, MVT::i32, 1, 
/* 26502*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26505*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26508*/        OPC_EmitInteger, MVT::i32, 0, 
/* 26511*/        OPC_MorphNodeTo1, TARGET_VAL(R600::ADD_INT), 0,
                      MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                  // Src: (add:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                  // Dst: (ADD_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 26537*/      0, /*End of Scope*/
/* 26538*/    0, /*End of Scope*/
/* 26539*/  /*SwitchOpcode*/ 15, TARGET_VAL(AMDGPUISD::CONST_DATA_PTR),// ->26557
/* 26542*/    OPC_RecordChild0, // #0 = $addr
/* 26543*/    OPC_MoveChild0,
/* 26544*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/* 26547*/    OPC_MoveParent,
/* 26548*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26550*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_GLOBAL_ADDR), 0,
                  MVT::iPTR, 1/*#Ops*/, 0, 
              // Src: (AMDGPUconstdata_ptr:{ *:[iPTR] } (tglobaladdr:{ *:[iPTR] }):$addr) - Complexity = 6
              // Dst: (MOV_IMM_GLOBAL_ADDR:{ *:[iPTR] } (tglobaladdr:{ *:[i32] }):$addr)
/* 26557*/  /*SwitchOpcode*/ 20, TARGET_VAL(AMDGPUISD::STORE_MSKOR),// ->26580
/* 26560*/    OPC_RecordMemRef,
/* 26561*/    OPC_RecordNode, // #0 = 'AMDGPUstore_mskor' chained node
/* 26562*/    OPC_RecordChild1, // #1 = $rw_gpr
/* 26563*/    OPC_CheckChild1Type, MVT::v4i32,
/* 26565*/    OPC_RecordChild2, // #2 = $index_gpr
/* 26566*/    OPC_CheckChild2Type, MVT::i32,
/* 26568*/    OPC_CheckPredicate, 31, // Predicate_mskor_global
/* 26570*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26572*/    OPC_EmitMergeInputChains1_0,
/* 26573*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RAT_MSKOR), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#Ops*/, 1, 2, 
              // Src: (AMDGPUstore_mskor v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)<<P:Predicate_mskor_global>> - Complexity = 4
              // Dst: (RAT_MSKOR v4i32:{ *:[v4i32] }:$rw_gpr, i32:{ *:[i32] }:$index_gpr)
/* 26580*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_SWAP),// ->26696
/* 26583*/    OPC_RecordMemRef,
/* 26584*/    OPC_RecordNode, // #0 = 'atomic_swap' chained node
/* 26585*/    OPC_RecordChild1, // #1 = $ptr
/* 26586*/    OPC_CheckChild1Type, MVT::i32,
/* 26588*/    OPC_RecordChild2, // #2 = $data
/* 26589*/    OPC_CheckType, MVT::i32,
/* 26591*/    OPC_Scope, 42, /*->26635*/ // 2 children in Scope
/* 26593*/      OPC_CheckPredicate, 30, // Predicate_atomic_swap_global_noret
/* 26595*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26597*/      OPC_EmitMergeInputChains1_0,
/* 26598*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26604*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26607*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26616*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26624*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26627*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26635*/    /*Scope*/ 59, /*->26695*/
/* 26636*/      OPC_CheckPredicate, 23, // Predicate_atomic_swap_local
/* 26638*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26640*/      OPC_EmitMergeInputChains1_0,
/* 26641*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26644*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26656*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26659*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26671*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26674*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26677*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26680*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_WRXCHG_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_swap_local>> - Complexity = 4
                // Dst: (LDS_WRXCHG_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26695*/    0, /*End of Scope*/
/* 26696*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MIN),// ->26812
/* 26699*/    OPC_RecordMemRef,
/* 26700*/    OPC_RecordNode, // #0 = 'atomic_load_min' chained node
/* 26701*/    OPC_RecordChild1, // #1 = $ptr
/* 26702*/    OPC_CheckChild1Type, MVT::i32,
/* 26704*/    OPC_RecordChild2, // #2 = $data
/* 26705*/    OPC_CheckType, MVT::i32,
/* 26707*/    OPC_Scope, 42, /*->26751*/ // 2 children in Scope
/* 26709*/      OPC_CheckPredicate, 30, // Predicate_atomic_min_global_noret
/* 26711*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26713*/      OPC_EmitMergeInputChains1_0,
/* 26714*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26720*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26723*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26732*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26740*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26743*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_min_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26751*/    /*Scope*/ 59, /*->26811*/
/* 26752*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_min_local
/* 26754*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26756*/      OPC_EmitMergeInputChains1_0,
/* 26757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26760*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26772*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26775*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26787*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26790*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26793*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26796*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_min:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_min_local>> - Complexity = 4
                // Dst: (LDS_MIN_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26811*/    0, /*End of Scope*/
/* 26812*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMIN),// ->26928
/* 26815*/    OPC_RecordMemRef,
/* 26816*/    OPC_RecordNode, // #0 = 'atomic_load_umin' chained node
/* 26817*/    OPC_RecordChild1, // #1 = $ptr
/* 26818*/    OPC_CheckChild1Type, MVT::i32,
/* 26820*/    OPC_RecordChild2, // #2 = $data
/* 26821*/    OPC_CheckType, MVT::i32,
/* 26823*/    OPC_Scope, 42, /*->26867*/ // 2 children in Scope
/* 26825*/      OPC_CheckPredicate, 30, // Predicate_atomic_umin_global_noret
/* 26827*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26829*/      OPC_EmitMergeInputChains1_0,
/* 26830*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26836*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26839*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26848*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MIN_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26856*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26859*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_umin_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MIN_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26867*/    /*Scope*/ 59, /*->26927*/
/* 26868*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umin_local
/* 26870*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26872*/      OPC_EmitMergeInputChains1_0,
/* 26873*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26876*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26888*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26891*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 26903*/      OPC_EmitInteger, MVT::i32, 1, 
/* 26906*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 26909*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26912*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MIN_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umin_local>> - Complexity = 4
                // Dst: (LDS_MIN_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 26927*/    0, /*End of Scope*/
/* 26928*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_MAX),// ->27044
/* 26931*/    OPC_RecordMemRef,
/* 26932*/    OPC_RecordNode, // #0 = 'atomic_load_max' chained node
/* 26933*/    OPC_RecordChild1, // #1 = $ptr
/* 26934*/    OPC_CheckChild1Type, MVT::i32,
/* 26936*/    OPC_RecordChild2, // #2 = $data
/* 26937*/    OPC_CheckType, MVT::i32,
/* 26939*/    OPC_Scope, 42, /*->26983*/ // 2 children in Scope
/* 26941*/      OPC_CheckPredicate, 30, // Predicate_atomic_max_global_noret
/* 26943*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26945*/      OPC_EmitMergeInputChains1_0,
/* 26946*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 26952*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 26955*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 26964*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 26972*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 26975*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_max_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 26983*/    /*Scope*/ 59, /*->27043*/
/* 26984*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_max_local
/* 26986*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 26988*/      OPC_EmitMergeInputChains1_0,
/* 26989*/      OPC_EmitInteger, MVT::i32, 0, 
/* 26992*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27004*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27007*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27019*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27022*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27025*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27028*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_INT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_max:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_max_local>> - Complexity = 4
                // Dst: (LDS_MAX_INT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27043*/    0, /*End of Scope*/
/* 27044*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_UMAX),// ->27160
/* 27047*/    OPC_RecordMemRef,
/* 27048*/    OPC_RecordNode, // #0 = 'atomic_load_umax' chained node
/* 27049*/    OPC_RecordChild1, // #1 = $ptr
/* 27050*/    OPC_CheckChild1Type, MVT::i32,
/* 27052*/    OPC_RecordChild2, // #2 = $data
/* 27053*/    OPC_CheckType, MVT::i32,
/* 27055*/    OPC_Scope, 42, /*->27099*/ // 2 children in Scope
/* 27057*/      OPC_CheckPredicate, 30, // Predicate_atomic_umax_global_noret
/* 27059*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27061*/      OPC_EmitMergeInputChains1_0,
/* 27062*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27068*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27071*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27080*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_MAX_UINT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27088*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27091*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_umax_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_MAX_UINT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27099*/    /*Scope*/ 59, /*->27159*/
/* 27100*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_umax_local
/* 27102*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27104*/      OPC_EmitMergeInputChains1_0,
/* 27105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27108*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27120*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27123*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27135*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27138*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27141*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27144*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_MAX_UINT_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_umax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_umax_local>> - Complexity = 4
                // Dst: (LDS_MAX_UINT_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27159*/    0, /*End of Scope*/
/* 27160*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->27276
/* 27163*/    OPC_RecordMemRef,
/* 27164*/    OPC_RecordNode, // #0 = 'atomic_load_and' chained node
/* 27165*/    OPC_RecordChild1, // #1 = $ptr
/* 27166*/    OPC_CheckChild1Type, MVT::i32,
/* 27168*/    OPC_RecordChild2, // #2 = $data
/* 27169*/    OPC_CheckType, MVT::i32,
/* 27171*/    OPC_Scope, 42, /*->27215*/ // 2 children in Scope
/* 27173*/      OPC_CheckPredicate, 30, // Predicate_atomic_and_global_noret
/* 27175*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27177*/      OPC_EmitMergeInputChains1_0,
/* 27178*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27184*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27187*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27196*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_AND_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27204*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27207*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_and_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_AND_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27215*/    /*Scope*/ 59, /*->27275*/
/* 27216*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_and_local
/* 27218*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27220*/      OPC_EmitMergeInputChains1_0,
/* 27221*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27224*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27236*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27239*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27251*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27254*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27257*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27260*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_AND_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_and_local>> - Complexity = 4
                // Dst: (LDS_AND_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27275*/    0, /*End of Scope*/
/* 27276*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->27392
/* 27279*/    OPC_RecordMemRef,
/* 27280*/    OPC_RecordNode, // #0 = 'atomic_load_or' chained node
/* 27281*/    OPC_RecordChild1, // #1 = $ptr
/* 27282*/    OPC_CheckChild1Type, MVT::i32,
/* 27284*/    OPC_RecordChild2, // #2 = $data
/* 27285*/    OPC_CheckType, MVT::i32,
/* 27287*/    OPC_Scope, 42, /*->27331*/ // 2 children in Scope
/* 27289*/      OPC_CheckPredicate, 30, // Predicate_atomic_or_global_noret
/* 27291*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27293*/      OPC_EmitMergeInputChains1_0,
/* 27294*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27300*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27303*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27312*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_OR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27320*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27323*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_or_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_OR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27331*/    /*Scope*/ 59, /*->27391*/
/* 27332*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_or_local
/* 27334*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27336*/      OPC_EmitMergeInputChains1_0,
/* 27337*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27340*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27355*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27367*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27370*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27373*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27376*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_OR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_or_local>> - Complexity = 4
                // Dst: (LDS_OR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27391*/    0, /*End of Scope*/
/* 27392*/  /*SwitchOpcode*/ 113, TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->27508
/* 27395*/    OPC_RecordMemRef,
/* 27396*/    OPC_RecordNode, // #0 = 'atomic_load_xor' chained node
/* 27397*/    OPC_RecordChild1, // #1 = $ptr
/* 27398*/    OPC_CheckChild1Type, MVT::i32,
/* 27400*/    OPC_RecordChild2, // #2 = $data
/* 27401*/    OPC_CheckType, MVT::i32,
/* 27403*/    OPC_Scope, 42, /*->27447*/ // 2 children in Scope
/* 27405*/      OPC_CheckPredicate, 30, // Predicate_atomic_xor_global_noret
/* 27407*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27409*/      OPC_EmitMergeInputChains1_0,
/* 27410*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #3
/* 27416*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27419*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 3, 2, 4,  // Results = #5
/* 27428*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_XOR_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 5, 1,  // Results = #6
/* 27436*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27439*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 6, 7, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_xor_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_XOR_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27447*/    /*Scope*/ 59, /*->27507*/
/* 27448*/      OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_local
/* 27450*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27452*/      OPC_EmitMergeInputChains1_0,
/* 27453*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27456*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27468*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27471*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27483*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27486*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27489*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27492*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_XOR_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 9/*#Ops*/, 1, 3, 4, 2, 5, 6, 7, 8, 9, 
                // Src: (atomic_load_xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)<<P:Predicate_atomic_load_xor_local>> - Complexity = 4
                // Dst: (LDS_XOR_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 27507*/    0, /*End of Scope*/
/* 27508*/  /*SwitchOpcode*/ 16|128,1/*144*/, TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->27656
/* 27512*/    OPC_RecordMemRef,
/* 27513*/    OPC_RecordNode, // #0 = 'atomic_cmp_swap' chained node
/* 27514*/    OPC_RecordChild1, // #1 = $ptr
/* 27515*/    OPC_CheckChild1Type, MVT::i32,
/* 27517*/    OPC_RecordChild2, // #2 = $cmp
/* 27518*/    OPC_RecordChild3, // #3 = $data
/* 27519*/    OPC_CheckType, MVT::i32,
/* 27521*/    OPC_Scope, 54, /*->27577*/ // 2 children in Scope
/* 27523*/      OPC_CheckPredicate, 30, // Predicate_atomic_cmp_swap_global_noret
/* 27525*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27527*/      OPC_EmitMergeInputChains1_0,
/* 27528*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                    MVT::v4i32, 0/*#Ops*/,  // Results = #4
/* 27534*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 27537*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 4, 2, 5,  // Results = #6
/* 27546*/      OPC_EmitInteger, MVT::i32, R600::sub0,
/* 27549*/      OPC_EmitNode1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 6, 3, 7,  // Results = #8
/* 27558*/      OPC_EmitNode1, TARGET_VAL(R600::RAT_ATOMIC_CMPXCHG_INT_NORET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::v4i32, 2/*#Ops*/, 8, 1,  // Results = #9
/* 27566*/      OPC_EmitInteger, MVT::i32, R600::sub1,
/* 27569*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0|OPFL_Chain,
                    MVT::i32, 2/*#Ops*/, 9, 10, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$ptr, i32:{ *:[i32] }:$cmp, i32:{ *:[i32] }:$data)<<P:Predicate_atomic_cmp_swap_global_noret>> - Complexity = 4
                // Dst: (EXTRACT_SUBREG:{ *:[i32] } (RAT_ATOMIC_CMPXCHG_INT_NORET:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (INSERT_SUBREG:{ *:[v4i32] } (IMPLICIT_DEF:{ *:[v4i32] }), ?:{ *:[i32] }:$cmp, sub3:{ *:[i32] }), ?:{ *:[i32] }:$data, sub0:{ *:[i32] }), ?:{ *:[i32] }:$ptr), sub1:{ *:[i32] })
/* 27577*/    /*Scope*/ 77, /*->27655*/
/* 27578*/      OPC_CheckPredicate, 32, // Predicate_atomic_cmp_swap_local
/* 27580*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27582*/      OPC_EmitMergeInputChains1_0,
/* 27583*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27586*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27598*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27601*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27613*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27616*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27628*/      OPC_EmitInteger, MVT::i32, 1, 
/* 27631*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27634*/      OPC_EmitInteger, MVT::i32, 0, 
/* 27637*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LDS_CMPST_RET), 0|OPFL_Chain|OPFL_MemRefs,
                    MVT::i32, 12/*#Ops*/, 1, 4, 5, 2, 6, 7, 3, 8, 9, 10, 11, 12, 
                // Src: (atomic_cmp_swap:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)<<P:Predicate_atomic_cmp_swap_local>> - Complexity = 4
                // Dst: (LDS_CMPST_RET:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 27655*/    0, /*End of Scope*/
/* 27656*/  /*SwitchOpcode*/ 57, TARGET_VAL(ISD::BITCAST),// ->27716
/* 27659*/    OPC_RecordChild0, // #0 = $src0
/* 27660*/    OPC_SwitchType /*6 cases */, 7, MVT::i32,// ->27670
/* 27663*/      OPC_CheckChild0Type, MVT::f32,
/* 27665*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27667*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[i32] }:$src0
/* 27670*/    /*SwitchType*/ 7, MVT::f32,// ->27679
/* 27672*/      OPC_CheckChild0Type, MVT::i32,
/* 27674*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27676*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg32:{ *:[f32] }:$src0
/* 27679*/    /*SwitchType*/ 7, MVT::v2i32,// ->27688
/* 27681*/      OPC_CheckChild0Type, MVT::v2f32,
/* 27683*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27685*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2i32] } R600_Reg64:{ *:[v2f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2i32] }:$src0
/* 27688*/    /*SwitchType*/ 7, MVT::v4i32,// ->27697
/* 27690*/      OPC_CheckChild0Type, MVT::v4f32,
/* 27692*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27694*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4i32] } R600_Reg128:{ *:[v4f32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4i32] }:$src0
/* 27697*/    /*SwitchType*/ 7, MVT::v2f32,// ->27706
/* 27699*/      OPC_CheckChild0Type, MVT::v2i32,
/* 27701*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27703*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v2f32] } R600_Reg64:{ *:[v2i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg64:{ *:[v2f32] }:$src0
/* 27706*/    /*SwitchType*/ 7, MVT::v4f32,// ->27715
/* 27708*/      OPC_CheckChild0Type, MVT::v4i32,
/* 27710*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27712*/      OPC_CompleteMatch, 1, 0, 
                 // Src: (bitconvert:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$src0) - Complexity = 3
                 // Dst: R600_Reg128:{ *:[v4f32] }:$src0
/* 27715*/    0, // EndSwitchType
/* 27716*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::DWORDADDR),// ->27727
/* 27719*/    OPC_RecordChild0, // #0 = $addr
/* 27720*/    OPC_CheckType, MVT::i32,
/* 27722*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27724*/    OPC_CompleteMatch, 1, 0, 
               // Src: (AMDGPUdwordaddr:{ *:[i32] } R600_Reg32:{ *:[i32] }:$addr) - Complexity = 3
               // Dst: R600_Reg32:{ *:[i32] }:$addr
/* 27727*/  /*SwitchOpcode*/ 9, TARGET_VAL(AMDGPUISD::DUMMY_CHAIN),// ->27739
/* 27730*/    OPC_RecordNode, // #0 = 'R600dummy_chain' chained node
/* 27731*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27733*/    OPC_EmitMergeInputChains1_0,
/* 27734*/    OPC_MorphNodeTo0, TARGET_VAL(R600::DUMMY_CHAIN), 0|OPFL_Chain,
                  0/*#Ops*/, 
              // Src: (R600dummy_chain) - Complexity = 3
              // Dst: (DUMMY_CHAIN)
/* 27739*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SUB),// ->27846
/* 27742*/    OPC_RecordChild0, // #0 = $src0
/* 27743*/    OPC_RecordChild1, // #1 = $src1
/* 27744*/    OPC_CheckType, MVT::i32,
/* 27746*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27748*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27751*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27754*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27757*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27760*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27763*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27766*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27769*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27772*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27775*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27787*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27790*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27793*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27796*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27808*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27811*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27814*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27817*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27820*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUB_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (sub:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUB_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27846*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMAX),// ->27953
/* 27849*/    OPC_RecordChild0, // #0 = $src0
/* 27850*/    OPC_RecordChild1, // #1 = $src1
/* 27851*/    OPC_CheckType, MVT::i32,
/* 27853*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27855*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27858*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27861*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27864*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27867*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27870*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27873*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27876*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27879*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27882*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27894*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27897*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27900*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27903*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 27915*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27918*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 27921*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27924*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27927*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 27953*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::SMIN),// ->28060
/* 27956*/    OPC_RecordChild0, // #0 = $src0
/* 27957*/    OPC_RecordChild1, // #1 = $src1
/* 27958*/    OPC_CheckType, MVT::i32,
/* 27960*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 27962*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27965*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27968*/    OPC_EmitInteger, MVT::i32, 1, 
/* 27971*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27974*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27977*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27980*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27983*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27986*/    OPC_EmitInteger, MVT::i32, 0, 
/* 27989*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28001*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28004*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28007*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28010*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28022*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28025*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28028*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28031*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28034*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_INT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (smin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28060*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMAX),// ->28167
/* 28063*/    OPC_RecordChild0, // #0 = $src0
/* 28064*/    OPC_RecordChild1, // #1 = $src1
/* 28065*/    OPC_CheckType, MVT::i32,
/* 28067*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28069*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28072*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28075*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28078*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28081*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28084*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28087*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28090*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28093*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28096*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28108*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28111*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28114*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28117*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28129*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28132*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28135*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28138*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28141*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umax:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MAX_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28167*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::UMIN),// ->28274
/* 28170*/    OPC_RecordChild0, // #0 = $src0
/* 28171*/    OPC_RecordChild1, // #1 = $src1
/* 28172*/    OPC_CheckType, MVT::i32,
/* 28174*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28176*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28179*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28182*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28185*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28188*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28191*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28194*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28197*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28200*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28203*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28215*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28218*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28221*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28224*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28236*/    OPC_EmitInteger, MVT::i32, 1, 
/* 28239*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28242*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28245*/    OPC_EmitInteger, MVT::i32, 0, 
/* 28248*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (umin:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MIN_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28274*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_SINT),// ->28484
/* 28278*/    OPC_RecordChild0, // #0 = $src0
/* 28279*/    OPC_CheckChild0Type, MVT::f32,
/* 28281*/    OPC_CheckType, MVT::i32,
/* 28283*/    OPC_Scope, 66, /*->28351*/ // 2 children in Scope
/* 28285*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28287*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28290*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28293*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28296*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28299*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28302*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28305*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28308*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28320*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28323*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28326*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28332*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_sint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 28351*/    /*Scope*/ 2|128,1/*130*/, /*->28483*/
/* 28353*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28355*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28358*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28361*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28364*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28367*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28370*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28373*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28376*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28379*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28382*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28385*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28388*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28400*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28403*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28406*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28409*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28412*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 28431*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28434*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28437*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28440*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28452*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28455*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28464*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_INT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_sint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_INT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 28483*/    0, /*End of Scope*/
/* 28484*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FP_TO_UINT),// ->28694
/* 28488*/    OPC_RecordChild0, // #0 = $src0
/* 28489*/    OPC_CheckChild0Type, MVT::f32,
/* 28491*/    OPC_CheckType, MVT::i32,
/* 28493*/    OPC_Scope, 66, /*->28561*/ // 2 children in Scope
/* 28495*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28497*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28500*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28503*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28506*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28509*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28512*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28515*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28518*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28530*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28533*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28536*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28542*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fp_to_uint:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 28561*/    /*Scope*/ 2|128,1/*130*/, /*->28693*/
/* 28563*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28565*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28568*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28571*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28574*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28577*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28580*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28583*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28586*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28589*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28592*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28595*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28598*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28610*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28613*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28616*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28619*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28622*/      OPC_EmitNode1, TARGET_VAL(R600::TRUNC), 0,
                    MVT::i32, 13/*#Ops*/, 5, 6, 7, 8, 0, 9, 10, 11, 12, 13, 14, 15, 16,  // Results = #17
/* 28641*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28644*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28647*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28650*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28662*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28665*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28668*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28671*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28674*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 17, 18, 19, 20, 21, 22, 23, 24, 25, 
                // Src: (fp_to_uint:{ *:[i32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (TRUNC:{ *:[i32] } ?:{ *:[f32] }:$src0))
/* 28693*/    0, /*End of Scope*/
/* 28694*/  /*SwitchOpcode*/ 82|128,1/*210*/, TARGET_VAL(ISD::SHL),// ->28908
/* 28698*/    OPC_RecordChild0, // #0 = $src0
/* 28699*/    OPC_RecordChild1, // #1 = $src1
/* 28700*/    OPC_CheckChild1Type, MVT::i32,
/* 28702*/    OPC_CheckType, MVT::i32,
/* 28704*/    OPC_Scope, 100, /*->28806*/ // 2 children in Scope
/* 28706*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28708*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28711*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28714*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28717*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28720*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28723*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28726*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28729*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28732*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28735*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28747*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28750*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28753*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28756*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28768*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28771*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28774*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28777*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28780*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28806*/    /*Scope*/ 100, /*->28907*/
/* 28807*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 28809*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28812*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28815*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28818*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28821*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28824*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28827*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28830*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28833*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28836*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28848*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28851*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28854*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28857*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28869*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28872*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28875*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28878*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28881*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LSHL_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (shl:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (LSHL_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 28907*/    0, /*End of Scope*/
/* 28908*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MUL),// ->29221
/* 28912*/    OPC_RecordChild0, // #0 = $src0
/* 28913*/    OPC_RecordChild1, // #1 = $src1
/* 28914*/    OPC_CheckType, MVT::i32,
/* 28916*/    OPC_Scope, 100, /*->29018*/ // 3 children in Scope
/* 28918*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 28920*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28923*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28926*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28929*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28932*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28935*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28938*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28941*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28944*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28947*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28959*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28962*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28965*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28968*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 28980*/      OPC_EmitInteger, MVT::i32, 1, 
/* 28983*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 28986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28989*/      OPC_EmitInteger, MVT::i32, 0, 
/* 28992*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29018*/    /*Scope*/ 100, /*->29119*/
/* 29019*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29021*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29024*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29027*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29030*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29033*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29036*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29039*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29042*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29045*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29048*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29060*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29063*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29066*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29069*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29081*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29084*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29087*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29090*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29093*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29119*/    /*Scope*/ 100, /*->29220*/
/* 29120*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 29122*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29125*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29128*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29134*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29137*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29140*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29143*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29146*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29149*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29161*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29164*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29167*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29170*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29182*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29185*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29188*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29191*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29194*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULLO_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mul:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULLO_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29220*/    0, /*End of Scope*/
/* 29221*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHS),// ->29534
/* 29225*/    OPC_RecordChild0, // #0 = $src0
/* 29226*/    OPC_RecordChild1, // #1 = $src1
/* 29227*/    OPC_CheckType, MVT::i32,
/* 29229*/    OPC_Scope, 100, /*->29331*/ // 3 children in Scope
/* 29231*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29233*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29236*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29239*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29242*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29245*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29248*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29251*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29254*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29257*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29260*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29272*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29275*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29278*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29281*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29293*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29296*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29299*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29302*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29305*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29331*/    /*Scope*/ 100, /*->29432*/
/* 29332*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29334*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29337*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29340*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29343*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29346*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29355*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29358*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29361*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29373*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29376*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29379*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29382*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29394*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29397*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29400*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29403*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29406*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29432*/    /*Scope*/ 100, /*->29533*/
/* 29433*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 29435*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29438*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29441*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29444*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29447*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29450*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29453*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29456*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29459*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29462*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29474*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29477*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29480*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29483*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29495*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29498*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29501*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29504*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29507*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhs:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_INT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29533*/    0, /*End of Scope*/
/* 29534*/  /*SwitchOpcode*/ 53|128,2/*309*/, TARGET_VAL(ISD::MULHU),// ->29847
/* 29538*/    OPC_RecordChild0, // #0 = $src0
/* 29539*/    OPC_RecordChild1, // #1 = $src1
/* 29540*/    OPC_CheckType, MVT::i32,
/* 29542*/    OPC_Scope, 100, /*->29644*/ // 3 children in Scope
/* 29544*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29546*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29549*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29552*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29555*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29558*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29561*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29564*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29567*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29570*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29573*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29585*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29588*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29591*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29594*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29606*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29609*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29612*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29615*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29618*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_r600), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29644*/    /*Scope*/ 100, /*->29745*/
/* 29645*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29647*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29650*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29653*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29656*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29659*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29662*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29665*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29668*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29671*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29674*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29686*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29689*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29692*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29695*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29707*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29710*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29713*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29716*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29719*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29745*/    /*Scope*/ 100, /*->29846*/
/* 29746*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 29748*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29751*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29754*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29757*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29760*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29763*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29766*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29769*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29772*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29775*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29787*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29790*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29793*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29796*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29808*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29811*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29814*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29817*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29820*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (mulhu:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 29846*/    0, /*End of Scope*/
/* 29847*/  /*SwitchOpcode*/ 63|128,3/*447*/, TARGET_VAL(AMDGPUISD::URECIP),// ->30298
/* 29851*/    OPC_RecordChild0, // #0 = $src0
/* 29852*/    OPC_CheckType, MVT::i32,
/* 29854*/    OPC_Scope, 66, /*->29922*/ // 3 children in Scope
/* 29856*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 29858*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29861*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29864*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29867*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29870*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29873*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29876*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29879*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29891*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29894*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29897*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29900*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29903*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_r600), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_r600:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 29922*/    /*Scope*/ 66, /*->29989*/
/* 29923*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 29925*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29928*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29931*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29934*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29937*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29940*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29943*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29946*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 29958*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29961*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 29964*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29967*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29970*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUurecip:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (RECIP_UINT_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 29989*/    /*Scope*/ 50|128,2/*306*/, /*->30297*/
/* 29991*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 29993*/      OPC_EmitInteger, MVT::i32, 1, 
/* 29996*/      OPC_EmitInteger, MVT::i32, 0, 
/* 29999*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30002*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30005*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30008*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30011*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30014*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30017*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30020*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30023*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30026*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30029*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30032*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30035*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30041*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30044*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30047*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30056*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30068*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30071*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30074*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30077*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30080*/      OPC_EmitNode1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 15, 16, 17, 18, 0, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 30099*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30102*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30108*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30120*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30123*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30126*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30129*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30132*/      OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 27, 28, 29, 30, 31, 32, 33, 34, 35,  // Results = #36
/* 30151*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30154*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30157*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30160*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30172*/      OPC_EmitInteger, MVT::i32, 0|128,0|128,0|128,124|128,4/*1333788672*/, 
/* 30179*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 41,  // Results = #42
/* 30186*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30189*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30192*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30195*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30207*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30210*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30213*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30216*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30219*/      OPC_EmitNode1, TARGET_VAL(R600::MUL_IEEE), 0,
                    MVT::i32, 20/*#Ops*/, 5, 6, 7, 8, 9, 10, 36, 37, 38, 39, 40, 42, 43, 44, 45, 46, 47, 48, 49, 50,  // Results = #51
/* 30245*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30248*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30251*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30254*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30266*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30269*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30272*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30275*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30278*/      OPC_MorphNodeTo1, TARGET_VAL(R600::FLT_TO_UINT_eg), 0,
                    MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 51, 52, 53, 54, 55, 56, 57, 58, 59, 
                // Src: (AMDGPUurecip:{ *:[i32] } i32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (FLT_TO_UINT_eg:{ *:[i32] } (MUL_IEEE:{ *:[i32] } (RECIP_IEEE_cm:{ *:[i32] } (UINT_TO_FLT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0)), (MOV_IMM_I32:{ *:[i32] } 1333788672:{ *:[i32] })))
/* 30297*/    0, /*End of Scope*/
/* 30298*/  /*SwitchOpcode*/ 80|128,1/*208*/, TARGET_VAL(AMDGPUISD::MULHI_U24),// ->30510
/* 30302*/    OPC_RecordChild0, // #0 = $src0
/* 30303*/    OPC_RecordChild1, // #1 = $src1
/* 30304*/    OPC_CheckType, MVT::i32,
/* 30306*/    OPC_Scope, 100, /*->30408*/ // 2 children in Scope
/* 30308*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 30310*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30313*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30316*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30319*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30322*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30325*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30328*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30331*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30334*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30337*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30349*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30352*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30355*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30358*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30370*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30373*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30376*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30379*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30382*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT24_eg), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT24_eg:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 30408*/    /*Scope*/ 100, /*->30509*/
/* 30409*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 30411*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30414*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30417*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30420*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30423*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30426*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30429*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30432*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30435*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30438*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30450*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30453*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30456*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30459*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30471*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30474*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30477*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30480*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30483*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_UINT_cm24), 0,
                    MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
                // Src: (AMDGPUmulhi_u24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
                // Dst: (MULHI_UINT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 30509*/    0, /*End of Scope*/
/* 30510*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_U32),// ->30618
/* 30513*/    OPC_RecordChild0, // #0 = $src0
/* 30514*/    OPC_RecordChild1, // #1 = $src1
/* 30515*/    OPC_RecordChild2, // #2 = $src2
/* 30516*/    OPC_CheckChild2Type, MVT::i32,
/* 30518*/    OPC_CheckType, MVT::i32,
/* 30520*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30522*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30525*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30528*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30531*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30534*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30546*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30549*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30552*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30564*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30567*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30570*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30582*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30585*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30588*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30591*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30594*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_UINT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_u32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_UINT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30618*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFE_I32),// ->30726
/* 30621*/    OPC_RecordChild0, // #0 = $src0
/* 30622*/    OPC_RecordChild1, // #1 = $src1
/* 30623*/    OPC_RecordChild2, // #2 = $src2
/* 30624*/    OPC_CheckChild2Type, MVT::i32,
/* 30626*/    OPC_CheckType, MVT::i32,
/* 30628*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30630*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30633*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30636*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30639*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30642*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30654*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30657*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30660*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30672*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30675*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30678*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30690*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30693*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30699*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30702*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfe_i32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30726*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::BFI),// ->30834
/* 30729*/    OPC_RecordChild0, // #0 = $src0
/* 30730*/    OPC_RecordChild1, // #1 = $src1
/* 30731*/    OPC_RecordChild2, // #2 = $src2
/* 30732*/    OPC_CheckChild2Type, MVT::i32,
/* 30734*/    OPC_CheckType, MVT::i32,
/* 30736*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30738*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30741*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30744*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30747*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30750*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30762*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30765*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30768*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30780*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30783*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30786*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30798*/    OPC_EmitInteger, MVT::i32, 1, 
/* 30801*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30804*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30807*/    OPC_EmitInteger, MVT::i32, 0, 
/* 30810*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUbfi:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (BFI_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 30834*/  /*SwitchOpcode*/ 92|128,2/*348*/, TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->31186
/* 30838*/    OPC_RecordChild0, // #0 = $src
/* 30839*/    OPC_MoveChild1,
/* 30840*/    OPC_Scope, 109, /*->30951*/ // 3 children in Scope
/* 30842*/      OPC_CheckValueType, MVT::i1,
/* 30844*/      OPC_MoveParent,
/* 30845*/      OPC_CheckType, MVT::i32,
/* 30847*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30849*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30852*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30855*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30858*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30861*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30873*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 30876*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30879*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30882*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30894*/      OPC_EmitRegister, MVT::i32, R600::ONE_INT,
/* 30897*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30900*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30903*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30915*/      OPC_EmitInteger, MVT::i32, 1, 
/* 30918*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 30921*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30924*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30927*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i1:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, ONE_INT:{ *:[i32] })
/* 30951*/    /*Scope*/ 116, /*->31068*/
/* 30952*/      OPC_CheckValueType, MVT::i8,
/* 30954*/      OPC_MoveParent,
/* 30955*/      OPC_CheckType, MVT::i32,
/* 30957*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 30959*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30962*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30965*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30968*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30971*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 30983*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 30986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30989*/      OPC_EmitInteger, MVT::i32, 0, 
/* 30992*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31004*/      OPC_EmitInteger, MVT::i32, 8, 
/* 31007*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 31014*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31017*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31020*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31032*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31035*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31038*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31041*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31044*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i8:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 8:{ *:[i32] }))
/* 31068*/    /*Scope*/ 116, /*->31185*/
/* 31069*/      OPC_CheckValueType, MVT::i16,
/* 31071*/      OPC_MoveParent,
/* 31072*/      OPC_CheckType, MVT::i32,
/* 31074*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31076*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31079*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31082*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31085*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31088*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31100*/      OPC_EmitRegister, MVT::i32, R600::ZERO,
/* 31103*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31106*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31109*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31121*/      OPC_EmitInteger, MVT::i32, 16, 
/* 31124*/      OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                    MVT::i32, 1/*#Ops*/, 10,  // Results = #11
/* 31131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31134*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31137*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31149*/      OPC_EmitInteger, MVT::i32, 1, 
/* 31152*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31155*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31158*/      OPC_EmitInteger, MVT::i32, 0, 
/* 31161*/      OPC_MorphNodeTo1, TARGET_VAL(R600::BFE_INT_eg), 0,
                    MVT::i32, 18/*#Ops*/, 1, 2, 0, 3, 4, 5, 6, 7, 8, 9, 11, 12, 13, 14, 15, 16, 17, 18, 
                // Src: (sext_inreg:{ *:[i32] } i32:{ *:[i32] }:$src, i16:{ *:[Other] }) - Complexity = 3
                // Dst: (BFE_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src, ZERO:{ *:[i32] }, (MOV_IMM_I32:{ *:[i32] } 16:{ *:[i32] }))
/* 31185*/    0, /*End of Scope*/
/* 31186*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BFM),// ->31293
/* 31189*/    OPC_RecordChild0, // #0 = $src0
/* 31190*/    OPC_RecordChild1, // #1 = $src1
/* 31191*/    OPC_CheckType, MVT::i32,
/* 31193*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31195*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31198*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31201*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31204*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31207*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31210*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31213*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31216*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31219*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31222*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31234*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31237*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31240*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31243*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31255*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31258*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31261*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31264*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31267*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BFM_INT_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUbfm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BFM_INT_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 31293*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_U24),// ->31401
/* 31296*/    OPC_RecordChild0, // #0 = $src0
/* 31297*/    OPC_RecordChild1, // #1 = $src1
/* 31298*/    OPC_RecordChild2, // #2 = $src2
/* 31299*/    OPC_CheckChild2Type, MVT::i32,
/* 31301*/    OPC_CheckType, MVT::i32,
/* 31303*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31305*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31308*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31311*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31314*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31317*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31329*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31332*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31335*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31347*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31350*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31353*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31365*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31368*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31371*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31374*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31377*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_UINT24_eg), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 31401*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::ROTR),// ->31508
/* 31404*/    OPC_RecordChild0, // #0 = $src0
/* 31405*/    OPC_RecordChild1, // #1 = $src1
/* 31406*/    OPC_CheckChild1Type, MVT::i32,
/* 31408*/    OPC_CheckType, MVT::i32,
/* 31410*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31412*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31415*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31418*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31421*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31424*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31436*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31439*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31442*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31454*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31457*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31460*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31472*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31475*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31478*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31481*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31484*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BIT_ALIGN_INT_eg), 0,
                  MVT::i32, 18/*#Ops*/, 2, 3, 0, 4, 5, 6, 0, 7, 8, 9, 1, 10, 11, 12, 13, 14, 15, 16, 
              // Src: (rotr:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (BIT_ALIGN_INT_eg:{ *:[i32] } ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src0, ?:{ *:[i32] }:$src1)
/* 31508*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_U24),// ->31615
/* 31511*/    OPC_RecordChild0, // #0 = $src0
/* 31512*/    OPC_RecordChild1, // #1 = $src1
/* 31513*/    OPC_CheckType, MVT::i32,
/* 31515*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31517*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31520*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31523*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31526*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31529*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31532*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31535*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31538*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31541*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31544*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31556*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31559*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31562*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31565*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31577*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31580*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31583*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31586*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31589*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_UINT24_eg), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_u24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_UINT24_eg:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 31615*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::CARRY),// ->31722
/* 31618*/    OPC_RecordChild0, // #0 = $src0
/* 31619*/    OPC_RecordChild1, // #1 = $src1
/* 31620*/    OPC_CheckType, MVT::i32,
/* 31622*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31624*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31627*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31630*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31633*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31636*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31639*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31642*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31645*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31648*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31651*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31663*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31666*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31669*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31672*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31684*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31687*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31690*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31693*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31696*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADDC_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUcarry:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (ADDC_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31722*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::BORROW),// ->31829
/* 31725*/    OPC_RecordChild0, // #0 = $src0
/* 31726*/    OPC_RecordChild1, // #1 = $src1
/* 31727*/    OPC_CheckType, MVT::i32,
/* 31729*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31731*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31734*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31737*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31740*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31743*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31746*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31749*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31752*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31755*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31758*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31770*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31773*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31776*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31779*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31791*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31794*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31797*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31800*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31803*/    OPC_MorphNodeTo1, TARGET_VAL(R600::SUBB_UINT), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUborrow:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (SUBB_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 31829*/  /*SwitchOpcode*/ 71, TARGET_VAL(AMDGPUISD::FP_TO_FP16),// ->31903
/* 31832*/    OPC_RecordChild0, // #0 = $src0
/* 31833*/    OPC_CheckChild0Type, MVT::f32,
/* 31835*/    OPC_CheckType, MVT::i32,
/* 31837*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31839*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31842*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31845*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31848*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31851*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31854*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31857*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31860*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31872*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31875*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31878*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31881*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31884*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT32_TO_FLT16), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfp_to_f16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLT32_TO_FLT16:{ *:[i32] } R600_Reg32:{ *:[f32] }:$src0)
/* 31903*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::CTPOP),// ->31975
/* 31906*/    OPC_RecordChild0, // #0 = $src0
/* 31907*/    OPC_CheckType, MVT::i32,
/* 31909*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31911*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31914*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31917*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31920*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31923*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31926*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31929*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31932*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 31944*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31947*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 31950*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31953*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31956*/    OPC_MorphNodeTo1, TARGET_VAL(R600::BCNT_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ctpop:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (BCNT_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 31975*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBH_U32),// ->32047
/* 31978*/    OPC_RecordChild0, // #0 = $src0
/* 31979*/    OPC_CheckType, MVT::i32,
/* 31981*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 31983*/    OPC_EmitInteger, MVT::i32, 1, 
/* 31986*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31989*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31992*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31995*/    OPC_EmitInteger, MVT::i32, 0, 
/* 31998*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32001*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32004*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32016*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32019*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32022*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32025*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32028*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBH_UINT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbh_u32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBH_UINT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 32047*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FFBL_B32),// ->32119
/* 32050*/    OPC_RecordChild0, // #0 = $src0
/* 32051*/    OPC_CheckType, MVT::i32,
/* 32053*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32055*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32058*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32061*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32064*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32067*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32070*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32073*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32076*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32088*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32091*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32094*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32097*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32100*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FFBL_INT), 0,
                  MVT::i32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUffbl_b32:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FFBL_INT:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0)
/* 32119*/  /*SwitchOpcode*/ 105, TARGET_VAL(AMDGPUISD::MAD_I24),// ->32227
/* 32122*/    OPC_RecordChild0, // #0 = $src0
/* 32123*/    OPC_RecordChild1, // #1 = $src1
/* 32124*/    OPC_RecordChild2, // #2 = $src2
/* 32125*/    OPC_CheckChild2Type, MVT::i32,
/* 32127*/    OPC_CheckType, MVT::i32,
/* 32129*/    OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 32131*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32134*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32137*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32140*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32143*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32155*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32158*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32161*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32173*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32176*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32179*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32191*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32194*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32197*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32200*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32203*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_INT24_cm), 0,
                  MVT::i32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (AMDGPUmad_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2) - Complexity = 3
              // Dst: (MULADD_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
/* 32227*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MUL_I24),// ->32334
/* 32230*/    OPC_RecordChild0, // #0 = $src0
/* 32231*/    OPC_RecordChild1, // #1 = $src1
/* 32232*/    OPC_CheckType, MVT::i32,
/* 32234*/    OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 32236*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32239*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32242*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32245*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32248*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32251*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32254*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32257*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32260*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32263*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32275*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32278*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32281*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32284*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32296*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32299*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32302*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32305*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32308*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_INT24_cm), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmul_i24:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MUL_INT24_cm:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
/* 32334*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::MULHI_I24),// ->32441
/* 32337*/    OPC_RecordChild0, // #0 = $src0
/* 32338*/    OPC_RecordChild1, // #1 = $src1
/* 32339*/    OPC_CheckType, MVT::i32,
/* 32341*/    OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 32343*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32346*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32349*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32352*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32355*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32358*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32361*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32364*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32367*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32370*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32382*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32385*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32388*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32391*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32403*/    OPC_EmitInteger, MVT::i32, 1, 
/* 32406*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32409*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32412*/    OPC_EmitInteger, MVT::i32, 0, 
/* 32415*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MULHI_INT_cm24), 0,
                  MVT::i32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUmulhi_i24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1) - Complexity = 3
              // Dst: (MULHI_INT_cm24:{ *:[i32] } R600_Reg32:{ *:[i32] }:$src0, R600_Reg32:{ *:[i32] }:$src1)
/* 32441*/  /*SwitchOpcode*/ 8, TARGET_VAL(AMDGPUISD::ENDPGM),// ->32452
/* 32444*/    OPC_RecordNode, // #0 = 'AMDGPUendpgm' chained node
/* 32445*/    OPC_CaptureGlueInput,
/* 32446*/    OPC_EmitMergeInputChains1_0,
/* 32447*/    OPC_MorphNodeTo0, TARGET_VAL(R600::RETURN), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#Ops*/, 
              // Src: (AMDGPUendpgm) - Complexity = 3
              // Dst: (RETURN)
/* 32452*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::Constant),// ->32469
/* 32455*/    OPC_RecordNode, // #0 = $val
/* 32456*/    OPC_CheckType, MVT::i32,
/* 32458*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 32460*/    OPC_EmitConvertToTarget, 0,
/* 32462*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                  MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:{ *:[i32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_I32:{ *:[i32] } (imm:{ *:[i32] }):$val)
/* 32469*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::BR),// ->32486
/* 32472*/    OPC_RecordNode, // #0 = 'br' chained node
/* 32473*/    OPC_RecordChild1, // #1 = $target
/* 32474*/    OPC_MoveChild1,
/* 32475*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 32478*/    OPC_MoveParent,
/* 32479*/    OPC_EmitMergeInputChains1_0,
/* 32480*/    OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH), 0|OPFL_Chain,
                  1/*#Ops*/, 1, 
              // Src: (br (bb:{ *:[Other] }):$target) - Complexity = 3
              // Dst: (BRANCH (bb:{ *:[Other] }):$target)
/* 32486*/  /*SwitchOpcode*/ 32, TARGET_VAL(AMDGPUISD::BRANCH_COND),// ->32521
/* 32489*/    OPC_RecordNode, // #0 = 'IL_brcond' chained node
/* 32490*/    OPC_RecordChild1, // #1 = $target
/* 32491*/    OPC_MoveChild1,
/* 32492*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/* 32495*/    OPC_MoveParent,
/* 32496*/    OPC_RecordChild2, // #2 = $src0
/* 32497*/    OPC_Scope, 10, /*->32509*/ // 2 children in Scope
/* 32499*/      OPC_CheckChild2Type, MVT::i32,
/* 32501*/      OPC_EmitMergeInputChains1_0,
/* 32502*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_i32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_i32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[i32] }:$src0)
/* 32509*/    /*Scope*/ 10, /*->32520*/
/* 32510*/      OPC_CheckChild2Type, MVT::f32,
/* 32512*/      OPC_EmitMergeInputChains1_0,
/* 32513*/      OPC_MorphNodeTo0, TARGET_VAL(R600::BRANCH_COND_f32), 0|OPFL_Chain,
                    2/*#Ops*/, 1, 2, 
                // Src: (IL_brcond (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (BRANCH_COND_f32 (bb:{ *:[Other] }):$target, R600_Reg32:{ *:[f32] }:$src0)
/* 32520*/    0, /*End of Scope*/
/* 32521*/  /*SwitchOpcode*/ 83|128,5/*723*/, TARGET_VAL(ISD::FDIV),// ->33248
/* 32525*/    OPC_Scope, 85|128,1/*213*/, /*->32741*/ // 2 children in Scope
/* 32528*/      OPC_MoveChild0,
/* 32529*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/* 32532*/      OPC_CheckPredicate, 6, // Predicate_FP_ONE
/* 32534*/      OPC_MoveParent,
/* 32535*/      OPC_RecordChild1, // #0 = $src
/* 32536*/      OPC_CheckType, MVT::f32,
/* 32538*/      OPC_Scope, 66, /*->32606*/ // 3 children in Scope
/* 32540*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32542*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32545*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32548*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32551*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32554*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32557*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32560*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32563*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32575*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32578*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32581*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32584*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32587*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32606*/      /*Scope*/ 66, /*->32673*/
/* 32607*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32609*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32612*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32615*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32618*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32621*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32624*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32627*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32630*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32642*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32645*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32648*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32651*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32654*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32673*/      /*Scope*/ 66, /*->32740*/
/* 32674*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 32676*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32679*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32682*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32685*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32688*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32691*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32694*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32697*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32709*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32712*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32715*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32718*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32721*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (fdiv:{ *:[f32] } (fpimm:{ *:[f32] })<<P:Predicate_FP_ONE>>, f32:{ *:[f32] }:$src) - Complexity = 7
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 32740*/      0, /*End of Scope*/
/* 32741*/    /*Scope*/ 120|128,3/*504*/, /*->33247*/
/* 32743*/      OPC_RecordChild0, // #0 = $src0
/* 32744*/      OPC_RecordChild1, // #1 = $src1
/* 32745*/      OPC_CheckType, MVT::f32,
/* 32747*/      OPC_Scope, 36|128,1/*164*/, /*->32914*/ // 3 children in Scope
/* 32750*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 32752*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32755*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32758*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32761*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32764*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32767*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32770*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32773*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32776*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32779*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32791*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32794*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32797*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32800*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32803*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32806*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32809*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32812*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32824*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32827*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32830*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32833*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32836*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 32855*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32858*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32861*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32864*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32876*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32879*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32882*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32885*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32888*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_r600:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 32914*/      /*Scope*/ 36|128,1/*164*/, /*->33080*/
/* 32916*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 32918*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32921*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32924*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32927*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32930*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32933*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32936*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32939*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32942*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32945*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32957*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32960*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32963*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32966*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32969*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32972*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32975*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32978*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 32990*/        OPC_EmitInteger, MVT::i32, 1, 
/* 32993*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 32996*/        OPC_EmitInteger, MVT::i32, 0, 
/* 32999*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33002*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 33021*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33024*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33027*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33030*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33042*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33045*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33048*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33051*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33054*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_eg:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 33080*/      /*Scope*/ 36|128,1/*164*/, /*->33246*/
/* 33082*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 33084*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33087*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33090*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33093*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33096*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33099*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33102*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33105*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33108*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33111*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33123*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33126*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33129*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33132*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33135*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33138*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33141*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33144*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33156*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33159*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33162*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33165*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33168*/        OPC_EmitNode1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::i32, 13/*#Ops*/, 12, 13, 14, 15, 1, 16, 17, 18, 19, 20, 21, 22, 23,  // Results = #24
/* 33187*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33190*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33193*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33196*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33208*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33211*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33214*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33217*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33220*/        OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                      MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 24, 25, 26, 27, 28, 29, 30, 31, 32, 
                  // Src: (fdiv:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (MUL_IEEE:{ *:[f32] } ?:{ *:[f32] }:$src0, (RECIP_IEEE_cm:{ *:[i32] } ?:{ *:[f32] }:$src1))
/* 33246*/      0, /*End of Scope*/
/* 33247*/    0, /*End of Scope*/
/* 33248*/  /*SwitchOpcode*/ 39|128,3/*423*/, TARGET_VAL(AMDGPUISD::RCP),// ->33675
/* 33252*/    OPC_Scope, 83|128,1/*211*/, /*->33466*/ // 2 children in Scope
/* 33255*/      OPC_MoveChild0,
/* 33256*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSQRT),
/* 33259*/      OPC_RecordChild0, // #0 = $src
/* 33260*/      OPC_MoveParent,
/* 33261*/      OPC_CheckType, MVT::f32,
/* 33263*/      OPC_Scope, 66, /*->33331*/ // 3 children in Scope
/* 33265*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33267*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33270*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33273*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33276*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33279*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33282*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33285*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33288*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33300*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33303*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33306*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33309*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33312*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33331*/      /*Scope*/ 66, /*->33398*/
/* 33332*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33334*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33337*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33340*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33343*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33346*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33349*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33352*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33355*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33367*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33370*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33373*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33376*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33379*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33398*/      /*Scope*/ 66, /*->33465*/
/* 33399*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 33401*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33404*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33407*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33410*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33413*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33416*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33419*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33422*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33434*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33437*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33440*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33443*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33446*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src)) - Complexity = 6
                  // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } ?:{ *:[f32] }:$src)
/* 33465*/      0, /*End of Scope*/
/* 33466*/    /*Scope*/ 78|128,1/*206*/, /*->33674*/
/* 33468*/      OPC_RecordChild0, // #0 = $src0
/* 33469*/      OPC_CheckType, MVT::f32,
/* 33471*/      OPC_Scope, 66, /*->33539*/ // 3 children in Scope
/* 33473*/        OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 33475*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33478*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33481*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33484*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33487*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33490*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33493*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33496*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33508*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33511*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33514*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33517*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33520*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_r600), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33539*/      /*Scope*/ 66, /*->33606*/
/* 33540*/        OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 33542*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33545*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33548*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33551*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33554*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33557*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33560*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33563*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33575*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33578*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33581*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33584*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33587*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_eg), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33606*/      /*Scope*/ 66, /*->33673*/
/* 33607*/        OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 33609*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33612*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33615*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33618*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33621*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33624*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33627*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33630*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33642*/        OPC_EmitInteger, MVT::i32, 1, 
/* 33645*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33648*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33651*/        OPC_EmitInteger, MVT::i32, 0, 
/* 33654*/        OPC_MorphNodeTo1, TARGET_VAL(R600::RECIP_IEEE_cm), 0,
                      MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                  // Src: (AMDGPUrcp:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                  // Dst: (RECIP_IEEE_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 33673*/      0, /*End of Scope*/
/* 33674*/    0, /*End of Scope*/
/* 33675*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FADD),// ->33782
/* 33678*/    OPC_RecordChild0, // #0 = $src0
/* 33679*/    OPC_RecordChild1, // #1 = $src1
/* 33680*/    OPC_CheckType, MVT::f32,
/* 33682*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33684*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33687*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33690*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33693*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33699*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33702*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33705*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33708*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33711*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33723*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33726*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33729*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33732*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33744*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33747*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33750*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33753*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33756*/    OPC_MorphNodeTo1, TARGET_VAL(R600::ADD), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fadd:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (ADD:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 33782*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMUL),// ->33889
/* 33785*/    OPC_RecordChild0, // #0 = $src0
/* 33786*/    OPC_RecordChild1, // #1 = $src1
/* 33787*/    OPC_CheckType, MVT::f32,
/* 33789*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33791*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33794*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33797*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33800*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33803*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33806*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33809*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33812*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33815*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33818*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33830*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33833*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33836*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33839*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33851*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33854*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33857*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33860*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33863*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MUL_IEEE), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmul:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MUL_IEEE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 33889*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMAX_LEGACY),// ->33996
/* 33892*/    OPC_RecordChild0, // #0 = $src0
/* 33893*/    OPC_RecordChild1, // #1 = $src1
/* 33894*/    OPC_CheckType, MVT::f32,
/* 33896*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 33898*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33901*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33904*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33907*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33910*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33913*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33916*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33919*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33922*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33925*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33937*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33940*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33943*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33946*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 33958*/    OPC_EmitInteger, MVT::i32, 1, 
/* 33961*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 33964*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33967*/    OPC_EmitInteger, MVT::i32, 0, 
/* 33970*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmax_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 33996*/  /*SwitchOpcode*/ 104, TARGET_VAL(AMDGPUISD::FMIN_LEGACY),// ->34103
/* 33999*/    OPC_RecordChild0, // #0 = $src0
/* 34000*/    OPC_RecordChild1, // #1 = $src1
/* 34001*/    OPC_CheckType, MVT::f32,
/* 34003*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34005*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34008*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34011*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34014*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34017*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34020*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34023*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34026*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34029*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34032*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34044*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34047*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34050*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34053*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34065*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34068*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34071*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34074*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34077*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (AMDGPUfmin_legacy:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34103*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMAXNUM),// ->34210
/* 34106*/    OPC_RecordChild0, // #0 = $src0
/* 34107*/    OPC_RecordChild1, // #1 = $src1
/* 34108*/    OPC_CheckType, MVT::f32,
/* 34110*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34112*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34115*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34118*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34121*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34124*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34127*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34130*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34133*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34136*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34139*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34151*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34154*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34157*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34160*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34172*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34175*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34178*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34181*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34184*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MAX_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fmaxnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MAX_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34210*/  /*SwitchOpcode*/ 104, TARGET_VAL(ISD::FMINNUM),// ->34317
/* 34213*/    OPC_RecordChild0, // #0 = $src0
/* 34214*/    OPC_RecordChild1, // #1 = $src1
/* 34215*/    OPC_CheckType, MVT::f32,
/* 34217*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34219*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34222*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34225*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34228*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34231*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34234*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34237*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34240*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34243*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34246*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34258*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34261*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34264*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34267*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34279*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34282*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34285*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34288*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34291*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MIN_DX10), 0,
                  MVT::f32, 20/*#Ops*/, 2, 3, 4, 5, 6, 7, 0, 8, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 19, 
              // Src: (fminnum:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1) - Complexity = 3
              // Dst: (MIN_DX10:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0, R600_Reg32:{ *:[f32] }:$src1)
/* 34317*/  /*SwitchOpcode*/ 69, TARGET_VAL(AMDGPUISD::FRACT),// ->34389
/* 34320*/    OPC_RecordChild0, // #0 = $src0
/* 34321*/    OPC_CheckType, MVT::f32,
/* 34323*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34325*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34328*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34331*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34334*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34337*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34340*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34343*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34346*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34358*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34361*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34364*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34367*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34370*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FRACT), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (AMDGPUfract:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FRACT:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34389*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FTRUNC),// ->34461
/* 34392*/    OPC_RecordChild0, // #0 = $src0
/* 34393*/    OPC_CheckType, MVT::f32,
/* 34395*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34397*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34400*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34403*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34406*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34409*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34412*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34415*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34418*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34430*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34433*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34436*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34439*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34442*/    OPC_MorphNodeTo1, TARGET_VAL(R600::TRUNC), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ftrunc:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (TRUNC:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34461*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FCEIL),// ->34533
/* 34464*/    OPC_RecordChild0, // #0 = $src0
/* 34465*/    OPC_CheckType, MVT::f32,
/* 34467*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34469*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34472*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34475*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34478*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34481*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34484*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34487*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34490*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34502*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34505*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34508*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34511*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34514*/    OPC_MorphNodeTo1, TARGET_VAL(R600::CEIL), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (fceil:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (CEIL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34533*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FRINT),// ->34605
/* 34536*/    OPC_RecordChild0, // #0 = $src0
/* 34537*/    OPC_CheckType, MVT::f32,
/* 34539*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34541*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34544*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34547*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34550*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34553*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34556*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34559*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34562*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34574*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34577*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34580*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34583*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34586*/    OPC_MorphNodeTo1, TARGET_VAL(R600::RNDNE), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (frint:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (RNDNE:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34605*/  /*SwitchOpcode*/ 69, TARGET_VAL(ISD::FFLOOR),// ->34677
/* 34608*/    OPC_RecordChild0, // #0 = $src0
/* 34609*/    OPC_CheckType, MVT::f32,
/* 34611*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34613*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34616*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34619*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34622*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34625*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34628*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34631*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34634*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34646*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34649*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34652*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34655*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34658*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLOOR), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (ffloor:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FLOOR:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 34677*/  /*SwitchOpcode*/ 90|128,2/*346*/, TARGET_VAL(AMDGPUISD::DOT4),// ->35027
/* 34681*/    OPC_RecordChild0, // #0 = $src0_X
/* 34682*/    OPC_RecordChild1, // #1 = $src1_X
/* 34683*/    OPC_RecordChild2, // #2 = $src0_Y
/* 34684*/    OPC_RecordChild3, // #3 = $src1_Y
/* 34685*/    OPC_RecordChild4, // #4 = $src0_Z
/* 34686*/    OPC_RecordChild5, // #5 = $src1_Z
/* 34687*/    OPC_RecordChild6, // #6 = $src0_W
/* 34688*/    OPC_RecordChild7, // #7 = $src1_W
/* 34689*/    OPC_CheckType, MVT::f32,
/* 34691*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 34693*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34696*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34699*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34702*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34705*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34708*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34711*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34714*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34717*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34720*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34732*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34735*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34738*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34741*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34753*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34756*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34759*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34762*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34765*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34768*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34771*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34774*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34777*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34780*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34783*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34795*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34798*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34801*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34804*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34816*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34819*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34822*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34825*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34828*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34831*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34834*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34837*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34840*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34843*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34846*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34858*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34861*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34864*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34867*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34879*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34882*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34885*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34888*/    OPC_EmitInteger, MVT::i32, 1, 
/* 34891*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34894*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34897*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34900*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34903*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34906*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34909*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34921*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34924*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34927*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34930*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 34942*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 34945*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34948*/    OPC_EmitInteger, MVT::i32, 0, 
/* 34951*/    OPC_MorphNodeTo1, TARGET_VAL(R600::DOT_4), 0,
                  MVT::f32, 70/*#Ops*/, 8, 9, 10, 11, 12, 13, 0, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 2, 29, 30, 31, 32, 3, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 4, 44, 45, 46, 47, 5, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 6, 59, 60, 61, 62, 7, 63, 64, 65, 66, 67, 68, 69, 
              // Src: (DOT4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W) - Complexity = 3
              // Dst: (DOT_4:{ *:[f32] } R600_TReg32_X:{ *:[f32] }:$src0_X, R600_TReg32_X:{ *:[f32] }:$src1_X, R600_TReg32_Y:{ *:[f32] }:$src0_Y, R600_TReg32_Y:{ *:[f32] }:$src1_Y, R600_TReg32_Z:{ *:[f32] }:$src0_Z, R600_TReg32_Z:{ *:[f32] }:$src1_Z, R600_TReg32_W:{ *:[f32] }:$src0_W, R600_TReg32_W:{ *:[f32] }:$src1_W)
/* 35027*/  /*SwitchOpcode*/ 77|128,1/*205*/, TARGET_VAL(ISD::FMAD),// ->35236
/* 35031*/    OPC_RecordChild0, // #0 = $src0
/* 35032*/    OPC_RecordChild1, // #1 = $src1
/* 35033*/    OPC_RecordChild2, // #2 = $src2
/* 35034*/    OPC_CheckType, MVT::f32,
/* 35036*/    OPC_Scope, 98, /*->35136*/ // 2 children in Scope
/* 35038*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35040*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35043*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35046*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35049*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35052*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35064*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35067*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35070*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35082*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35085*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35088*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35100*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35103*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35106*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35109*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35112*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_r600), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_r600:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 35136*/    /*Scope*/ 98, /*->35235*/
/* 35137*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 35139*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35142*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35145*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35148*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35151*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35163*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35166*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35169*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35181*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35184*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35187*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35199*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35202*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35205*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35208*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35211*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MULADD_IEEE_eg), 0,
                    MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
                // Src: (fmad:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
                // Dst: (MULADD_IEEE_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 35235*/    0, /*End of Scope*/
/* 35236*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FEXP2),// ->35446
/* 35240*/    OPC_RecordChild0, // #0 = $src0
/* 35241*/    OPC_CheckType, MVT::f32,
/* 35243*/    OPC_Scope, 66, /*->35311*/ // 3 children in Scope
/* 35245*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35247*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35250*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35253*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35256*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35259*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35262*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35265*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35268*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35280*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35283*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35286*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35289*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35292*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35311*/    /*Scope*/ 66, /*->35378*/
/* 35312*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35314*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35317*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35320*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35323*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35326*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35329*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35332*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35335*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35347*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35350*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35353*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35356*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35359*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35378*/    /*Scope*/ 66, /*->35445*/
/* 35379*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 35381*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35384*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35387*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35390*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35393*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35396*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35399*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35402*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35414*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35417*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35420*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35423*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35426*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (fexp2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35445*/    0, /*End of Scope*/
/* 35446*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(ISD::FLOG2),// ->35656
/* 35450*/    OPC_RecordChild0, // #0 = $src0
/* 35451*/    OPC_CheckType, MVT::f32,
/* 35453*/    OPC_Scope, 66, /*->35521*/ // 3 children in Scope
/* 35455*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35457*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35460*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35463*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35466*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35469*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35472*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35475*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35478*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35490*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35493*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35496*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35499*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35502*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35521*/    /*Scope*/ 66, /*->35588*/
/* 35522*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35524*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35527*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35530*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35533*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35536*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35539*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35542*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35545*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35557*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35560*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35563*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35566*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35569*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35588*/    /*Scope*/ 66, /*->35655*/
/* 35589*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 35591*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35594*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35597*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35600*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35603*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35606*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35609*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35612*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35624*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35627*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35630*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35636*/      OPC_MorphNodeTo1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (flog2:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (LOG_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35655*/    0, /*End of Scope*/
/* 35656*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ_CLAMP),// ->35866
/* 35660*/    OPC_RecordChild0, // #0 = $src0
/* 35661*/    OPC_CheckType, MVT::f32,
/* 35663*/    OPC_Scope, 66, /*->35731*/ // 3 children in Scope
/* 35665*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35667*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35670*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35673*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35676*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35679*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35682*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35685*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35688*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35700*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35703*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35706*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35709*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35712*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35731*/    /*Scope*/ 66, /*->35798*/
/* 35732*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35734*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35743*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35746*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35749*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35752*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35755*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35767*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35770*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35773*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35776*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35779*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35798*/    /*Scope*/ 66, /*->35865*/
/* 35799*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 35801*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35804*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35807*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35810*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35813*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35816*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35819*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35822*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35834*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35837*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35840*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35843*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35846*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq_clamp:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_CLAMPED_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35865*/    0, /*End of Scope*/
/* 35866*/  /*SwitchOpcode*/ 78|128,1/*206*/, TARGET_VAL(AMDGPUISD::RSQ),// ->36076
/* 35870*/    OPC_RecordChild0, // #0 = $src0
/* 35871*/    OPC_CheckType, MVT::f32,
/* 35873*/    OPC_Scope, 66, /*->35941*/ // 3 children in Scope
/* 35875*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 35877*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35880*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35883*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35886*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35889*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35892*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35895*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35898*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35910*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35913*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35916*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35919*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35922*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_r600:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 35941*/    /*Scope*/ 66, /*->36008*/
/* 35942*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 35944*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35947*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35950*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35953*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35956*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35959*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35962*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35965*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 35977*/      OPC_EmitInteger, MVT::i32, 1, 
/* 35980*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 35983*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35986*/      OPC_EmitInteger, MVT::i32, 0, 
/* 35989*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_eg:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 36008*/    /*Scope*/ 66, /*->36075*/
/* 36009*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 36011*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36014*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36017*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36020*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36023*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36026*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36029*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36032*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36044*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36047*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36050*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36053*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36056*/      OPC_MorphNodeTo1, TARGET_VAL(R600::RECIPSQRT_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (AMDGPUrsq:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (RECIPSQRT_IEEE_cm:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src0)
/* 36075*/    0, /*End of Scope*/
/* 36076*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::SINT_TO_FP),// ->36221
/* 36080*/    OPC_RecordChild0, // #0 = $src0
/* 36081*/    OPC_CheckChild0Type, MVT::i32,
/* 36083*/    OPC_CheckType, MVT::f32,
/* 36085*/    OPC_Scope, 66, /*->36153*/ // 2 children in Scope
/* 36087*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36089*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36092*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36095*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36098*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36101*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36104*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36107*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36110*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36122*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36125*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36134*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36153*/    /*Scope*/ 66, /*->36220*/
/* 36154*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36156*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36159*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36162*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36165*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36168*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36171*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36174*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36177*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36189*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36192*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36195*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36198*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36201*/      OPC_MorphNodeTo1, TARGET_VAL(R600::INT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (sint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (INT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36220*/    0, /*End of Scope*/
/* 36221*/  /*SwitchOpcode*/ 13|128,1/*141*/, TARGET_VAL(ISD::UINT_TO_FP),// ->36366
/* 36225*/    OPC_RecordChild0, // #0 = $src0
/* 36226*/    OPC_CheckChild0Type, MVT::i32,
/* 36228*/    OPC_CheckType, MVT::f32,
/* 36230*/    OPC_Scope, 66, /*->36298*/ // 2 children in Scope
/* 36232*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36234*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36237*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36240*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36243*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36252*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36255*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36267*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36270*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36273*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36276*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36279*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_r600:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36298*/    /*Scope*/ 66, /*->36365*/
/* 36299*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36301*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36304*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36307*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36310*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36313*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36316*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36319*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36322*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36334*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36337*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36340*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36343*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36346*/      OPC_MorphNodeTo1, TARGET_VAL(R600::UINT_TO_FLT_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (uint_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
                // Dst: (UINT_TO_FLT_eg:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 36365*/    0, /*End of Scope*/
/* 36366*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::SIN_HW),// ->36645
/* 36370*/    OPC_RecordChild0, // #0 = $src0
/* 36371*/    OPC_CheckChild0Type, MVT::f32,
/* 36373*/    OPC_CheckType, MVT::f32,
/* 36375*/    OPC_Scope, 66, /*->36443*/ // 4 children in Scope
/* 36377*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36379*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36382*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36385*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36388*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36391*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36394*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36397*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36400*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36412*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36415*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36418*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36421*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36424*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36443*/    /*Scope*/ 66, /*->36510*/
/* 36444*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 36446*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36449*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36452*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36455*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36458*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36461*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36464*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36467*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36479*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36482*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36485*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36488*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36491*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36510*/    /*Scope*/ 66, /*->36577*/
/* 36511*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36513*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36516*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36519*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36522*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36525*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36528*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36531*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36534*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36546*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36549*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36552*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36555*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36558*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36577*/    /*Scope*/ 66, /*->36644*/
/* 36578*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 36580*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36583*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36586*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36589*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36592*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36595*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36598*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36601*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36613*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36616*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36619*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36622*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36625*/      OPC_MorphNodeTo1, TARGET_VAL(R600::SIN_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (SIN_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (SIN_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36644*/    0, /*End of Scope*/
/* 36645*/  /*SwitchOpcode*/ 19|128,2/*275*/, TARGET_VAL(AMDGPUISD::COS_HW),// ->36924
/* 36649*/    OPC_RecordChild0, // #0 = $src0
/* 36650*/    OPC_CheckChild0Type, MVT::f32,
/* 36652*/    OPC_CheckType, MVT::f32,
/* 36654*/    OPC_Scope, 66, /*->36722*/ // 4 children in Scope
/* 36656*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 36658*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36661*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36664*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36667*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36670*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36673*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36676*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36679*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36691*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36694*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36697*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36700*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36703*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r600), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36722*/    /*Scope*/ 66, /*->36789*/
/* 36723*/      OPC_CheckPatternPredicate, 5, // (Subtarget->getGeneration() == AMDGPUSubtarget::R700)
/* 36725*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36728*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36731*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36734*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36737*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36740*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36743*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36746*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36758*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36761*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36764*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36767*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36770*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_r700), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_r700:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36789*/    /*Scope*/ 66, /*->36856*/
/* 36790*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 36792*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36795*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36798*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36801*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36804*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36807*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36810*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36813*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36825*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36828*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36831*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36834*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36837*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_eg), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_eg:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36856*/    /*Scope*/ 66, /*->36923*/
/* 36857*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 36859*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36862*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36865*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36868*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36871*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36874*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36877*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36880*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36892*/      OPC_EmitInteger, MVT::i32, 1, 
/* 36895*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 36898*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36901*/      OPC_EmitInteger, MVT::i32, 0, 
/* 36904*/      OPC_MorphNodeTo1, TARGET_VAL(R600::COS_cm), 0,
                    MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
                // Src: (COS_HW:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
                // Dst: (COS_cm:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 36923*/    0, /*End of Scope*/
/* 36924*/  /*SwitchOpcode*/ 103, TARGET_VAL(ISD::FMA),// ->37030
/* 36927*/    OPC_RecordChild0, // #0 = $src0
/* 36928*/    OPC_RecordChild1, // #1 = $src1
/* 36929*/    OPC_RecordChild2, // #2 = $src2
/* 36930*/    OPC_CheckType, MVT::f32,
/* 36932*/    OPC_CheckPatternPredicate, 6, // (Subtarget->hasFMA()) && (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 36934*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36937*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36940*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36943*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36946*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36958*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36961*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36964*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36976*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36979*/    OPC_EmitInteger, MVT::i32, 0, 
/* 36982*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 36994*/    OPC_EmitInteger, MVT::i32, 1, 
/* 36997*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37000*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37003*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37006*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FMA_eg), 0,
                  MVT::f32, 18/*#Ops*/, 3, 4, 0, 5, 6, 7, 1, 8, 9, 10, 2, 11, 12, 13, 14, 15, 16, 17, 
              // Src: (fma:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2) - Complexity = 3
              // Dst: (FMA_eg:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, f32:{ *:[f32] }:$src2)
/* 37030*/  /*SwitchOpcode*/ 71, TARGET_VAL(ISD::FP16_TO_FP),// ->37104
/* 37033*/    OPC_RecordChild0, // #0 = $src0
/* 37034*/    OPC_CheckChild0Type, MVT::i32,
/* 37036*/    OPC_CheckType, MVT::f32,
/* 37038*/    OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 37040*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37043*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37046*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37049*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37052*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37055*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37058*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37061*/    OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37073*/    OPC_EmitInteger, MVT::i32, 1, 
/* 37076*/    OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37079*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37082*/    OPC_EmitInteger, MVT::i32, 0, 
/* 37085*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FLT16_TO_FLT32), 0,
                  MVT::f32, 13/*#Ops*/, 1, 2, 3, 4, 0, 5, 6, 7, 8, 9, 10, 11, 12, 
              // Src: (f16_to_fp:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0) - Complexity = 3
              // Dst: (FLT16_TO_FLT32:{ *:[f32] } R600_Reg32:{ *:[i32] }:$src0)
/* 37104*/  /*SwitchOpcode*/ 119|128,3/*503*/, TARGET_VAL(ISD::FSQRT),// ->37611
/* 37108*/    OPC_RecordChild0, // #0 = $src
/* 37109*/    OPC_CheckType, MVT::f32,
/* 37111*/    OPC_Scope, 36|128,1/*164*/, /*->37278*/ // 3 children in Scope
/* 37114*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 37116*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37119*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37122*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37125*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37128*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37131*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37134*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37137*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37140*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37143*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37155*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37158*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37161*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37164*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37167*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37170*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37173*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37176*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37188*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37191*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37194*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37197*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37200*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_r600), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37219*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37222*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37225*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37228*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37240*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37243*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37246*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37249*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37252*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_r600:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37278*/    /*Scope*/ 36|128,1/*164*/, /*->37444*/
/* 37280*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 37282*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37288*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37291*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37294*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37297*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37300*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37303*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37306*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37309*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37321*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37324*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37327*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37330*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37333*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37336*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37339*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37342*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37354*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37357*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37360*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37363*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37366*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_eg), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37385*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37388*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37391*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37394*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37406*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37409*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37412*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37415*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37418*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } ?:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_eg:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37444*/    /*Scope*/ 36|128,1/*164*/, /*->37610*/
/* 37446*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 37448*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37451*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37454*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37457*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37460*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37463*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37466*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37469*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37472*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37475*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37487*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37490*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37493*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37496*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37499*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37502*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37505*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37508*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37520*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37523*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37526*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37529*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37532*/      OPC_EmitNode1, TARGET_VAL(R600::RECIPSQRT_CLAMPED_cm), 0,
                    MVT::i32, 13/*#Ops*/, 11, 12, 13, 14, 0, 15, 16, 17, 18, 19, 20, 21, 22,  // Results = #23
/* 37551*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37554*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37557*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37560*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37572*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37575*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37578*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37581*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37584*/      OPC_MorphNodeTo1, TARGET_VAL(R600::MUL), 0,
                    MVT::f32, 20/*#Ops*/, 1, 2, 3, 4, 5, 6, 0, 7, 8, 9, 10, 23, 24, 25, 26, 27, 28, 29, 30, 31, 
                // Src: (fsqrt:{ *:[f32] } f32:{ *:[f32] }:$src) - Complexity = 3
                // Dst: (MUL:{ *:[f32] } R600_Reg32:{ *:[f32] }:$src, (RECIPSQRT_CLAMPED_cm:{ *:[i32] } ?:{ *:[f32] }:$src))
/* 37610*/    0, /*End of Scope*/
/* 37611*/  /*SwitchOpcode*/ 56|128,5/*696*/, TARGET_VAL(ISD::FPOW),// ->38311
/* 37615*/    OPC_RecordChild0, // #0 = $src0
/* 37616*/    OPC_RecordChild1, // #1 = $src1
/* 37617*/    OPC_CheckType, MVT::f32,
/* 37619*/    OPC_Scope, 100|128,1/*228*/, /*->37850*/ // 3 children in Scope
/* 37622*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 37624*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37627*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37630*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37633*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37636*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37639*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37642*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37645*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37648*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37651*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37654*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37657*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37660*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37663*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37675*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37678*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37681*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37684*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37687*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37690*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37693*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37696*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37708*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37711*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37714*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37717*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37720*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_r600), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 37739*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37742*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37745*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37748*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37760*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37763*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37766*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37769*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37772*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 37798*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37801*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37804*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37807*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37819*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37822*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37825*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37828*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37831*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_r600), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_r600:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_r600:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 37850*/    /*Scope*/ 100|128,1/*228*/, /*->38080*/
/* 37852*/      OPC_CheckPatternPredicate, 4, // (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA())
/* 37854*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37857*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37860*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37863*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37866*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37869*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37872*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37875*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37878*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37881*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37884*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37887*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37890*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37893*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37905*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37908*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37911*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37914*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37917*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37920*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37923*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37926*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37938*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37941*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37944*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37947*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37950*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_eg), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 37969*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37972*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37975*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37978*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 37990*/      OPC_EmitInteger, MVT::i32, 1, 
/* 37993*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 37996*/      OPC_EmitInteger, MVT::i32, 0, 
/* 37999*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38002*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 38028*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38031*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38034*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38037*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38049*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38052*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38055*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38058*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38061*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_eg), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_eg:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_eg:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 38080*/    /*Scope*/ 100|128,1/*228*/, /*->38310*/
/* 38082*/      OPC_CheckPatternPredicate, 3, // (true) && (true) && (Subtarget->hasCaymanISA())
/* 38084*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38087*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38090*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38093*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38096*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38099*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38102*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38105*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38108*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38111*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38114*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38117*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38120*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38123*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38135*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38138*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38141*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38144*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38147*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38150*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38153*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38156*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38168*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38171*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38174*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38177*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38180*/      OPC_EmitNode1, TARGET_VAL(R600::LOG_IEEE_cm), 0,
                    MVT::i32, 13/*#Ops*/, 16, 17, 18, 19, 0, 20, 21, 22, 23, 24, 25, 26, 27,  // Results = #28
/* 38199*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38202*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38205*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38208*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38220*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38223*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38226*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38229*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38232*/      OPC_EmitNode1, TARGET_VAL(R600::MUL), 0,
                    MVT::i32, 20/*#Ops*/, 6, 7, 8, 9, 10, 11, 1, 12, 13, 14, 15, 28, 29, 30, 31, 32, 33, 34, 35, 36,  // Results = #37
/* 38258*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38261*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38264*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38267*/      OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38279*/      OPC_EmitInteger, MVT::i32, 1, 
/* 38282*/      OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38285*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38288*/      OPC_EmitInteger, MVT::i32, 0, 
/* 38291*/      OPC_MorphNodeTo1, TARGET_VAL(R600::EXP_IEEE_cm), 0,
                    MVT::f32, 13/*#Ops*/, 2, 3, 4, 5, 37, 38, 39, 40, 41, 42, 43, 44, 45, 
                // Src: (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                // Dst: (EXP_IEEE_cm:{ *:[f32] } (MUL:{ *:[i32] } f32:{ *:[f32] }:$src1, (LOG_IEEE_cm:{ *:[i32] } f32:{ *:[f32] }:$src0)))
/* 38310*/    0, /*End of Scope*/
/* 38311*/  /*SwitchOpcode*/ 14, TARGET_VAL(ISD::ConstantFP),// ->38328
/* 38314*/    OPC_RecordNode, // #0 = $val
/* 38315*/    OPC_CheckType, MVT::f32,
/* 38317*/    OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38319*/    OPC_EmitConvertToTarget, 0,
/* 38321*/    OPC_MorphNodeTo1, TARGET_VAL(R600::MOV_IMM_F32), 0,
                  MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:{ *:[f32] }):$val - Complexity = 3
              // Dst: (MOV_IMM_F32:{ *:[f32] } (fpimm:{ *:[f32] }):$val)
/* 38328*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FABS),// ->38341
/* 38331*/    OPC_RecordChild0, // #0 = $src0
/* 38332*/    OPC_CheckType, MVT::f32,
/* 38334*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FABS_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FABS_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 38341*/  /*SwitchOpcode*/ 10, TARGET_VAL(ISD::FNEG),// ->38354
/* 38344*/    OPC_RecordChild0, // #0 = $src0
/* 38345*/    OPC_CheckType, MVT::f32,
/* 38347*/    OPC_MorphNodeTo1, TARGET_VAL(R600::FNEG_R600), 0,
                  MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:{ *:[f32] } f32:{ *:[f32] }:$src0) - Complexity = 3
              // Dst: (FNEG_R600:{ *:[f32] } f32:{ *:[f32] }:$src0)
/* 38354*/  /*SwitchOpcode*/ 68|128,4/*580*/, TARGET_VAL(ISD::FCOPYSIGN),// ->38938
/* 38358*/    OPC_RecordChild0, // #0 = $src0
/* 38359*/    OPC_RecordChild1, // #1 = $src1
/* 38360*/    OPC_Scope, 19|128,2/*275*/, /*->38638*/ // 2 children in Scope
/* 38363*/      OPC_CheckChild1Type, MVT::f32,
/* 38365*/      OPC_SwitchType /*2 cases */, 112, MVT::f32,// ->38480
/* 38368*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38370*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38373*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38376*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38383*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 38390*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38393*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38396*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38408*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38411*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38414*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38426*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38429*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38432*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38444*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38447*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38450*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38453*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38456*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 1, 12, 13, 14, 15, 16, 17, 18, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, ?:{ *:[f32] }:$src1)
/* 38480*/      /*SwitchType*/ 26|128,1/*154*/, MVT::f64,// ->38637
/* 38483*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38485*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 38488*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38491*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 38499*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38502*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38505*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38508*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38515*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 38522*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38525*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38528*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38540*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38543*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 38551*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38554*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38557*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38569*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38572*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38575*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38587*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38590*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38593*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38596*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38599*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 1, 18, 19, 20, 21, 22, 23, 24,  // Results = #25
/* 38623*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38626*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 25, 26, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f32:{ *:[f32] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub1:{ *:[i32] }), ?:{ *:[f32] }:$src1), sub1:{ *:[i32] })
/* 38637*/      0, // EndSwitchType
/* 38638*/    /*Scope*/ 41|128,2/*297*/, /*->38937*/
/* 38640*/      OPC_CheckChild1Type, MVT::f64,
/* 38642*/      OPC_SwitchType /*2 cases */, 123, MVT::f32,// ->38768
/* 38645*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38647*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38650*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38653*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38660*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 4,  // Results = #5
/* 38667*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38670*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38673*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38685*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38688*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38691*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38703*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38706*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 12,  // Results = #13
/* 38714*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38717*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38720*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38732*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38735*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38738*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38741*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38744*/        OPC_MorphNodeTo1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::f32, 18/*#Ops*/, 2, 3, 5, 6, 7, 8, 0, 9, 10, 11, 13, 14, 15, 16, 17, 18, 19, 20, 
                  // Src: (fcopysign:{ *:[f32] } f32:{ *:[f32] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (BFI_INT_eg:{ *:[f32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), ?:{ *:[f32] }:$src0, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src1, sub1:{ *:[i32] }))
/* 38768*/      /*SwitchType*/ 37|128,1/*165*/, MVT::f64,// ->38936
/* 38771*/        OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38773*/        OPC_EmitInteger, MVT::i32, R600::R600_Reg64RegClassID,
/* 38776*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38779*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4
/* 38787*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38790*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38793*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38796*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,7/*2147483647*/, 
/* 38803*/        OPC_EmitNode1, TARGET_VAL(R600::MOV_IMM_I32), 0,
                      MVT::i32, 1/*#Ops*/, 8,  // Results = #9
/* 38810*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38813*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38816*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38828*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38831*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 0, 13,  // Results = #14
/* 38839*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38842*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38845*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38857*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38860*/        OPC_EmitNode1, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                      MVT::i32, 2/*#Ops*/, 1, 18,  // Results = #19
/* 38868*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38871*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38874*/        OPC_EmitInteger, MVT::i32, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/* 38886*/        OPC_EmitInteger, MVT::i32, 1, 
/* 38889*/        OPC_EmitRegister, MVT::i32, R600::PRED_SEL_OFF,
/* 38892*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38895*/        OPC_EmitInteger, MVT::i32, 0, 
/* 38898*/        OPC_EmitNode1, TARGET_VAL(R600::BFI_INT_eg), 0,
                      MVT::i32, 18/*#Ops*/, 6, 7, 9, 10, 11, 12, 14, 15, 16, 17, 19, 20, 21, 22, 23, 24, 25, 26,  // Results = #27
/* 38922*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38925*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::REG_SEQUENCE), 0,
                      MVT::f64, 5/*#Ops*/, 2, 4, 5, 27, 28, 
                  // Src: (fcopysign:{ *:[f64] } f64:{ *:[f64] }:$src0, f64:{ *:[f64] }:$src1) - Complexity = 3
                  // Dst: (REG_SEQUENCE:{ *:[f64] } R600_Reg64:{ *:[i32] }, (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub0:{ *:[i32] }), sub0:{ *:[i32] }, (BFI_INT_eg:{ *:[i32] } (MOV_IMM_I32:{ *:[i32] } 2147483647:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src0, sub1:{ *:[i32] }), (EXTRACT_SUBREG:{ *:[i32] } ?:{ *:[f64] }:$src1, sub1:{ *:[i32] })), sub1:{ *:[i32] })
/* 38936*/      0, // EndSwitchType
/* 38937*/    0, /*End of Scope*/
/* 38938*/  /*SwitchOpcode*/ 36|128,2/*292*/, TARGET_VAL(ISD::INSERT_VECTOR_ELT),// ->39234
/* 38942*/    OPC_RecordChild0, // #0 = $vec
/* 38943*/    OPC_RecordChild1, // #1 = $elem
/* 38944*/    OPC_Scope, 36, /*->38982*/ // 10 children in Scope
/* 38946*/      OPC_CheckChild2Integer, 0, 
/* 38948*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->38965
/* 38951*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38953*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38956*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 38965*/      /*SwitchType*/ 14, MVT::v2i32,// ->38981
/* 38967*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38969*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 38972*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub0:{ *:[i32] })
/* 38981*/      0, // EndSwitchType
/* 38982*/    /*Scope*/ 36, /*->39019*/
/* 38983*/      OPC_CheckChild2Integer, 1, 
/* 38985*/      OPC_SwitchType /*2 cases */, 14, MVT::v4i32,// ->39002
/* 38988*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 38990*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 38993*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 39002*/      /*SwitchType*/ 14, MVT::v2i32,// ->39018
/* 39004*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39006*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39009*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$elem, sub1:{ *:[i32] })
/* 39018*/      0, // EndSwitchType
/* 39019*/    /*Scope*/ 18, /*->39038*/
/* 39020*/      OPC_CheckChild2Integer, 2, 
/* 39022*/      OPC_CheckType, MVT::v4i32,
/* 39024*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39026*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 39029*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub2:{ *:[i32] })
/* 39038*/    /*Scope*/ 18, /*->39057*/
/* 39039*/      OPC_CheckChild2Integer, 3, 
/* 39041*/      OPC_CheckType, MVT::v4i32,
/* 39043*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39045*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 39048*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$elem, sub3:{ *:[i32] })
/* 39057*/    /*Scope*/ 31, /*->39089*/
/* 39058*/      OPC_RecordChild2, // #2 = $index
/* 39059*/      OPC_CheckChild2Type, MVT::i32,
/* 39061*/      OPC_SwitchType /*2 cases */, 11, MVT::v2i32,// ->39075
/* 39064*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39066*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2i32] } v2i32:{ *:[v2i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2i32] } ?:{ *:[v2i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 39075*/      /*SwitchType*/ 11, MVT::v4i32,// ->39088
/* 39077*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39079*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4i32] } v4i32:{ *:[v4i32] }:$vec, i32:{ *:[i32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4i32] } ?:{ *:[v4i32] }:$vec, ?:{ *:[i32] }:$value, ?:{ *:[i32] }:$index)
/* 39088*/      0, // EndSwitchType
/* 39089*/    /*Scope*/ 36, /*->39126*/
/* 39090*/      OPC_CheckChild2Integer, 0, 
/* 39092*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->39109
/* 39095*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39097*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 39100*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 39109*/      /*SwitchType*/ 14, MVT::v2f32,// ->39125
/* 39111*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39113*/        OPC_EmitInteger, MVT::i32, R600::sub0,
/* 39116*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 0:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub0:{ *:[i32] })
/* 39125*/      0, // EndSwitchType
/* 39126*/    /*Scope*/ 36, /*->39163*/
/* 39127*/      OPC_CheckChild2Integer, 1, 
/* 39129*/      OPC_SwitchType /*2 cases */, 14, MVT::v4f32,// ->39146
/* 39132*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39134*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39137*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 39146*/      /*SwitchType*/ 14, MVT::v2f32,// ->39162
/* 39148*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39150*/        OPC_EmitInteger, MVT::i32, R600::sub1,
/* 39153*/        OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$elem, 1:{ *:[iPTR] }) - Complexity = 8
                  // Dst: (INSERT_SUBREG:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$elem, sub1:{ *:[i32] })
/* 39162*/      0, // EndSwitchType
/* 39163*/    /*Scope*/ 18, /*->39182*/
/* 39164*/      OPC_CheckChild2Integer, 2, 
/* 39166*/      OPC_CheckType, MVT::v4f32,
/* 39168*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39170*/      OPC_EmitInteger, MVT::i32, R600::sub2,
/* 39173*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 2:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub2:{ *:[i32] })
/* 39182*/    /*Scope*/ 18, /*->39201*/
/* 39183*/      OPC_CheckChild2Integer, 3, 
/* 39185*/      OPC_CheckType, MVT::v4f32,
/* 39187*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39189*/      OPC_EmitInteger, MVT::i32, R600::sub3,
/* 39192*/      OPC_MorphNodeTo1, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                    MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$elem, 3:{ *:[iPTR] }) - Complexity = 8
                // Dst: (INSERT_SUBREG:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$elem, sub3:{ *:[i32] })
/* 39201*/    /*Scope*/ 31, /*->39233*/
/* 39202*/      OPC_RecordChild2, // #2 = $index
/* 39203*/      OPC_CheckChild2Type, MVT::i32,
/* 39205*/      OPC_SwitchType /*2 cases */, 11, MVT::v2f32,// ->39219
/* 39208*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39210*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V2), 0,
                      MVT::v2f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v2f32] } v2f32:{ *:[v2f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V2:{ *:[v2f32] } ?:{ *:[v2f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 39219*/      /*SwitchType*/ 11, MVT::v4f32,// ->39232
/* 39221*/        OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39223*/        OPC_MorphNodeTo1, TARGET_VAL(R600::R600_INSERT_ELT_V4), 0,
                      MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (insertelt:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$vec, f32:{ *:[f32] }:$value, i32:{ *:[i32] }:$index) - Complexity = 3
                  // Dst: (R600_INSERT_ELT_V4:{ *:[v4f32] } ?:{ *:[v4f32] }:$vec, ?:{ *:[f32] }:$value, ?:{ *:[i32] }:$index)
/* 39232*/      0, // EndSwitchType
/* 39233*/    0, /*End of Scope*/
/* 39234*/  /*SwitchOpcode*/ 96|128,18/*2400*/, TARGET_VAL(AMDGPUISD::TEXTURE_FETCH),// ->41638
/* 39238*/    OPC_Scope, 88|128,1/*216*/, /*->39457*/ // 11 children in Scope
/* 39241*/      OPC_CheckChild0Integer, 0, 
/* 39243*/      OPC_CheckChild0Type, MVT::i32,
/* 39245*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39246*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39248*/      OPC_RecordChild2, // #1 = $srcx
/* 39249*/      OPC_MoveChild2,
/* 39250*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39253*/      OPC_CheckType, MVT::i32,
/* 39255*/      OPC_MoveParent,
/* 39256*/      OPC_RecordChild3, // #2 = $srcy
/* 39257*/      OPC_MoveChild3,
/* 39258*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39261*/      OPC_CheckType, MVT::i32,
/* 39263*/      OPC_MoveParent,
/* 39264*/      OPC_RecordChild4, // #3 = $srcz
/* 39265*/      OPC_MoveChild4,
/* 39266*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39269*/      OPC_CheckType, MVT::i32,
/* 39271*/      OPC_MoveParent,
/* 39272*/      OPC_RecordChild5, // #4 = $srcw
/* 39273*/      OPC_MoveChild5,
/* 39274*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39277*/      OPC_CheckType, MVT::i32,
/* 39279*/      OPC_MoveParent,
/* 39280*/      OPC_RecordChild6, // #5 = $offsetx
/* 39281*/      OPC_MoveChild6,
/* 39282*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39285*/      OPC_CheckType, MVT::i32,
/* 39287*/      OPC_MoveParent,
/* 39288*/      OPC_RecordChild7, // #6 = $offsety
/* 39289*/      OPC_MoveChild7,
/* 39290*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39293*/      OPC_CheckType, MVT::i32,
/* 39295*/      OPC_MoveParent,
/* 39296*/      OPC_MoveChild, 8,
/* 39298*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39301*/      OPC_RecordNode, // #7 = $offsetz
/* 39302*/      OPC_CheckType, MVT::i32,
/* 39304*/      OPC_MoveParent,
/* 39305*/      OPC_MoveChild, 9,
/* 39307*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39310*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39311*/      OPC_CheckType, MVT::i32,
/* 39313*/      OPC_MoveParent,
/* 39314*/      OPC_MoveChild, 10,
/* 39316*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39319*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39320*/      OPC_CheckType, MVT::i32,
/* 39322*/      OPC_MoveParent,
/* 39323*/      OPC_MoveChild, 11,
/* 39325*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39328*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39329*/      OPC_CheckType, MVT::i32,
/* 39331*/      OPC_MoveParent,
/* 39332*/      OPC_MoveChild, 12,
/* 39334*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39337*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39338*/      OPC_CheckType, MVT::i32,
/* 39340*/      OPC_MoveParent,
/* 39341*/      OPC_MoveChild, 13,
/* 39343*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39346*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39347*/      OPC_CheckType, MVT::i32,
/* 39349*/      OPC_MoveParent,
/* 39350*/      OPC_MoveChild, 14,
/* 39352*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39355*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39356*/      OPC_CheckType, MVT::i32,
/* 39358*/      OPC_MoveParent,
/* 39359*/      OPC_MoveChild, 15,
/* 39361*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39364*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39365*/      OPC_CheckType, MVT::i32,
/* 39367*/      OPC_MoveParent,
/* 39368*/      OPC_MoveChild, 16,
/* 39370*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39373*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39374*/      OPC_CheckType, MVT::i32,
/* 39376*/      OPC_MoveParent,
/* 39377*/      OPC_MoveChild, 17,
/* 39379*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39382*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39383*/      OPC_CheckType, MVT::i32,
/* 39385*/      OPC_MoveParent,
/* 39386*/      OPC_MoveChild, 18,
/* 39388*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39391*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39392*/      OPC_CheckType, MVT::i32,
/* 39394*/      OPC_MoveParent,
/* 39395*/      OPC_CheckType, MVT::v4f32,
/* 39397*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39399*/      OPC_EmitConvertToTarget, 1,
/* 39401*/      OPC_EmitConvertToTarget, 2,
/* 39403*/      OPC_EmitConvertToTarget, 3,
/* 39405*/      OPC_EmitConvertToTarget, 4,
/* 39407*/      OPC_EmitConvertToTarget, 5,
/* 39409*/      OPC_EmitConvertToTarget, 6,
/* 39411*/      OPC_EmitConvertToTarget, 7,
/* 39413*/      OPC_EmitConvertToTarget, 8,
/* 39415*/      OPC_EmitConvertToTarget, 9,
/* 39417*/      OPC_EmitConvertToTarget, 10,
/* 39419*/      OPC_EmitConvertToTarget, 11,
/* 39421*/      OPC_EmitConvertToTarget, 12,
/* 39423*/      OPC_EmitConvertToTarget, 13,
/* 39425*/      OPC_EmitConvertToTarget, 14,
/* 39427*/      OPC_EmitConvertToTarget, 15,
/* 39429*/      OPC_EmitConvertToTarget, 16,
/* 39431*/      OPC_EmitConvertToTarget, 17,
/* 39433*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 0:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39457*/    /*Scope*/ 88|128,1/*216*/, /*->39675*/
/* 39459*/      OPC_CheckChild0Integer, 1, 
/* 39461*/      OPC_CheckChild0Type, MVT::i32,
/* 39463*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39464*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39466*/      OPC_RecordChild2, // #1 = $srcx
/* 39467*/      OPC_MoveChild2,
/* 39468*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39471*/      OPC_CheckType, MVT::i32,
/* 39473*/      OPC_MoveParent,
/* 39474*/      OPC_RecordChild3, // #2 = $srcy
/* 39475*/      OPC_MoveChild3,
/* 39476*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39479*/      OPC_CheckType, MVT::i32,
/* 39481*/      OPC_MoveParent,
/* 39482*/      OPC_RecordChild4, // #3 = $srcz
/* 39483*/      OPC_MoveChild4,
/* 39484*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39487*/      OPC_CheckType, MVT::i32,
/* 39489*/      OPC_MoveParent,
/* 39490*/      OPC_RecordChild5, // #4 = $srcw
/* 39491*/      OPC_MoveChild5,
/* 39492*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39495*/      OPC_CheckType, MVT::i32,
/* 39497*/      OPC_MoveParent,
/* 39498*/      OPC_RecordChild6, // #5 = $offsetx
/* 39499*/      OPC_MoveChild6,
/* 39500*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39503*/      OPC_CheckType, MVT::i32,
/* 39505*/      OPC_MoveParent,
/* 39506*/      OPC_RecordChild7, // #6 = $offsety
/* 39507*/      OPC_MoveChild7,
/* 39508*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39511*/      OPC_CheckType, MVT::i32,
/* 39513*/      OPC_MoveParent,
/* 39514*/      OPC_MoveChild, 8,
/* 39516*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39519*/      OPC_RecordNode, // #7 = $offsetz
/* 39520*/      OPC_CheckType, MVT::i32,
/* 39522*/      OPC_MoveParent,
/* 39523*/      OPC_MoveChild, 9,
/* 39525*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39528*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39529*/      OPC_CheckType, MVT::i32,
/* 39531*/      OPC_MoveParent,
/* 39532*/      OPC_MoveChild, 10,
/* 39534*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39537*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39538*/      OPC_CheckType, MVT::i32,
/* 39540*/      OPC_MoveParent,
/* 39541*/      OPC_MoveChild, 11,
/* 39543*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39546*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39547*/      OPC_CheckType, MVT::i32,
/* 39549*/      OPC_MoveParent,
/* 39550*/      OPC_MoveChild, 12,
/* 39552*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39555*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39556*/      OPC_CheckType, MVT::i32,
/* 39558*/      OPC_MoveParent,
/* 39559*/      OPC_MoveChild, 13,
/* 39561*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39564*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39565*/      OPC_CheckType, MVT::i32,
/* 39567*/      OPC_MoveParent,
/* 39568*/      OPC_MoveChild, 14,
/* 39570*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39573*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39574*/      OPC_CheckType, MVT::i32,
/* 39576*/      OPC_MoveParent,
/* 39577*/      OPC_MoveChild, 15,
/* 39579*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39582*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39583*/      OPC_CheckType, MVT::i32,
/* 39585*/      OPC_MoveParent,
/* 39586*/      OPC_MoveChild, 16,
/* 39588*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39591*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39592*/      OPC_CheckType, MVT::i32,
/* 39594*/      OPC_MoveParent,
/* 39595*/      OPC_MoveChild, 17,
/* 39597*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39600*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39601*/      OPC_CheckType, MVT::i32,
/* 39603*/      OPC_MoveParent,
/* 39604*/      OPC_MoveChild, 18,
/* 39606*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39609*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39610*/      OPC_CheckType, MVT::i32,
/* 39612*/      OPC_MoveParent,
/* 39613*/      OPC_CheckType, MVT::v4f32,
/* 39615*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39617*/      OPC_EmitConvertToTarget, 1,
/* 39619*/      OPC_EmitConvertToTarget, 2,
/* 39621*/      OPC_EmitConvertToTarget, 3,
/* 39623*/      OPC_EmitConvertToTarget, 4,
/* 39625*/      OPC_EmitConvertToTarget, 5,
/* 39627*/      OPC_EmitConvertToTarget, 6,
/* 39629*/      OPC_EmitConvertToTarget, 7,
/* 39631*/      OPC_EmitConvertToTarget, 8,
/* 39633*/      OPC_EmitConvertToTarget, 9,
/* 39635*/      OPC_EmitConvertToTarget, 10,
/* 39637*/      OPC_EmitConvertToTarget, 11,
/* 39639*/      OPC_EmitConvertToTarget, 12,
/* 39641*/      OPC_EmitConvertToTarget, 13,
/* 39643*/      OPC_EmitConvertToTarget, 14,
/* 39645*/      OPC_EmitConvertToTarget, 15,
/* 39647*/      OPC_EmitConvertToTarget, 16,
/* 39649*/      OPC_EmitConvertToTarget, 17,
/* 39651*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 1:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39675*/    /*Scope*/ 88|128,1/*216*/, /*->39893*/
/* 39677*/      OPC_CheckChild0Integer, 2, 
/* 39679*/      OPC_CheckChild0Type, MVT::i32,
/* 39681*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39682*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39684*/      OPC_RecordChild2, // #1 = $srcx
/* 39685*/      OPC_MoveChild2,
/* 39686*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39689*/      OPC_CheckType, MVT::i32,
/* 39691*/      OPC_MoveParent,
/* 39692*/      OPC_RecordChild3, // #2 = $srcy
/* 39693*/      OPC_MoveChild3,
/* 39694*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39697*/      OPC_CheckType, MVT::i32,
/* 39699*/      OPC_MoveParent,
/* 39700*/      OPC_RecordChild4, // #3 = $srcz
/* 39701*/      OPC_MoveChild4,
/* 39702*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39705*/      OPC_CheckType, MVT::i32,
/* 39707*/      OPC_MoveParent,
/* 39708*/      OPC_RecordChild5, // #4 = $srcw
/* 39709*/      OPC_MoveChild5,
/* 39710*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39713*/      OPC_CheckType, MVT::i32,
/* 39715*/      OPC_MoveParent,
/* 39716*/      OPC_RecordChild6, // #5 = $offsetx
/* 39717*/      OPC_MoveChild6,
/* 39718*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39721*/      OPC_CheckType, MVT::i32,
/* 39723*/      OPC_MoveParent,
/* 39724*/      OPC_RecordChild7, // #6 = $offsety
/* 39725*/      OPC_MoveChild7,
/* 39726*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39729*/      OPC_CheckType, MVT::i32,
/* 39731*/      OPC_MoveParent,
/* 39732*/      OPC_MoveChild, 8,
/* 39734*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39737*/      OPC_RecordNode, // #7 = $offsetz
/* 39738*/      OPC_CheckType, MVT::i32,
/* 39740*/      OPC_MoveParent,
/* 39741*/      OPC_MoveChild, 9,
/* 39743*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39746*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39747*/      OPC_CheckType, MVT::i32,
/* 39749*/      OPC_MoveParent,
/* 39750*/      OPC_MoveChild, 10,
/* 39752*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39755*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39756*/      OPC_CheckType, MVT::i32,
/* 39758*/      OPC_MoveParent,
/* 39759*/      OPC_MoveChild, 11,
/* 39761*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39764*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39765*/      OPC_CheckType, MVT::i32,
/* 39767*/      OPC_MoveParent,
/* 39768*/      OPC_MoveChild, 12,
/* 39770*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39773*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39774*/      OPC_CheckType, MVT::i32,
/* 39776*/      OPC_MoveParent,
/* 39777*/      OPC_MoveChild, 13,
/* 39779*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39782*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 39783*/      OPC_CheckType, MVT::i32,
/* 39785*/      OPC_MoveParent,
/* 39786*/      OPC_MoveChild, 14,
/* 39788*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39791*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 39792*/      OPC_CheckType, MVT::i32,
/* 39794*/      OPC_MoveParent,
/* 39795*/      OPC_MoveChild, 15,
/* 39797*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39800*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 39801*/      OPC_CheckType, MVT::i32,
/* 39803*/      OPC_MoveParent,
/* 39804*/      OPC_MoveChild, 16,
/* 39806*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39809*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 39810*/      OPC_CheckType, MVT::i32,
/* 39812*/      OPC_MoveParent,
/* 39813*/      OPC_MoveChild, 17,
/* 39815*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39818*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 39819*/      OPC_CheckType, MVT::i32,
/* 39821*/      OPC_MoveParent,
/* 39822*/      OPC_MoveChild, 18,
/* 39824*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39827*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 39828*/      OPC_CheckType, MVT::i32,
/* 39830*/      OPC_MoveParent,
/* 39831*/      OPC_CheckType, MVT::v4f32,
/* 39833*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 39835*/      OPC_EmitConvertToTarget, 1,
/* 39837*/      OPC_EmitConvertToTarget, 2,
/* 39839*/      OPC_EmitConvertToTarget, 3,
/* 39841*/      OPC_EmitConvertToTarget, 4,
/* 39843*/      OPC_EmitConvertToTarget, 5,
/* 39845*/      OPC_EmitConvertToTarget, 6,
/* 39847*/      OPC_EmitConvertToTarget, 7,
/* 39849*/      OPC_EmitConvertToTarget, 8,
/* 39851*/      OPC_EmitConvertToTarget, 9,
/* 39853*/      OPC_EmitConvertToTarget, 10,
/* 39855*/      OPC_EmitConvertToTarget, 11,
/* 39857*/      OPC_EmitConvertToTarget, 12,
/* 39859*/      OPC_EmitConvertToTarget, 13,
/* 39861*/      OPC_EmitConvertToTarget, 14,
/* 39863*/      OPC_EmitConvertToTarget, 15,
/* 39865*/      OPC_EmitConvertToTarget, 16,
/* 39867*/      OPC_EmitConvertToTarget, 17,
/* 39869*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 2:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 39893*/    /*Scope*/ 88|128,1/*216*/, /*->40111*/
/* 39895*/      OPC_CheckChild0Integer, 3, 
/* 39897*/      OPC_CheckChild0Type, MVT::i32,
/* 39899*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 39900*/      OPC_CheckChild1Type, MVT::v4f32,
/* 39902*/      OPC_RecordChild2, // #1 = $srcx
/* 39903*/      OPC_MoveChild2,
/* 39904*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39907*/      OPC_CheckType, MVT::i32,
/* 39909*/      OPC_MoveParent,
/* 39910*/      OPC_RecordChild3, // #2 = $srcy
/* 39911*/      OPC_MoveChild3,
/* 39912*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39915*/      OPC_CheckType, MVT::i32,
/* 39917*/      OPC_MoveParent,
/* 39918*/      OPC_RecordChild4, // #3 = $srcz
/* 39919*/      OPC_MoveChild4,
/* 39920*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39923*/      OPC_CheckType, MVT::i32,
/* 39925*/      OPC_MoveParent,
/* 39926*/      OPC_RecordChild5, // #4 = $srcw
/* 39927*/      OPC_MoveChild5,
/* 39928*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39931*/      OPC_CheckType, MVT::i32,
/* 39933*/      OPC_MoveParent,
/* 39934*/      OPC_RecordChild6, // #5 = $offsetx
/* 39935*/      OPC_MoveChild6,
/* 39936*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39939*/      OPC_CheckType, MVT::i32,
/* 39941*/      OPC_MoveParent,
/* 39942*/      OPC_RecordChild7, // #6 = $offsety
/* 39943*/      OPC_MoveChild7,
/* 39944*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39947*/      OPC_CheckType, MVT::i32,
/* 39949*/      OPC_MoveParent,
/* 39950*/      OPC_MoveChild, 8,
/* 39952*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39955*/      OPC_RecordNode, // #7 = $offsetz
/* 39956*/      OPC_CheckType, MVT::i32,
/* 39958*/      OPC_MoveParent,
/* 39959*/      OPC_MoveChild, 9,
/* 39961*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39964*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 39965*/      OPC_CheckType, MVT::i32,
/* 39967*/      OPC_MoveParent,
/* 39968*/      OPC_MoveChild, 10,
/* 39970*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39973*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 39974*/      OPC_CheckType, MVT::i32,
/* 39976*/      OPC_MoveParent,
/* 39977*/      OPC_MoveChild, 11,
/* 39979*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39982*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 39983*/      OPC_CheckType, MVT::i32,
/* 39985*/      OPC_MoveParent,
/* 39986*/      OPC_MoveChild, 12,
/* 39988*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 39991*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 39992*/      OPC_CheckType, MVT::i32,
/* 39994*/      OPC_MoveParent,
/* 39995*/      OPC_MoveChild, 13,
/* 39997*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40000*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40001*/      OPC_CheckType, MVT::i32,
/* 40003*/      OPC_MoveParent,
/* 40004*/      OPC_MoveChild, 14,
/* 40006*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40009*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40010*/      OPC_CheckType, MVT::i32,
/* 40012*/      OPC_MoveParent,
/* 40013*/      OPC_MoveChild, 15,
/* 40015*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40018*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40019*/      OPC_CheckType, MVT::i32,
/* 40021*/      OPC_MoveParent,
/* 40022*/      OPC_MoveChild, 16,
/* 40024*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40027*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40028*/      OPC_CheckType, MVT::i32,
/* 40030*/      OPC_MoveParent,
/* 40031*/      OPC_MoveChild, 17,
/* 40033*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40036*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40037*/      OPC_CheckType, MVT::i32,
/* 40039*/      OPC_MoveParent,
/* 40040*/      OPC_MoveChild, 18,
/* 40042*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40045*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40046*/      OPC_CheckType, MVT::i32,
/* 40048*/      OPC_MoveParent,
/* 40049*/      OPC_CheckType, MVT::v4f32,
/* 40051*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40053*/      OPC_EmitConvertToTarget, 1,
/* 40055*/      OPC_EmitConvertToTarget, 2,
/* 40057*/      OPC_EmitConvertToTarget, 3,
/* 40059*/      OPC_EmitConvertToTarget, 4,
/* 40061*/      OPC_EmitConvertToTarget, 5,
/* 40063*/      OPC_EmitConvertToTarget, 6,
/* 40065*/      OPC_EmitConvertToTarget, 7,
/* 40067*/      OPC_EmitConvertToTarget, 8,
/* 40069*/      OPC_EmitConvertToTarget, 9,
/* 40071*/      OPC_EmitConvertToTarget, 10,
/* 40073*/      OPC_EmitConvertToTarget, 11,
/* 40075*/      OPC_EmitConvertToTarget, 12,
/* 40077*/      OPC_EmitConvertToTarget, 13,
/* 40079*/      OPC_EmitConvertToTarget, 14,
/* 40081*/      OPC_EmitConvertToTarget, 15,
/* 40083*/      OPC_EmitConvertToTarget, 16,
/* 40085*/      OPC_EmitConvertToTarget, 17,
/* 40087*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_L), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 3:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_L:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40111*/    /*Scope*/ 88|128,1/*216*/, /*->40329*/
/* 40113*/      OPC_CheckChild0Integer, 4, 
/* 40115*/      OPC_CheckChild0Type, MVT::i32,
/* 40117*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40118*/      OPC_CheckChild1Type, MVT::v4f32,
/* 40120*/      OPC_RecordChild2, // #1 = $srcx
/* 40121*/      OPC_MoveChild2,
/* 40122*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40125*/      OPC_CheckType, MVT::i32,
/* 40127*/      OPC_MoveParent,
/* 40128*/      OPC_RecordChild3, // #2 = $srcy
/* 40129*/      OPC_MoveChild3,
/* 40130*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40133*/      OPC_CheckType, MVT::i32,
/* 40135*/      OPC_MoveParent,
/* 40136*/      OPC_RecordChild4, // #3 = $srcz
/* 40137*/      OPC_MoveChild4,
/* 40138*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40141*/      OPC_CheckType, MVT::i32,
/* 40143*/      OPC_MoveParent,
/* 40144*/      OPC_RecordChild5, // #4 = $srcw
/* 40145*/      OPC_MoveChild5,
/* 40146*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40149*/      OPC_CheckType, MVT::i32,
/* 40151*/      OPC_MoveParent,
/* 40152*/      OPC_RecordChild6, // #5 = $offsetx
/* 40153*/      OPC_MoveChild6,
/* 40154*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40157*/      OPC_CheckType, MVT::i32,
/* 40159*/      OPC_MoveParent,
/* 40160*/      OPC_RecordChild7, // #6 = $offsety
/* 40161*/      OPC_MoveChild7,
/* 40162*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40165*/      OPC_CheckType, MVT::i32,
/* 40167*/      OPC_MoveParent,
/* 40168*/      OPC_MoveChild, 8,
/* 40170*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40173*/      OPC_RecordNode, // #7 = $offsetz
/* 40174*/      OPC_CheckType, MVT::i32,
/* 40176*/      OPC_MoveParent,
/* 40177*/      OPC_MoveChild, 9,
/* 40179*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40182*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40183*/      OPC_CheckType, MVT::i32,
/* 40185*/      OPC_MoveParent,
/* 40186*/      OPC_MoveChild, 10,
/* 40188*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40191*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40192*/      OPC_CheckType, MVT::i32,
/* 40194*/      OPC_MoveParent,
/* 40195*/      OPC_MoveChild, 11,
/* 40197*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40200*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40201*/      OPC_CheckType, MVT::i32,
/* 40203*/      OPC_MoveParent,
/* 40204*/      OPC_MoveChild, 12,
/* 40206*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40209*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40210*/      OPC_CheckType, MVT::i32,
/* 40212*/      OPC_MoveParent,
/* 40213*/      OPC_MoveChild, 13,
/* 40215*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40218*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40219*/      OPC_CheckType, MVT::i32,
/* 40221*/      OPC_MoveParent,
/* 40222*/      OPC_MoveChild, 14,
/* 40224*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40227*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40228*/      OPC_CheckType, MVT::i32,
/* 40230*/      OPC_MoveParent,
/* 40231*/      OPC_MoveChild, 15,
/* 40233*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40236*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40237*/      OPC_CheckType, MVT::i32,
/* 40239*/      OPC_MoveParent,
/* 40240*/      OPC_MoveChild, 16,
/* 40242*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40245*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40246*/      OPC_CheckType, MVT::i32,
/* 40248*/      OPC_MoveParent,
/* 40249*/      OPC_MoveChild, 17,
/* 40251*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40254*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40255*/      OPC_CheckType, MVT::i32,
/* 40257*/      OPC_MoveParent,
/* 40258*/      OPC_MoveChild, 18,
/* 40260*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40263*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40264*/      OPC_CheckType, MVT::i32,
/* 40266*/      OPC_MoveParent,
/* 40267*/      OPC_CheckType, MVT::v4f32,
/* 40269*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40271*/      OPC_EmitConvertToTarget, 1,
/* 40273*/      OPC_EmitConvertToTarget, 2,
/* 40275*/      OPC_EmitConvertToTarget, 3,
/* 40277*/      OPC_EmitConvertToTarget, 4,
/* 40279*/      OPC_EmitConvertToTarget, 5,
/* 40281*/      OPC_EmitConvertToTarget, 6,
/* 40283*/      OPC_EmitConvertToTarget, 7,
/* 40285*/      OPC_EmitConvertToTarget, 8,
/* 40287*/      OPC_EmitConvertToTarget, 9,
/* 40289*/      OPC_EmitConvertToTarget, 10,
/* 40291*/      OPC_EmitConvertToTarget, 11,
/* 40293*/      OPC_EmitConvertToTarget, 12,
/* 40295*/      OPC_EmitConvertToTarget, 13,
/* 40297*/      OPC_EmitConvertToTarget, 14,
/* 40299*/      OPC_EmitConvertToTarget, 15,
/* 40301*/      OPC_EmitConvertToTarget, 16,
/* 40303*/      OPC_EmitConvertToTarget, 17,
/* 40305*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 4:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40329*/    /*Scope*/ 88|128,1/*216*/, /*->40547*/
/* 40331*/      OPC_CheckChild0Integer, 5, 
/* 40333*/      OPC_CheckChild0Type, MVT::i32,
/* 40335*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40336*/      OPC_CheckChild1Type, MVT::v4f32,
/* 40338*/      OPC_RecordChild2, // #1 = $srcx
/* 40339*/      OPC_MoveChild2,
/* 40340*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40343*/      OPC_CheckType, MVT::i32,
/* 40345*/      OPC_MoveParent,
/* 40346*/      OPC_RecordChild3, // #2 = $srcy
/* 40347*/      OPC_MoveChild3,
/* 40348*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40351*/      OPC_CheckType, MVT::i32,
/* 40353*/      OPC_MoveParent,
/* 40354*/      OPC_RecordChild4, // #3 = $srcz
/* 40355*/      OPC_MoveChild4,
/* 40356*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40359*/      OPC_CheckType, MVT::i32,
/* 40361*/      OPC_MoveParent,
/* 40362*/      OPC_RecordChild5, // #4 = $srcw
/* 40363*/      OPC_MoveChild5,
/* 40364*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40367*/      OPC_CheckType, MVT::i32,
/* 40369*/      OPC_MoveParent,
/* 40370*/      OPC_RecordChild6, // #5 = $offsetx
/* 40371*/      OPC_MoveChild6,
/* 40372*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40375*/      OPC_CheckType, MVT::i32,
/* 40377*/      OPC_MoveParent,
/* 40378*/      OPC_RecordChild7, // #6 = $offsety
/* 40379*/      OPC_MoveChild7,
/* 40380*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40383*/      OPC_CheckType, MVT::i32,
/* 40385*/      OPC_MoveParent,
/* 40386*/      OPC_MoveChild, 8,
/* 40388*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40391*/      OPC_RecordNode, // #7 = $offsetz
/* 40392*/      OPC_CheckType, MVT::i32,
/* 40394*/      OPC_MoveParent,
/* 40395*/      OPC_MoveChild, 9,
/* 40397*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40400*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40401*/      OPC_CheckType, MVT::i32,
/* 40403*/      OPC_MoveParent,
/* 40404*/      OPC_MoveChild, 10,
/* 40406*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40409*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40410*/      OPC_CheckType, MVT::i32,
/* 40412*/      OPC_MoveParent,
/* 40413*/      OPC_MoveChild, 11,
/* 40415*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40418*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40419*/      OPC_CheckType, MVT::i32,
/* 40421*/      OPC_MoveParent,
/* 40422*/      OPC_MoveChild, 12,
/* 40424*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40427*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40428*/      OPC_CheckType, MVT::i32,
/* 40430*/      OPC_MoveParent,
/* 40431*/      OPC_MoveChild, 13,
/* 40433*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40436*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40437*/      OPC_CheckType, MVT::i32,
/* 40439*/      OPC_MoveParent,
/* 40440*/      OPC_MoveChild, 14,
/* 40442*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40445*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40446*/      OPC_CheckType, MVT::i32,
/* 40448*/      OPC_MoveParent,
/* 40449*/      OPC_MoveChild, 15,
/* 40451*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40454*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40455*/      OPC_CheckType, MVT::i32,
/* 40457*/      OPC_MoveParent,
/* 40458*/      OPC_MoveChild, 16,
/* 40460*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40463*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40464*/      OPC_CheckType, MVT::i32,
/* 40466*/      OPC_MoveParent,
/* 40467*/      OPC_MoveChild, 17,
/* 40469*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40472*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40473*/      OPC_CheckType, MVT::i32,
/* 40475*/      OPC_MoveParent,
/* 40476*/      OPC_MoveChild, 18,
/* 40478*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40481*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40482*/      OPC_CheckType, MVT::i32,
/* 40484*/      OPC_MoveParent,
/* 40485*/      OPC_CheckType, MVT::v4f32,
/* 40487*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40489*/      OPC_EmitConvertToTarget, 1,
/* 40491*/      OPC_EmitConvertToTarget, 2,
/* 40493*/      OPC_EmitConvertToTarget, 3,
/* 40495*/      OPC_EmitConvertToTarget, 4,
/* 40497*/      OPC_EmitConvertToTarget, 5,
/* 40499*/      OPC_EmitConvertToTarget, 6,
/* 40501*/      OPC_EmitConvertToTarget, 7,
/* 40503*/      OPC_EmitConvertToTarget, 8,
/* 40505*/      OPC_EmitConvertToTarget, 9,
/* 40507*/      OPC_EmitConvertToTarget, 10,
/* 40509*/      OPC_EmitConvertToTarget, 11,
/* 40511*/      OPC_EmitConvertToTarget, 12,
/* 40513*/      OPC_EmitConvertToTarget, 13,
/* 40515*/      OPC_EmitConvertToTarget, 14,
/* 40517*/      OPC_EmitConvertToTarget, 15,
/* 40519*/      OPC_EmitConvertToTarget, 16,
/* 40521*/      OPC_EmitConvertToTarget, 17,
/* 40523*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_SAMPLE_C_LB), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 5:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_SAMPLE_C_LB:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40547*/    /*Scope*/ 88|128,1/*216*/, /*->40765*/
/* 40549*/      OPC_CheckChild0Integer, 6, 
/* 40551*/      OPC_CheckChild0Type, MVT::i32,
/* 40553*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40554*/      OPC_CheckChild1Type, MVT::v4i32,
/* 40556*/      OPC_RecordChild2, // #1 = $srcx
/* 40557*/      OPC_MoveChild2,
/* 40558*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40561*/      OPC_CheckType, MVT::i32,
/* 40563*/      OPC_MoveParent,
/* 40564*/      OPC_RecordChild3, // #2 = $srcy
/* 40565*/      OPC_MoveChild3,
/* 40566*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40569*/      OPC_CheckType, MVT::i32,
/* 40571*/      OPC_MoveParent,
/* 40572*/      OPC_RecordChild4, // #3 = $srcz
/* 40573*/      OPC_MoveChild4,
/* 40574*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40577*/      OPC_CheckType, MVT::i32,
/* 40579*/      OPC_MoveParent,
/* 40580*/      OPC_RecordChild5, // #4 = $srcw
/* 40581*/      OPC_MoveChild5,
/* 40582*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40585*/      OPC_CheckType, MVT::i32,
/* 40587*/      OPC_MoveParent,
/* 40588*/      OPC_RecordChild6, // #5 = $offsetx
/* 40589*/      OPC_MoveChild6,
/* 40590*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40593*/      OPC_CheckType, MVT::i32,
/* 40595*/      OPC_MoveParent,
/* 40596*/      OPC_RecordChild7, // #6 = $offsety
/* 40597*/      OPC_MoveChild7,
/* 40598*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40601*/      OPC_CheckType, MVT::i32,
/* 40603*/      OPC_MoveParent,
/* 40604*/      OPC_MoveChild, 8,
/* 40606*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40609*/      OPC_RecordNode, // #7 = $offsetz
/* 40610*/      OPC_CheckType, MVT::i32,
/* 40612*/      OPC_MoveParent,
/* 40613*/      OPC_MoveChild, 9,
/* 40615*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40618*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40619*/      OPC_CheckType, MVT::i32,
/* 40621*/      OPC_MoveParent,
/* 40622*/      OPC_MoveChild, 10,
/* 40624*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40627*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40628*/      OPC_CheckType, MVT::i32,
/* 40630*/      OPC_MoveParent,
/* 40631*/      OPC_MoveChild, 11,
/* 40633*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40636*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40637*/      OPC_CheckType, MVT::i32,
/* 40639*/      OPC_MoveParent,
/* 40640*/      OPC_MoveChild, 12,
/* 40642*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40645*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40646*/      OPC_CheckType, MVT::i32,
/* 40648*/      OPC_MoveParent,
/* 40649*/      OPC_MoveChild, 13,
/* 40651*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40654*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40655*/      OPC_CheckType, MVT::i32,
/* 40657*/      OPC_MoveParent,
/* 40658*/      OPC_MoveChild, 14,
/* 40660*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40663*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40664*/      OPC_CheckType, MVT::i32,
/* 40666*/      OPC_MoveParent,
/* 40667*/      OPC_MoveChild, 15,
/* 40669*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40672*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40673*/      OPC_CheckType, MVT::i32,
/* 40675*/      OPC_MoveParent,
/* 40676*/      OPC_MoveChild, 16,
/* 40678*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40681*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40682*/      OPC_CheckType, MVT::i32,
/* 40684*/      OPC_MoveParent,
/* 40685*/      OPC_MoveChild, 17,
/* 40687*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40690*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40691*/      OPC_CheckType, MVT::i32,
/* 40693*/      OPC_MoveParent,
/* 40694*/      OPC_MoveChild, 18,
/* 40696*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40699*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40700*/      OPC_CheckType, MVT::i32,
/* 40702*/      OPC_MoveParent,
/* 40703*/      OPC_CheckType, MVT::v4f32,
/* 40705*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40707*/      OPC_EmitConvertToTarget, 1,
/* 40709*/      OPC_EmitConvertToTarget, 2,
/* 40711*/      OPC_EmitConvertToTarget, 3,
/* 40713*/      OPC_EmitConvertToTarget, 4,
/* 40715*/      OPC_EmitConvertToTarget, 5,
/* 40717*/      OPC_EmitConvertToTarget, 6,
/* 40719*/      OPC_EmitConvertToTarget, 7,
/* 40721*/      OPC_EmitConvertToTarget, 8,
/* 40723*/      OPC_EmitConvertToTarget, 9,
/* 40725*/      OPC_EmitConvertToTarget, 10,
/* 40727*/      OPC_EmitConvertToTarget, 11,
/* 40729*/      OPC_EmitConvertToTarget, 12,
/* 40731*/      OPC_EmitConvertToTarget, 13,
/* 40733*/      OPC_EmitConvertToTarget, 14,
/* 40735*/      OPC_EmitConvertToTarget, 15,
/* 40737*/      OPC_EmitConvertToTarget, 16,
/* 40739*/      OPC_EmitConvertToTarget, 17,
/* 40741*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LD), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 6:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LD:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40765*/    /*Scope*/ 88|128,1/*216*/, /*->40983*/
/* 40767*/      OPC_CheckChild0Integer, 7, 
/* 40769*/      OPC_CheckChild0Type, MVT::i32,
/* 40771*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40772*/      OPC_CheckChild1Type, MVT::v4i32,
/* 40774*/      OPC_RecordChild2, // #1 = $srcx
/* 40775*/      OPC_MoveChild2,
/* 40776*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40779*/      OPC_CheckType, MVT::i32,
/* 40781*/      OPC_MoveParent,
/* 40782*/      OPC_RecordChild3, // #2 = $srcy
/* 40783*/      OPC_MoveChild3,
/* 40784*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40787*/      OPC_CheckType, MVT::i32,
/* 40789*/      OPC_MoveParent,
/* 40790*/      OPC_RecordChild4, // #3 = $srcz
/* 40791*/      OPC_MoveChild4,
/* 40792*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40795*/      OPC_CheckType, MVT::i32,
/* 40797*/      OPC_MoveParent,
/* 40798*/      OPC_RecordChild5, // #4 = $srcw
/* 40799*/      OPC_MoveChild5,
/* 40800*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40803*/      OPC_CheckType, MVT::i32,
/* 40805*/      OPC_MoveParent,
/* 40806*/      OPC_RecordChild6, // #5 = $offsetx
/* 40807*/      OPC_MoveChild6,
/* 40808*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40811*/      OPC_CheckType, MVT::i32,
/* 40813*/      OPC_MoveParent,
/* 40814*/      OPC_RecordChild7, // #6 = $offsety
/* 40815*/      OPC_MoveChild7,
/* 40816*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40819*/      OPC_CheckType, MVT::i32,
/* 40821*/      OPC_MoveParent,
/* 40822*/      OPC_MoveChild, 8,
/* 40824*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40827*/      OPC_RecordNode, // #7 = $offsetz
/* 40828*/      OPC_CheckType, MVT::i32,
/* 40830*/      OPC_MoveParent,
/* 40831*/      OPC_MoveChild, 9,
/* 40833*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40836*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 40837*/      OPC_CheckType, MVT::i32,
/* 40839*/      OPC_MoveParent,
/* 40840*/      OPC_MoveChild, 10,
/* 40842*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40845*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 40846*/      OPC_CheckType, MVT::i32,
/* 40848*/      OPC_MoveParent,
/* 40849*/      OPC_MoveChild, 11,
/* 40851*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40854*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 40855*/      OPC_CheckType, MVT::i32,
/* 40857*/      OPC_MoveParent,
/* 40858*/      OPC_MoveChild, 12,
/* 40860*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40863*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 40864*/      OPC_CheckType, MVT::i32,
/* 40866*/      OPC_MoveParent,
/* 40867*/      OPC_MoveChild, 13,
/* 40869*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40872*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 40873*/      OPC_CheckType, MVT::i32,
/* 40875*/      OPC_MoveParent,
/* 40876*/      OPC_MoveChild, 14,
/* 40878*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40881*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 40882*/      OPC_CheckType, MVT::i32,
/* 40884*/      OPC_MoveParent,
/* 40885*/      OPC_MoveChild, 15,
/* 40887*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40890*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 40891*/      OPC_CheckType, MVT::i32,
/* 40893*/      OPC_MoveParent,
/* 40894*/      OPC_MoveChild, 16,
/* 40896*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40899*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 40900*/      OPC_CheckType, MVT::i32,
/* 40902*/      OPC_MoveParent,
/* 40903*/      OPC_MoveChild, 17,
/* 40905*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40908*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 40909*/      OPC_CheckType, MVT::i32,
/* 40911*/      OPC_MoveParent,
/* 40912*/      OPC_MoveChild, 18,
/* 40914*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40917*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 40918*/      OPC_CheckType, MVT::i32,
/* 40920*/      OPC_MoveParent,
/* 40921*/      OPC_CheckType, MVT::v4f32,
/* 40923*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 40925*/      OPC_EmitConvertToTarget, 1,
/* 40927*/      OPC_EmitConvertToTarget, 2,
/* 40929*/      OPC_EmitConvertToTarget, 3,
/* 40931*/      OPC_EmitConvertToTarget, 4,
/* 40933*/      OPC_EmitConvertToTarget, 5,
/* 40935*/      OPC_EmitConvertToTarget, 6,
/* 40937*/      OPC_EmitConvertToTarget, 7,
/* 40939*/      OPC_EmitConvertToTarget, 8,
/* 40941*/      OPC_EmitConvertToTarget, 9,
/* 40943*/      OPC_EmitConvertToTarget, 10,
/* 40945*/      OPC_EmitConvertToTarget, 11,
/* 40947*/      OPC_EmitConvertToTarget, 12,
/* 40949*/      OPC_EmitConvertToTarget, 13,
/* 40951*/      OPC_EmitConvertToTarget, 14,
/* 40953*/      OPC_EmitConvertToTarget, 15,
/* 40955*/      OPC_EmitConvertToTarget, 16,
/* 40957*/      OPC_EmitConvertToTarget, 17,
/* 40959*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_TEXTURE_RESINFO), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 7:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_TEXTURE_RESINFO:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 40983*/    /*Scope*/ 88|128,1/*216*/, /*->41201*/
/* 40985*/      OPC_CheckChild0Integer, 8, 
/* 40987*/      OPC_CheckChild0Type, MVT::i32,
/* 40989*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 40990*/      OPC_CheckChild1Type, MVT::v4f32,
/* 40992*/      OPC_RecordChild2, // #1 = $srcx
/* 40993*/      OPC_MoveChild2,
/* 40994*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 40997*/      OPC_CheckType, MVT::i32,
/* 40999*/      OPC_MoveParent,
/* 41000*/      OPC_RecordChild3, // #2 = $srcy
/* 41001*/      OPC_MoveChild3,
/* 41002*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41005*/      OPC_CheckType, MVT::i32,
/* 41007*/      OPC_MoveParent,
/* 41008*/      OPC_RecordChild4, // #3 = $srcz
/* 41009*/      OPC_MoveChild4,
/* 41010*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41013*/      OPC_CheckType, MVT::i32,
/* 41015*/      OPC_MoveParent,
/* 41016*/      OPC_RecordChild5, // #4 = $srcw
/* 41017*/      OPC_MoveChild5,
/* 41018*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41021*/      OPC_CheckType, MVT::i32,
/* 41023*/      OPC_MoveParent,
/* 41024*/      OPC_RecordChild6, // #5 = $offsetx
/* 41025*/      OPC_MoveChild6,
/* 41026*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41029*/      OPC_CheckType, MVT::i32,
/* 41031*/      OPC_MoveParent,
/* 41032*/      OPC_RecordChild7, // #6 = $offsety
/* 41033*/      OPC_MoveChild7,
/* 41034*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41037*/      OPC_CheckType, MVT::i32,
/* 41039*/      OPC_MoveParent,
/* 41040*/      OPC_MoveChild, 8,
/* 41042*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41045*/      OPC_RecordNode, // #7 = $offsetz
/* 41046*/      OPC_CheckType, MVT::i32,
/* 41048*/      OPC_MoveParent,
/* 41049*/      OPC_MoveChild, 9,
/* 41051*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41054*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41055*/      OPC_CheckType, MVT::i32,
/* 41057*/      OPC_MoveParent,
/* 41058*/      OPC_MoveChild, 10,
/* 41060*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41063*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41064*/      OPC_CheckType, MVT::i32,
/* 41066*/      OPC_MoveParent,
/* 41067*/      OPC_MoveChild, 11,
/* 41069*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41072*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41073*/      OPC_CheckType, MVT::i32,
/* 41075*/      OPC_MoveParent,
/* 41076*/      OPC_MoveChild, 12,
/* 41078*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41081*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41082*/      OPC_CheckType, MVT::i32,
/* 41084*/      OPC_MoveParent,
/* 41085*/      OPC_MoveChild, 13,
/* 41087*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41090*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41091*/      OPC_CheckType, MVT::i32,
/* 41093*/      OPC_MoveParent,
/* 41094*/      OPC_MoveChild, 14,
/* 41096*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41099*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41100*/      OPC_CheckType, MVT::i32,
/* 41102*/      OPC_MoveParent,
/* 41103*/      OPC_MoveChild, 15,
/* 41105*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41108*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41109*/      OPC_CheckType, MVT::i32,
/* 41111*/      OPC_MoveParent,
/* 41112*/      OPC_MoveChild, 16,
/* 41114*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41117*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41118*/      OPC_CheckType, MVT::i32,
/* 41120*/      OPC_MoveParent,
/* 41121*/      OPC_MoveChild, 17,
/* 41123*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41126*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41127*/      OPC_CheckType, MVT::i32,
/* 41129*/      OPC_MoveParent,
/* 41130*/      OPC_MoveChild, 18,
/* 41132*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41135*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41136*/      OPC_CheckType, MVT::i32,
/* 41138*/      OPC_MoveParent,
/* 41139*/      OPC_CheckType, MVT::v4f32,
/* 41141*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41143*/      OPC_EmitConvertToTarget, 1,
/* 41145*/      OPC_EmitConvertToTarget, 2,
/* 41147*/      OPC_EmitConvertToTarget, 3,
/* 41149*/      OPC_EmitConvertToTarget, 4,
/* 41151*/      OPC_EmitConvertToTarget, 5,
/* 41153*/      OPC_EmitConvertToTarget, 6,
/* 41155*/      OPC_EmitConvertToTarget, 7,
/* 41157*/      OPC_EmitConvertToTarget, 8,
/* 41159*/      OPC_EmitConvertToTarget, 9,
/* 41161*/      OPC_EmitConvertToTarget, 10,
/* 41163*/      OPC_EmitConvertToTarget, 11,
/* 41165*/      OPC_EmitConvertToTarget, 12,
/* 41167*/      OPC_EmitConvertToTarget, 13,
/* 41169*/      OPC_EmitConvertToTarget, 14,
/* 41171*/      OPC_EmitConvertToTarget, 15,
/* 41173*/      OPC_EmitConvertToTarget, 16,
/* 41175*/      OPC_EmitConvertToTarget, 17,
/* 41177*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_H), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 8:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_H:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41201*/    /*Scope*/ 88|128,1/*216*/, /*->41419*/
/* 41203*/      OPC_CheckChild0Integer, 9, 
/* 41205*/      OPC_CheckChild0Type, MVT::i32,
/* 41207*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 41208*/      OPC_CheckChild1Type, MVT::v4f32,
/* 41210*/      OPC_RecordChild2, // #1 = $srcx
/* 41211*/      OPC_MoveChild2,
/* 41212*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41215*/      OPC_CheckType, MVT::i32,
/* 41217*/      OPC_MoveParent,
/* 41218*/      OPC_RecordChild3, // #2 = $srcy
/* 41219*/      OPC_MoveChild3,
/* 41220*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41223*/      OPC_CheckType, MVT::i32,
/* 41225*/      OPC_MoveParent,
/* 41226*/      OPC_RecordChild4, // #3 = $srcz
/* 41227*/      OPC_MoveChild4,
/* 41228*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41231*/      OPC_CheckType, MVT::i32,
/* 41233*/      OPC_MoveParent,
/* 41234*/      OPC_RecordChild5, // #4 = $srcw
/* 41235*/      OPC_MoveChild5,
/* 41236*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41239*/      OPC_CheckType, MVT::i32,
/* 41241*/      OPC_MoveParent,
/* 41242*/      OPC_RecordChild6, // #5 = $offsetx
/* 41243*/      OPC_MoveChild6,
/* 41244*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41247*/      OPC_CheckType, MVT::i32,
/* 41249*/      OPC_MoveParent,
/* 41250*/      OPC_RecordChild7, // #6 = $offsety
/* 41251*/      OPC_MoveChild7,
/* 41252*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41255*/      OPC_CheckType, MVT::i32,
/* 41257*/      OPC_MoveParent,
/* 41258*/      OPC_MoveChild, 8,
/* 41260*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41263*/      OPC_RecordNode, // #7 = $offsetz
/* 41264*/      OPC_CheckType, MVT::i32,
/* 41266*/      OPC_MoveParent,
/* 41267*/      OPC_MoveChild, 9,
/* 41269*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41272*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41273*/      OPC_CheckType, MVT::i32,
/* 41275*/      OPC_MoveParent,
/* 41276*/      OPC_MoveChild, 10,
/* 41278*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41281*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41282*/      OPC_CheckType, MVT::i32,
/* 41284*/      OPC_MoveParent,
/* 41285*/      OPC_MoveChild, 11,
/* 41287*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41290*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41291*/      OPC_CheckType, MVT::i32,
/* 41293*/      OPC_MoveParent,
/* 41294*/      OPC_MoveChild, 12,
/* 41296*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41299*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41300*/      OPC_CheckType, MVT::i32,
/* 41302*/      OPC_MoveParent,
/* 41303*/      OPC_MoveChild, 13,
/* 41305*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41308*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41309*/      OPC_CheckType, MVT::i32,
/* 41311*/      OPC_MoveParent,
/* 41312*/      OPC_MoveChild, 14,
/* 41314*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41317*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41318*/      OPC_CheckType, MVT::i32,
/* 41320*/      OPC_MoveParent,
/* 41321*/      OPC_MoveChild, 15,
/* 41323*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41326*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41327*/      OPC_CheckType, MVT::i32,
/* 41329*/      OPC_MoveParent,
/* 41330*/      OPC_MoveChild, 16,
/* 41332*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41335*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41336*/      OPC_CheckType, MVT::i32,
/* 41338*/      OPC_MoveParent,
/* 41339*/      OPC_MoveChild, 17,
/* 41341*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41344*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41345*/      OPC_CheckType, MVT::i32,
/* 41347*/      OPC_MoveParent,
/* 41348*/      OPC_MoveChild, 18,
/* 41350*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41353*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41354*/      OPC_CheckType, MVT::i32,
/* 41356*/      OPC_MoveParent,
/* 41357*/      OPC_CheckType, MVT::v4f32,
/* 41359*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41361*/      OPC_EmitConvertToTarget, 1,
/* 41363*/      OPC_EmitConvertToTarget, 2,
/* 41365*/      OPC_EmitConvertToTarget, 3,
/* 41367*/      OPC_EmitConvertToTarget, 4,
/* 41369*/      OPC_EmitConvertToTarget, 5,
/* 41371*/      OPC_EmitConvertToTarget, 6,
/* 41373*/      OPC_EmitConvertToTarget, 7,
/* 41375*/      OPC_EmitConvertToTarget, 8,
/* 41377*/      OPC_EmitConvertToTarget, 9,
/* 41379*/      OPC_EmitConvertToTarget, 10,
/* 41381*/      OPC_EmitConvertToTarget, 11,
/* 41383*/      OPC_EmitConvertToTarget, 12,
/* 41385*/      OPC_EmitConvertToTarget, 13,
/* 41387*/      OPC_EmitConvertToTarget, 14,
/* 41389*/      OPC_EmitConvertToTarget, 15,
/* 41391*/      OPC_EmitConvertToTarget, 16,
/* 41393*/      OPC_EmitConvertToTarget, 17,
/* 41395*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_GET_GRADIENTS_V), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 9:{ *:[i32] }, v4f32:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_GET_GRADIENTS_V:{ *:[v4f32] } R600_Reg128:{ *:[v4f32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41419*/    /*Scope*/ 88|128,1/*216*/, /*->41637*/
/* 41421*/      OPC_CheckChild0Integer, 10, 
/* 41423*/      OPC_CheckChild0Type, MVT::i32,
/* 41425*/      OPC_RecordChild1, // #0 = $SRC_GPR
/* 41426*/      OPC_CheckChild1Type, MVT::v4i32,
/* 41428*/      OPC_RecordChild2, // #1 = $srcx
/* 41429*/      OPC_MoveChild2,
/* 41430*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41433*/      OPC_CheckType, MVT::i32,
/* 41435*/      OPC_MoveParent,
/* 41436*/      OPC_RecordChild3, // #2 = $srcy
/* 41437*/      OPC_MoveChild3,
/* 41438*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41441*/      OPC_CheckType, MVT::i32,
/* 41443*/      OPC_MoveParent,
/* 41444*/      OPC_RecordChild4, // #3 = $srcz
/* 41445*/      OPC_MoveChild4,
/* 41446*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41449*/      OPC_CheckType, MVT::i32,
/* 41451*/      OPC_MoveParent,
/* 41452*/      OPC_RecordChild5, // #4 = $srcw
/* 41453*/      OPC_MoveChild5,
/* 41454*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41457*/      OPC_CheckType, MVT::i32,
/* 41459*/      OPC_MoveParent,
/* 41460*/      OPC_RecordChild6, // #5 = $offsetx
/* 41461*/      OPC_MoveChild6,
/* 41462*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41465*/      OPC_CheckType, MVT::i32,
/* 41467*/      OPC_MoveParent,
/* 41468*/      OPC_RecordChild7, // #6 = $offsety
/* 41469*/      OPC_MoveChild7,
/* 41470*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41473*/      OPC_CheckType, MVT::i32,
/* 41475*/      OPC_MoveParent,
/* 41476*/      OPC_MoveChild, 8,
/* 41478*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41481*/      OPC_RecordNode, // #7 = $offsetz
/* 41482*/      OPC_CheckType, MVT::i32,
/* 41484*/      OPC_MoveParent,
/* 41485*/      OPC_MoveChild, 9,
/* 41487*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41490*/      OPC_RecordNode, // #8 = $DST_SEL_X
/* 41491*/      OPC_CheckType, MVT::i32,
/* 41493*/      OPC_MoveParent,
/* 41494*/      OPC_MoveChild, 10,
/* 41496*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41499*/      OPC_RecordNode, // #9 = $DST_SEL_Y
/* 41500*/      OPC_CheckType, MVT::i32,
/* 41502*/      OPC_MoveParent,
/* 41503*/      OPC_MoveChild, 11,
/* 41505*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41508*/      OPC_RecordNode, // #10 = $DST_SEL_Z
/* 41509*/      OPC_CheckType, MVT::i32,
/* 41511*/      OPC_MoveParent,
/* 41512*/      OPC_MoveChild, 12,
/* 41514*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41517*/      OPC_RecordNode, // #11 = $DST_SEL_W
/* 41518*/      OPC_CheckType, MVT::i32,
/* 41520*/      OPC_MoveParent,
/* 41521*/      OPC_MoveChild, 13,
/* 41523*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41526*/      OPC_RecordNode, // #12 = $RESOURCE_ID
/* 41527*/      OPC_CheckType, MVT::i32,
/* 41529*/      OPC_MoveParent,
/* 41530*/      OPC_MoveChild, 14,
/* 41532*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41535*/      OPC_RecordNode, // #13 = $SAMPLER_ID
/* 41536*/      OPC_CheckType, MVT::i32,
/* 41538*/      OPC_MoveParent,
/* 41539*/      OPC_MoveChild, 15,
/* 41541*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41544*/      OPC_RecordNode, // #14 = $COORD_TYPE_X
/* 41545*/      OPC_CheckType, MVT::i32,
/* 41547*/      OPC_MoveParent,
/* 41548*/      OPC_MoveChild, 16,
/* 41550*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41553*/      OPC_RecordNode, // #15 = $COORD_TYPE_Y
/* 41554*/      OPC_CheckType, MVT::i32,
/* 41556*/      OPC_MoveParent,
/* 41557*/      OPC_MoveChild, 17,
/* 41559*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41562*/      OPC_RecordNode, // #16 = $COORD_TYPE_Z
/* 41563*/      OPC_CheckType, MVT::i32,
/* 41565*/      OPC_MoveParent,
/* 41566*/      OPC_MoveChild, 18,
/* 41568*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/* 41571*/      OPC_RecordNode, // #17 = $COORD_TYPE_W
/* 41572*/      OPC_CheckType, MVT::i32,
/* 41574*/      OPC_MoveParent,
/* 41575*/      OPC_CheckType, MVT::v4f32,
/* 41577*/      OPC_CheckPatternPredicate, 2, // (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41579*/      OPC_EmitConvertToTarget, 1,
/* 41581*/      OPC_EmitConvertToTarget, 2,
/* 41583*/      OPC_EmitConvertToTarget, 3,
/* 41585*/      OPC_EmitConvertToTarget, 4,
/* 41587*/      OPC_EmitConvertToTarget, 5,
/* 41589*/      OPC_EmitConvertToTarget, 6,
/* 41591*/      OPC_EmitConvertToTarget, 7,
/* 41593*/      OPC_EmitConvertToTarget, 8,
/* 41595*/      OPC_EmitConvertToTarget, 9,
/* 41597*/      OPC_EmitConvertToTarget, 10,
/* 41599*/      OPC_EmitConvertToTarget, 11,
/* 41601*/      OPC_EmitConvertToTarget, 12,
/* 41603*/      OPC_EmitConvertToTarget, 13,
/* 41605*/      OPC_EmitConvertToTarget, 14,
/* 41607*/      OPC_EmitConvertToTarget, 15,
/* 41609*/      OPC_EmitConvertToTarget, 16,
/* 41611*/      OPC_EmitConvertToTarget, 17,
/* 41613*/      OPC_MorphNodeTo1, TARGET_VAL(R600::TEX_LDPTR), 0,
                    MVT::v4f32, 18/*#Ops*/, 0, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 
                // Src: (TEXTURE_FETCH:{ *:[v4f32] } 10:{ *:[i32] }, v4i32:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W) - Complexity = 59
                // Dst: (TEX_LDPTR:{ *:[v4f32] } R600_Reg128:{ *:[v4i32] }:$SRC_GPR, (imm:{ *:[i32] }):$srcx, (imm:{ *:[i32] }):$srcy, (imm:{ *:[i32] }):$srcz, (imm:{ *:[i32] }):$srcw, (imm:{ *:[i32] }):$offsetx, (imm:{ *:[i32] }):$offsety, (imm:{ *:[i32] }):$offsetz, (imm:{ *:[i32] }):$DST_SEL_X, (imm:{ *:[i32] }):$DST_SEL_Y, (imm:{ *:[i32] }):$DST_SEL_Z, (imm:{ *:[i32] }):$DST_SEL_W, (imm:{ *:[i32] }):$RESOURCE_ID, (imm:{ *:[i32] }):$SAMPLER_ID, (imm:{ *:[i32] }):$COORD_TYPE_X, (imm:{ *:[i32] }):$COORD_TYPE_Y, (imm:{ *:[i32] }):$COORD_TYPE_Z, (imm:{ *:[i32] }):$COORD_TYPE_W)
/* 41637*/    0, /*End of Scope*/
/* 41638*/  /*SwitchOpcode*/ 26, TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->41667
/* 41641*/    OPC_CheckChild0Integer, 114|128,42/*5490*/, 
/* 41644*/    OPC_RecordChild1, // #0 = $src0
/* 41645*/    OPC_Scope, 9, /*->41656*/ // 2 children in Scope
/* 41647*/      OPC_CheckPatternPredicate, 1, // (Subtarget->getGeneration() <= AMDGPUSubtarget::R700)
/* 41649*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_r600_pseudo), 0,
                    MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5490:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                // Dst: (CUBE_r600_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 41656*/    /*Scope*/ 9, /*->41666*/
/* 41657*/      OPC_CheckPatternPredicate, 0, // (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS)
/* 41659*/      OPC_MorphNodeTo1, TARGET_VAL(R600::CUBE_eg_pseudo), 0,
                    MVT::v4f32, 1/*#Ops*/, 0, 
                // Src: (intrinsic_wo_chain:{ *:[v4f32] } 5490:{ *:[iPTR] }, v4f32:{ *:[v4f32] }:$src0) - Complexity = 8
                // Dst: (CUBE_eg_pseudo:{ *:[v4f32] } v4f32:{ *:[v4f32] }:$src0)
/* 41666*/    0, /*End of Scope*/
/* 41667*/  0, // EndSwitchOpcode
    0
  }; // Total Array size is 41669 bytes

  // Opcode Histogram:
  // #OPC_Scope                                = 138
  // #OPC_RecordNode                           = 145
  // #OPC_RecordChild                          = 385
  // #OPC_RecordMemRef                         = 14
  // #OPC_CaptureGlueInput                     = 1
  // #OPC_MoveChild                            = 285
  // #OPC_MoveParent                           = 376
  // #OPC_CheckSame                            = 0
  // #OPC_CheckChildSame                       = 90
  // #OPC_CheckPatternPredicate                = 359
  // #OPC_CheckPredicate                       = 135
  // #OPC_CheckOpcode                          = 279
  // #OPC_SwitchOpcode                         = 5
  // #OPC_CheckType                            = 406
  // #OPC_SwitchType                           = 16
  // #OPC_CheckChildType                       = 90
  // #OPC_CheckInteger                         = 0
  // #OPC_CheckChildInteger                    = 79
  // #OPC_CheckCondCode                        = 9
  // #OPC_CheckChild2CondCode                  = 0
  // #OPC_CheckValueType                       = 3
  // #OPC_CheckComplexPat                      = 36
  // #OPC_CheckAndImm                          = 0
  // #OPC_CheckOrImm                           = 0
  // #OPC_CheckImmAllOnesV                     = 0
  // #OPC_CheckImmAllZerosV                    = 0
  // #OPC_CheckFoldableChainNode               = 0
  // #OPC_EmitInteger                          = 4758
  // #OPC_EmitStringInteger                    = 383
  // #OPC_EmitRegister                         = 342
  // #OPC_EmitConvertToTarget                  = 220
  // #OPC_EmitMergeInputChains                 = 94
  // #OPC_EmitCopyToReg                        = 0
  // #OPC_EmitNode                             = 428
  // #OPC_EmitNodeXForm                        = 1
  // #OPC_CompleteMatch                        = 7
  // #OPC_MorphNodeTo                          = 365

  #undef TARGET_VAL
  SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckPatternPredicate(unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckPatternPredicate(unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: return (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 1: return (Subtarget->getGeneration() <= AMDGPUSubtarget::R700);
  case 2: return (true) && (true) && (Subtarget->getGeneration() <= AMDGPUSubtarget::NORTHERN_ISLANDS);
  case 3: return (true) && (true) && (Subtarget->hasCaymanISA());
  case 4: return (true) && (true) && (Subtarget->getGeneration() >= AMDGPUSubtarget::EVERGREEN && !Subtarget->hasCaymanISA());
  case 5: return (Subtarget->getGeneration() == AMDGPUSubtarget::R700);
  case 6: return (Subtarget->hasFMA()) && (true) && (true) && (Subtarget->getGeneration() == AMDGPUSubtarget::EVERGREEN ||Subtarget->getGeneration() == AMDGPUSubtarget::NORTHERN_ISLANDS);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckNodePredicate(SDNode *Node, unsigned PredNo) const
#if DAGISEL_INLINE
  override
#endif
{
  switch (PredNo) {
  default: llvm_unreachable("Invalid predicate in table?");
  case 0: { 
    // Predicate_shl_oneuse
    // Predicate_add_oneuse
    // Predicate_xor_oneuse
    // Predicate_srl_oneuse
    SDNode *N = Node;
    (void)N;
 return N->hasOneUse(); 
  }
  case 1: { 
    // Predicate_IMMZeroBasedBitfieldMask
    auto *N = cast<ConstantSDNode>(Node);
    (void)N;

  return isMask_32(N->getZExtValue());

  }
  case 2: { 
    // Predicate_COND_OEQ
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOEQ || N->get() == ISD::SETEQ;
  }
  case 3: { 
    // Predicate_COND_OGT
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOGT || N->get() == ISD::SETGT;
  }
  case 4: { 
    // Predicate_COND_OGE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETOGE || N->get() == ISD::SETGE;
  }
  case 5: { 
    // Predicate_COND_UNE_NE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETUNE || N->get() == ISD::SETNE;
  }
  case 6: { 
    // Predicate_FP_ONE
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->isExactlyValue(1.0);
  }
  case 7: { 
    // Predicate_FP_ZERO
    auto *N = cast<ConstantFPSDNode>(Node);
    (void)N;
return N->getValueAPF().isZero();
  }
  case 8: { 
    // Predicate_COND_EQ
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETEQ || N->get() == ISD::SETUEQ;
  }
  case 9: { 
    // Predicate_COND_SGE
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETGE;
  }
  case 10: { 
    // Predicate_COND_SGT
    auto *N = cast<CondCodeSDNode>(Node);
    (void)N;
return N->get() == ISD::SETGT;
  }
  case 11: { 
    // Predicate_unindexedload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 12: { 
    // Predicate_load_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 13: { 
    // Predicate_az_extload
    SDNode *N = Node;
    (void)N;

  LoadSDNode *L = cast<LoadSDNode>(N);
  return L->getExtensionType() == ISD::ZEXTLOAD ||
         L->getExtensionType() == ISD::EXTLOAD;

  }
  case 14: { 
    // Predicate_az_extloadi8
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 15: { 
    // Predicate_vtx_id3_az_extloadi8
    // Predicate_vtx_id3_az_extloadi16
    // Predicate_vtx_id3_load
    SDNode *N = Node;
    (void)N;
 return isConstantLoad(cast<LoadSDNode>(N), 0) ||
            (cast<LoadSDNode>(N)->getAddressSpace() == AMDGPUAS::PARAM_I_ADDRESS); 
  }
  case 16: { 
    // Predicate_az_extloadi16
    SDNode *N = Node;
    (void)N;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { 
    // Predicate_load
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 18: { 
    // Predicate_vtx_id2_az_extloadi8
    // Predicate_vtx_id2_az_extloadi16
    // Predicate_vtx_id2_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
         isa<GlobalValue>(GetUnderlyingObject(
         LD->getMemOperand()->getValue(), CurDAG->getDataLayout()));

  }
  case 19: { 
    // Predicate_vtx_id1_az_extloadi8
    // Predicate_vtx_id1_az_extloadi16
    // Predicate_vtx_id1_load
    SDNode *N = Node;
    (void)N;

  const MemSDNode *LD = cast<MemSDNode>(N);
  return LD->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS ||
         (LD->getAddressSpace() == AMDGPUAS::CONSTANT_ADDRESS &&
           !isa<GlobalValue>(GetUnderlyingObject(
           LD->getMemOperand()->getValue(), CurDAG->getDataLayout())));

  }
  case 20: { 
    // Predicate_load_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::NON_EXTLOAD) return false;
return true;

  }
  case 21: { 
    // Predicate_sextload
    SDNode *N = Node;
    (void)N;
if (cast<LoadSDNode>(N)->getExtensionType() != ISD::SEXTLOAD) return false;
return true;

  }
  case 22: { 
    // Predicate_sextloadi8_local
    // Predicate_truncstorei8_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i8) return false;
return true;

  }
  case 23: { 
    // Predicate_az_extloadi8_local
    // Predicate_az_extloadi16_local
    // Predicate_atomic_load_add_local
    // Predicate_atomic_load_sub_local
    // Predicate_atomic_swap_local
    // Predicate_atomic_load_min_local
    // Predicate_atomic_load_umin_local
    // Predicate_atomic_load_max_local
    // Predicate_atomic_load_umax_local
    // Predicate_atomic_load_and_local
    // Predicate_atomic_load_or_local
    // Predicate_atomic_load_xor_local
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::LOCAL_ADDRESS;

  }
  case 24: { 
    // Predicate_sextloadi16_local
    // Predicate_truncstorei16_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
if (cast<MemSDNode>(N)->getMemoryVT() != MVT::i16) return false;
return true;

  }
  case 25: { 
    // Predicate_unindexedstore
    SDNode *N = Node;
    (void)N;
if (cast<StoreSDNode>(N)->getAddressingMode() != ISD::UNINDEXED) return false;
return true;

  }
  case 26: { 
    // Predicate_store_private
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 5)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 27: { 
    // Predicate_store_local
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 3)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 28: { 
    // Predicate_truncstore
    SDNode *N = Node;
    (void)N;
 if (!cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 29: { 
    // Predicate_store_global
    SDNode *N = Node;
    (void)N;
unsigned AddrSpace = cast<MemSDNode>(N)->getAddressSpace();
 if (AddrSpace != 1 && AddrSpace != 4)
return false;
 if (cast<StoreSDNode>(N)->isTruncatingStore()) return false;
return true;

  }
  case 30: { 
    // Predicate_atomic_add_global_noret
    // Predicate_atomic_sub_global_noret
    // Predicate_atomic_swap_global_noret
    // Predicate_atomic_min_global_noret
    // Predicate_atomic_umin_global_noret
    // Predicate_atomic_max_global_noret
    // Predicate_atomic_umax_global_noret
    // Predicate_atomic_and_global_noret
    // Predicate_atomic_or_global_noret
    // Predicate_atomic_xor_global_noret
    // Predicate_atomic_cmp_swap_global_noret
    SDNode *N = Node;
    (void)N;
return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS && (SDValue(N, 0).use_empty());
  }
  case 31: { 
    // Predicate_mskor_global
    SDNode *N = Node;
    (void)N;

  return cast<MemSDNode>(N)->getAddressSpace() == AMDGPUAS::GLOBAL_ADDRESS;

  }
  case 32: { 
    // Predicate_atomic_cmp_swap_local
    SDNode *N = Node;
    (void)N;

      AtomicSDNode *AN = cast<AtomicSDNode>(N);
      return AN->getAddressSpace() == AMDGPUAS::LOCAL_ADDRESS;

  }
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
bool CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
bool DAGISEL_CLASS_COLONCOLON CheckComplexPattern(SDNode *Root, SDNode *Parent,
      SDValue N, unsigned PatternNo,
      SmallVectorImpl<std::pair<SDValue, SDNode*>> &Result)
#if DAGISEL_INLINE
  override
#endif
{
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: llvm_unreachable("Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
  return SelectADDRIndirect(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
  return SelectADDRVTX_READ(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+1);
  return SelectGlobalValueConstantOffset(N, Result[NextRes+0].first);
  case 3:
    Result.resize(NextRes+2);
  return SelectGlobalValueVariableOffset(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}
#endif // GET_DAGISEL_BODY

#ifdef GET_DAGISEL_DECL
SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) override;
#endif
#if defined(GET_DAGISEL_BODY) || DAGISEL_INLINE
SDValue DAGISEL_CLASS_COLONCOLON RunSDNodeXForm(SDValue V, unsigned XFormNo)
#if DAGISEL_INLINE
  override
#endif
{
  switch (XFormNo) {
  default: llvm_unreachable("Invalid xform # in table?");
  case 0: {  // IMMPopCount
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(countPopulation(N->getZExtValue()), SDLoc(N),
                                   MVT::i32);

  }
  }
}
#endif // GET_DAGISEL_BODY


#ifdef DAGISEL_INLINE
#undef DAGISEL_INLINE
#endif
#ifdef DAGISEL_CLASS_COLONCOLON
#undef DAGISEL_CLASS_COLONCOLON
#endif
#ifdef GET_DAGISEL_DECL
#undef GET_DAGISEL_DECL
#endif
#ifdef GET_DAGISEL_BODY
#undef GET_DAGISEL_BODY
#endif
