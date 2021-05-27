# This file provides information and services to the final user.


# LLVM_BUILD_* values available only from LLVM build tree.
set(LLVM_BUILD_BINARY_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug")
set(LLVM_BUILD_LIBRARY_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/./lib")
set(LLVM_BUILD_MAIN_INCLUDE_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include")
set(LLVM_BUILD_MAIN_SRC_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm")


set(LLVM_VERSION_MAJOR 9)
set(LLVM_VERSION_MINOR 0)
set(LLVM_VERSION_PATCH 1)
set(LLVM_VERSION_SUFFIX )
set(LLVM_PACKAGE_VERSION 9.0.1)

set(LLVM_BUILD_TYPE Release)

set(LLVM_COMMON_DEPENDS )

set(LLVM_AVAILABLE_LIBS LLVMDemangle;LLVMSupport;LLVMTableGen;LLVMCore;LLVMFuzzMutate;LLVMIRReader;LLVMCodeGen;LLVMSelectionDAG;LLVMAsmPrinter;LLVMMIRParser;LLVMGlobalISel;LLVMBinaryFormat;LLVMBitReader;LLVMBitWriter;LLVMBitstreamReader;LLVMTransformUtils;LLVMInstrumentation;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMScalarOpts;LLVMipo;LLVMVectorize;LLVMObjCARCOpts;LLVMCoroutines;LLVMKingEncode;LLVMObfuscation;LLVMLinker;LLVMAnalysis;LLVMLTO;LLVMMC;LLVMMCParser;LLVMMCDisassembler;LLVMMCA;LLVMObject;LLVMObjectYAML;LLVMOption;LLVMRemarks;LLVMDebugInfoDWARF;LLVMDebugInfoGSYM;LLVMDebugInfoMSF;LLVMDebugInfoCodeView;LLVMDebugInfoPDB;LLVMSymbolize;LLVMExecutionEngine;LLVMInterpreter;LLVMJITLink;LLVMMCJIT;LLVMOrcJIT;LLVMRuntimeDyld;LLVMTarget;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Disassembler;LLVMAArch64Desc;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDisassembler;LLVMAMDGPUDesc;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDisassembler;LLVMARMDesc;LLVMARMInfo;LLVMARMUtils;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDisassembler;LLVMBPFDesc;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDisassembler;LLVMHexagonDesc;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDisassembler;LLVMLanaiDesc;LLVMLanaiInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDisassembler;LLVMMipsDesc;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430Desc;LLVMMSP430Info;LLVMMSP430AsmParser;LLVMMSP430Disassembler;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDisassembler;LLVMPowerPCDesc;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDisassembler;LLVMRISCVDesc;LLVMRISCVInfo;LLVMRISCVUtils;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDisassembler;LLVMSparcDesc;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDisassembler;LLVMSystemZDesc;LLVMSystemZInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDisassembler;LLVMWebAssemblyDesc;LLVMWebAssemblyInfo;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Disassembler;LLVMX86Desc;LLVMX86Info;LLVMX86Utils;LLVMXCoreCodeGen;LLVMXCoreDisassembler;LLVMXCoreDesc;LLVMXCoreInfo;LLVMAsmParser;LLVMLineEditor;LLVMProfileData;LLVMCoverage;LLVMPasses;LLVMTextAPI;LLVMDlltoolDriver;LLVMLibDriver;LLVMXRay;LLVMWindowsManifest;LTO;Remarks)



set(LLVM_DYLIB_COMPONENTS all)

set(LLVM_ALL_TARGETS AArch64;AMDGPU;ARM;BPF;Hexagon;Lanai;Mips;MSP430;NVPTX;PowerPC;RISCV;Sparc;SystemZ;WebAssembly;X86;XCore)

set(LLVM_TARGETS_TO_BUILD AArch64;AMDGPU;ARM;BPF;Hexagon;Lanai;Mips;MSP430;NVPTX;PowerPC;RISCV;Sparc;SystemZ;WebAssembly;X86;XCore)

set(LLVM_TARGETS_WITH_JIT X86;PowerPC;AArch64;ARM;Mips;SystemZ)


set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDemangle )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSupport LLVMDemangle)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTableGen LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCore LLVMBinaryFormat;LLVMRemarks;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMFuzzMutate LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMScalarOpts;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMIRReader LLVMAsmParser;LLVMBitReader;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCodeGen LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMMC;LLVMProfileData;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSelectionDAG LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmPrinter LLVMAnalysis;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMDebugInfoCodeView;LLVMDebugInfoDWARF;LLVMDebugInfoMSF;LLVMMC;LLVMMCParser;LLVMRemarks;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMIRParser LLVMAsmParser;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMGlobalISel LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBinaryFormat LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitReader LLVMBitstreamReader;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitWriter LLVMAnalysis;LLVMCore;LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitstreamReader LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTransformUtils LLVMAnalysis;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstrumentation LLVMAnalysis;LLVMCore;LLVMMC;LLVMProfileData;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAggressiveInstCombine LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstCombine LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMScalarOpts LLVMAggressiveInstCombine;LLVMAnalysis;LLVMCore;LLVMInstCombine;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMipo LLVMAggressiveInstCombine;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCore;LLVMIRReader;LLVMInstCombine;LLVMInstrumentation;LLVMKingEncode;LLVMLinker;LLVMObject;LLVMProfileData;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMVectorize)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMVectorize LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObjCARCOpts LLVMAnalysis;LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCoroutines LLVMAnalysis;LLVMCore;LLVMScalarOpts;LLVMSupport;LLVMTransformUtils;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMKingEncode )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObfuscation )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLinker LLVMCore;LLVMSupport;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAnalysis LLVMBinaryFormat;LLVMCore;LLVMObject;LLVMProfileData;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLTO LLVMAggressiveInstCombine;LLVMAnalysis;LLVMBitReader;LLVMBitWriter;LLVMCodeGen;LLVMCore;LLVMInstCombine;LLVMLinker;LLVMMC;LLVMObjCARCOpts;LLVMObject;LLVMPasses;LLVMRemarks;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMC LLVMBinaryFormat;LLVMDebugInfoCodeView;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCParser LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCDisassembler LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCA LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObject LLVMBinaryFormat;LLVMBitReader;LLVMCore;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObjectYAML LLVMDebugInfoCodeView;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMOption LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRemarks LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoDWARF LLVMBinaryFormat;LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoGSYM LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoMSF LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoCodeView LLVMDebugInfoMSF;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfoPDB LLVMDebugInfoCodeView;LLVMDebugInfoMSF;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSymbolize LLVMDebugInfoDWARF;LLVMDebugInfoPDB;LLVMDemangle;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMExecutionEngine LLVMCore;LLVMMC;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInterpreter LLVMCodeGen;LLVMCore;LLVMExecutionEngine;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMJITLink LLVMBinaryFormat;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCJIT LLVMCore;LLVMExecutionEngine;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMOrcJIT LLVMCore;LLVMExecutionEngine;LLVMJITLink;LLVMMC;LLVMObject;LLVMRuntimeDyld;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRuntimeDyld LLVMMC;LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTarget LLVMAnalysis;LLVMCore;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64CodeGen LLVMAArch64Desc;LLVMAArch64Info;LLVMAArch64Utils;LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMGlobalISel;LLVMMC;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64AsmParser LLVMAArch64Desc;LLVMAArch64Info;LLVMAArch64Utils;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64Disassembler LLVMAArch64Desc;LLVMAArch64Info;LLVMAArch64Utils;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64Desc LLVMAArch64Info;LLVMAArch64Utils;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64Info LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAArch64Utils LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUCodeGen LLVMAMDGPUDesc;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMAnalysis;LLVMAsmPrinter;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMGlobalISel;LLVMMC;LLVMMIRParser;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMVectorize;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUAsmParser LLVMAMDGPUDesc;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUDisassembler LLVMAMDGPUDesc;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUDesc LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMBinaryFormat;LLVMCore;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAMDGPUUtils LLVMBinaryFormat;LLVMCore;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMCodeGen LLVMARMDesc;LLVMARMInfo;LLVMARMUtils;LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMGlobalISel;LLVMMC;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMAsmParser LLVMARMDesc;LLVMARMInfo;LLVMARMUtils;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMDisassembler LLVMARMDesc;LLVMARMInfo;LLVMARMUtils;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMDesc LLVMARMInfo;LLVMARMUtils;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMUtils LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBPFCodeGen LLVMAsmPrinter;LLVMBPFDesc;LLVMBPFInfo;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSelectionDAG;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBPFAsmParser LLVMBPFDesc;LLVMBPFInfo;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBPFDisassembler LLVMBPFInfo;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBPFDesc LLVMBPFInfo;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBPFInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMHexagonAsmParser;LLVMHexagonDesc;LLVMHexagonInfo;LLVMMC;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonAsmParser LLVMHexagonDesc;LLVMHexagonInfo;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonDisassembler LLVMHexagonDesc;LLVMHexagonInfo;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonDesc LLVMHexagonInfo;LLVMMC;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLanaiCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMLanaiAsmParser;LLVMLanaiDesc;LLVMLanaiInfo;LLVMMC;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLanaiAsmParser LLVMLanaiDesc;LLVMLanaiInfo;LLVMMC;LLVMMCParser;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLanaiDisassembler LLVMLanaiDesc;LLVMLanaiInfo;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLanaiDesc LLVMLanaiInfo;LLVMMC;LLVMMCDisassembler;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLanaiInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMGlobalISel;LLVMMC;LLVMMipsDesc;LLVMMipsInfo;LLVMSelectionDAG;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsAsmParser LLVMMC;LLVMMCParser;LLVMMipsDesc;LLVMMipsInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsDisassembler LLVMMCDisassembler;LLVMMipsInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsDesc LLVMMC;LLVMMipsInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430CodeGen LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMMSP430Desc;LLVMMSP430Info;LLVMSelectionDAG;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430Desc LLVMMC;LLVMMSP430Info;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430Info LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430AsmParser LLVMMC;LLVMMCParser;LLVMMSP430Desc;LLVMMSP430Info;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430Disassembler LLVMMCDisassembler;LLVMMSP430Info;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMNVPTXCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMVectorize;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMNVPTXDesc LLVMMC;LLVMNVPTXInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMNVPTXInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMPowerPCDesc;LLVMPowerPCInfo;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCAsmParser LLVMMC;LLVMMCParser;LLVMPowerPCDesc;LLVMPowerPCInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCDisassembler LLVMMCDisassembler;LLVMPowerPCInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCDesc LLVMMC;LLVMPowerPCInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMRISCVDesc;LLVMRISCVInfo;LLVMRISCVUtils;LLVMSelectionDAG;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVAsmParser LLVMMC;LLVMMCParser;LLVMRISCVDesc;LLVMRISCVInfo;LLVMRISCVUtils;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVDisassembler LLVMMCDisassembler;LLVMRISCVInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVDesc LLVMMC;LLVMRISCVInfo;LLVMRISCVUtils;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRISCVUtils LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcCodeGen LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSelectionDAG;LLVMSparcDesc;LLVMSparcInfo;LLVMSupport;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcAsmParser LLVMMC;LLVMMCParser;LLVMSparcDesc;LLVMSparcInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcDisassembler LLVMMCDisassembler;LLVMSparcInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcDesc LLVMMC;LLVMSparcInfo;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSystemZCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMSystemZDesc;LLVMSystemZInfo;LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSystemZAsmParser LLVMMC;LLVMMCParser;LLVMSupport;LLVMSystemZDesc;LLVMSystemZInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSystemZDisassembler LLVMMC;LLVMMCDisassembler;LLVMSupport;LLVMSystemZDesc;LLVMSystemZInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSystemZDesc LLVMMC;LLVMSupport;LLVMSystemZInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSystemZInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWebAssemblyCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMBinaryFormat;LLVMCodeGen;LLVMCore;LLVMMC;LLVMScalarOpts;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMWebAssemblyDesc;LLVMWebAssemblyInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWebAssemblyAsmParser LLVMMC;LLVMMCParser;LLVMSupport;LLVMWebAssemblyInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWebAssemblyDisassembler LLVMMCDisassembler;LLVMSupport;LLVMWebAssemblyDesc;LLVMWebAssemblyInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWebAssemblyDesc LLVMMC;LLVMSupport;LLVMWebAssemblyInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWebAssemblyInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86CodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMGlobalISel;LLVMMC;LLVMProfileData;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMX86Desc;LLVMX86Info;LLVMX86Utils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86AsmParser LLVMMC;LLVMMCParser;LLVMSupport;LLVMX86Desc;LLVMX86Info)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Disassembler LLVMMCDisassembler;LLVMSupport;LLVMX86Info)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Desc LLVMMC;LLVMMCDisassembler;LLVMObject;LLVMSupport;LLVMX86Info;LLVMX86Utils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Info LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Utils LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreCodeGen LLVMAnalysis;LLVMAsmPrinter;LLVMCodeGen;LLVMCore;LLVMMC;LLVMSelectionDAG;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMXCoreDesc;LLVMXCoreInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreDisassembler LLVMMCDisassembler;LLVMSupport;LLVMXCoreInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreDesc LLVMMC;LLVMSupport;LLVMXCoreInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmParser LLVMBinaryFormat;LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLineEditor LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMProfileData LLVMCore;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCoverage LLVMCore;LLVMObject;LLVMProfileData;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPasses LLVMAggressiveInstCombine;LLVMAnalysis;LLVMCodeGen;LLVMCore;LLVMInstCombine;LLVMInstrumentation;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMVectorize;LLVMipo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTextAPI LLVMBinaryFormat;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDlltoolDriver LLVMObject;LLVMOption;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLibDriver LLVMBinaryFormat;LLVMBitReader;LLVMObject;LLVMOption;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXRay LLVMObject;LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMWindowsManifest LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LTO )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_Remarks )

set(TARGET_TRIPLE "x86_64-unknown-linux-gnu")

set(LLVM_ABI_BREAKING_CHECKS WITH_ASSERTS)

set(LLVM_ENABLE_ASSERTIONS OFF)

set(LLVM_ENABLE_EH OFF)

set(LLVM_ENABLE_RTTI OFF)

set(LLVM_ENABLE_TERMINFO ON)

set(LLVM_ENABLE_THREADS ON)

set(LLVM_ENABLE_ZLIB ON)

set(LLVM_LIBXML2_ENABLED 0)

set(LLVM_WITH_Z3 1)

set(LLVM_ENABLE_DIA_SDK 0)

set(LLVM_NATIVE_ARCH X86)

set(LLVM_ENABLE_PIC ON)

set(LLVM_BUILD_32_BITS OFF)

if (NOT "-lpthread" STREQUAL "")
  set(LLVM_PTHREAD_LIB "-lpthread")
endif()

set(LLVM_ENABLE_PLUGINS ON)
set(LLVM_EXPORT_SYMBOLS_FOR_PLUGINS OFF)
set(LLVM_PLUGIN_EXT .so)

set(LLVM_ON_UNIX 1)

set(LLVM_LIBDIR_SUFFIX )

set(LLVM_INCLUDE_DIRS "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include;/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/include")
set(LLVM_LIBRARY_DIRS "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/./lib")

# These variables are duplicated for install tree but they have different
# values for build tree.  LLVM_INCLUDE_DIRS contains both source
# and generated include directories while the following variables have
# them split.
set(LLVM_INCLUDE_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/include")
set(LLVM_MAIN_INCLUDE_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include")
set(LLVM_LIBRARY_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/./lib")

set(LLVM_DEFINITIONS "-D_GNU_SOURCE -D__STDC_CONSTANT_MACROS -D__STDC_FORMAT_MACROS -D__STDC_LIMIT_MACROS")
set(LLVM_CMAKE_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake/modules")
set(LLVM_BINARY_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug")
set(LLVM_TOOLS_BINARY_DIR "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/./bin")
set(LLVM_TOOLS_INSTALL_DIR "bin")
set(LLVM_HAVE_OPT_VIEWER_MODULES 0)
set(LLVM_CONFIGURATION_TYPES )

if(NOT TARGET LLVMSupport)
  set(LLVM_EXPORTED_TARGETS "LLVMDemangle;LLVMSupport;LLVMTableGen;llvm-tblgen;LLVMCore;LLVMFuzzMutate;LLVMIRReader;LLVMCodeGen;LLVMSelectionDAG;LLVMAsmPrinter;LLVMMIRParser;LLVMGlobalISel;LLVMBinaryFormat;LLVMBitReader;LLVMBitWriter;LLVMBitstreamReader;LLVMTransformUtils;LLVMInstrumentation;LLVMAggressiveInstCombine;LLVMInstCombine;LLVMScalarOpts;LLVMipo;LLVMVectorize;LLVMObjCARCOpts;LLVMCoroutines;LLVMKingEncode;LLVMObfuscation;LLVMLinker;LLVMAnalysis;LLVMLTO;LLVMMC;LLVMMCParser;LLVMMCDisassembler;LLVMMCA;LLVMObject;LLVMObjectYAML;LLVMOption;LLVMRemarks;LLVMDebugInfoDWARF;LLVMDebugInfoGSYM;LLVMDebugInfoMSF;LLVMDebugInfoCodeView;LLVMDebugInfoPDB;LLVMSymbolize;LLVMExecutionEngine;LLVMInterpreter;LLVMJITLink;LLVMMCJIT;LLVMOrcJIT;LLVMRuntimeDyld;LLVMTarget;LLVMAArch64CodeGen;LLVMAArch64AsmParser;LLVMAArch64Disassembler;LLVMAArch64Desc;LLVMAArch64Info;LLVMAArch64Utils;LLVMAMDGPUCodeGen;LLVMAMDGPUAsmParser;LLVMAMDGPUDisassembler;LLVMAMDGPUDesc;LLVMAMDGPUInfo;LLVMAMDGPUUtils;LLVMARMCodeGen;LLVMARMAsmParser;LLVMARMDisassembler;LLVMARMDesc;LLVMARMInfo;LLVMARMUtils;LLVMBPFCodeGen;LLVMBPFAsmParser;LLVMBPFDisassembler;LLVMBPFDesc;LLVMBPFInfo;LLVMHexagonCodeGen;LLVMHexagonAsmParser;LLVMHexagonDisassembler;LLVMHexagonDesc;LLVMHexagonInfo;LLVMLanaiCodeGen;LLVMLanaiAsmParser;LLVMLanaiDisassembler;LLVMLanaiDesc;LLVMLanaiInfo;LLVMMipsCodeGen;LLVMMipsAsmParser;LLVMMipsDisassembler;LLVMMipsDesc;LLVMMipsInfo;LLVMMSP430CodeGen;LLVMMSP430Desc;LLVMMSP430Info;LLVMMSP430AsmParser;LLVMMSP430Disassembler;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo;LLVMPowerPCCodeGen;LLVMPowerPCAsmParser;LLVMPowerPCDisassembler;LLVMPowerPCDesc;LLVMPowerPCInfo;LLVMRISCVCodeGen;LLVMRISCVAsmParser;LLVMRISCVDisassembler;LLVMRISCVDesc;LLVMRISCVInfo;LLVMRISCVUtils;LLVMSparcCodeGen;LLVMSparcAsmParser;LLVMSparcDisassembler;LLVMSparcDesc;LLVMSparcInfo;LLVMSystemZCodeGen;LLVMSystemZAsmParser;LLVMSystemZDisassembler;LLVMSystemZDesc;LLVMSystemZInfo;LLVMWebAssemblyCodeGen;LLVMWebAssemblyAsmParser;LLVMWebAssemblyDisassembler;LLVMWebAssemblyDesc;LLVMWebAssemblyInfo;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Disassembler;LLVMX86Desc;LLVMX86Info;LLVMX86Utils;LLVMXCoreCodeGen;LLVMXCoreDisassembler;LLVMXCoreDesc;LLVMXCoreInfo;LLVMAsmParser;LLVMLineEditor;LLVMProfileData;LLVMCoverage;LLVMPasses;LLVMTextAPI;LLVMDlltoolDriver;LLVMLibDriver;LLVMXRay;LLVMWindowsManifest;LTO;llvm-ar;llvm-config;llvm-lto;llvm-profdata;bugpoint;dsymutil;llc;lli;llvm-as;llvm-bcanalyzer;llvm-c-test;llvm-cat;llvm-cfi-verify;llvm-cov;llvm-cvtres;llvm-cxxdump;llvm-cxxfilt;llvm-cxxmap;llvm-diff;llvm-dis;llvm-dwarfdump;llvm-dwp;llvm-elfabi;llvm-exegesis;llvm-extract;llvm-jitlink;llvm-link;llvm-lipo;llvm-lto2;llvm-mc;llvm-mca;llvm-modextract;llvm-mt;llvm-nm;llvm-objcopy;llvm-objdump;llvm-opt-report;llvm-pdbutil;llvm-rc;llvm-readobj;llvm-rtdyld;llvm-size;llvm-split;llvm-stress;llvm-strings;llvm-symbolizer;llvm-undname;llvm-xray;obj2yaml;opt;Remarks;sancov;sanstats;verify-uselistorder;yaml2obj;LLVMHello;LLVMTestingSupport;FileCheck;llvm-PerfectShuffle;count;not;yaml-bench;BugpointPasses;lli-child-target;TestPlugin;gtest;gtest_main")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/lib/cmake/llvm/LLVMExports.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/lib/cmake/llvm/LLVMBuildTreeOnlyTargets.cmake")
endif()

# By creating intrinsics_gen here, subprojects that depend on LLVM's
# tablegen-generated headers can always depend on this target whether building
# in-tree with LLVM or not.
if(NOT TARGET intrinsics_gen)
  add_custom_target(intrinsics_gen)
endif()

set_property(GLOBAL PROPERTY LLVM_TARGETS_CONFIGURED On)
include(${LLVM_CMAKE_DIR}/LLVM-Config.cmake)
