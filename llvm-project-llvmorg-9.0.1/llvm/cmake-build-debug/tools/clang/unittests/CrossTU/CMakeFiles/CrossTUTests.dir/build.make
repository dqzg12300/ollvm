# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/king/clion/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/king/clion/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug

# Include any dependencies generated for this target.
include tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/depend.make

# Include the progress variables for this target.
include tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/flags.make

tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o: tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/flags.make
tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/CrossTU/CrossTranslationUnitTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/CrossTU/CrossTranslationUnitTest.cpp

tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/CrossTU/CrossTranslationUnitTest.cpp > CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.i

tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/CrossTU/CrossTranslationUnitTest.cpp -o CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.s

# Object files for target CrossTUTests
CrossTUTests_OBJECTS = \
"CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o"

# External object files for target CrossTUTests
CrossTUTests_EXTERNAL_OBJECTS =

tools/clang/unittests/CrossTU/CrossTUTests: tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/CrossTranslationUnitTest.cpp.o
tools/clang/unittests/CrossTU/CrossTUTests: tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/build.make
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64CodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64AsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Desc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Disassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Info.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Utils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBPFCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBPFAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBPFDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBPFDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBPFInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMipsCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMipsAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMipsDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMipsDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMipsInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMSP430CodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMSP430AsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMSP430Desc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMSP430Disassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMSP430Info.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMNVPTXCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMNVPTXDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMNVPTXInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMPowerPCCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMPowerPCAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMPowerPCDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMPowerPCDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMPowerPCInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRISCVUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSparcCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSparcAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSparcDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSparcDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSparcInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86CodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86AsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86Desc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86Disassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86Info.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMX86Utils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMXCoreCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMXCoreDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMXCoreDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMXCoreInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSupport.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSupport.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libgtest_main.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libgtest.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangAST.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangBasic.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangCrossTU.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangFrontend.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangSerialization.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangTooling.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Desc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Info.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAArch64Utils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMIRParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAMDGPUUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMARMUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMHexagonInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLanaiInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMipo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMVectorize.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMIRReader.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAsmParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMInstrumentation.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMKingEncode.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMLinker.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMObfuscation.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSystemZInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyDesc.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMWebAssemblyInfo.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMGlobalISel.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAsmPrinter.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMDebugInfoDWARF.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSelectionDAG.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMCodeGen.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMScalarOpts.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAggressiveInstCombine.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMInstCombine.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBitWriter.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMTarget.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMTransformUtils.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMAnalysis.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMObject.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMCDisassembler.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangIndex.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangFrontend.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMProfileData.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangParse.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMCParser.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangSerialization.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangSema.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangEdit.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangAnalysis.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBitReader.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBitstreamReader.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangDriver.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMOption.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangASTMatchers.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangFormat.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangToolingInclusions.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangToolingCore.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangAST.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangRewrite.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangLex.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libclangBasic.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMCore.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMRemarks.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMMC.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMBinaryFormat.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMDebugInfoCodeView.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMDebugInfoMSF.a
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMSupport.a
tools/clang/unittests/CrossTU/CrossTUTests: /usr/lib/x86_64-linux-gnu/libz3.so
tools/clang/unittests/CrossTU/CrossTUTests: lib/libLLVMDemangle.a
tools/clang/unittests/CrossTU/CrossTUTests: tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CrossTUTests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CrossTUTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/build: tools/clang/unittests/CrossTU/CrossTUTests

.PHONY : tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/build

tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU && $(CMAKE_COMMAND) -P CMakeFiles/CrossTUTests.dir/cmake_clean.cmake
.PHONY : tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/clean

tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/CrossTU /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/unittests/CrossTU/CMakeFiles/CrossTUTests.dir/depend

