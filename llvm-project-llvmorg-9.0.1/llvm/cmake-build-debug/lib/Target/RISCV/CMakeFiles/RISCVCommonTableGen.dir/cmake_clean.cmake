file(REMOVE_RECURSE
  "CMakeFiles/RISCVCommonTableGen"
  "RISCVGenAsmMatcher.inc"
  "RISCVGenAsmWriter.inc"
  "RISCVGenCompressInstEmitter.inc"
  "RISCVGenDAGISel.inc"
  "RISCVGenDisassemblerTables.inc"
  "RISCVGenInstrInfo.inc"
  "RISCVGenMCCodeEmitter.inc"
  "RISCVGenMCPseudoLowering.inc"
  "RISCVGenRegisterInfo.inc"
  "RISCVGenSubtargetInfo.inc"
  "RISCVGenSystemOperands.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/RISCVCommonTableGen.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
