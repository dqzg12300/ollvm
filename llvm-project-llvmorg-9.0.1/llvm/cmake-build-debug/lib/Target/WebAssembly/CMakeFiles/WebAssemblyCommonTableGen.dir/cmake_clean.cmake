file(REMOVE_RECURSE
  "CMakeFiles/WebAssemblyCommonTableGen"
  "WebAssemblyGenAsmMatcher.inc"
  "WebAssemblyGenAsmWriter.inc"
  "WebAssemblyGenDAGISel.inc"
  "WebAssemblyGenDisassemblerTables.inc"
  "WebAssemblyGenFastISel.inc"
  "WebAssemblyGenInstrInfo.inc"
  "WebAssemblyGenMCCodeEmitter.inc"
  "WebAssemblyGenRegisterInfo.inc"
  "WebAssemblyGenSubtargetInfo.inc"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/WebAssemblyCommonTableGen.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
