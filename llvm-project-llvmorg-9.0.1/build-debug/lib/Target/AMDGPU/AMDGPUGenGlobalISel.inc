/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Global Instruction Selector for the AMDGPU target                          *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_GLOBALISEL_PREDICATE_BITSET
const unsigned MAX_SUBTARGET_PREDICATES = 46;
using PredicateBitset = llvm::PredicateBitsetImpl<MAX_SUBTARGET_PREDICATES>;
#endif // ifdef GET_GLOBALISEL_PREDICATE_BITSET

#ifdef GET_GLOBALISEL_TEMPORARIES_DECL
  mutable MatcherState State;
  typedef ComplexRendererFns(AMDGPUInstructionSelector::*ComplexMatcherMemFn)(MachineOperand &) const;
  typedef void(AMDGPUInstructionSelector::*CustomRendererFn)(MachineInstrBuilder &, const MachineInstr&) const;
  const ISelInfoTy<PredicateBitset, ComplexMatcherMemFn, CustomRendererFn> ISelInfo;
  static AMDGPUInstructionSelector::ComplexMatcherMemFn ComplexPredicateFns[];
  static AMDGPUInstructionSelector::CustomRendererFn CustomRenderers[];
  bool testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const override;
  bool testImmPredicate_APInt(unsigned PredicateID, const APInt &Imm) const override;
  bool testImmPredicate_APFloat(unsigned PredicateID, const APFloat &Imm) const override;
  const int64_t *getMatchTable() const override;
  bool testMIPredicate_MI(unsigned PredicateID, const MachineInstr &MI) const override;
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_DECL

#ifdef GET_GLOBALISEL_TEMPORARIES_INIT
, State(3),
ISelInfo(TypeObjects, NumTypeObjects, FeatureBitsets, ComplexPredicateFns, CustomRenderers)
#endif // ifdef GET_GLOBALISEL_TEMPORARIES_INIT

#ifdef GET_GLOBALISEL_IMPL
// Bits for subtarget features that participate in instruction matching.
enum SubtargetFeatureBits : uint8_t {
  Feature_isGFX6Bit = 12,
  Feature_isGFX6GFX7Bit = 34,
  Feature_isGFX6GFX7GFX10Bit = 2,
  Feature_isGFX7OnlyBit = 17,
  Feature_isGFX7GFX8GFX9Bit = 7,
  Feature_isGFX6GFX7GFX8GFX9Bit = 22,
  Feature_isGFX7PlusBit = 13,
  Feature_isGFX8PlusBit = 1,
  Feature_isGFX8OnlyBit = 4,
  Feature_isGFX9PlusBit = 5,
  Feature_isGFX8GFX9Bit = 20,
  Feature_isGFX10PlusBit = 9,
  Feature_HasFlatAddressSpaceBit = 10,
  Feature_HasFlatGlobalInstsBit = 11,
  Feature_HasUnpackedD16VMemBit = 32,
  Feature_HasPackedD16VMemBit = 33,
  Feature_D16PreservesUnusedBitsBit = 31,
  Feature_LDSRequiresM0InitBit = 44,
  Feature_NotLDSRequiresM0InitBit = 45,
  Feature_HasAddNoCarryInstsBit = 21,
  Feature_Has16BitInstsBit = 3,
  Feature_HasVOP3PInstsBit = 36,
  Feature_HasMadMixInstsBit = 27,
  Feature_HasScalarStoresBit = 8,
  Feature_has16BankLDSBit = 15,
  Feature_has32BankLDSBit = 14,
  Feature_HasFmaMixInstsBit = 28,
  Feature_HasDLInstsBit = 43,
  Feature_HasDot1InstsBit = 30,
  Feature_HasDot2InstsBit = 29,
  Feature_HasDot3InstsBit = 26,
  Feature_HasDot4InstsBit = 25,
  Feature_HasDot5InstsBit = 23,
  Feature_HasDot6InstsBit = 24,
  Feature_HasMAIInstsBit = 6,
  Feature_EnableLateCFGStructurizeBit = 16,
  Feature_TruePredicateBit = 0,
  Feature_FP16DenormalsBit = 38,
  Feature_FP32DenormalsBit = 40,
  Feature_FP64DenormalsBit = 42,
  Feature_NoFP16DenormalsBit = 37,
  Feature_NoFP32DenormalsBit = 39,
  Feature_NoFP64DenormalsBit = 41,
  Feature_UnsafeFPMathBit = 35,
  Feature_isWave32Bit = 18,
  Feature_isWave64Bit = 19,
};

PredicateBitset AMDGPUInstructionSelector::
computeAvailableModuleFeatures(const AMDGPUSubtarget *Subtarget) const {
  PredicateBitset Features;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS)
    Features[Feature_isGFX6Bit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isGFX6GFX7Bit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::GFX10)
    Features[Feature_isGFX6GFX7GFX10Bit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isGFX7OnlyBit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::VOLCANIC_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::GFX9)
    Features[Feature_isGFX7GFX8GFX9Bit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::SOUTHERN_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::SEA_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::VOLCANIC_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::GFX9)
    Features[Feature_isGFX6GFX7GFX8GFX9Bit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::SEA_ISLANDS)
    Features[Feature_isGFX7PlusBit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::VOLCANIC_ISLANDS)
    Features[Feature_isGFX8PlusBit] = 1;
  if (Subtarget->getGeneration() ==AMDGPUSubtarget::VOLCANIC_ISLANDS)
    Features[Feature_isGFX8OnlyBit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::GFX9)
    Features[Feature_isGFX9PlusBit] = 1;
  if (Subtarget->getGeneration() == AMDGPUSubtarget::VOLCANIC_ISLANDS ||Subtarget->getGeneration() == AMDGPUSubtarget::GFX9)
    Features[Feature_isGFX8GFX9Bit] = 1;
  if (Subtarget->getGeneration() >= AMDGPUSubtarget::GFX10)
    Features[Feature_isGFX10PlusBit] = 1;
  if (Subtarget->hasFlatAddressSpace())
    Features[Feature_HasFlatAddressSpaceBit] = 1;
  if (Subtarget->hasFlatGlobalInsts())
    Features[Feature_HasFlatGlobalInstsBit] = 1;
  if (Subtarget->hasUnpackedD16VMem())
    Features[Feature_HasUnpackedD16VMemBit] = 1;
  if (!Subtarget->hasUnpackedD16VMem())
    Features[Feature_HasPackedD16VMemBit] = 1;
  if (Subtarget->d16PreservesUnusedBits())
    Features[Feature_D16PreservesUnusedBitsBit] = 1;
  if (Subtarget->ldsRequiresM0Init())
    Features[Feature_LDSRequiresM0InitBit] = 1;
  if (!Subtarget->ldsRequiresM0Init())
    Features[Feature_NotLDSRequiresM0InitBit] = 1;
  if (Subtarget->hasAddNoCarry())
    Features[Feature_HasAddNoCarryInstsBit] = 1;
  if (Subtarget->has16BitInsts())
    Features[Feature_Has16BitInstsBit] = 1;
  if (Subtarget->hasVOP3PInsts())
    Features[Feature_HasVOP3PInstsBit] = 1;
  if (Subtarget->hasMadMixInsts())
    Features[Feature_HasMadMixInstsBit] = 1;
  if (Subtarget->hasScalarStores())
    Features[Feature_HasScalarStoresBit] = 1;
  if (Subtarget->getLDSBankCount() == 16)
    Features[Feature_has16BankLDSBit] = 1;
  if (Subtarget->getLDSBankCount() == 32)
    Features[Feature_has32BankLDSBit] = 1;
  if (Subtarget->hasFmaMixInsts())
    Features[Feature_HasFmaMixInstsBit] = 1;
  if (Subtarget->hasDLInsts())
    Features[Feature_HasDLInstsBit] = 1;
  if (Subtarget->hasDot1Insts())
    Features[Feature_HasDot1InstsBit] = 1;
  if (Subtarget->hasDot2Insts())
    Features[Feature_HasDot2InstsBit] = 1;
  if (Subtarget->hasDot3Insts())
    Features[Feature_HasDot3InstsBit] = 1;
  if (Subtarget->hasDot4Insts())
    Features[Feature_HasDot4InstsBit] = 1;
  if (Subtarget->hasDot5Insts())
    Features[Feature_HasDot5InstsBit] = 1;
  if (Subtarget->hasDot6Insts())
    Features[Feature_HasDot6InstsBit] = 1;
  if (Subtarget->hasMAIInsts())
    Features[Feature_HasMAIInstsBit] = 1;
  if (EnableLateStructurizeCFG)
    Features[Feature_EnableLateCFGStructurizeBit] = 1;
  if (true)
    Features[Feature_TruePredicateBit] = 1;
  if (Subtarget->hasFP16Denormals())
    Features[Feature_FP16DenormalsBit] = 1;
  if (Subtarget->hasFP32Denormals())
    Features[Feature_FP32DenormalsBit] = 1;
  if (Subtarget->hasFP64Denormals())
    Features[Feature_FP64DenormalsBit] = 1;
  if (!Subtarget->hasFP16Denormals())
    Features[Feature_NoFP16DenormalsBit] = 1;
  if (!Subtarget->hasFP32Denormals())
    Features[Feature_NoFP32DenormalsBit] = 1;
  if (!Subtarget->hasFP64Denormals())
    Features[Feature_NoFP64DenormalsBit] = 1;
  if (TM.Options.UnsafeFPMath)
    Features[Feature_UnsafeFPMathBit] = 1;
  if (Subtarget->getWavefrontSize() == 32)
    Features[Feature_isWave32Bit] = 1;
  if (Subtarget->getWavefrontSize() == 64)
    Features[Feature_isWave64Bit] = 1;
  return Features;
}

PredicateBitset AMDGPUInstructionSelector::
computeAvailableFunctionFeatures(const AMDGPUSubtarget *Subtarget, const MachineFunction *MF) const {
  PredicateBitset Features;
  return Features;
}

// LLT Objects.
enum {
  GILLT_p0s64,
  GILLT_p1s64,
  GILLT_p4s64,
  GILLT_s1,
  GILLT_s16,
  GILLT_s32,
  GILLT_s64,
  GILLT_v2s16,
  GILLT_v2s32,
  GILLT_v2s64,
  GILLT_v3s32,
  GILLT_v4s16,
  GILLT_v4s32,
  GILLT_v5s32,
  GILLT_v8s32,
  GILLT_v16s32,
  GILLT_v32s32,
};
const static size_t NumTypeObjects = 17;
const static LLT TypeObjects[] = {
  LLT::pointer(0, 64),
  LLT::pointer(1, 64),
  LLT::pointer(4, 64),
  LLT::scalar(1),
  LLT::scalar(16),
  LLT::scalar(32),
  LLT::scalar(64),
  LLT::vector(2, 16),
  LLT::vector(2, 32),
  LLT::vector(2, 64),
  LLT::vector(3, 32),
  LLT::vector(4, 16),
  LLT::vector(4, 32),
  LLT::vector(5, 32),
  LLT::vector(8, 32),
  LLT::vector(16, 32),
  LLT::vector(32, 32),
};

// Feature bitsets.
enum {
  GIFBS_Invalid,
  GIFBS_HasMAIInsts,
  GIFBS_Has16BitInsts_isGFX6GFX7GFX8GFX9,
  GIFBS_Has16BitInsts_isGFX8Only,
  GIFBS_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_TruePredicate_TruePredicate_isGFX10Plus,
  GIFBS_TruePredicate_TruePredicate_isGFX6,
  GIFBS_TruePredicate_TruePredicate_isGFX7GFX8GFX9,
  GIFBS_TruePredicate_TruePredicate_isGFX7Plus,
  GIFBS_TruePredicate_TruePredicate_isGFX8Plus,
  GIFBS_FP16Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_FP32Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_FP64Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_HasScalarStores_TruePredicate_TruePredicate_isGFX8Plus,
  GIFBS_NoFP16Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_NoFP32Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_NoFP64Denormals_TruePredicate_TruePredicate_TruePredicate,
  GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
};
const static PredicateBitset FeatureBitsets[] {
  {}, // GIFBS_Invalid
  {Feature_HasMAIInstsBit, },
  {Feature_Has16BitInstsBit, Feature_isGFX6GFX7GFX8GFX9Bit, },
  {Feature_Has16BitInstsBit, Feature_isGFX8OnlyBit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX10PlusBit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX6Bit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX7GFX8GFX9Bit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX7PlusBit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX8PlusBit, },
  {Feature_FP16DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_FP32DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_FP64DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_HasFlatAddressSpaceBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_HasFlatGlobalInstsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_HasScalarStoresBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX8PlusBit, },
  {Feature_NoFP16DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_NoFP32DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_NoFP64DenormalsBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, },
  {Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_TruePredicateBit, Feature_isGFX7OnlyBit, },
};

// ComplexPattern predicates.
enum {
  GICP_Invalid,
  GICP_gi_flat_offset,
  GICP_gi_flat_offset_signed,
  GICP_gi_mubuf_scratch_offen,
  GICP_gi_mubuf_scratch_offset,
  GICP_gi_smrd_imm,
  GICP_gi_smrd_imm32,
  GICP_gi_smrd_sgpr,
  GICP_gi_vcsrc,
  GICP_gi_vop3mods,
  GICP_gi_vop3mods0,
  GICP_gi_vop3omods,
  GICP_gi_vsrc0,
};
// See constructor for table contents

// PatFrag predicates.
enum {
  GIPFP_I64_Predicate_NegSubInlineConst16 = GIPFP_I64_Invalid + 1,
  GIPFP_I64_Predicate_NegSubInlineConst32,
  GIPFP_I64_Predicate_SIMM16bit,
  GIPFP_I64_Predicate_UIMM16bit,
};
bool AMDGPUInstructionSelector::testImmPredicate_I64(unsigned PredicateID, int64_t Imm) const {
  switch (PredicateID) {
  case GIPFP_I64_Predicate_NegSubInlineConst16: {
    
  return Imm < -16 && Imm >= -64;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_NegSubInlineConst32: {
    
  return Imm < -16 && Imm >= -64;

    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_SIMM16bit: {
    return isInt<16>(Imm);
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  case GIPFP_I64_Predicate_UIMM16bit: {
    return isUInt<16>(Imm); 
    llvm_unreachable("ImmediateCode should have returned");
    return false;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AMDGPUInstructionSelector::testImmPredicate_APFloat(unsigned PredicateID, const APFloat & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
bool AMDGPUInstructionSelector::testImmPredicate_APInt(unsigned PredicateID, const APInt & Imm) const {
  llvm_unreachable("Unknown predicate");
  return false;
}
// PatFrag predicates.
enum {
  GIPFP_MI_Predicate_smrd_load = GIPFP_MI_Invalid + 1,
};
bool AMDGPUInstructionSelector::testMIPredicate_MI(unsigned PredicateID, const MachineInstr & MI) const {
  const MachineFunction &MF = *MI.getParent()->getParent();
  const MachineRegisterInfo &MRI = MF.getRegInfo();
  (void)MRI;
  switch (PredicateID) {
  case GIPFP_MI_Predicate_smrd_load: {
    
    if (!MI.hasOneMemOperand())
      return false;
    if (!isInstrUniform(MI))
      return false;

    // FIXME: We should probably be caching this.
    SmallVector<GEPInfo, 4> AddrInfo;
    getAddrModeInfo(MI, MRI, AddrInfo);

    if (hasVgprParts(AddrInfo))
      return false;
    return true;
  
    llvm_unreachable("GISelPredicateCode should have returned");
    return false;
  }
  }
  llvm_unreachable("Unknown predicate");
  return false;
}

AMDGPUInstructionSelector::ComplexMatcherMemFn
AMDGPUInstructionSelector::ComplexPredicateFns[] = {
  nullptr, // GICP_Invalid
  &AMDGPUInstructionSelector::selectFlatOffset, // gi_flat_offset
  &AMDGPUInstructionSelector::selectFlatOffsetSigned, // gi_flat_offset_signed
  &AMDGPUInstructionSelector::selectMUBUFScratchOffen, // gi_mubuf_scratch_offen
  &AMDGPUInstructionSelector::selectMUBUFScratchOffset, // gi_mubuf_scratch_offset
  &AMDGPUInstructionSelector::selectSmrdImm, // gi_smrd_imm
  &AMDGPUInstructionSelector::selectSmrdImm32, // gi_smrd_imm32
  &AMDGPUInstructionSelector::selectSmrdSgpr, // gi_smrd_sgpr
  &AMDGPUInstructionSelector::selectVCSRC, // gi_vcsrc
  &AMDGPUInstructionSelector::selectVOP3Mods, // gi_vop3mods
  &AMDGPUInstructionSelector::selectVOP3Mods0, // gi_vop3mods0
  &AMDGPUInstructionSelector::selectVOP3OMods, // gi_vop3omods
  &AMDGPUInstructionSelector::selectVSRC0, // gi_vsrc0
};

// Custom renderers.
enum {
  GICR_Invalid,
};
AMDGPUInstructionSelector::CustomRendererFn
AMDGPUInstructionSelector::CustomRenderers[] = {
  nullptr, // GICP_Invalid
};

bool AMDGPUInstructionSelector::selectImpl(MachineInstr &I, CodeGenCoverage &CoverageInfo) const {
  MachineFunction &MF = *I.getParent()->getParent();
  MachineRegisterInfo &MRI = MF.getRegInfo();
  // FIXME: This should be computed on a per-function basis rather than per-insn.
  AvailableFunctionFeatures = computeAvailableFunctionFeatures(&STI, &MF);
  const PredicateBitset AvailableFeatures = getAvailableFeatures();
  NewMIVector OutMIs;
  State.MIs.clear();
  State.MIs.push_back(&I);

  if (executeMatchTable(*this, OutMIs, State, ISelInfo, getMatchTable(), TII, MRI, TRI, RBI, AvailableFeatures, CoverageInfo)) {
    return true;
  }

  return false;
}

const int64_t *AMDGPUInstructionSelector::getMatchTable() const {
  constexpr static int64_t MatchTable0[] = {
    GIM_SwitchOpcode, /*MI*/0, /*[*/35, 160, /*)*//*default:*//*Label 44*/ 21223,
    /*TargetOpcode::G_ADD*//*Label 0*/ 130,
    /*TargetOpcode::G_SUB*//*Label 1*/ 327,
    /*TargetOpcode::G_MUL*//*Label 2*/ 358, 0, 0, 0, 0,
    /*TargetOpcode::G_AND*//*Label 3*/ 405,
    /*TargetOpcode::G_OR*//*Label 4*/ 434,
    /*TargetOpcode::G_XOR*//*Label 5*/ 2181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_BITCAST*//*Label 6*/ 2283, 0, 0,
    /*TargetOpcode::G_LOAD*//*Label 7*/ 4676,
    /*TargetOpcode::G_SEXTLOAD*//*Label 8*/ 8654,
    /*TargetOpcode::G_ZEXTLOAD*//*Label 9*/ 9478,
    /*TargetOpcode::G_STORE*//*Label 10*/ 10302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_FENCE*//*Label 11*/ 12331, 0, 0,
    /*TargetOpcode::G_INTRINSIC*//*Label 12*/ 12376,
    /*TargetOpcode::G_INTRINSIC_W_SIDE_EFFECTS*//*Label 13*/ 16666, 0, 0,
    /*TargetOpcode::G_CONSTANT*//*Label 14*/ 17129, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_SHL*//*Label 15*/ 17186,
    /*TargetOpcode::G_LSHR*//*Label 16*/ 17323,
    /*TargetOpcode::G_ASHR*//*Label 17*/ 17460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_UMULH*//*Label 18*/ 17597,
    /*TargetOpcode::G_SMULH*//*Label 19*/ 17626,
    /*TargetOpcode::G_FADD*//*Label 20*/ 17655,
    /*TargetOpcode::G_FSUB*//*Label 21*/ 18001,
    /*TargetOpcode::G_FMUL*//*Label 22*/ 18132,
    /*TargetOpcode::G_FMA*//*Label 23*/ 18478, 0, 0,
    /*TargetOpcode::G_FPOW*//*Label 24*/ 18724, 0,
    /*TargetOpcode::G_FEXP2*//*Label 25*/ 18797, 0,
    /*TargetOpcode::G_FLOG2*//*Label 26*/ 18894, 0, 0,
    /*TargetOpcode::G_FPEXT*//*Label 27*/ 18991,
    /*TargetOpcode::G_FPTRUNC*//*Label 28*/ 19088,
    /*TargetOpcode::G_FPTOSI*//*Label 29*/ 19185,
    /*TargetOpcode::G_FPTOUI*//*Label 30*/ 19419,
    /*TargetOpcode::G_SITOFP*//*Label 31*/ 19653,
    /*TargetOpcode::G_UITOFP*//*Label 32*/ 19783, 0, 0,
    /*TargetOpcode::G_FCANONICALIZE*//*Label 33*/ 19913, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_SMIN*//*Label 34*/ 20319,
    /*TargetOpcode::G_SMAX*//*Label 35*/ 20348,
    /*TargetOpcode::G_UMIN*//*Label 36*/ 20377,
    /*TargetOpcode::G_UMAX*//*Label 37*/ 20406,
    /*TargetOpcode::G_BR*//*Label 38*/ 20435, 0, 0, 0, 0, 0, 0, 0, 0,
    /*TargetOpcode::G_CTPOP*//*Label 39*/ 20464, 0,
    /*TargetOpcode::G_FCEIL*//*Label 40*/ 20491, 0, 0,
    /*TargetOpcode::G_FSQRT*//*Label 41*/ 20633,
    /*TargetOpcode::G_FFLOOR*//*Label 42*/ 20775,
    /*TargetOpcode::G_FRINT*//*Label 43*/ 21081,
    // Label 0: @130
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 47*/ 326,
    /*GILLT_s16*//*Label 45*/ 139, 0,
    /*GILLT_s64*//*Label 46*/ 299,
    // Label 45: @139
    GIM_Try, /*On fail goto*//*Label 48*/ 298,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 49*/ 201, // Rule ID 1262 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts_isGFX6GFX7GFX8GFX9,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1), i16:{ *:[i16] }:$src2)  =>  (V_MAD_U16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1262,
        GIR_Done,
      // Label 49: @201
      GIM_Try, /*On fail goto*//*Label 50*/ 249, // Rule ID 1263 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts_isGFX6GFX7GFX8GFX9,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1), i16:{ *:[i16] }:$src2)  =>  (V_MAD_I16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_I16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1263,
        GIR_Done,
      // Label 50: @249
      GIM_Try, /*On fail goto*//*Label 51*/ 297, // Rule ID 2622 //
        GIM_CheckFeatures, GIFBS_Has16BitInsts_isGFX6GFX7GFX8GFX9,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/2, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_MUL,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (add:{ *:[i16] } i16:{ *:[i16] }:$src2, (mul:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1))  =>  (V_MAD_U16:{ *:[i16] } i16:{ *:[i16] }:$src0, i16:{ *:[i16] }:$src1, i16:{ *:[i16] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2622,
        GIR_Done,
      // Label 51: @297
      GIM_Reject,
    // Label 48: @298
    GIM_Reject,
    // Label 46: @299
    GIM_Try, /*On fail goto*//*Label 52*/ 325, // Rule ID 677 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      // (add:{ *:[i64] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)  =>  (S_ADD_U64_PSEUDO:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_ADD_U64_PSEUDO,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 677,
      GIR_Done,
    // Label 52: @325
    GIM_Reject,
    // Label 47: @326
    GIM_Reject,
    // Label 1: @327
    GIM_Try, /*On fail goto*//*Label 53*/ 357, // Rule ID 678 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      // (sub:{ *:[i64] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)  =>  (S_SUB_U64_PSEUDO:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0, i64:{ *:[i64] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_SUB_U64_PSEUDO,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 678,
      GIR_Done,
    // Label 53: @357
    GIM_Reject,
    // Label 2: @358
    GIM_Try, /*On fail goto*//*Label 54*/ 404,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 55*/ 387, // Rule ID 42 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (S_MUL_I32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_MUL_I32,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 42,
        GIR_Done,
      // Label 55: @387
      GIM_Try, /*On fail goto*//*Label 56*/ 403, // Rule ID 459 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (mul:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MUL_LO_U32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MUL_LO_U32,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 459,
        GIR_Done,
      // Label 56: @403
      GIM_Reject,
    // Label 54: @404
    GIM_Reject,
    // Label 3: @405
    GIM_Try, /*On fail goto*//*Label 57*/ 433, // Rule ID 424 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (and:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_AND_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_AND_B32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 424,
      GIR_Done,
    // Label 57: @433
    GIM_Reject,
    // Label 4: @434
    GIM_Try, /*On fail goto*//*Label 58*/ 2180,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 59*/ 2137,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_Try, /*On fail goto*//*Label 60*/ 555, // Rule ID 2569 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2569,
          GIR_Done,
        // Label 60: @555
        GIM_Try, /*On fail goto*//*Label 61*/ 656, // Rule ID 2570 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2570,
          GIR_Done,
        // Label 61: @656
        GIM_Try, /*On fail goto*//*Label 62*/ 757, // Rule ID 2571 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2571,
          GIR_Done,
        // Label 62: @757
        GIM_Try, /*On fail goto*//*Label 63*/ 858, // Rule ID 2572 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/1, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2572,
          GIR_Done,
        // Label 63: @858
        GIM_Try, /*On fail goto*//*Label 64*/ 959, // Rule ID 2565 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2565,
          GIR_Done,
        // Label 64: @959
        GIM_Try, /*On fail goto*//*Label 65*/ 1060, // Rule ID 2566 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2566,
          GIR_Done,
        // Label 65: @1060
        GIM_Try, /*On fail goto*//*Label 66*/ 1161, // Rule ID 2567 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2567,
          GIR_Done,
        // Label 66: @1161
        GIM_Try, /*On fail goto*//*Label 67*/ 1262, // Rule ID 2568 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/1, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_OR,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_AND,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/2, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/2, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)), (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2568,
          GIR_Done,
        // Label 67: @1262
        GIM_Try, /*On fail goto*//*Label 68*/ 1363, // Rule ID 2559 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2559,
          GIR_Done,
        // Label 68: @1363
        GIM_Try, /*On fail goto*//*Label 69*/ 1464, // Rule ID 2560 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2560,
          GIR_Done,
        // Label 69: @1464
        GIM_Try, /*On fail goto*//*Label 70*/ 1565, // Rule ID 2563 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2563,
          GIR_Done,
        // Label 70: @1565
        GIM_Try, /*On fail goto*//*Label 71*/ 1666, // Rule ID 2564 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/1, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), i32:{ *:[i32] }:$y))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/2, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2564,
          GIR_Done,
        // Label 71: @1666
        GIM_Try, /*On fail goto*//*Label 72*/ 1767, // Rule ID 1011 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 1011,
          GIR_Done,
        // Label 72: @1767
        GIM_Try, /*On fail goto*//*Label 73*/ 1868, // Rule ID 2558 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/1, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/2, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2558,
          GIR_Done,
        // Label 73: @1868
        GIM_Try, /*On fail goto*//*Label 74*/ 1969, // Rule ID 2561 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/2,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$z)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2561,
          GIR_Done,
        // Label 74: @1969
        GIM_Try, /*On fail goto*//*Label 75*/ 2070, // Rule ID 2562 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
          GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/1, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/2, // MIs[2]
          GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_AND,
          GIM_CheckType, /*MI*/2, /*Op*/1, /*Type*/GILLT_s32,
          GIM_CheckType, /*MI*/2, /*Op*/2, /*Type*/GILLT_s32,
          GIM_RecordInsn, /*DefineMI*/3, /*MI*/2, /*OpIdx*/2, // MIs[3]
          GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_OR,
          // MIs[3] z
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/1, /*OtherMI*/1, /*OtherOpIdx*/1,
          // MIs[3] x
          GIM_CheckIsSameOperand, /*MI*/3, /*OpIdx*/2, /*OtherMI*/1, /*OtherOpIdx*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/1,
          GIM_CheckIsSafeToFold, /*InsnID*/2,
          GIM_CheckIsSafeToFold, /*InsnID*/3,
          // (or:{ *:[i32] } (and:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x), (and:{ *:[i32] } i32:{ *:[i32] }:$y, (or:{ *:[i32] } i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$x)))  =>  (V_BFI_B32:{ *:[i32] } (V_XOR_B32_e64:{ *:[i16] } i32:{ *:[i32] }:$x, i32:{ *:[i32] }:$y), i32:{ *:[i32] }:$z, i32:{ *:[i32] }:$y)
          GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
          GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_XOR_B32_e64,
          GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/1, /*OpIdx*/2, // x
          GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_BFI_B32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/1, /*OpIdx*/1, // z
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/2, /*OpIdx*/1, // y
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2562,
          GIR_Done,
        // Label 75: @2070
        GIM_Try, /*On fail goto*//*Label 76*/ 2103, // Rule ID 981 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vsrc0,
          // (or:{ *:[i32] } (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0), VGPR_32:{ *:[i32] }:$src1)  =>  (V_OR_B32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 981,
          GIR_Done,
        // Label 76: @2103
        GIM_Try, /*On fail goto*//*Label 77*/ 2136, // Rule ID 2527 //
          GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
          GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
          GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
          // (or:{ *:[i32] } VGPR_32:{ *:[i32] }:$src1, (sd_vsrc0:{ *:[i32] } i32:{ *:[i32] }:$src0))  =>  (V_OR_B32_e32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
          GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e32,
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
          GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
          GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
          GIR_EraseFromParent, /*InsnID*/0,
          GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
          // GIR_Coverage, 2527,
          GIR_Done,
        // Label 77: @2136
        GIM_Reject,
      // Label 59: @2137
      GIM_Try, /*On fail goto*//*Label 78*/ 2163, // Rule ID 980 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (or:{ *:[i32] } SReg_32:{ *:[i32] }:$src0, SReg_32:{ *:[i32] }:$src1)  =>  (S_OR_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_OR_B32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 980,
        GIR_Done,
      // Label 78: @2163
      GIM_Try, /*On fail goto*//*Label 79*/ 2179, // Rule ID 426 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (or:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_OR_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_OR_B32_e64,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 426,
        GIR_Done,
      // Label 79: @2179
      GIM_Reject,
    // Label 58: @2180
    GIM_Reject,
    // Label 5: @2181
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/5, 7, /*)*//*default:*//*Label 82*/ 2282,
    /*GILLT_s32*//*Label 80*/ 2189,
    /*GILLT_s64*//*Label 81*/ 2245,
    // Label 80: @2189
    GIM_Try, /*On fail goto*//*Label 83*/ 2244,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 84*/ 2227, // Rule ID 0 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$src0, -1:{ *:[i32] })  =>  (S_NOT_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_NOT_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 0,
        GIR_Done,
      // Label 84: @2227
      GIM_Try, /*On fail goto*//*Label 85*/ 2243, // Rule ID 428 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (xor:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_XOR_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_XOR_B32_e64,
        GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 428,
        GIR_Done,
      // Label 85: @2243
      GIM_Reject,
    // Label 83: @2244
    GIM_Reject,
    // Label 81: @2245
    GIM_Try, /*On fail goto*//*Label 86*/ 2281, // Rule ID 1 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
      GIM_CheckConstantInt, /*MI*/0, /*Op*/2, -1,
      // (xor:{ *:[i64] } i64:{ *:[i64] }:$src0, -1:{ *:[i64] })  =>  (S_NOT_B64:{ *:[i64] }:{ *:[i1] } i64:{ *:[i64] }:$src0)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_NOT_B64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1,
      GIR_Done,
    // Label 86: @2281
    GIM_Reject,
    // Label 82: @2282
    GIM_Reject,
    // Label 6: @2283
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 17, /*)*//*default:*//*Label 100*/ 4675,
    /*GILLT_s16*//*Label 87*/ 2302,
    /*GILLT_s32*//*Label 88*/ 2430,
    /*GILLT_s64*//*Label 89*/ 2703,
    /*GILLT_v2s16*//*Label 90*/ 3044,
    /*GILLT_v2s32*//*Label 91*/ 3249,
    /*GILLT_v2s64*//*Label 92*/ 3624,
    /*GILLT_v3s32*//*Label 93*/ 3795,
    /*GILLT_v4s16*//*Label 94*/ 3855,
    /*GILLT_v4s32*//*Label 95*/ 4196,
    /*GILLT_v5s32*//*Label 96*/ 4367,
    /*GILLT_v8s32*//*Label 97*/ 4427,
    /*GILLT_v16s32*//*Label 98*/ 4555,
    /*GILLT_v32s32*//*Label 99*/ 4615,
    // Label 87: @2302
    GIM_Try, /*On fail goto*//*Label 101*/ 2429,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_Try, /*On fail goto*//*Label 102*/ 2338, // Rule ID 2087 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (bitconvert:{ *:[i16] } VGPR_32:{ *:[f16] }:$src0)  =>  VGPR_32:{ *:[i16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/11,
        // GIR_Coverage, 2087,
        GIR_Done,
      // Label 102: @2338
      GIM_Try, /*On fail goto*//*Label 103*/ 2368, // Rule ID 2088 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (bitconvert:{ *:[f16] } VGPR_32:{ *:[i16] }:$src0)  =>  VGPR_32:{ *:[f16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/11,
        // GIR_Coverage, 2088,
        GIR_Done,
      // Label 103: @2368
      GIM_Try, /*On fail goto*//*Label 104*/ 2398, // Rule ID 2089 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        // (bitconvert:{ *:[i16] } SReg_32:{ *:[f16] }:$src0)  =>  SReg_32:{ *:[i16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
        // GIR_Coverage, 2089,
        GIR_Done,
      // Label 104: @2398
      GIM_Try, /*On fail goto*//*Label 105*/ 2428, // Rule ID 2090 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        // (bitconvert:{ *:[f16] } SReg_32:{ *:[i16] }:$src0)  =>  SReg_32:{ *:[f16] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
        // GIR_Coverage, 2090,
        GIR_Done,
      // Label 105: @2428
      GIM_Reject,
    // Label 101: @2429
    GIM_Reject,
    // Label 88: @2430
    GIM_Try, /*On fail goto*//*Label 106*/ 2464, // Rule ID 2091 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (bitconvert:{ *:[i32] } VGPR_32:{ *:[f32] }:$src0)  =>  VGPR_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/11,
      // GIR_Coverage, 2091,
      GIR_Done,
    // Label 106: @2464
    GIM_Try, /*On fail goto*//*Label 107*/ 2498, // Rule ID 2092 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (bitconvert:{ *:[f32] } VGPR_32:{ *:[i32] }:$src0)  =>  VGPR_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VGPR_32*/11,
      // GIR_Coverage, 2092,
      GIR_Done,
    // Label 107: @2498
    GIM_Try, /*On fail goto*//*Label 108*/ 2532, // Rule ID 2093 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2093,
      GIR_Done,
    // Label 108: @2532
    GIM_Try, /*On fail goto*//*Label 109*/ 2566, // Rule ID 2094 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2094,
      GIR_Done,
    // Label 109: @2566
    GIM_Try, /*On fail goto*//*Label 110*/ 2600, // Rule ID 2096 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2096,
      GIR_Done,
    // Label 110: @2600
    GIM_Try, /*On fail goto*//*Label 111*/ 2634, // Rule ID 2098 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[i32] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2098,
      GIR_Done,
    // Label 111: @2634
    GIM_Try, /*On fail goto*//*Label 112*/ 2668, // Rule ID 2102 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2102,
      GIR_Done,
    // Label 112: @2668
    GIM_Try, /*On fail goto*//*Label 113*/ 2702, // Rule ID 2104 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[f32] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2104,
      GIR_Done,
    // Label 113: @2702
    GIM_Reject,
    // Label 89: @2703
    GIM_Try, /*On fail goto*//*Label 114*/ 2737, // Rule ID 2105 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2105,
      GIR_Done,
    // Label 114: @2737
    GIM_Try, /*On fail goto*//*Label 115*/ 2771, // Rule ID 2106 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2106,
      GIR_Done,
    // Label 115: @2771
    GIM_Try, /*On fail goto*//*Label 116*/ 2805, // Rule ID 2109 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2109,
      GIR_Done,
    // Label 116: @2805
    GIM_Try, /*On fail goto*//*Label 117*/ 2839, // Rule ID 2111 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2111,
      GIR_Done,
    // Label 117: @2839
    GIM_Try, /*On fail goto*//*Label 118*/ 2873, // Rule ID 2113 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2113,
      GIR_Done,
    // Label 118: @2873
    GIM_Try, /*On fail goto*//*Label 119*/ 2907, // Rule ID 2115 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2115,
      GIR_Done,
    // Label 119: @2907
    GIM_Try, /*On fail goto*//*Label 120*/ 2941, // Rule ID 2130 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2130,
      GIR_Done,
    // Label 120: @2941
    GIM_Try, /*On fail goto*//*Label 121*/ 2975, // Rule ID 2131 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[f64] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2131,
      GIR_Done,
    // Label 121: @2975
    GIM_Try, /*On fail goto*//*Label 122*/ 3009, // Rule ID 2134 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2134,
      GIR_Done,
    // Label 122: @3009
    GIM_Try, /*On fail goto*//*Label 123*/ 3043, // Rule ID 2135 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[i64] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2135,
      GIR_Done,
    // Label 123: @3043
    GIM_Reject,
    // Label 90: @3044
    GIM_Try, /*On fail goto*//*Label 124*/ 3078, // Rule ID 2095 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2095,
      GIR_Done,
    // Label 124: @3078
    GIM_Try, /*On fail goto*//*Label 125*/ 3112, // Rule ID 2097 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[i32] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2097,
      GIR_Done,
    // Label 125: @3112
    GIM_Try, /*On fail goto*//*Label 126*/ 3146, // Rule ID 2099 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[v2f16] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2099,
      GIR_Done,
    // Label 126: @3146
    GIM_Try, /*On fail goto*//*Label 127*/ 3180, // Rule ID 2100 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[v2i16] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2100,
      GIR_Done,
    // Label 127: @3180
    GIM_Try, /*On fail goto*//*Label 128*/ 3214, // Rule ID 2101 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2f16] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[v2f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2101,
      GIR_Done,
    // Label 128: @3214
    GIM_Try, /*On fail goto*//*Label 129*/ 3248, // Rule ID 2103 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
      // (bitconvert:{ *:[v2i16] } SReg_32:{ *:[f32] }:$src0)  =>  SReg_32:{ *:[v2i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_32*/14,
      // GIR_Coverage, 2103,
      GIR_Done,
    // Label 129: @3248
    GIM_Reject,
    // Label 91: @3249
    GIM_Try, /*On fail goto*//*Label 130*/ 3283, // Rule ID 2107 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2107,
      GIR_Done,
    // Label 130: @3283
    GIM_Try, /*On fail goto*//*Label 131*/ 3317, // Rule ID 2108 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2108,
      GIR_Done,
    // Label 131: @3317
    GIM_Try, /*On fail goto*//*Label 132*/ 3351, // Rule ID 2110 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2110,
      GIR_Done,
    // Label 132: @3351
    GIM_Try, /*On fail goto*//*Label 133*/ 3385, // Rule ID 2112 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2112,
      GIR_Done,
    // Label 133: @3385
    GIM_Try, /*On fail goto*//*Label 134*/ 3419, // Rule ID 2114 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2114,
      GIR_Done,
    // Label 134: @3419
    GIM_Try, /*On fail goto*//*Label 135*/ 3453, // Rule ID 2116 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2116,
      GIR_Done,
    // Label 135: @3453
    GIM_Try, /*On fail goto*//*Label 136*/ 3487, // Rule ID 2119 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2119,
      GIR_Done,
    // Label 136: @3487
    GIM_Try, /*On fail goto*//*Label 137*/ 3521, // Rule ID 2121 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2121,
      GIR_Done,
    // Label 137: @3521
    GIM_Try, /*On fail goto*//*Label 138*/ 3555, // Rule ID 2122 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2i32] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v2i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2122,
      GIR_Done,
    // Label 138: @3555
    GIM_Try, /*On fail goto*//*Label 139*/ 3589, // Rule ID 2124 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2124,
      GIR_Done,
    // Label 139: @3589
    GIM_Try, /*On fail goto*//*Label 140*/ 3623, // Rule ID 2126 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v2f32] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v2f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2126,
      GIR_Done,
    // Label 140: @3623
    GIM_Reject,
    // Label 92: @3624
    GIM_Try, /*On fail goto*//*Label 141*/ 3658, // Rule ID 2140 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_128RegClassID,
      // (bitconvert:{ *:[v2i64] } SReg_128:{ *:[v4i32] }:$src0)  =>  SReg_128:{ *:[v2i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_128*/42,
      // GIR_Coverage, 2140,
      GIR_Done,
    // Label 141: @3658
    GIM_Try, /*On fail goto*//*Label 142*/ 3692, // Rule ID 2142 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v4f32] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2142,
      GIR_Done,
    // Label 142: @3692
    GIM_Try, /*On fail goto*//*Label 143*/ 3726, // Rule ID 2143 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v4i32] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2143,
      GIR_Done,
    // Label 143: @3726
    GIM_Try, /*On fail goto*//*Label 144*/ 3760, // Rule ID 2146 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2i64] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v2i64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2146,
      GIR_Done,
    // Label 144: @3760
    GIM_Try, /*On fail goto*//*Label 145*/ 3794, // Rule ID 2147 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v2f64] } VReg_128:{ *:[v2i64] }:$src0)  =>  VReg_128:{ *:[v2f64] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2147,
      GIR_Done,
    // Label 145: @3794
    GIM_Reject,
    // Label 93: @3795
    GIM_Try, /*On fail goto*//*Label 146*/ 3854,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v3s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SGPR_96RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SGPR_96RegClassID,
      GIM_Try, /*On fail goto*//*Label 147*/ 3831, // Rule ID 2138 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v3i32] } SGPR_96:{ *:[v3f32] }:$src0)  =>  SGPR_96:{ *:[v3i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SGPR_96*/34,
        // GIR_Coverage, 2138,
        GIR_Done,
      // Label 147: @3831
      GIM_Try, /*On fail goto*//*Label 148*/ 3853, // Rule ID 2139 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v3f32] } SGPR_96:{ *:[v3i32] }:$src0)  =>  SGPR_96:{ *:[v3f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SGPR_96*/34,
        // GIR_Coverage, 2139,
        GIR_Done,
      // Label 148: @3853
      GIM_Reject,
    // Label 146: @3854
    GIM_Reject,
    // Label 94: @3855
    GIM_Try, /*On fail goto*//*Label 149*/ 3889, // Rule ID 2117 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v4f16] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2117,
      GIR_Done,
    // Label 149: @3889
    GIM_Try, /*On fail goto*//*Label 150*/ 3923, // Rule ID 2118 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v4i16] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2118,
      GIR_Done,
    // Label 150: @3923
    GIM_Try, /*On fail goto*//*Label 151*/ 3957, // Rule ID 2120 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2120,
      GIR_Done,
    // Label 151: @3957
    GIM_Try, /*On fail goto*//*Label 152*/ 3991, // Rule ID 2123 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v2i32] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2123,
      GIR_Done,
    // Label 152: @3991
    GIM_Try, /*On fail goto*//*Label 153*/ 4025, // Rule ID 2125 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2125,
      GIR_Done,
    // Label 153: @4025
    GIM_Try, /*On fail goto*//*Label 154*/ 4059, // Rule ID 2127 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[v2f32] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2127,
      GIR_Done,
    // Label 154: @4059
    GIM_Try, /*On fail goto*//*Label 155*/ 4093, // Rule ID 2128 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2128,
      GIR_Done,
    // Label 155: @4093
    GIM_Try, /*On fail goto*//*Label 156*/ 4127, // Rule ID 2129 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[f64] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2129,
      GIR_Done,
    // Label 156: @4127
    GIM_Try, /*On fail goto*//*Label 157*/ 4161, // Rule ID 2132 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4i16] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v4i16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2132,
      GIR_Done,
    // Label 157: @4161
    GIM_Try, /*On fail goto*//*Label 158*/ 4195, // Rule ID 2133 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_64RegClassID,
      // (bitconvert:{ *:[v4f16] } VReg_64:{ *:[i64] }:$src0)  =>  VReg_64:{ *:[v4f16] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_64*/27,
      // GIR_Coverage, 2133,
      GIR_Done,
    // Label 158: @4195
    GIM_Reject,
    // Label 95: @4196
    GIM_Try, /*On fail goto*//*Label 159*/ 4230, // Rule ID 2136 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } VReg_128:{ *:[v4f32] }:$src0)  =>  VReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2136,
      GIR_Done,
    // Label 159: @4230
    GIM_Try, /*On fail goto*//*Label 160*/ 4264, // Rule ID 2137 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v4s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4f32] } VReg_128:{ *:[v4i32] }:$src0)  =>  VReg_128:{ *:[v4f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2137,
      GIR_Done,
    // Label 160: @4264
    GIM_Try, /*On fail goto*//*Label 161*/ 4298, // Rule ID 2141 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } SReg_128:{ *:[v2i64] }:$src0)  =>  SReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_128*/42,
      // GIR_Coverage, 2141,
      GIR_Done,
    // Label 161: @4298
    GIM_Try, /*On fail goto*//*Label 162*/ 4332, // Rule ID 2144 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4f32] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v4f32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2144,
      GIR_Done,
    // Label 162: @4332
    GIM_Try, /*On fail goto*//*Label 163*/ 4366, // Rule ID 2145 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v2s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_128RegClassID,
      // (bitconvert:{ *:[v4i32] } VReg_128:{ *:[v2f64] }:$src0)  =>  VReg_128:{ *:[v4i32] }:$src0
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_128*/41,
      // GIR_Coverage, 2145,
      GIR_Done,
    // Label 163: @4366
    GIM_Reject,
    // Label 96: @4367
    GIM_Try, /*On fail goto*//*Label 164*/ 4426,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v5s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SGPR_160RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SGPR_160RegClassID,
      GIM_Try, /*On fail goto*//*Label 165*/ 4403, // Rule ID 2148 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v5i32] } SGPR_160:{ *:[v5f32] }:$src0)  =>  SGPR_160:{ *:[v5i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SGPR_160*/52,
        // GIR_Coverage, 2148,
        GIR_Done,
      // Label 165: @4403
      GIM_Try, /*On fail goto*//*Label 166*/ 4425, // Rule ID 2149 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v5f32] } SGPR_160:{ *:[v5i32] }:$src0)  =>  SGPR_160:{ *:[v5f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SGPR_160*/52,
        // GIR_Coverage, 2149,
        GIR_Done,
      // Label 166: @4425
      GIM_Reject,
    // Label 164: @4426
    GIM_Reject,
    // Label 97: @4427
    GIM_Try, /*On fail goto*//*Label 167*/ 4554,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v8s32,
      GIM_Try, /*On fail goto*//*Label 168*/ 4463, // Rule ID 2150 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_256RegClassID,
        // (bitconvert:{ *:[v8i32] } SReg_256:{ *:[v8f32] }:$src0)  =>  SReg_256:{ *:[v8i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_256*/62,
        // GIR_Coverage, 2150,
        GIR_Done,
      // Label 168: @4463
      GIM_Try, /*On fail goto*//*Label 169*/ 4493, // Rule ID 2151 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_256RegClassID,
        // (bitconvert:{ *:[v8f32] } SReg_256:{ *:[v8i32] }:$src0)  =>  SReg_256:{ *:[v8f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC SReg_256*/62,
        // GIR_Coverage, 2151,
        GIR_Done,
      // Label 169: @4493
      GIM_Try, /*On fail goto*//*Label 170*/ 4523, // Rule ID 2152 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_256RegClassID,
        // (bitconvert:{ *:[v8i32] } VReg_256:{ *:[v8f32] }:$src0)  =>  VReg_256:{ *:[v8i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_256*/61,
        // GIR_Coverage, 2152,
        GIR_Done,
      // Label 170: @4523
      GIM_Try, /*On fail goto*//*Label 171*/ 4553, // Rule ID 2153 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_256RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_256RegClassID,
        // (bitconvert:{ *:[v8f32] } VReg_256:{ *:[v8i32] }:$src0)  =>  VReg_256:{ *:[v8f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_256*/61,
        // GIR_Coverage, 2153,
        GIR_Done,
      // Label 171: @4553
      GIM_Reject,
    // Label 167: @4554
    GIM_Reject,
    // Label 98: @4555
    GIM_Try, /*On fail goto*//*Label 172*/ 4614,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v16s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_512RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_512RegClassID,
      GIM_Try, /*On fail goto*//*Label 173*/ 4591, // Rule ID 2154 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v16i32] } VReg_512:{ *:[v16f32] }:$src0)  =>  VReg_512:{ *:[v16i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_512*/75,
        // GIR_Coverage, 2154,
        GIR_Done,
      // Label 173: @4591
      GIM_Try, /*On fail goto*//*Label 174*/ 4613, // Rule ID 2155 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v16f32] } VReg_512:{ *:[v16i32] }:$src0)  =>  VReg_512:{ *:[v16f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_512*/75,
        // GIR_Coverage, 2155,
        GIR_Done,
      // Label 174: @4613
      GIM_Reject,
    // Label 172: @4614
    GIM_Reject,
    // Label 99: @4615
    GIM_Try, /*On fail goto*//*Label 175*/ 4674,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_v32s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_1024RegClassID,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::VReg_1024RegClassID,
      GIM_Try, /*On fail goto*//*Label 176*/ 4651, // Rule ID 2156 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v32i32] } VReg_1024:{ *:[v32f32] }:$src0)  =>  VReg_1024:{ *:[v32i32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_1024*/93,
        // GIR_Coverage, 2156,
        GIR_Done,
      // Label 176: @4651
      GIM_Try, /*On fail goto*//*Label 177*/ 4673, // Rule ID 2157 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (bitconvert:{ *:[v32f32] } VReg_1024:{ *:[v32i32] }:$src0)  =>  VReg_1024:{ *:[v32f32] }:$src0
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/TargetOpcode::COPY,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainOperandRC, /*InsnID*/0, /*Op*/0, /*RC VReg_1024*/93,
        // GIR_Coverage, 2157,
        GIR_Done,
      // Label 177: @4673
      GIM_Reject,
    // Label 175: @4674
    GIM_Reject,
    // Label 100: @4675
    GIM_Reject,
    // Label 7: @4676
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/0, 16, /*)*//*default:*//*Label 189*/ 8653,
    /*GILLT_p0s64*//*Label 178*/ 4698,
    /*GILLT_p1s64*//*Label 179*/ 4874,
    /*GILLT_p4s64*//*Label 180*/ 5050, 0,
    /*GILLT_s16*//*Label 181*/ 5226,
    /*GILLT_s32*//*Label 182*/ 5785,
    /*GILLT_s64*//*Label 183*/ 6857, 0,
    /*GILLT_v2s32*//*Label 184*/ 7033, 0,
    /*GILLT_v3s32*//*Label 185*/ 7531, 0,
    /*GILLT_v4s32*//*Label 186*/ 7803, 0,
    /*GILLT_v8s32*//*Label 187*/ 8301,
    /*GILLT_v16s32*//*Label 188*/ 8477,
    // Label 178: @4698
    GIM_Try, /*On fail goto*//*Label 190*/ 4873,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 191*/ 4757, // Rule ID 991 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[i64] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 991,
        GIR_Done,
      // Label 191: @4757
      GIM_Try, /*On fail goto*//*Label 192*/ 4796, // Rule ID 992 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[i64] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM_ci:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 992,
        GIR_Done,
      // Label 192: @4796
      GIM_Try, /*On fail goto*//*Label 193*/ 4835, // Rule ID 993 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[i64] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_SGPR:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 993,
        GIR_Done,
      // Label 193: @4835
      GIM_Try, /*On fail goto*//*Label 194*/ 4872, // Rule ID 994 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[i64] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 994,
        GIR_Done,
      // Label 194: @4872
      GIM_Reject,
    // Label 190: @4873
    GIM_Reject,
    // Label 179: @4874
    GIM_Try, /*On fail goto*//*Label 195*/ 5049,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 196*/ 4933, // Rule ID 995 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[i64] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 995,
        GIR_Done,
      // Label 196: @4933
      GIM_Try, /*On fail goto*//*Label 197*/ 4972, // Rule ID 996 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[i64] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM_ci:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 996,
        GIR_Done,
      // Label 197: @4972
      GIM_Try, /*On fail goto*//*Label 198*/ 5011, // Rule ID 997 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[i64] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_SGPR:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 997,
        GIR_Done,
      // Label 198: @5011
      GIM_Try, /*On fail goto*//*Label 199*/ 5048, // Rule ID 998 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[i64] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 998,
        GIR_Done,
      // Label 199: @5048
      GIM_Reject,
    // Label 195: @5049
    GIM_Reject,
    // Label 180: @5050
    GIM_Try, /*On fail goto*//*Label 200*/ 5225,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 201*/ 5109, // Rule ID 999 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[i64] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 999,
        GIR_Done,
      // Label 201: @5109
      GIM_Try, /*On fail goto*//*Label 202*/ 5148, // Rule ID 1000 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[i64] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM_ci:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1000,
        GIR_Done,
      // Label 202: @5148
      GIM_Try, /*On fail goto*//*Label 203*/ 5187, // Rule ID 1001 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[i64] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_SGPR:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1001,
        GIR_Done,
      // Label 203: @5187
      GIM_Try, /*On fail goto*//*Label 204*/ 5224, // Rule ID 1002 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[i64] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1002,
        GIR_Done,
      // Label 204: @5224
      GIM_Reject,
    // Label 200: @5225
    GIM_Reject,
    // Label 181: @5226
    GIM_Try, /*On fail goto*//*Label 205*/ 5299, // Rule ID 1866 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i16] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFSET:{ *:[i16] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1866,
      GIR_Done,
    // Label 205: @5299
    GIM_Try, /*On fail goto*//*Label 206*/ 5368, // Rule ID 1876 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i16] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_USHORT_OFFSET:{ *:[i16] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1876,
      GIR_Done,
    // Label 206: @5368
    GIM_Try, /*On fail goto*//*Label 207*/ 5445, // Rule ID 1865 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i16] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFEN:{ *:[i16] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1865,
      GIR_Done,
    // Label 207: @5445
    GIM_Try, /*On fail goto*//*Label 208*/ 5518, // Rule ID 1875 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i16] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_USHORT_OFFEN:{ *:[i16] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1875,
      GIR_Done,
    // Label 208: @5518
    GIM_Try, /*On fail goto*//*Label 209*/ 5586, // Rule ID 1429 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i16] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_global>>  =>  (GLOBAL_LOAD_UBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1429,
      GIR_Done,
    // Label 209: @5586
    GIM_Try, /*On fail goto*//*Label 210*/ 5650, // Rule ID 1435 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i16] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_global>>  =>  (GLOBAL_LOAD_USHORT:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1435,
      GIR_Done,
    // Label 210: @5650
    GIM_Try, /*On fail goto*//*Label 211*/ 5719, // Rule ID 1363 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i16] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_flat>>  =>  (FLAT_LOAD_UBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1363,
      GIR_Done,
    // Label 211: @5719
    GIM_Try, /*On fail goto*//*Label 212*/ 5784, // Rule ID 1368 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i16] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_flat>>  =>  (FLAT_LOAD_USHORT:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1368,
      GIR_Done,
    // Label 212: @5784
    GIM_Reject,
    // Label 182: @5785
    GIM_Try, /*On fail goto*//*Label 213*/ 5842, // Rule ID 1309 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32_XM0_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
      // (ld:{ *:[i32] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORD_IMM:{ *:[i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORD_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1309,
      GIR_Done,
    // Label 213: @5842
    GIM_Try, /*On fail goto*//*Label 214*/ 5899, // Rule ID 1310 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32_XM0_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
      // (ld:{ *:[i32] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORD_IMM_ci:{ *:[i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORD_IMM_ci,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1310,
      GIR_Done,
    // Label 214: @5899
    GIM_Try, /*On fail goto*//*Label 215*/ 5956, // Rule ID 1311 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32_XM0_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
      // (ld:{ *:[i32] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORD_SGPR:{ *:[i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORD_SGPR,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1311,
      GIR_Done,
    // Label 215: @5956
    GIM_Try, /*On fail goto*//*Label 216*/ 6011, // Rule ID 1312 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32_XM0_XEXECRegClassID,
      // MIs[0] sbase
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
      // (ld:{ *:[i32] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORD_IMM:{ *:[i32] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORD_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1312,
      GIR_Done,
    // Label 216: @6011
    GIM_Try, /*On fail goto*//*Label 217*/ 6084, // Rule ID 1860 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1860,
      GIR_Done,
    // Label 217: @6084
    GIM_Try, /*On fail goto*//*Label 218*/ 6157, // Rule ID 1872 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16_private>>  =>  (BUFFER_LOAD_USHORT_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1872,
      GIR_Done,
    // Label 218: @6157
    GIM_Try, /*On fail goto*//*Label 219*/ 6226, // Rule ID 1878 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORD_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORD_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1878,
      GIR_Done,
    // Label 219: @6226
    GIM_Try, /*On fail goto*//*Label 220*/ 6303, // Rule ID 1859 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1859,
      GIR_Done,
    // Label 220: @6303
    GIM_Try, /*On fail goto*//*Label 221*/ 6380, // Rule ID 1871 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16_private>>  =>  (BUFFER_LOAD_USHORT_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1871,
      GIR_Done,
    // Label 221: @6380
    GIM_Try, /*On fail goto*//*Label 222*/ 6453, // Rule ID 1877 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORD_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORD_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1877,
      GIR_Done,
    // Label 222: @6453
    GIM_Try, /*On fail goto*//*Label 223*/ 6521, // Rule ID 1426 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_global>>  =>  (GLOBAL_LOAD_UBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1426,
      GIR_Done,
    // Label 223: @6521
    GIM_Try, /*On fail goto*//*Label 224*/ 6589, // Rule ID 1432 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16_global>>  =>  (GLOBAL_LOAD_USHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1432,
      GIR_Done,
    // Label 224: @6589
    GIM_Try, /*On fail goto*//*Label 225*/ 6653, // Rule ID 1436 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_global>>  =>  (GLOBAL_LOAD_DWORD:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_DWORD,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1436,
      GIR_Done,
    // Label 225: @6653
    GIM_Try, /*On fail goto*//*Label 226*/ 6722, // Rule ID 1360 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8_flat>>  =>  (FLAT_LOAD_UBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1360,
      GIR_Done,
    // Label 226: @6722
    GIM_Try, /*On fail goto*//*Label 227*/ 6791, // Rule ID 1366 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16_flat>>  =>  (FLAT_LOAD_USHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1366,
      GIR_Done,
    // Label 227: @6791
    GIM_Try, /*On fail goto*//*Label 228*/ 6856, // Rule ID 1370 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_flat>>  =>  (FLAT_LOAD_DWORD:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_DWORD,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1370,
      GIR_Done,
    // Label 228: @6856
    GIM_Reject,
    // Label 183: @6857
    GIM_Try, /*On fail goto*//*Label 229*/ 7032,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 230*/ 6916, // Rule ID 987 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[i64] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 987,
        GIR_Done,
      // Label 230: @6916
      GIM_Try, /*On fail goto*//*Label 231*/ 6955, // Rule ID 988 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[i64] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM_ci:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 988,
        GIR_Done,
      // Label 231: @6955
      GIM_Try, /*On fail goto*//*Label 232*/ 6994, // Rule ID 989 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[i64] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_SGPR:{ *:[i64] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 989,
        GIR_Done,
      // Label 232: @6994
      GIM_Try, /*On fail goto*//*Label 233*/ 7031, // Rule ID 990 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[i64] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[i64] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 990,
        GIR_Done,
      // Label 233: @7031
      GIM_Reject,
    // Label 229: @7032
    GIM_Reject,
    // Label 184: @7033
    GIM_Try, /*On fail goto*//*Label 234*/ 7090, // Rule ID 1316 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
      // (ld:{ *:[v2i32] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[v2i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1316,
      GIR_Done,
    // Label 234: @7090
    GIM_Try, /*On fail goto*//*Label 235*/ 7147, // Rule ID 1317 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
      // (ld:{ *:[v2i32] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM_ci:{ *:[v2i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM_ci,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1317,
      GIR_Done,
    // Label 235: @7147
    GIM_Try, /*On fail goto*//*Label 236*/ 7204, // Rule ID 1318 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
      // (ld:{ *:[v2i32] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_SGPR:{ *:[v2i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_SGPR,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1318,
      GIR_Done,
    // Label 236: @7204
    GIM_Try, /*On fail goto*//*Label 237*/ 7259, // Rule ID 1319 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
      // MIs[0] sbase
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
      // (ld:{ *:[v2i32] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX2_IMM:{ *:[v2i32] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX2_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1319,
      GIR_Done,
    // Label 237: @7259
    GIM_Try, /*On fail goto*//*Label 238*/ 7328, // Rule ID 1880 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[v2i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX2_OFFSET:{ *:[v2i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX2_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1880,
      GIR_Done,
    // Label 238: @7328
    GIM_Try, /*On fail goto*//*Label 239*/ 7401, // Rule ID 1879 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[v2i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX2_OFFEN:{ *:[v2i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX2_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1879,
      GIR_Done,
    // Label 239: @7401
    GIM_Try, /*On fail goto*//*Label 240*/ 7465, // Rule ID 1437 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[v2i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_global>>  =>  (GLOBAL_LOAD_DWORDX2:{ *:[v2i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_DWORDX2,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1437,
      GIR_Done,
    // Label 240: @7465
    GIM_Try, /*On fail goto*//*Label 241*/ 7530, // Rule ID 1371 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[v2i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_flat>>  =>  (FLAT_LOAD_DWORDX2:{ *:[v2i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_DWORDX2,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1371,
      GIR_Done,
    // Label 241: @7530
    GIM_Reject,
    // Label 185: @7531
    GIM_Try, /*On fail goto*//*Label 242*/ 7600, // Rule ID 1882 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_96RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[v3i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX3_OFFSET:{ *:[v3i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX3_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1882,
      GIR_Done,
    // Label 242: @7600
    GIM_Try, /*On fail goto*//*Label 243*/ 7673, // Rule ID 1881 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_96RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[v3i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX3_OFFEN:{ *:[v3i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX3_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1881,
      GIR_Done,
    // Label 243: @7673
    GIM_Try, /*On fail goto*//*Label 244*/ 7737, // Rule ID 1438 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_96RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[v3i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_global>>  =>  (GLOBAL_LOAD_DWORDX3:{ *:[v3i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_DWORDX3,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1438,
      GIR_Done,
    // Label 244: @7737
    GIM_Try, /*On fail goto*//*Label 245*/ 7802, // Rule ID 1372 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_96RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[v3i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_flat>>  =>  (FLAT_LOAD_DWORDX3:{ *:[v3i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_DWORDX3,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1372,
      GIR_Done,
    // Label 245: @7802
    GIM_Reject,
    // Label 186: @7803
    GIM_Try, /*On fail goto*//*Label 246*/ 7860, // Rule ID 1320 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
      // (ld:{ *:[v4i32] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX4_IMM:{ *:[v4i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX4_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1320,
      GIR_Done,
    // Label 246: @7860
    GIM_Try, /*On fail goto*//*Label 247*/ 7917, // Rule ID 1321 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
      // (ld:{ *:[v4i32] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX4_IMM_ci:{ *:[v4i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX4_IMM_ci,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1321,
      GIR_Done,
    // Label 247: @7917
    GIM_Try, /*On fail goto*//*Label 248*/ 7974, // Rule ID 1322 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
      // (ld:{ *:[v4i32] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX4_SGPR:{ *:[v4i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX4_SGPR,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1322,
      GIR_Done,
    // Label 248: @7974
    GIM_Try, /*On fail goto*//*Label 249*/ 8029, // Rule ID 1323 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_128RegClassID,
      // MIs[0] sbase
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
      // (ld:{ *:[v4i32] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX4_IMM:{ *:[v4i32] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX4_IMM,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1323,
      GIR_Done,
    // Label 249: @8029
    GIM_Try, /*On fail goto*//*Label 250*/ 8098, // Rule ID 1884 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[v4i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX4_OFFSET:{ *:[v4i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX4_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1884,
      GIR_Done,
    // Label 250: @8098
    GIM_Try, /*On fail goto*//*Label 251*/ 8171, // Rule ID 1883 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[v4i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load_private>>  =>  (BUFFER_LOAD_DWORDX4_OFFEN:{ *:[v4i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_DWORDX4_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1883,
      GIR_Done,
    // Label 251: @8171
    GIM_Try, /*On fail goto*//*Label 252*/ 8235, // Rule ID 1439 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[v4i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_global>>  =>  (GLOBAL_LOAD_DWORDX4:{ *:[v4i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_DWORDX4,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1439,
      GIR_Done,
    // Label 252: @8235
    GIM_Try, /*On fail goto*//*Label 253*/ 8300, // Rule ID 1373 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[v4i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_load_flat>>  =>  (FLAT_LOAD_DWORDX4:{ *:[v4i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_DWORDX4,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1373,
      GIR_Done,
    // Label 253: @8300
    GIM_Reject,
    // Label 187: @8301
    GIM_Try, /*On fail goto*//*Label 254*/ 8476,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_256RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 255*/ 8360, // Rule ID 1324 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[v8i32] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX8_IMM:{ *:[v8i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX8_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1324,
        GIR_Done,
      // Label 255: @8360
      GIM_Try, /*On fail goto*//*Label 256*/ 8399, // Rule ID 1325 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[v8i32] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX8_IMM_ci:{ *:[v8i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX8_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1325,
        GIR_Done,
      // Label 256: @8399
      GIM_Try, /*On fail goto*//*Label 257*/ 8438, // Rule ID 1326 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[v8i32] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX8_SGPR:{ *:[v8i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX8_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1326,
        GIR_Done,
      // Label 257: @8438
      GIM_Try, /*On fail goto*//*Label 258*/ 8475, // Rule ID 1327 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[v8i32] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX8_IMM:{ *:[v8i32] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX8_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1327,
        GIR_Done,
      // Label 258: @8475
      GIM_Reject,
    // Label 254: @8476
    GIM_Reject,
    // Label 188: @8477
    GIM_Try, /*On fail goto*//*Label 259*/ 8652,
      GIM_CheckMemorySizeEqualToLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckCxxInsnPredicate, /*MI*/0, /*FnId*/GIPFP_MI_Predicate_smrd_load,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_512RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_Try, /*On fail goto*//*Label 260*/ 8536, // Rule ID 1328 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm,
        // (ld:{ *:[v16i32] } (SMRDImm:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX16_IMM:{ *:[v16i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX16_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1328,
        GIR_Done,
      // Label 260: @8536
      GIM_Try, /*On fail goto*//*Label 261*/ 8575, // Rule ID 1329 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate_isGFX7Only,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_imm32,
        // (ld:{ *:[v16i32] } (SMRDImm32:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX16_IMM_ci:{ *:[v16i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX16_IMM_ci,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1329,
        GIR_Done,
      // Label 261: @8575
      GIM_Try, /*On fail goto*//*Label 262*/ 8614, // Rule ID 1330 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_smrd_sgpr,
        // (ld:{ *:[v16i32] } (SMRDSgpr:{ *:[iPTR] } i64:{ *:[i64] }:$sbase, i32:{ *:[i32] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX16_SGPR:{ *:[v16i32] } ?:{ *:[i64] }:$sbase, ?:{ *:[i32] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX16_SGPR,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // sbase
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1330,
        GIR_Done,
      // Label 262: @8614
      GIM_Try, /*On fail goto*//*Label 263*/ 8651, // Rule ID 1331 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        // (ld:{ *:[v16i32] } SReg_64:{ *:[i64] }:$sbase)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_smrd_load>>  =>  (S_LOAD_DWORDX16_IMM:{ *:[v16i32] } i64:{ *:[i64] }:$sbase, 0:{ *:[i32] }, 0:{ *:[i1] }, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_LOAD_DWORDX16_IMM,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // sbase
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1331,
        GIR_Done,
      // Label 263: @8651
      GIM_Reject,
    // Label 259: @8652
    GIM_Reject,
    // Label 189: @8653
    GIM_Reject,
    // Label 8: @8654
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 266*/ 9477,
    /*GILLT_s16*//*Label 264*/ 8662,
    /*GILLT_s32*//*Label 265*/ 8934,
    // Label 264: @8662
    GIM_Try, /*On fail goto*//*Label 267*/ 8731, // Rule ID 1864 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i16] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_private>>  =>  (BUFFER_LOAD_SBYTE_OFFSET:{ *:[i16] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1864,
      GIR_Done,
    // Label 267: @8731
    GIM_Try, /*On fail goto*//*Label 268*/ 8804, // Rule ID 1863 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i16] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_private>>  =>  (BUFFER_LOAD_SBYTE_OFFEN:{ *:[i16] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1863,
      GIR_Done,
    // Label 268: @8804
    GIM_Try, /*On fail goto*//*Label 269*/ 8868, // Rule ID 1431 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i16] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_global>>  =>  (GLOBAL_LOAD_SBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_SBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1431,
      GIR_Done,
    // Label 269: @8868
    GIM_Try, /*On fail goto*//*Label 270*/ 8933, // Rule ID 1365 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i16] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_flat>>  =>  (FLAT_LOAD_SBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_SBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1365,
      GIR_Done,
    // Label 270: @8933
    GIM_Reject,
    // Label 265: @8934
    GIM_Try, /*On fail goto*//*Label 271*/ 9003, // Rule ID 1856 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_private>>  =>  (BUFFER_LOAD_SBYTE_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1856,
      GIR_Done,
    // Label 271: @9003
    GIM_Try, /*On fail goto*//*Label 272*/ 9072, // Rule ID 1870 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_private>>  =>  (BUFFER_LOAD_SSHORT_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SSHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1870,
      GIR_Done,
    // Label 272: @9072
    GIM_Try, /*On fail goto*//*Label 273*/ 9145, // Rule ID 1855 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_private>>  =>  (BUFFER_LOAD_SBYTE_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1855,
      GIR_Done,
    // Label 273: @9145
    GIM_Try, /*On fail goto*//*Label 274*/ 9218, // Rule ID 1869 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_private>>  =>  (BUFFER_LOAD_SSHORT_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_SSHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1869,
      GIR_Done,
    // Label 274: @9218
    GIM_Try, /*On fail goto*//*Label 275*/ 9282, // Rule ID 1428 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_global>>  =>  (GLOBAL_LOAD_SBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_SBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1428,
      GIR_Done,
    // Label 275: @9282
    GIM_Try, /*On fail goto*//*Label 276*/ 9346, // Rule ID 1434 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_global>>  =>  (GLOBAL_LOAD_SSHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_SSHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1434,
      GIR_Done,
    // Label 276: @9346
    GIM_Try, /*On fail goto*//*Label 277*/ 9411, // Rule ID 1362 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8_flat>>  =>  (FLAT_LOAD_SBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_SBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1362,
      GIR_Done,
    // Label 277: @9411
    GIM_Try, /*On fail goto*//*Label 278*/ 9476, // Rule ID 1369 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16_flat>>  =>  (FLAT_LOAD_SSHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_SSHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1369,
      GIR_Done,
    // Label 278: @9476
    GIM_Reject,
    // Label 266: @9477
    GIM_Reject,
    // Label 9: @9478
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 281*/ 10301,
    /*GILLT_s16*//*Label 279*/ 9486,
    /*GILLT_s32*//*Label 280*/ 9758,
    // Label 279: @9486
    GIM_Try, /*On fail goto*//*Label 282*/ 9555, // Rule ID 1868 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i16] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFSET:{ *:[i16] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1868,
      GIR_Done,
    // Label 282: @9555
    GIM_Try, /*On fail goto*//*Label 283*/ 9628, // Rule ID 1867 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i16] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFEN:{ *:[i16] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1867,
      GIR_Done,
    // Label 283: @9628
    GIM_Try, /*On fail goto*//*Label 284*/ 9692, // Rule ID 1430 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i16] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_global>>  =>  (GLOBAL_LOAD_UBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1430,
      GIR_Done,
    // Label 284: @9692
    GIM_Try, /*On fail goto*//*Label 285*/ 9757, // Rule ID 1364 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i16] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_flat>>  =>  (FLAT_LOAD_UBYTE:{ *:[i16] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1364,
      GIR_Done,
    // Label 285: @9757
    GIM_Reject,
    // Label 280: @9758
    GIM_Try, /*On fail goto*//*Label 286*/ 9827, // Rule ID 1862 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1862,
      GIR_Done,
    // Label 286: @9827
    GIM_Try, /*On fail goto*//*Label 287*/ 9896, // Rule ID 1874 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (ld:{ *:[i32] } (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16_private>>  =>  (BUFFER_LOAD_USHORT_OFFSET:{ *:[i32] } ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1874,
      GIR_Done,
    // Label 287: @9896
    GIM_Try, /*On fail goto*//*Label 288*/ 9969, // Rule ID 1861 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_private>>  =>  (BUFFER_LOAD_UBYTE_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_UBYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1861,
      GIR_Done,
    // Label 288: @9969
    GIM_Try, /*On fail goto*//*Label 289*/ 10042, // Rule ID 1873 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (ld:{ *:[i32] } (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16_private>>  =>  (BUFFER_LOAD_USHORT_OFFEN:{ *:[i32] } ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_LOAD_USHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdata
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1873,
      GIR_Done,
    // Label 289: @10042
    GIM_Try, /*On fail goto*//*Label 290*/ 10106, // Rule ID 1427 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_global>>  =>  (GLOBAL_LOAD_UBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1427,
      GIR_Done,
    // Label 290: @10106
    GIM_Try, /*On fail goto*//*Label 291*/ 10170, // Rule ID 1433 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (ld:{ *:[i32] } (FLATOffsetSigned:{ *:[iPTR] } VReg_64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16_global>>  =>  (GLOBAL_LOAD_USHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1433,
      GIR_Done,
    // Label 291: @10170
    GIM_Try, /*On fail goto*//*Label 292*/ 10235, // Rule ID 1361 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8_flat>>  =>  (FLAT_LOAD_UBYTE:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_UBYTE,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1361,
      GIR_Done,
    // Label 292: @10235
    GIM_Try, /*On fail goto*//*Label 293*/ 10300, // Rule ID 1367 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (ld:{ *:[i32] } (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16_flat>>  =>  (FLAT_LOAD_USHORT:{ *:[i32] } ?:{ *:[i64] }:$vaddr, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_LOAD_USHORT,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1367,
      GIR_Done,
    // Label 293: @10300
    GIM_Reject,
    // Label 281: @10301
    GIM_Reject,
    // Label 10: @10302
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 13, /*)*//*default:*//*Label 299*/ 12330,
    /*GILLT_s16*//*Label 294*/ 10317,
    /*GILLT_s32*//*Label 295*/ 10828, 0, 0,
    /*GILLT_v2s32*//*Label 296*/ 11610, 0,
    /*GILLT_v3s32*//*Label 297*/ 11850, 0,
    /*GILLT_v4s32*//*Label 298*/ 12090,
    // Label 294: @10317
    GIM_Try, /*On fail goto*//*Label 300*/ 10386, // Rule ID 1918 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st i16:{ *:[i16] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_private>>  =>  (BUFFER_STORE_BYTE_OFFSET VGPR_32:{ *:[i16] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_BYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1918,
      GIR_Done,
    // Label 300: @10386
    GIM_Try, /*On fail goto*//*Label 301*/ 10447, // Rule ID 1920 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st i16:{ *:[i16] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_SHORT_OFFSET VGPR_32:{ *:[i16] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_SHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1920,
      GIR_Done,
    // Label 301: @10447
    GIM_Try, /*On fail goto*//*Label 302*/ 10520, // Rule ID 1917 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st i16:{ *:[i16] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_private>>  =>  (BUFFER_STORE_BYTE_OFFEN VGPR_32:{ *:[i16] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_BYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1917,
      GIR_Done,
    // Label 302: @10520
    GIM_Try, /*On fail goto*//*Label 303*/ 10585, // Rule ID 1919 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st i16:{ *:[i16] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_SHORT_OFFEN VGPR_32:{ *:[i16] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_SHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1919,
      GIR_Done,
    // Label 303: @10585
    GIM_Try, /*On fail goto*//*Label 304*/ 10649, // Rule ID 1443 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st i16:{ *:[i16] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_global>>  =>  (GLOBAL_STORE_BYTE ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i16] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_BYTE,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1443,
      GIR_Done,
    // Label 304: @10649
    GIM_Try, /*On fail goto*//*Label 305*/ 10705, // Rule ID 1445 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st i16:{ *:[i16] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_global>>  =>  (GLOBAL_STORE_SHORT ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i16] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_SHORT,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1445,
      GIR_Done,
    // Label 305: @10705
    GIM_Try, /*On fail goto*//*Label 306*/ 10770, // Rule ID 1410 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st i16:{ *:[i16] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_flat>>  =>  (FLAT_STORE_BYTE ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i16] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_BYTE,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1410,
      GIR_Done,
    // Label 306: @10770
    GIM_Try, /*On fail goto*//*Label 307*/ 10827, // Rule ID 1411 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st i16:{ *:[i16] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_flat>>  =>  (FLAT_STORE_SHORT ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i16] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_SHORT,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1411,
      GIR_Done,
    // Label 307: @10827
    GIM_Reject,
    // Label 295: @10828
    GIM_Try, /*On fail goto*//*Label 308*/ 10897, // Rule ID 1914 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_private>>  =>  (BUFFER_STORE_BYTE_OFFSET VGPR_32:{ *:[i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_BYTE_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1914,
      GIR_Done,
    // Label 308: @10897
    GIM_Try, /*On fail goto*//*Label 309*/ 10966, // Rule ID 1916 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_private>>  =>  (BUFFER_STORE_SHORT_OFFSET VGPR_32:{ *:[i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_SHORT_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1916,
      GIR_Done,
    // Label 309: @10966
    GIM_Try, /*On fail goto*//*Label 310*/ 11027, // Rule ID 1922 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORD_OFFSET VGPR_32:{ *:[i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORD_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1922,
      GIR_Done,
    // Label 310: @11027
    GIM_Try, /*On fail goto*//*Label 311*/ 11100, // Rule ID 1913 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_private>>  =>  (BUFFER_STORE_BYTE_OFFEN VGPR_32:{ *:[i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_BYTE_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1913,
      GIR_Done,
    // Label 311: @11100
    GIM_Try, /*On fail goto*//*Label 312*/ 11173, // Rule ID 1915 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_private>>  =>  (BUFFER_STORE_SHORT_OFFEN VGPR_32:{ *:[i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_SHORT_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1915,
      GIR_Done,
    // Label 312: @11173
    GIM_Try, /*On fail goto*//*Label 313*/ 11238, // Rule ID 1921 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st i32:{ *:[i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORD_OFFEN VGPR_32:{ *:[i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORD_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1921,
      GIR_Done,
    // Label 313: @11238
    GIM_Try, /*On fail goto*//*Label 314*/ 11302, // Rule ID 1442 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st i32:{ *:[i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_global>>  =>  (GLOBAL_STORE_BYTE ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_BYTE,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1442,
      GIR_Done,
    // Label 314: @11302
    GIM_Try, /*On fail goto*//*Label 315*/ 11366, // Rule ID 1444 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st i32:{ *:[i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_global>>  =>  (GLOBAL_STORE_SHORT ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_SHORT,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1444,
      GIR_Done,
    // Label 315: @11366
    GIM_Try, /*On fail goto*//*Label 316*/ 11422, // Rule ID 1446 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st i32:{ *:[i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_global>>  =>  (GLOBAL_STORE_DWORD ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_DWORD,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1446,
      GIR_Done,
    // Label 316: @11422
    GIM_Try, /*On fail goto*//*Label 317*/ 11487, // Rule ID 1376 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/1,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st i32:{ *:[i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8_flat>>  =>  (FLAT_STORE_BYTE ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_BYTE,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1376,
      GIR_Done,
    // Label 317: @11487
    GIM_Try, /*On fail goto*//*Label 318*/ 11552, // Rule ID 1377 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemorySizeLessThanLLT, /*MI*/0, /*MMO*/0, /*OpIdx*/0,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckMemorySizeEqualTo, /*MI*/0, /*MMO*/0, /*Size*/2,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st i32:{ *:[i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16_flat>>  =>  (FLAT_STORE_SHORT ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_SHORT,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1377,
      GIR_Done,
    // Label 318: @11552
    GIM_Try, /*On fail goto*//*Label 319*/ 11609, // Rule ID 1378 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st i32:{ *:[i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_flat>>  =>  (FLAT_STORE_DWORD ?:{ *:[i64] }:$vaddr, VGPR_32:{ *:[i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_DWORD,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1378,
      GIR_Done,
    // Label 319: @11609
    GIM_Reject,
    // Label 296: @11610
    GIM_Try, /*On fail goto*//*Label 320*/ 11671, // Rule ID 1924 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st v2i32:{ *:[v2i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX2_OFFSET VReg_64:{ *:[v2i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX2_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1924,
      GIR_Done,
    // Label 320: @11671
    GIM_Try, /*On fail goto*//*Label 321*/ 11736, // Rule ID 1923 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st v2i32:{ *:[v2i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX2_OFFEN VReg_64:{ *:[v2i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX2_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1923,
      GIR_Done,
    // Label 321: @11736
    GIM_Try, /*On fail goto*//*Label 322*/ 11792, // Rule ID 1447 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st v2i32:{ *:[v2i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_global>>  =>  (GLOBAL_STORE_DWORDX2 ?:{ *:[i64] }:$vaddr, VReg_64:{ *:[v2i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_DWORDX2,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1447,
      GIR_Done,
    // Label 322: @11792
    GIM_Try, /*On fail goto*//*Label 323*/ 11849, // Rule ID 1379 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st v2i32:{ *:[v2i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_flat>>  =>  (FLAT_STORE_DWORDX2 ?:{ *:[i64] }:$vaddr, VReg_64:{ *:[v2i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_DWORDX2,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1379,
      GIR_Done,
    // Label 323: @11849
    GIM_Reject,
    // Label 297: @11850
    GIM_Try, /*On fail goto*//*Label 324*/ 11911, // Rule ID 1926 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st v3i32:{ *:[v3i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX3_OFFSET VReg_96:{ *:[v3i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX3_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1926,
      GIR_Done,
    // Label 324: @11911
    GIM_Try, /*On fail goto*//*Label 325*/ 11976, // Rule ID 1925 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st v3i32:{ *:[v3i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX3_OFFEN VReg_96:{ *:[v3i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX3_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1925,
      GIR_Done,
    // Label 325: @11976
    GIM_Try, /*On fail goto*//*Label 326*/ 12032, // Rule ID 1448 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st v3i32:{ *:[v3i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_global>>  =>  (GLOBAL_STORE_DWORDX3 ?:{ *:[i64] }:$vaddr, VReg_96:{ *:[v3i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_DWORDX3,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1448,
      GIR_Done,
    // Label 326: @12032
    GIM_Try, /*On fail goto*//*Label 327*/ 12089, // Rule ID 1380 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st v3i32:{ *:[v3i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_flat>>  =>  (FLAT_STORE_DWORDX3 ?:{ *:[i64] }:$vaddr, VReg_96:{ *:[v3i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_DWORDX3,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1380,
      GIR_Done,
    // Label 327: @12089
    GIM_Reject,
    // Label 298: @12090
    GIM_Try, /*On fail goto*//*Label 328*/ 12151, // Rule ID 1928 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offset,
      // (st v4i32:{ *:[v4i32] }:$value, (MUBUFScratchOffset:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX4_OFFSET VReg_128:{ *:[v4i32] }:$value, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX4_OFFSET,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1928,
      GIR_Done,
    // Label 328: @12151
    GIM_Try, /*On fail goto*//*Label 329*/ 12216, // Rule ID 1927 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/1, /*AddrSpace*/5,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_mubuf_scratch_offen,
      // (st v4i32:{ *:[v4i32] }:$value, (MUBUFScratchOffen:{ *:[iPTR] } v4i32:{ *:[v4i32] }:$srsrc, i32:{ *:[i32] }:$vaddr, i32:{ *:[i32] }:$soffset, u16imm:{ *:[i16] }:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store_private>>  =>  (BUFFER_STORE_DWORDX4_OFFEN VReg_128:{ *:[v4i32] }:$value, ?:{ *:[i32] }:$vaddr, ?:{ *:[v4i32] }:$srsrc, ?:{ *:[i32] }:$soffset, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] }, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_STORE_DWORDX4_OFFEN,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // value
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // vaddr
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // srsrc
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // soffset
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1927,
      GIR_Done,
    // Label 329: @12216
    GIM_Try, /*On fail goto*//*Label 330*/ 12272, // Rule ID 1449 //
      GIM_CheckFeatures, GIFBS_HasFlatGlobalInsts_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/2, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset_signed,
      // (st v4i32:{ *:[v4i32] }:$data, (FLATOffsetSigned:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_global>>  =>  (GLOBAL_STORE_DWORDX4 ?:{ *:[i64] }:$vaddr, VReg_128:{ *:[v4i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GLOBAL_STORE_DWORDX4,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1449,
      GIR_Done,
    // Label 330: @12272
    GIM_Try, /*On fail goto*//*Label 331*/ 12329, // Rule ID 1381 //
      GIM_CheckFeatures, GIFBS_HasFlatAddressSpace_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckMemoryAddressSpace, /*MI*/0, /*MMO*/0, /*NumAddrSpace*/3, /*AddrSpace*/0, /*AddrSpace*/1, /*AddrSpace*/4,
      GIM_CheckAtomicOrdering, /*MI*/0, /*Order*/(int64_t)AtomicOrdering::NotAtomic,
      GIM_CheckPointerToAny, /*MI*/0, /*Op*/1, /*SizeInBits*/0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_flat_offset,
      // (st v4i32:{ *:[v4i32] }:$data, (FLATOffset:{ *:[iPTR] } i64:{ *:[i64] }:$vaddr, i16:{ *:[i16] }:$offset, i1:{ *:[i1] }:$slc))<<P:Predicate_unindexedstore>><<P:Predicate_store_flat>>  =>  (FLAT_STORE_DWORDX4 ?:{ *:[i64] }:$vaddr, VReg_128:{ *:[v4i32] }:$data, ?:{ *:[i16] }:$offset, 0:{ *:[i1] }, 0:{ *:[i1] }, ?:{ *:[i1] }:$slc)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::FLAT_STORE_DWORDX4,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // vaddr
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // data
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // offset
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // slc
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1381,
      GIR_Done,
    // Label 331: @12329
    GIM_Reject,
    // Label 299: @12330
    GIM_Reject,
    // Label 11: @12331
    GIM_Try, /*On fail goto*//*Label 332*/ 12375, // Rule ID 674 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/0, // MIs[1]
      GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
      // MIs[1] Operand 1
      // No operand predicates
      GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/1, // MIs[2]
      GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
      // MIs[2] Operand 1
      // No operand predicates
      GIM_CheckIsSafeToFold, /*InsnID*/1,
      GIM_CheckIsSafeToFold, /*InsnID*/2,
      // (atomic_fence (imm:{ *:[i32] }):$ordering, (imm:{ *:[i32] }):$scope)  =>  (ATOMIC_FENCE (imm:{ *:[i32] }):$ordering, (imm:{ *:[i32] }):$scope)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::ATOMIC_FENCE,
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // ordering
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // scope
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 674,
      GIR_Done,
    // Label 332: @12375
    GIM_Reject,
    // Label 12: @12376
    GIM_Try, /*On fail goto*//*Label 333*/ 12466,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 334*/ 12409, // Rule ID 9 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_getpc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1067:{ *:[iPTR] })  =>  (S_GETPC_B64:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_GETPC_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 9,
        GIR_Done,
      // Label 334: @12409
      GIM_Try, /*On fail goto*//*Label 335*/ 12437, // Rule ID 679 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_groupstaticsize,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 524:{ *:[iPTR] })  =>  (GET_GROUPSTATICSIZE:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::GET_GROUPSTATICSIZE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 679,
        GIR_Done,
      // Label 335: @12437
      GIM_Try, /*On fail goto*//*Label 336*/ 12465, // Rule ID 684 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_ps_live,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s1,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_1RegClassID,
        // (intrinsic_wo_chain:{ *:[i1] } 1032:{ *:[iPTR] })  =>  (SI_PS_LIVE:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_PS_LIVE,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // dst
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 684,
        GIR_Done,
      // Label 336: @12465
      GIM_Reject,
    // Label 333: @12466
    GIM_Try, /*On fail goto*//*Label 337*/ 12865,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/3,
      GIM_Try, /*On fail goto*//*Label 338*/ 12507, // Rule ID 329 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_readfirstlane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1054:{ *:[iPTR] }, i32:{ *:[i32] }:$src0)  =>  (V_READFIRSTLANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_READFIRSTLANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 329,
        GIR_Done,
      // Label 338: @12507
      GIM_Try, /*On fail goto*//*Label 339*/ 12558, // Rule ID 364 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i32] } 521:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I32_F64_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 364,
        GIR_Done,
      // Label 339: @12558
      GIM_Try, /*On fail goto*//*Label 340*/ 12609, // Rule ID 365 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 522:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F64_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 365,
        GIR_Done,
      // Label 340: @12609
      GIM_Try, /*On fail goto*//*Label 341*/ 12660, // Rule ID 367 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i32] } 521:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I32_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 367,
        GIR_Done,
      // Label 341: @12660
      GIM_Try, /*On fail goto*//*Label 342*/ 12711, // Rule ID 368 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f32] } 522:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 368,
        GIR_Done,
      // Label 342: @12711
      GIM_Try, /*On fail goto*//*Label 343*/ 12762, // Rule ID 369 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_log_clamp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f32] } 999:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_CLAMP_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_CLAMP_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 369,
        GIR_Done,
      // Label 343: @12762
      GIM_Try, /*On fail goto*//*Label 344*/ 12813, // Rule ID 389 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_mant,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f16] } 522:{ *:[iPTR] }, (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_MANT_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_MANT_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 389,
        GIR_Done,
      // Label 344: @12813
      GIM_Try, /*On fail goto*//*Label 345*/ 12864, // Rule ID 390 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_frexp_exp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[i16] } 521:{ *:[iPTR] }, (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FREXP_EXP_I16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FREXP_EXP_I16_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 390,
        GIR_Done,
      // Label 345: @12864
      GIM_Reject,
    // Label 337: @12865
    GIM_Try, /*On fail goto*//*Label 346*/ 13647,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/4,
      GIM_Try, /*On fail goto*//*Label 347*/ 12940, // Rule ID 982 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cvt_pkrtz,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[v2f16] } 488:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_CVT_PKRTZ_F16_F32_e64:{ *:[v2f16] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_PKRTZ_F16_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 982,
        GIR_Done,
      // Label 347: @12940
      GIM_Try, /*On fail goto*//*Label 348*/ 13010, // Rule ID 983 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f64] } 150:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MAX_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 983,
        GIR_Done,
      // Label 348: @13010
      GIM_Try, /*On fail goto*//*Label 349*/ 13080, // Rule ID 986 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f64] } 158:{ *:[iPTR] }, (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MIN_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 986,
        GIR_Done,
      // Label 349: @13080
      GIM_Try, /*On fail goto*//*Label 350*/ 13150, // Rule ID 2528 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 150:{ *:[iPTR] }, (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods))  =>  (V_MAX_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2528,
        GIR_Done,
      // Label 350: @13150
      GIM_Try, /*On fail goto*//*Label 351*/ 13220, // Rule ID 2529 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods0,
        // (intrinsic_wo_chain:{ *:[f64] } 158:{ *:[iPTR] }, (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omods))  =>  (V_MIN_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, ?:{ *:[i1] }:$clamp, ?:{ *:[i32] }:$omods)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omods
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2529,
        GIR_Done,
      // Label 351: @13220
      GIM_Try, /*On fail goto*//*Label 352*/ 13273, // Rule ID 978 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 150:{ *:[iPTR] }, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0), VGPR_32:{ *:[f32] }:$src1)  =>  (V_MAX_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 978,
        GIR_Done,
      // Label 352: @13273
      GIM_Try, /*On fail goto*//*Label 353*/ 13326, // Rule ID 984 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/3, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 158:{ *:[iPTR] }, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0), VGPR_32:{ *:[f32] }:$src1)  =>  (V_MIN_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 984,
        GIR_Done,
      // Label 353: @13326
      GIM_Try, /*On fail goto*//*Label 354*/ 13379, // Rule ID 979 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::maxnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 150:{ *:[iPTR] }, VGPR_32:{ *:[f32] }:$src1, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0))  =>  (V_MAX_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 979,
        GIR_Done,
      // Label 354: @13379
      GIM_Try, /*On fail goto*//*Label 355*/ 13432, // Rule ID 985 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::minnum,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/0, GICP_gi_vsrc0,
        // (intrinsic_wo_chain:{ *:[f32] } 158:{ *:[iPTR] }, VGPR_32:{ *:[f32] }:$src1, (sd_vsrc0:{ *:[f32] } f32:{ *:[f32] }:$src0))  =>  (V_MIN_F32_e32:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MIN_F32_e32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 985,
        GIR_Done,
      // Label 355: @13432
      GIM_Try, /*On fail goto*//*Label 356*/ 13474, // Rule ID 429 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_readlane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1055:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_READLANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_READLANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 429,
        GIR_Done,
      // Label 356: @13474
      GIM_Try, /*On fail goto*//*Label 357*/ 13518, // Rule ID 675 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_set_inactive,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1083:{ *:[iPTR] }, i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$inactive)  =>  (V_SET_INACTIVE_B32:{ *:[i32] } i32:{ *:[i32] }:$src, i32:{ *:[i32] }:$inactive)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SET_INACTIVE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // inactive
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 675,
        GIR_Done,
      // Label 357: @13518
      GIM_Try, /*On fail goto*//*Label 358*/ 13562, // Rule ID 676 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_set_inactive,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1083:{ *:[iPTR] }, i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$inactive)  =>  (V_SET_INACTIVE_B64:{ *:[i64] } i64:{ *:[i64] }:$src, i64:{ *:[i64] }:$inactive)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SET_INACTIVE_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // inactive
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 676,
        GIR_Done,
      // Label 358: @13562
      GIM_Try, /*On fail goto*//*Label 359*/ 13604, // Rule ID 431 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mbcnt_lo,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1002:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MBCNT_LO_U32_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MBCNT_LO_U32_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 431,
        GIR_Done,
      // Label 359: @13604
      GIM_Try, /*On fail goto*//*Label 360*/ 13646, // Rule ID 432 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mbcnt_hi,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1001:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MBCNT_HI_U32_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MBCNT_HI_U32_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 432,
        GIR_Done,
      // Label 360: @13646
      GIM_Reject,
    // Label 346: @13647
    GIM_Try, /*On fail goto*//*Label 361*/ 14659,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/5,
      GIM_Try, /*On fail goto*//*Label 362*/ 13702, // Rule ID 430 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_writelane,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1122:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$vdst_in)  =>  (V_WRITELANE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$vdst_in)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_WRITELANE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // vdst_in
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 430,
        GIR_Done,
      // Label 362: @13702
      GIM_Try, /*On fail goto*//*Label 363*/ 13757, // Rule ID 1278 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1078:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1278,
        GIR_Done,
      // Label 363: @13757
      GIM_Try, /*On fail goto*//*Label 364*/ 13812, // Rule ID 1279 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_hi_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1076:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_HI_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_HI_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1279,
        GIR_Done,
      // Label 364: @13812
      GIM_Try, /*On fail goto*//*Label 365*/ 13867, // Rule ID 1280 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_sad_u16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1077:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_SAD_U16:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SAD_U16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1280,
        GIR_Done,
      // Label 365: @13867
      GIM_Try, /*On fail goto*//*Label 366*/ 13922, // Rule ID 1281 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_msad_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 1027:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_MSAD_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MSAD_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1281,
        GIR_Done,
      // Label 366: @13922
      GIM_Try, /*On fail goto*//*Label 367*/ 13977, // Rule ID 1282 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mqsad_pk_u16_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1025:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2)  =>  (V_MQSAD_PK_U16_U8:{ *:[i64] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MQSAD_PK_U16_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1282,
        GIR_Done,
      // Label 367: @13977
      GIM_Try, /*On fail goto*//*Label 368*/ 14032, // Rule ID 1283 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_qsad_pk_u16_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (intrinsic_wo_chain:{ *:[i64] } 1033:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2)  =>  (V_QSAD_PK_U16_U8:{ *:[i64] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, i64:{ *:[i64] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_QSAD_PK_U16_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1283,
        GIR_Done,
      // Label 368: @14032
      GIM_Try, /*On fail goto*//*Label 369*/ 14087, // Rule ID 1284 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mqsad_u32_u8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_128RegClassID,
        // (intrinsic_wo_chain:{ *:[v4i32] } 1026:{ *:[iPTR] }, i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2)  =>  (V_MQSAD_U32_U8:{ *:[v4i32] } i64:{ *:[i64] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, 0:{ *:[i1] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MQSAD_U32_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 1284,
        GIR_Done,
      // Label 369: @14087
      GIM_Try, /*On fail goto*//*Label 370*/ 14172, // Rule ID 462 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubeid,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 479:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBEID_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBEID_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 462,
        GIR_Done,
      // Label 370: @14172
      GIM_Try, /*On fail goto*//*Label 371*/ 14257, // Rule ID 463 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubesc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 481:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBESC_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBESC_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 463,
        GIR_Done,
      // Label 371: @14257
      GIM_Try, /*On fail goto*//*Label 372*/ 14342, // Rule ID 464 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubetc,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 482:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBETC_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBETC_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 464,
        GIR_Done,
      // Label 372: @14342
      GIM_Try, /*On fail goto*//*Label 373*/ 14427, // Rule ID 465 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cubema,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[f32] } 480:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CUBEMA_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CUBEMA_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 465,
        GIR_Done,
      // Label 373: @14427
      GIM_Try, /*On fail goto*//*Label 374*/ 14508, // Rule ID 480 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_cvt_pk_u8_f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/1, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/4, /*Renderer*/2, GICP_gi_vop3mods,
        // (intrinsic_wo_chain:{ *:[i32] } 485:{ *:[iPTR] }, (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp), (VOP3Mods:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[i32] } i32:{ *:[i32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_CVT_PK_U8_F32:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, i32:{ *:[i32] }:$src2, i1:{ *:[i1] }:$clamp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_PK_U8_F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 480,
        GIR_Done,
      // Label 374: @14508
      GIM_Try, /*On fail goto*//*Label 375*/ 14558, // Rule ID 451 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_lerp,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 998:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_LERP_U8:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LERP_U8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 451,
        GIR_Done,
      // Label 375: @14558
      GIM_Try, /*On fail goto*//*Label 376*/ 14608, // Rule ID 469 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_alignbit,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 454:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_ALIGNBIT_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ALIGNBIT_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 469,
        GIR_Done,
      // Label 376: @14608
      GIM_Try, /*On fail goto*//*Label 377*/ 14658, // Rule ID 470 //
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_alignbyte,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (intrinsic_wo_chain:{ *:[i32] } 455:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)  =>  (V_ALIGNBYTE_B32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src2)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ALIGNBYTE_B32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 470,
        GIR_Done,
      // Label 377: @14658
      GIM_Reject,
    // Label 361: @14659
    GIM_Try, /*On fail goto*//*Label 378*/ 16665,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/8,
      GIM_Try, /*On fail goto*//*Label 379*/ 14764, // Rule ID 526 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_4x4x1f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1015:{ *:[iPTR] }, f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_4X4X1F32:{ *:[v4f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_4X4X1F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 526,
        GIR_Done,
      // Label 379: @14764
      GIM_Try, /*On fail goto*//*Label 380*/ 14864, // Rule ID 527 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_4x4x4f16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1017:{ *:[iPTR] }, v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_4X4X4F16:{ *:[v4f32] } v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_4X4X4F16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 527,
        GIR_Done,
      // Label 380: @14864
      GIM_Try, /*On fail goto*//*Label 381*/ 14964, // Rule ID 528 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_i32_4x4x4i8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 1022:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_I32_4X4X4I8:{ *:[v4i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_I32_4X4X4I8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 528,
        GIR_Done,
      // Label 381: @14964
      GIM_Try, /*On fail goto*//*Label 382*/ 15064, // Rule ID 529 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_4x4x2bf16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1016:{ *:[iPTR] }, v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_4X4X2BF16:{ *:[v4f32] } v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_4X4X2BF16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 529,
        GIR_Done,
      // Label 382: @15064
      GIM_Try, /*On fail goto*//*Label 383*/ 15164, // Rule ID 530 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x1f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1004:{ *:[iPTR] }, f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X1F32:{ *:[v16f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X1F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 530,
        GIR_Done,
      // Label 383: @15164
      GIM_Try, /*On fail goto*//*Label 384*/ 15264, // Rule ID 531 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x4f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1007:{ *:[iPTR] }, f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X4F32:{ *:[v4f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X4F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 531,
        GIR_Done,
      // Label 384: @15264
      GIM_Try, /*On fail goto*//*Label 385*/ 15364, // Rule ID 532 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x4f16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1006:{ *:[iPTR] }, v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X4F16:{ *:[v16f32] } v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X4F16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 532,
        GIR_Done,
      // Label 385: @15364
      GIM_Try, /*On fail goto*//*Label 386*/ 15464, // Rule ID 533 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x16f16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1003:{ *:[iPTR] }, v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X16F16:{ *:[v4f32] } v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X16F16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 533,
        GIR_Done,
      // Label 386: @15464
      GIM_Try, /*On fail goto*//*Label 387*/ 15564, // Rule ID 534 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_i32_16x16x4i8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16i32] } 1019:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v16i32:{ *:[v16i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_I32_16X16X4I8:{ *:[v16i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v16i32:{ *:[v16i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_I32_16X16X4I8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 534,
        GIR_Done,
      // Label 387: @15564
      GIM_Try, /*On fail goto*//*Label 388*/ 15664, // Rule ID 535 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_i32_16x16x16i8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4i32] } 1018:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_I32_16X16X16I8:{ *:[v4i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v4i32:{ *:[v4i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_I32_16X16X16I8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 535,
        GIR_Done,
      // Label 388: @15664
      GIM_Try, /*On fail goto*//*Label 389*/ 15764, // Rule ID 536 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x2bf16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1005:{ *:[iPTR] }, v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X2BF16:{ *:[v16f32] } v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X2BF16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 536,
        GIR_Done,
      // Label 389: @15764
      GIM_Try, /*On fail goto*//*Label 390*/ 15864, // Rule ID 537 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_16x16x8bf16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v4s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_128RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v4f32] } 1008:{ *:[iPTR] }, v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_16X16X8BF16:{ *:[v4f32] } v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v4f32:{ *:[v4f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_16X16X8BF16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 537,
        GIR_Done,
      // Label 390: @15864
      GIM_Try, /*On fail goto*//*Label 391*/ 15964, // Rule ID 538 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x1f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_1024RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v32f32] } 1009:{ *:[iPTR] }, f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X1F32:{ *:[v32f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X1F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 538,
        GIR_Done,
      // Label 391: @15964
      GIM_Try, /*On fail goto*//*Label 392*/ 16064, // Rule ID 539 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x2f32,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1011:{ *:[iPTR] }, f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X2F32:{ *:[v16f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X2F32,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 539,
        GIR_Done,
      // Label 392: @16064
      GIM_Try, /*On fail goto*//*Label 393*/ 16164, // Rule ID 540 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x4f16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_1024RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v32f32] } 1013:{ *:[iPTR] }, v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X4F16:{ *:[v32f32] } v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X4F16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 540,
        GIR_Done,
      // Label 393: @16164
      GIM_Try, /*On fail goto*//*Label 394*/ 16264, // Rule ID 541 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x8f16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v4s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1014:{ *:[iPTR] }, v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X8F16:{ *:[v16f32] } v4f16:{ *:[v4f16] }:$src0, v4f16:{ *:[v4f16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X8F16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 541,
        GIR_Done,
      // Label 394: @16264
      GIM_Try, /*On fail goto*//*Label 395*/ 16364, // Rule ID 542 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_i32_32x32x4i8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_1024RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v32i32] } 1020:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v32i32:{ *:[v32i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_I32_32X32X4I8:{ *:[v32i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v32i32:{ *:[v32i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_I32_32X32X4I8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 542,
        GIR_Done,
      // Label 395: @16364
      GIM_Try, /*On fail goto*//*Label 396*/ 16464, // Rule ID 543 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_i32_32x32x8i8,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16i32] } 1021:{ *:[iPTR] }, i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v16i32:{ *:[v16i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_I32_32X32X8I8:{ *:[v16i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1, v16i32:{ *:[v16i32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_I32_32X32X8I8,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 543,
        GIR_Done,
      // Label 396: @16464
      GIM_Try, /*On fail goto*//*Label 397*/ 16564, // Rule ID 544 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x2bf16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v32s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_1024RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v32f32] } 1010:{ *:[iPTR] }, v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X2BF16:{ *:[v32f32] } v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v32f32:{ *:[v32f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X2BF16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 544,
        GIR_Done,
      // Label 397: @16564
      GIM_Try, /*On fail goto*//*Label 398*/ 16664, // Rule ID 545 //
        GIM_CheckFeatures, GIFBS_HasMAIInsts,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_mfma_f32_32x32x4bf16,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_v2s16,
        GIM_CheckType, /*MI*/0, /*Op*/4, /*Type*/GILLT_v16s32,
        GIM_CheckType, /*MI*/0, /*Op*/5, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/6, /*Type*/GILLT_s32,
        GIM_CheckType, /*MI*/0, /*Op*/7, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::AReg_512RegClassID,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/5, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/2, /*MI*/0, /*OpIdx*/6, // MIs[2]
        GIM_CheckOpcode, /*MI*/2, TargetOpcode::G_CONSTANT,
        // MIs[2] Operand 1
        // No operand predicates
        GIM_RecordInsn, /*DefineMI*/3, /*MI*/0, /*OpIdx*/7, // MIs[3]
        GIM_CheckOpcode, /*MI*/3, TargetOpcode::G_CONSTANT,
        // MIs[3] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckIsSafeToFold, /*InsnID*/2,
        GIM_CheckIsSafeToFold, /*InsnID*/3,
        // (intrinsic_wo_chain:{ *:[v16f32] } 1012:{ *:[iPTR] }, v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)  =>  (V_MFMA_F32_32X32X4BF16:{ *:[v16f32] } v2i16:{ *:[v2i16] }:$src0, v2i16:{ *:[v2i16] }:$src1, v16f32:{ *:[v16f32] }:$src2, (imm:{ *:[i32] }):$cbsz, (imm:{ *:[i32] }):$abid, (imm:{ *:[i32] }):$blgp)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MFMA_F32_32X32X4BF16,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/3, // src1
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/4, // src2
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // cbsz
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/2, // abid
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/3, // blgp
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 545,
        GIR_Done,
      // Label 398: @16664
      GIM_Reject,
    // Label 378: @16665
    GIM_Reject,
    // Label 13: @16666
    GIM_Try, /*On fail goto*//*Label 399*/ 16686, // Rule ID 60 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_barrier,
      // (intrinsic_void 1059:{ *:[iPTR] })  =>  (S_BARRIER)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_BARRIER,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 60,
      GIR_Done,
    // Label 399: @16686
    GIM_Try, /*On fail goto*//*Label 400*/ 16706, // Rule ID 547 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_inv,
      // (intrinsic_void 1061:{ *:[iPTR] })  =>  (S_DCACHE_INV)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_INV,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 547,
      GIR_Done,
    // Label 400: @16706
    GIM_Try, /*On fail goto*//*Label 401*/ 16726, // Rule ID 548 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX7GFX8GFX9,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_inv_vol,
      // (intrinsic_void 1062:{ *:[iPTR] })  =>  (S_DCACHE_INV_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_INV_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 548,
      GIR_Done,
    // Label 401: @16726
    GIM_Try, /*On fail goto*//*Label 402*/ 16746, // Rule ID 549 //
      GIM_CheckFeatures, GIFBS_HasScalarStores_TruePredicate_TruePredicate_isGFX8Plus,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_wb,
      // (intrinsic_void 1063:{ *:[iPTR] })  =>  (S_DCACHE_WB)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_WB,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 549,
      GIR_Done,
    // Label 402: @16746
    GIM_Try, /*On fail goto*//*Label 403*/ 16766, // Rule ID 550 //
      GIM_CheckFeatures, GIFBS_HasScalarStores_TruePredicate_TruePredicate_isGFX8Plus,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_dcache_wb_vol,
      // (intrinsic_void 1064:{ *:[iPTR] })  =>  (S_DCACHE_WB_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DCACHE_WB_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 550,
      GIR_Done,
    // Label 403: @16766
    GIM_Try, /*On fail goto*//*Label 404*/ 16786, // Rule ID 665 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX6,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1_sc,
      // (intrinsic_void 475:{ *:[iPTR] })  =>  (BUFFER_WBINVL1_SC)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1_SC,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 665,
      GIR_Done,
    // Label 404: @16786
    GIM_Try, /*On fail goto*//*Label 405*/ 16806, // Rule ID 666 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1,
      // (intrinsic_void 474:{ *:[iPTR] })  =>  (BUFFER_WBINVL1)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 666,
      GIR_Done,
    // Label 405: @16806
    GIM_Try, /*On fail goto*//*Label 406*/ 16826, // Rule ID 667 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX7Plus,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_buffer_wbinvl1_vol,
      // (intrinsic_void 476:{ *:[iPTR] })  =>  (BUFFER_WBINVL1_VOL)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::BUFFER_WBINVL1_VOL,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 667,
      GIR_Done,
    // Label 406: @16826
    GIM_Try, /*On fail goto*//*Label 407*/ 16846, // Rule ID 680 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_wave_barrier,
      // (intrinsic_void 1112:{ *:[iPTR] })  =>  (WAVE_BARRIER)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::WAVE_BARRIER,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 680,
      GIR_Done,
    // Label 407: @16846
    GIM_Try, /*On fail goto*//*Label 408*/ 16866, // Rule ID 685 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_unreachable,
      // (intrinsic_void 1110:{ *:[iPTR] })  =>  (SI_MASKED_UNREACHABLE)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::SI_MASKED_UNREACHABLE,
      GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 685,
      GIR_Done,
    // Label 408: @16866
    GIM_Try, /*On fail goto*//*Label 409*/ 17128,
      GIM_CheckNumOperands, /*MI*/0, /*Expected*/2,
      GIM_Try, /*On fail goto*//*Label 410*/ 16911, // Rule ID 61 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_waitcnt,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_UIMM16bit,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 1075:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_UIMM16bit>>:$simm16)  =>  (S_WAITCNT (imm:{ *:[i32] }):$simm16)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_WAITCNT,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // simm16
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 61,
        GIR_Done,
      // Label 410: @16911
      GIM_Try, /*On fail goto*//*Label 411*/ 16951, // Rule ID 62 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_sleep,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_SIMM16bit,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 1074:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_SIMM16bit>>:$simm16)  =>  (S_SLEEP (imm:{ *:[i32] }):$simm16)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_SLEEP,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // simm16
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 62,
        GIR_Done,
      // Label 411: @16951
      GIM_Try, /*On fail goto*//*Label 412*/ 16991, // Rule ID 65 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_incperflevel,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_SIMM16bit,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 1069:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_SIMM16bit>>:$simm16)  =>  (S_INCPERFLEVEL (imm:{ *:[i32] }):$simm16)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_INCPERFLEVEL,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // simm16
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 65,
        GIR_Done,
      // Label 412: @16991
      GIM_Try, /*On fail goto*//*Label 413*/ 17031, // Rule ID 66 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/0, Intrinsic::amdgcn_s_decperflevel,
        GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_CONSTANT,
        GIM_CheckI64ImmPredicate, /*MI*/1, /*Predicate*/GIPFP_I64_Predicate_SIMM16bit,
        // MIs[1] Operand 1
        // No operand predicates
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        // (intrinsic_void 1065:{ *:[iPTR] }, (imm:{ *:[i32] })<<P:Predicate_SIMM16bit>>:$simm16)  =>  (S_DECPERFLEVEL (imm:{ *:[i32] }):$simm16)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_DECPERFLEVEL,
        GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/1, // simm16
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, 1, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 66,
        GIR_Done,
      // Label 413: @17031
      GIM_Try, /*On fail goto*//*Label 414*/ 17063, // Rule ID 546 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_memtime,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 1071:{ *:[iPTR] })  =>  (S_MEMTIME:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MEMTIME,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 546,
        GIR_Done,
      // Label 414: @17063
      GIM_Try, /*On fail goto*//*Label 415*/ 17095, // Rule ID 551 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX8Plus,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_memrealtime,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s64,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64_XEXECRegClassID,
        // (intrinsic_w_chain:{ *:[i64] } 1070:{ *:[iPTR] })  =>  (S_MEMREALTIME:{ *:[i64] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MEMREALTIME,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 551,
        GIR_Done,
      // Label 415: @17095
      GIM_Try, /*On fail goto*//*Label 416*/ 17127, // Rule ID 552 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX10Plus,
        GIM_CheckIntrinsicID, /*MI*/0, /*Op*/1, Intrinsic::amdgcn_s_get_waveid_in_workgroup,
        GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32_XM0_XEXECRegClassID,
        // (intrinsic_w_chain:{ *:[i32] } 1066:{ *:[iPTR] })  =>  (S_GET_WAVEID_IN_WORKGROUP:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_GET_WAVEID_IN_WORKGROUP,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
        GIR_MergeMemOperands, /*InsnID*/0, /*MergeInsnID's*/0, GIU_MergeMemOperands_EndOfList,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 552,
        GIR_Done,
      // Label 416: @17127
      GIM_Reject,
    // Label 409: @17128
    GIM_Reject,
    // Label 14: @17129
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 419*/ 17185,
    /*GILLT_s16*//*Label 417*/ 17137,
    /*GILLT_s32*//*Label 418*/ 17161,
    // Label 417: @17137
    GIM_Try, /*On fail goto*//*Label 420*/ 17160, // Rule ID 1027 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i16] }):$imm  =>  (S_MOV_B32:{ *:[i16] } (imm:{ *:[i16] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MOV_B32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 1027,
      GIR_Done,
    // Label 420: @17160
    GIM_Reject,
    // Label 418: @17161
    GIM_Try, /*On fail goto*//*Label 421*/ 17184, // Rule ID 2182 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // MIs[0] Operand 1
      // No operand predicates
      // (imm:{ *:[i32] }):$imm  =>  (S_MOV_B32:{ *:[i32] } (imm:{ *:[i32] }):$imm)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::S_MOV_B32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_CopyConstantAsSImm, /*NewInsnID*/0, /*OldInsnID*/0, // imm
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2182,
      GIR_Done,
    // Label 421: @17184
    GIM_Reject,
    // Label 419: @17185
    GIM_Reject,
    // Label 15: @17186
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/5, 7, /*)*//*default:*//*Label 424*/ 17322,
    /*GILLT_s32*//*Label 422*/ 17194,
    /*GILLT_s64*//*Label 423*/ 17258,
    // Label 422: @17194
    GIM_Try, /*On fail goto*//*Label 425*/ 17257,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 426*/ 17230, // Rule ID 35 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (shl:{ *:[i32] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_LSHL_B32:{ *:[i32] }:{ *:[i1] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_LSHL_B32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 35,
        GIR_Done,
      // Label 426: @17230
      GIM_Try, /*On fail goto*//*Label 427*/ 17256, // Rule ID 422 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (shl:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_LSHLREV_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LSHLREV_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 422,
        GIR_Done,
      // Label 427: @17256
      GIM_Reject,
    // Label 425: @17257
    GIM_Reject,
    // Label 423: @17258
    GIM_Try, /*On fail goto*//*Label 428*/ 17321,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 429*/ 17294, // Rule ID 36 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (shl:{ *:[i64] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_LSHL_B64:{ *:[i64] }:{ *:[i1] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_LSHL_B64,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 36,
        GIR_Done,
      // Label 429: @17294
      GIM_Try, /*On fail goto*//*Label 430*/ 17320, // Rule ID 488 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (shl:{ *:[i64] } i64:{ *:[i64] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_LSHLREV_B64:{ *:[i64] } i32:{ *:[i32] }:$src0, i64:{ *:[i64] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LSHLREV_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 488,
        GIR_Done,
      // Label 430: @17320
      GIM_Reject,
    // Label 428: @17321
    GIM_Reject,
    // Label 424: @17322
    GIM_Reject,
    // Label 16: @17323
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/5, 7, /*)*//*default:*//*Label 433*/ 17459,
    /*GILLT_s32*//*Label 431*/ 17331,
    /*GILLT_s64*//*Label 432*/ 17395,
    // Label 431: @17331
    GIM_Try, /*On fail goto*//*Label 434*/ 17394,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 435*/ 17367, // Rule ID 37 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (srl:{ *:[i32] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_LSHR_B32:{ *:[i32] }:{ *:[i1] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_LSHR_B32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 37,
        GIR_Done,
      // Label 435: @17367
      GIM_Try, /*On fail goto*//*Label 436*/ 17393, // Rule ID 420 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (srl:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_LSHRREV_B32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LSHRREV_B32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 420,
        GIR_Done,
      // Label 436: @17393
      GIM_Reject,
    // Label 434: @17394
    GIM_Reject,
    // Label 432: @17395
    GIM_Try, /*On fail goto*//*Label 437*/ 17458,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 438*/ 17431, // Rule ID 38 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (srl:{ *:[i64] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_LSHR_B64:{ *:[i64] }:{ *:[i1] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_LSHR_B64,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 38,
        GIR_Done,
      // Label 438: @17431
      GIM_Try, /*On fail goto*//*Label 439*/ 17457, // Rule ID 489 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (srl:{ *:[i64] } i64:{ *:[i64] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_LSHRREV_B64:{ *:[i64] } i32:{ *:[i32] }:$src0, i64:{ *:[i64] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LSHRREV_B64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 489,
        GIR_Done,
      // Label 439: @17457
      GIM_Reject,
    // Label 437: @17458
    GIM_Reject,
    // Label 433: @17459
    GIM_Reject,
    // Label 17: @17460
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/5, 7, /*)*//*default:*//*Label 442*/ 17596,
    /*GILLT_s32*//*Label 440*/ 17468,
    /*GILLT_s64*//*Label 441*/ 17532,
    // Label 440: @17468
    GIM_Try, /*On fail goto*//*Label 443*/ 17531,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 444*/ 17504, // Rule ID 39 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_32RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (sra:{ *:[i32] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_ASHR_I32:{ *:[i32] }:{ *:[i1] } SSrc_b32:{ *:[i32] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_ASHR_I32,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 39,
        GIR_Done,
      // Label 444: @17504
      GIM_Try, /*On fail goto*//*Label 445*/ 17530, // Rule ID 421 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
        // (sra:{ *:[i32] } i32:{ *:[i32] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_ASHRREV_I32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ASHRREV_I32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 421,
        GIR_Done,
      // Label 445: @17530
      GIM_Reject,
    // Label 443: @17531
    GIM_Reject,
    // Label 441: @17532
    GIM_Try, /*On fail goto*//*Label 446*/ 17595,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_Try, /*On fail goto*//*Label 447*/ 17568, // Rule ID 40 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/1, /*RC*/AMDGPU::SReg_64RegClassID,
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/2, /*RC*/AMDGPU::SReg_32RegClassID,
        // (sra:{ *:[i64] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)  =>  (S_ASHR_I64:{ *:[i64] }:{ *:[i1] } SSrc_b64:{ *:[i64] }:$src0, SSrc_b32:{ *:[i32] }:$src1)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_ASHR_I64,
        GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 40,
        GIR_Done,
      // Label 447: @17568
      GIM_Try, /*On fail goto*//*Label 448*/ 17594, // Rule ID 490 //
        GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
        // (sra:{ *:[i64] } i64:{ *:[i64] }:$src1, i32:{ *:[i32] }:$src0)  =>  (V_ASHRREV_I64:{ *:[i64] } i32:{ *:[i32] }:$src0, i64:{ *:[i64] }:$src1)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ASHRREV_I64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/2, // src0
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/1, // src1
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 490,
        GIR_Done,
      // Label 448: @17594
      GIM_Reject,
    // Label 446: @17595
    GIM_Reject,
    // Label 442: @17596
    GIM_Reject,
    // Label 18: @17597
    GIM_Try, /*On fail goto*//*Label 449*/ 17625, // Rule ID 460 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (mulhu:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MUL_HI_U32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MUL_HI_U32,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 460,
      GIR_Done,
    // Label 449: @17625
    GIM_Reject,
    // Label 19: @17626
    GIM_Try, /*On fail goto*//*Label 450*/ 17654, // Rule ID 461 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (mulhs:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MUL_HI_I32:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MUL_HI_I32,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 461,
      GIR_Done,
    // Label 450: @17654
    GIM_Reject,
    // Label 20: @17655
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 454*/ 18000,
    /*GILLT_s16*//*Label 451*/ 17664,
    /*GILLT_s32*//*Label 452*/ 17776,
    /*GILLT_s64*//*Label 453*/ 17888,
    // Label 451: @17664
    GIM_Try, /*On fail goto*//*Label 455*/ 17775,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 456*/ 17726, // Rule ID 442 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 442,
        GIR_Done,
      // Label 456: @17726
      GIM_Try, /*On fail goto*//*Label 457*/ 17774, // Rule ID 2503 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2503,
        GIR_Done,
      // Label 457: @17774
      GIM_Reject,
    // Label 455: @17775
    GIM_Reject,
    // Label 452: @17776
    GIM_Try, /*On fail goto*//*Label 458*/ 17887,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 459*/ 17838, // Rule ID 396 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 396,
        GIR_Done,
      // Label 459: @17838
      GIM_Try, /*On fail goto*//*Label 460*/ 17886, // Rule ID 2496 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2496,
        GIR_Done,
      // Label 460: @17886
      GIM_Reject,
    // Label 458: @17887
    GIM_Reject,
    // Label 453: @17888
    GIM_Try, /*On fail goto*//*Label 461*/ 17999,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 462*/ 17950, // Rule ID 453 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fadd:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_ADD_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 453,
        GIR_Done,
      // Label 462: @17950
      GIM_Try, /*On fail goto*//*Label 463*/ 17998, // Rule ID 2509 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fadd:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_ADD_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2509,
        GIR_Done,
      // Label 463: @17998
      GIM_Reject,
    // Label 461: @17999
    GIM_Reject,
    // Label 454: @18000
    GIM_Reject,
    // Label 21: @18001
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 466*/ 18131,
    /*GILLT_s16*//*Label 464*/ 18009,
    /*GILLT_s32*//*Label 465*/ 18070,
    // Label 464: @18009
    GIM_Try, /*On fail goto*//*Label 467*/ 18069, // Rule ID 443 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      // (fsub:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_SUB_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SUB_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 443,
      GIR_Done,
    // Label 467: @18069
    GIM_Reject,
    // Label 465: @18070
    GIM_Try, /*On fail goto*//*Label 468*/ 18130, // Rule ID 397 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      // (fsub:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_SUB_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SUB_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 397,
      GIR_Done,
    // Label 468: @18130
    GIM_Reject,
    // Label 466: @18131
    GIM_Reject,
    // Label 22: @18132
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 472*/ 18477,
    /*GILLT_s16*//*Label 469*/ 18141,
    /*GILLT_s32*//*Label 470*/ 18253,
    /*GILLT_s64*//*Label 471*/ 18365,
    // Label 469: @18141
    GIM_Try, /*On fail goto*//*Label 473*/ 18252,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 474*/ 18203, // Rule ID 444 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 444,
        GIR_Done,
      // Label 474: @18203
      GIM_Try, /*On fail goto*//*Label 475*/ 18251, // Rule ID 2504 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2504,
        GIR_Done,
      // Label 475: @18251
      GIM_Reject,
    // Label 473: @18252
    GIM_Reject,
    // Label 470: @18253
    GIM_Try, /*On fail goto*//*Label 476*/ 18364,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 477*/ 18315, // Rule ID 399 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 399,
        GIR_Done,
      // Label 477: @18315
      GIM_Try, /*On fail goto*//*Label 478*/ 18363, // Rule ID 2498 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2498,
        GIR_Done,
      // Label 478: @18363
      GIM_Reject,
    // Label 476: @18364
    GIM_Reject,
    // Label 471: @18365
    GIM_Try, /*On fail goto*//*Label 479*/ 18476,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 480*/ 18427, // Rule ID 454 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
        // (fmul:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers))  =>  (V_MUL_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 454,
        GIR_Done,
      // Label 480: @18427
      GIM_Try, /*On fail goto*//*Label 481*/ 18475, // Rule ID 2510 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods0,
        // (fmul:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_MUL_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src1_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src1
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2510,
        GIR_Done,
      // Label 481: @18475
      GIM_Reject,
    // Label 479: @18476
    GIM_Reject,
    // Label 472: @18477
    GIM_Reject,
    // Label 23: @18478
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 485*/ 18723,
    /*GILLT_s16*//*Label 482*/ 18487,
    /*GILLT_s32*//*Label 483*/ 18567,
    /*GILLT_s64*//*Label 484*/ 18645,
    // Label 482: @18487
    GIM_Try, /*On fail goto*//*Label 486*/ 18566, // Rule ID 494 //
      GIM_CheckFeatures, GIFBS_Has16BitInsts_isGFX8Only,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s16,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F16:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f16:{ *:[f16] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f16:{ *:[f16] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F16,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 494,
      GIR_Done,
    // Label 486: @18566
    GIM_Reject,
    // Label 483: @18567
    GIM_Try, /*On fail goto*//*Label 487*/ 18644, // Rule ID 450 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F32:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f32:{ *:[f32] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f32:{ *:[f32] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 450,
      GIR_Done,
    // Label 487: @18644
    GIM_Reject,
    // Label 484: @18645
    GIM_Try, /*On fail goto*//*Label 488*/ 18722, // Rule ID 452 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s64,
      GIM_CheckType, /*MI*/0, /*Op*/3, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/2, /*Renderer*/1, GICP_gi_vop3mods,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/3, /*Renderer*/2, GICP_gi_vop3mods,
      // (fma:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src1_modifiers), (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src2, i32:{ *:[i32] }:$src2_modifiers))  =>  (V_FMA_F64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src1_modifiers, f64:{ *:[f64] }:$src1, i32:{ *:[i32] }:$src2_modifiers, f64:{ *:[f64] }:$src2, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FMA_F64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/1, // src1_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/1, /*SubOperand*/0, // src1
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/1, // src2_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/2, /*SubOperand*/0, // src2
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 452,
      GIR_Done,
    // Label 488: @18722
    GIM_Reject,
    // Label 485: @18723
    GIM_Reject,
    // Label 24: @18724
    GIM_Try, /*On fail goto*//*Label 489*/ 18796, // Rule ID 2193 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (fpow:{ *:[f32] } f32:{ *:[f32] }:$src0, f32:{ *:[f32] }:$src1)  =>  (V_EXP_F32_e32:{ *:[f32] } (V_MUL_LEGACY_F32_e32:{ *:[i16] } f32:{ *:[f32] }:$src1, (V_LOG_F32_e32:{ *:[i16] } f32:{ *:[f32] }:$src0)))
      GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s16,
      GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/GILLT_s16,
      GIR_BuildMI, /*InsnID*/2, /*Opcode*/AMDGPU::V_LOG_F32_e32,
      GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/1, /*TempRegFlags*/RegState::Define,
      GIR_Copy, /*NewInsnID*/2, /*OldInsnID*/0, /*OpIdx*/1, // src0
      GIR_ConstrainSelectedInstOperands, /*InsnID*/2,
      GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_MUL_LEGACY_F32_e32,
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
      GIR_Copy, /*NewInsnID*/1, /*OldInsnID*/0, /*OpIdx*/2, // src1
      GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/1, /*TempRegFlags*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F32_e32,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2193,
      GIR_Done,
    // Label 489: @18796
    GIM_Reject,
    // Label 25: @18797
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 492*/ 18893,
    /*GILLT_s16*//*Label 490*/ 18805,
    /*GILLT_s32*//*Label 491*/ 18849,
    // Label 490: @18805
    GIM_Try, /*On fail goto*//*Label 493*/ 18848, // Rule ID 386 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fexp2:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_EXP_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 386,
      GIR_Done,
    // Label 493: @18848
    GIM_Reject,
    // Label 491: @18849
    GIM_Try, /*On fail goto*//*Label 494*/ 18892, // Rule ID 353 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fexp2:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_EXP_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_EXP_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 353,
      GIR_Done,
    // Label 494: @18892
    GIM_Reject,
    // Label 492: @18893
    GIM_Reject,
    // Label 26: @18894
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 497*/ 18990,
    /*GILLT_s16*//*Label 495*/ 18902,
    /*GILLT_s32*//*Label 496*/ 18946,
    // Label 495: @18902
    GIM_Try, /*On fail goto*//*Label 498*/ 18945, // Rule ID 385 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (flog2:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 385,
      GIR_Done,
    // Label 498: @18945
    GIM_Reject,
    // Label 496: @18946
    GIM_Try, /*On fail goto*//*Label 499*/ 18989, // Rule ID 354 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (flog2:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_LOG_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_LOG_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 354,
      GIR_Done,
    // Label 499: @18989
    GIM_Reject,
    // Label 497: @18990
    GIM_Reject,
    // Label 27: @18991
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/5, 7, /*)*//*default:*//*Label 502*/ 19087,
    /*GILLT_s32*//*Label 500*/ 18999,
    /*GILLT_s64*//*Label 501*/ 19043,
    // Label 500: @18999
    GIM_Try, /*On fail goto*//*Label 503*/ 19042, // Rule ID 341 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpextend:{ *:[f32] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_F16_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 341,
      GIR_Done,
    // Label 503: @19042
    GIM_Reject,
    // Label 501: @19043
    GIM_Try, /*On fail goto*//*Label 504*/ 19086, // Rule ID 333 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpextend:{ *:[f64] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_F32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 333,
      GIR_Done,
    // Label 504: @19086
    GIM_Reject,
    // Label 502: @19087
    GIM_Reject,
    // Label 28: @19088
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 6, /*)*//*default:*//*Label 507*/ 19184,
    /*GILLT_s16*//*Label 505*/ 19096,
    /*GILLT_s32*//*Label 506*/ 19140,
    // Label 505: @19096
    GIM_Try, /*On fail goto*//*Label 508*/ 19139, // Rule ID 340 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpround:{ *:[f16] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_F32_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 340,
      GIR_Done,
    // Label 508: @19139
    GIM_Reject,
    // Label 506: @19140
    GIM_Try, /*On fail goto*//*Label 509*/ 19183, // Rule ID 332 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fpround:{ *:[f32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_F64_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 332,
      GIR_Done,
    // Label 509: @19183
    GIM_Reject,
    // Label 507: @19184
    GIM_Reject,
    // Label 29: @19185
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/3, 6, /*)*//*default:*//*Label 513*/ 19418,
    /*GILLT_s1*//*Label 510*/ 19194,
    /*GILLT_s16*//*Label 511*/ 19287,
    /*GILLT_s32*//*Label 512*/ 19331,
    // Label 510: @19194
    GIM_Try, /*On fail goto*//*Label 514*/ 19240, // Rule ID 2235 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_1RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_sint:{ *:[i1] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F32_e64:{ *:[i1] } 0:{ *:[i32] }, 3212836864:{ *:[i32] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f32] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/3212836864,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2235,
      GIR_Done,
    // Label 514: @19240
    GIM_Try, /*On fail goto*//*Label 515*/ 19286, // Rule ID 2237 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_1RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_sint:{ *:[i1] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F64_e64:{ *:[i1] } 0:{ *:[i32] }, -4616189618054758400:{ *:[i64] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f64] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/-4616189618054758400,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2237,
      GIR_Done,
    // Label 515: @19286
    GIM_Reject,
    // Label 511: @19287
    GIM_Try, /*On fail goto*//*Label 516*/ 19330, // Rule ID 381 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I16_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 381,
      GIR_Done,
    // Label 516: @19330
    GIM_Reject,
    // Label 512: @19331
    GIM_Try, /*On fail goto*//*Label 517*/ 19374, // Rule ID 330 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 330,
      GIR_Done,
    // Label 517: @19374
    GIM_Try, /*On fail goto*//*Label 518*/ 19417, // Rule ID 339 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_sint:{ *:[i32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_I32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_I32_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 339,
      GIR_Done,
    // Label 518: @19417
    GIM_Reject,
    // Label 513: @19418
    GIM_Reject,
    // Label 30: @19419
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/3, 6, /*)*//*default:*//*Label 522*/ 19652,
    /*GILLT_s1*//*Label 519*/ 19428,
    /*GILLT_s16*//*Label 520*/ 19521,
    /*GILLT_s32*//*Label 521*/ 19565,
    // Label 519: @19428
    GIM_Try, /*On fail goto*//*Label 523*/ 19474, // Rule ID 2234 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_1RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_uint:{ *:[i1] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F32_e64:{ *:[i1] } 0:{ *:[i32] }, 1065353216:{ *:[i32] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f32] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/1065353216,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2234,
      GIR_Done,
    // Label 523: @19474
    GIM_Try, /*On fail goto*//*Label 524*/ 19520, // Rule ID 2236 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_1RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
      // (fp_to_uint:{ *:[i1] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers))  =>  (V_CMP_EQ_F64_e64:{ *:[i1] } 0:{ *:[i32] }, 4607182418800017408:{ *:[i64] }, ?:{ *:[i32] }:$src0_modifiers, ?:{ *:[f64] }:$src0, 0:{ *:[i1] })
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CMP_EQ_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // sdst
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_AddImm, /*InsnID*/0, /*Imm*/4607182418800017408,
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_AddImm, /*InsnID*/0, /*Imm*/0,
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 2236,
      GIR_Done,
    // Label 524: @19520
    GIM_Reject,
    // Label 520: @19521
    GIM_Try, /*On fail goto*//*Label 525*/ 19564, // Rule ID 380 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U16_F16_e64:{ *:[i16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U16_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 380,
      GIR_Done,
    // Label 525: @19564
    GIM_Reject,
    // Label 521: @19565
    GIM_Try, /*On fail goto*//*Label 526*/ 19608, // Rule ID 334 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i32] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U32_F64_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U32_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 334,
      GIR_Done,
    // Label 526: @19608
    GIM_Try, /*On fail goto*//*Label 527*/ 19651, // Rule ID 338 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fp_to_uint:{ *:[i32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_U32_F32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_U32_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 338,
      GIR_Done,
    // Label 527: @19651
    GIM_Reject,
    // Label 522: @19652
    GIM_Reject,
    // Label 31: @19653
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 531*/ 19782,
    /*GILLT_s16*//*Label 528*/ 19662,
    /*GILLT_s32*//*Label 529*/ 19702,
    /*GILLT_s64*//*Label 530*/ 19742,
    // Label 528: @19662
    GIM_Try, /*On fail goto*//*Label 532*/ 19701, // Rule ID 379 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f16] } (VOP3OMods:{ *:[i16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_I16_e64:{ *:[f16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_I16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 379,
      GIR_Done,
    // Label 532: @19701
    GIM_Reject,
    // Label 529: @19702
    GIM_Try, /*On fail goto*//*Label 533*/ 19741, // Rule ID 336 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f32] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_I32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_I32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 336,
      GIR_Done,
    // Label 533: @19741
    GIM_Reject,
    // Label 530: @19742
    GIM_Try, /*On fail goto*//*Label 534*/ 19781, // Rule ID 331 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (sint_to_fp:{ *:[f64] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_I32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_I32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 331,
      GIR_Done,
    // Label 534: @19781
    GIM_Reject,
    // Label 531: @19782
    GIM_Reject,
    // Label 32: @19783
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 538*/ 19912,
    /*GILLT_s16*//*Label 535*/ 19792,
    /*GILLT_s32*//*Label 536*/ 19832,
    /*GILLT_s64*//*Label 537*/ 19872,
    // Label 535: @19792
    GIM_Try, /*On fail goto*//*Label 539*/ 19831, // Rule ID 378 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f16] } (VOP3OMods:{ *:[i16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F16_U16_e64:{ *:[f16] } i16:{ *:[i16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F16_U16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 378,
      GIR_Done,
    // Label 539: @19831
    GIM_Reject,
    // Label 536: @19832
    GIM_Try, /*On fail goto*//*Label 540*/ 19871, // Rule ID 337 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f32] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F32_U32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F32_U32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 337,
      GIR_Done,
    // Label 540: @19871
    GIM_Reject,
    // Label 537: @19872
    GIM_Try, /*On fail goto*//*Label 541*/ 19911, // Rule ID 335 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3omods,
      // (uint_to_fp:{ *:[f64] } (VOP3OMods:{ *:[i32] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CVT_F64_U32_e64:{ *:[f64] } i32:{ *:[i32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CVT_F64_U32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 335,
      GIR_Done,
    // Label 541: @19911
    GIM_Reject,
    // Label 538: @19912
    GIM_Reject,
    // Label 33: @19913
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 545*/ 20318,
    /*GILLT_s16*//*Label 542*/ 19922,
    /*GILLT_s32*//*Label 543*/ 20072,
    /*GILLT_s64*//*Label 544*/ 20222,
    // Label 542: @19922
    GIM_Try, /*On fail goto*//*Label 546*/ 20071,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 547*/ 19986, // Rule ID 2265 //
        GIM_CheckFeatures, GIFBS_NoFP16Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s16,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckComplexPattern, /*MI*/1, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f16] } (fneg:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src, i32:{ *:[i32] }:$src_mods)))  =>  (V_MUL_F16_e64:{ *:[f16] } 0:{ *:[i32] }, 48128:{ *:[i32] }, ?:{ *:[i32] }:$src_mods, ?:{ *:[f16] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/48128,
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2265,
        GIR_Done,
      // Label 547: @19986
      GIM_Try, /*On fail goto*//*Label 548*/ 20027, // Rule ID 2264 //
        GIM_CheckFeatures, GIFBS_NoFP16Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MUL_F16_e64:{ *:[f16] } 0:{ *:[i32] }, 15360:{ *:[i32] }, ?:{ *:[i32] }:$src_mods, ?:{ *:[f16] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/15360,
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2264,
        GIR_Done,
      // Label 548: @20027
      GIM_Try, /*On fail goto*//*Label 549*/ 20070, // Rule ID 2267 //
        GIM_CheckFeatures, GIFBS_FP16Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f16] } (VOP3Mods:{ *:[f16] } f16:{ *:[f16] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MAX_F16_e64:{ *:[f16] } ?:{ *:[i32] }:$src_mods, ?:{ *:[f16] }:$src, ?:{ *:[i32] }:$src_mods, ?:{ *:[f16] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F16_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2267,
        GIR_Done,
      // Label 549: @20070
      GIM_Reject,
    // Label 546: @20071
    GIM_Reject,
    // Label 543: @20072
    GIM_Try, /*On fail goto*//*Label 550*/ 20221,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_Try, /*On fail goto*//*Label 551*/ 20136, // Rule ID 2270 //
        GIM_CheckFeatures, GIFBS_NoFP32Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_RecordInsn, /*DefineMI*/1, /*MI*/0, /*OpIdx*/1, // MIs[1]
        GIM_CheckOpcode, /*MI*/1, TargetOpcode::G_FNEG,
        GIM_CheckType, /*MI*/1, /*Op*/1, /*Type*/GILLT_s32,
        GIM_CheckIsSafeToFold, /*InsnID*/1,
        GIM_CheckComplexPattern, /*MI*/1, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f32] } (fneg:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src, i32:{ *:[i32] }:$src_mods)))  =>  (V_MUL_F32_e64:{ *:[f32] } 0:{ *:[i32] }, 3212836864:{ *:[i32] }, ?:{ *:[i32] }:$src_mods, ?:{ *:[f32] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/3212836864,
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2270,
        GIR_Done,
      // Label 551: @20136
      GIM_Try, /*On fail goto*//*Label 552*/ 20177, // Rule ID 2269 //
        GIM_CheckFeatures, GIFBS_NoFP32Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MUL_F32_e64:{ *:[f32] } 0:{ *:[i32] }, 1065353216:{ *:[i32] }, ?:{ *:[i32] }:$src_mods, ?:{ *:[f32] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/1065353216,
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2269,
        GIR_Done,
      // Label 552: @20177
      GIM_Try, /*On fail goto*//*Label 553*/ 20220, // Rule ID 2271 //
        GIM_CheckFeatures, GIFBS_FP32Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f32] } (VOP3Mods:{ *:[f32] } f32:{ *:[f32] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MAX_F32_e64:{ *:[f32] } ?:{ *:[i32] }:$src_mods, ?:{ *:[f32] }:$src, ?:{ *:[i32] }:$src_mods, ?:{ *:[f32] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F32_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2271,
        GIR_Done,
      // Label 553: @20220
      GIM_Reject,
    // Label 550: @20221
    GIM_Reject,
    // Label 544: @20222
    GIM_Try, /*On fail goto*//*Label 554*/ 20317,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 555*/ 20273, // Rule ID 2272 //
        GIM_CheckFeatures, GIFBS_NoFP64Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MUL_F64:{ *:[f64] } 0:{ *:[i32] }, 4607182418800017408:{ *:[i64] }, ?:{ *:[i32] }:$src_mods, ?:{ *:[f64] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MUL_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/4607182418800017408,
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2272,
        GIR_Done,
      // Label 555: @20273
      GIM_Try, /*On fail goto*//*Label 556*/ 20316, // Rule ID 2273 //
        GIM_CheckFeatures, GIFBS_FP64Denormals_TruePredicate_TruePredicate_TruePredicate,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (fcanonicalize:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$src, i32:{ *:[i32] }:$src_mods))  =>  (V_MAX_F64:{ *:[f64] } ?:{ *:[i32] }:$src_mods, ?:{ *:[f64] }:$src, ?:{ *:[i32] }:$src_mods, ?:{ *:[f64] }:$src, 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_MAX_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src_mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2273,
        GIR_Done,
      // Label 556: @20316
      GIM_Reject,
    // Label 554: @20317
    GIM_Reject,
    // Label 545: @20318
    GIM_Reject,
    // Label 34: @20319
    GIM_Try, /*On fail goto*//*Label 557*/ 20347, // Rule ID 413 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (smin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MIN_I32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MIN_I32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 413,
      GIR_Done,
    // Label 557: @20347
    GIM_Reject,
    // Label 35: @20348
    GIM_Try, /*On fail goto*//*Label 558*/ 20376, // Rule ID 415 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (smax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MAX_I32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MAX_I32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 415,
      GIR_Done,
    // Label 558: @20376
    GIM_Reject,
    // Label 36: @20377
    GIM_Try, /*On fail goto*//*Label 559*/ 20405, // Rule ID 417 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (umin:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MIN_U32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MIN_U32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 417,
      GIR_Done,
    // Label 559: @20405
    GIM_Reject,
    // Label 37: @20406
    GIM_Try, /*On fail goto*//*Label 560*/ 20434, // Rule ID 419 //
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/2, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      // (umax:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)  =>  (V_MAX_U32_e64:{ *:[i32] } i32:{ *:[i32] }:$src0, i32:{ *:[i32] }:$src1)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::V_MAX_U32_e64,
      GIR_AddImplicitUse, /*InsnID*/0, AMDGPU::EXEC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 419,
      GIR_Done,
    // Label 560: @20434
    GIM_Reject,
    // Label 38: @20435
    GIM_Try, /*On fail goto*//*Label 561*/ 20463,
      GIM_CheckIsMBB, /*MI*/0, /*Op*/0,
      GIM_Try, /*On fail goto*//*Label 562*/ 20451, // Rule ID 58 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (br (bb:{ *:[Other] }):$simm16)  =>  (S_BRANCH (bb:{ *:[Other] }):$simm16)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_BRANCH,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 58,
        GIR_Done,
      // Label 562: @20451
      GIM_Try, /*On fail goto*//*Label 563*/ 20462, // Rule ID 59 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
        // (br (bb:{ *:[Other] }):$simm16)  =>  (S_BRANCH_pad_s_nop (bb:{ *:[Other] }):$simm16)
        GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_BRANCH_pad_s_nop,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 59,
        GIR_Done,
      // Label 563: @20462
      GIM_Reject,
    // Label 561: @20463
    GIM_Reject,
    // Label 39: @20464
    GIM_Try, /*On fail goto*//*Label 564*/ 20490, // Rule ID 3 //
      GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_TruePredicate,
      GIM_CheckType, /*MI*/0, /*Op*/0, /*Type*/GILLT_s32,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::SReg_32RegClassID,
      // (ctpop:{ *:[i32] } i32:{ *:[i32] }:$src0)  =>  (S_BCNT1_I32_B32:{ *:[i32] }:{ *:[i1] } i32:{ *:[i32] }:$src0)
      GIR_MutateOpcode, /*InsnID*/0, /*RecycleInsnID*/0, /*Opcode*/AMDGPU::S_BCNT1_I32_B32,
      GIR_AddImplicitDef, /*InsnID*/0, AMDGPU::SCC,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 3,
      GIR_Done,
    // Label 564: @20490
    GIM_Reject,
    // Label 40: @20491
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 568*/ 20632,
    /*GILLT_s16*//*Label 565*/ 20500,
    /*GILLT_s32*//*Label 566*/ 20544,
    /*GILLT_s64*//*Label 567*/ 20588,
    // Label 565: @20500
    GIM_Try, /*On fail goto*//*Label 569*/ 20543, // Rule ID 392 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 392,
      GIR_Done,
    // Label 569: @20543
    GIM_Reject,
    // Label 566: @20544
    GIM_Try, /*On fail goto*//*Label 570*/ 20587, // Rule ID 350 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 350,
      GIR_Done,
    // Label 570: @20587
    GIM_Reject,
    // Label 567: @20588
    GIM_Try, /*On fail goto*//*Label 571*/ 20631, // Rule ID 375 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fceil:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_CEIL_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_CEIL_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 375,
      GIR_Done,
    // Label 571: @20631
    GIM_Reject,
    // Label 568: @20632
    GIM_Reject,
    // Label 41: @20633
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 575*/ 20774,
    /*GILLT_s16*//*Label 572*/ 20642,
    /*GILLT_s32*//*Label 573*/ 20686,
    /*GILLT_s64*//*Label 574*/ 20730,
    // Label 572: @20642
    GIM_Try, /*On fail goto*//*Label 576*/ 20685, // Rule ID 383 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fsqrt:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_SQRT_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SQRT_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 383,
      GIR_Done,
    // Label 576: @20685
    GIM_Reject,
    // Label 573: @20686
    GIM_Try, /*On fail goto*//*Label 577*/ 20729, // Rule ID 358 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fsqrt:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_SQRT_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SQRT_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 358,
      GIR_Done,
    // Label 577: @20729
    GIM_Reject,
    // Label 574: @20730
    GIM_Try, /*On fail goto*//*Label 578*/ 20773, // Rule ID 361 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (fsqrt:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_SQRT_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_SQRT_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 361,
      GIR_Done,
    // Label 578: @20773
    GIM_Reject,
    // Label 575: @20774
    GIM_Reject,
    // Label 42: @20775
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 582*/ 21080,
    /*GILLT_s16*//*Label 579*/ 20784,
    /*GILLT_s32*//*Label 580*/ 20828,
    /*GILLT_s64*//*Label 581*/ 20872,
    // Label 579: @20784
    GIM_Try, /*On fail goto*//*Label 583*/ 20827, // Rule ID 391 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (ffloor:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FLOOR_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FLOOR_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 391,
      GIR_Done,
    // Label 583: @20827
    GIM_Reject,
    // Label 580: @20828
    GIM_Try, /*On fail goto*//*Label 584*/ 20871, // Rule ID 352 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (ffloor:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FLOOR_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FLOOR_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 352,
      GIR_Done,
    // Label 584: @20871
    GIM_Reject,
    // Label 581: @20872
    GIM_Try, /*On fail goto*//*Label 585*/ 21079,
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_Try, /*On fail goto*//*Label 586*/ 21043, // Rule ID 2291 //
        GIM_CheckFeatures, GIFBS_TruePredicate_TruePredicate_isGFX6,
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods,
        // (ffloor:{ *:[f64] } (VOP3Mods:{ *:[f64] } f64:{ *:[f64] }:$x, i32:{ *:[i32] }:$mods))  =>  (V_ADD_F64:{ *:[f64] } ?:{ *:[i32] }:$mods, ?:{ *:[f64] }:$x, 1:{ *:[i32] }, (V_CNDMASK_B64_PSEUDO:{ *:[i64] } (V_MIN_F64:{ *:[i64] } 0:{ *:[i32] }, (V_FRACT_F64_e64:{ *:[i64] } ?:{ *:[i32] }:$mods, ?:{ *:[f64] }:$x, 0:{ *:[i1] }, 0:{ *:[i32] }), 0:{ *:[i32] }, (V_MOV_B64_PSEUDO:{ *:[i64] } 4607182418800017407:{ *:[i64] }), 0:{ *:[i1] }, 0:{ *:[i32] }), ?:{ *:[f64] }:$x, (V_CMP_CLASS_F64_e64:{ *:[i1] } 0:{ *:[i32] }, ?:{ *:[f64] }:$x, 3:{ *:[i32] })), 0:{ *:[i1] }, 0:{ *:[i32] })
        GIR_MakeTempReg, /*TempRegID*/0, /*TypeID*/GILLT_s64,
        GIR_MakeTempReg, /*TempRegID*/1, /*TypeID*/GILLT_s64,
        GIR_MakeTempReg, /*TempRegID*/2, /*TypeID*/GILLT_s64,
        GIR_MakeTempReg, /*TempRegID*/3, /*TypeID*/GILLT_s64,
        GIR_MakeTempReg, /*TempRegID*/4, /*TypeID*/GILLT_s1,
        GIR_BuildMI, /*InsnID*/5, /*Opcode*/AMDGPU::V_CMP_CLASS_F64_e64,
        GIR_AddTempRegister, /*InsnID*/5, /*TempRegID*/4, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/5, /*Imm*/0,
        GIR_ComplexSubOperandRenderer, /*InsnID*/5, /*RendererID*/0, /*SubOperand*/0, // x
        GIR_AddImm, /*InsnID*/5, /*Imm*/3,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/5,
        GIR_BuildMI, /*InsnID*/4, /*Opcode*/AMDGPU::V_MOV_B64_PSEUDO,
        GIR_AddTempRegister, /*InsnID*/4, /*TempRegID*/3, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/4, /*Imm*/4607182418800017407,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/4,
        GIR_BuildMI, /*InsnID*/3, /*Opcode*/AMDGPU::V_FRACT_F64_e64,
        GIR_AddTempRegister, /*InsnID*/3, /*TempRegID*/2, /*TempRegFlags*/RegState::Define,
        GIR_ComplexSubOperandRenderer, /*InsnID*/3, /*RendererID*/0, /*SubOperand*/1, // mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/3, /*RendererID*/0, /*SubOperand*/0, // x
        GIR_AddImm, /*InsnID*/3, /*Imm*/0,
        GIR_AddImm, /*InsnID*/3, /*Imm*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/3,
        GIR_BuildMI, /*InsnID*/2, /*Opcode*/AMDGPU::V_MIN_F64,
        GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/1, /*TempRegFlags*/RegState::Define,
        GIR_AddImm, /*InsnID*/2, /*Imm*/0,
        GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/2, /*TempRegFlags*/0,
        GIR_AddImm, /*InsnID*/2, /*Imm*/0,
        GIR_AddTempRegister, /*InsnID*/2, /*TempRegID*/3, /*TempRegFlags*/0,
        GIR_AddImm, /*InsnID*/2, /*Imm*/0,
        GIR_AddImm, /*InsnID*/2, /*Imm*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/2,
        GIR_BuildMI, /*InsnID*/1, /*Opcode*/AMDGPU::V_CNDMASK_B64_PSEUDO,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/0, /*TempRegFlags*/RegState::Define,
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/1, /*TempRegFlags*/0,
        GIR_ComplexSubOperandRenderer, /*InsnID*/1, /*RendererID*/0, /*SubOperand*/0, // x
        GIR_AddTempRegister, /*InsnID*/1, /*TempRegID*/4, /*TempRegFlags*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/1,
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_ADD_F64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // mods
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // x
        GIR_AddImm, /*InsnID*/0, /*Imm*/1,
        GIR_AddTempRegister, /*InsnID*/0, /*TempRegID*/0, /*TempRegFlags*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_AddImm, /*InsnID*/0, /*Imm*/0,
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 2291,
        GIR_Done,
      // Label 586: @21043
      GIM_Try, /*On fail goto*//*Label 587*/ 21078, // Rule ID 377 //
        GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
        // (ffloor:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_FLOOR_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
        GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_FLOOR_F64_e64,
        GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
        GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
        GIR_EraseFromParent, /*InsnID*/0,
        GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
        // GIR_Coverage, 377,
        GIR_Done,
      // Label 587: @21078
      GIM_Reject,
    // Label 585: @21079
    GIM_Reject,
    // Label 582: @21080
    GIM_Reject,
    // Label 43: @21081
    GIM_SwitchType, /*MI*/0, /*Op*/0, /*[*/4, 7, /*)*//*default:*//*Label 591*/ 21222,
    /*GILLT_s16*//*Label 588*/ 21090,
    /*GILLT_s32*//*Label 589*/ 21134,
    /*GILLT_s64*//*Label 590*/ 21178,
    // Label 588: @21090
    GIM_Try, /*On fail goto*//*Label 592*/ 21133, // Rule ID 394 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s16,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (frint:{ *:[f16] } (VOP3Mods0:{ *:[f16] } f16:{ *:[f16] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_RNDNE_F16_e64:{ *:[f16] } i32:{ *:[i32] }:$src0_modifiers, f16:{ *:[f16] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_RNDNE_F16_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 394,
      GIR_Done,
    // Label 592: @21133
    GIM_Reject,
    // Label 589: @21134
    GIM_Try, /*On fail goto*//*Label 593*/ 21177, // Rule ID 351 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s32,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VGPR_32RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (frint:{ *:[f32] } (VOP3Mods0:{ *:[f32] } f32:{ *:[f32] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_RNDNE_F32_e64:{ *:[f32] } i32:{ *:[i32] }:$src0_modifiers, f32:{ *:[f32] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_RNDNE_F32_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 351,
      GIR_Done,
    // Label 593: @21177
    GIM_Reject,
    // Label 590: @21178
    GIM_Try, /*On fail goto*//*Label 594*/ 21221, // Rule ID 376 //
      GIM_CheckType, /*MI*/0, /*Op*/1, /*Type*/GILLT_s64,
      GIM_CheckRegBankForClass, /*MI*/0, /*Op*/0, /*RC*/AMDGPU::VReg_64RegClassID,
      GIM_CheckComplexPattern, /*MI*/0, /*Op*/1, /*Renderer*/0, GICP_gi_vop3mods0,
      // (frint:{ *:[f64] } (VOP3Mods0:{ *:[f64] } f64:{ *:[f64] }:$src0, i32:{ *:[i32] }:$src0_modifiers, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod))  =>  (V_RNDNE_F64_e64:{ *:[f64] } i32:{ *:[i32] }:$src0_modifiers, f64:{ *:[f64] }:$src0, i1:{ *:[i1] }:$clamp, i32:{ *:[i32] }:$omod)
      GIR_BuildMI, /*InsnID*/0, /*Opcode*/AMDGPU::V_RNDNE_F64_e64,
      GIR_Copy, /*NewInsnID*/0, /*OldInsnID*/0, /*OpIdx*/0, // vdst
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/1, // src0_modifiers
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/0, // src0
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/2, // clamp
      GIR_ComplexSubOperandRenderer, /*InsnID*/0, /*RendererID*/0, /*SubOperand*/3, // omod
      GIR_EraseFromParent, /*InsnID*/0,
      GIR_ConstrainSelectedInstOperands, /*InsnID*/0,
      // GIR_Coverage, 376,
      GIR_Done,
    // Label 594: @21221
    GIM_Reject,
    // Label 591: @21222
    GIM_Reject,
    // Label 44: @21223
    GIM_Reject,
    };
  return MatchTable0;
}
#endif // ifdef GET_GLOBALISEL_IMPL
#ifdef GET_GLOBALISEL_PREDICATES_DECL
PredicateBitset AvailableModuleFeatures;
mutable PredicateBitset AvailableFunctionFeatures;
PredicateBitset getAvailableFeatures() const {
  return AvailableModuleFeatures | AvailableFunctionFeatures;
}
PredicateBitset
computeAvailableModuleFeatures(const AMDGPUSubtarget *Subtarget) const;
PredicateBitset
computeAvailableFunctionFeatures(const AMDGPUSubtarget *Subtarget,
                                 const MachineFunction *MF) const;
#endif // ifdef GET_GLOBALISEL_PREDICATES_DECL
#ifdef GET_GLOBALISEL_PREDICATES_INIT
AvailableModuleFeatures(computeAvailableModuleFeatures(&STI)),
AvailableFunctionFeatures()
#endif // ifdef GET_GLOBALISEL_PREDICATES_INIT
