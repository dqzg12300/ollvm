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
include tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/flags.make

tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o: tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/flags.make
tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o: ../tools/llvm-lto2/llvm-lto2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-lto2/llvm-lto2.cpp

tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-lto2/llvm-lto2.cpp > CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.i

tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-lto2/llvm-lto2.cpp -o CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.s

# Object files for target llvm-lto2
llvm__lto2_OBJECTS = \
"CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o"

# External object files for target llvm-lto2
llvm__lto2_EXTERNAL_OBJECTS =

bin/llvm-lto2: tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/llvm-lto2.cpp.o
bin/llvm-lto2: tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/build.make
bin/llvm-lto2: lib/libLLVMAArch64AsmParser.a
bin/llvm-lto2: lib/libLLVMAMDGPUAsmParser.a
bin/llvm-lto2: lib/libLLVMARMAsmParser.a
bin/llvm-lto2: lib/libLLVMBPFAsmParser.a
bin/llvm-lto2: lib/libLLVMHexagonAsmParser.a
bin/llvm-lto2: lib/libLLVMLanaiAsmParser.a
bin/llvm-lto2: lib/libLLVMMipsAsmParser.a
bin/llvm-lto2: lib/libLLVMMSP430AsmParser.a
bin/llvm-lto2: lib/libLLVMPowerPCAsmParser.a
bin/llvm-lto2: lib/libLLVMRISCVAsmParser.a
bin/llvm-lto2: lib/libLLVMSparcAsmParser.a
bin/llvm-lto2: lib/libLLVMSystemZAsmParser.a
bin/llvm-lto2: lib/libLLVMWebAssemblyAsmParser.a
bin/llvm-lto2: lib/libLLVMX86AsmParser.a
bin/llvm-lto2: lib/libLLVMAArch64CodeGen.a
bin/llvm-lto2: lib/libLLVMAMDGPUCodeGen.a
bin/llvm-lto2: lib/libLLVMARMCodeGen.a
bin/llvm-lto2: lib/libLLVMBPFCodeGen.a
bin/llvm-lto2: lib/libLLVMHexagonCodeGen.a
bin/llvm-lto2: lib/libLLVMLanaiCodeGen.a
bin/llvm-lto2: lib/libLLVMMipsCodeGen.a
bin/llvm-lto2: lib/libLLVMMSP430CodeGen.a
bin/llvm-lto2: lib/libLLVMNVPTXCodeGen.a
bin/llvm-lto2: lib/libLLVMPowerPCCodeGen.a
bin/llvm-lto2: lib/libLLVMRISCVCodeGen.a
bin/llvm-lto2: lib/libLLVMSparcCodeGen.a
bin/llvm-lto2: lib/libLLVMSystemZCodeGen.a
bin/llvm-lto2: lib/libLLVMWebAssemblyCodeGen.a
bin/llvm-lto2: lib/libLLVMX86CodeGen.a
bin/llvm-lto2: lib/libLLVMXCoreCodeGen.a
bin/llvm-lto2: lib/libLLVMAArch64Desc.a
bin/llvm-lto2: lib/libLLVMAMDGPUDesc.a
bin/llvm-lto2: lib/libLLVMARMDesc.a
bin/llvm-lto2: lib/libLLVMBPFDesc.a
bin/llvm-lto2: lib/libLLVMHexagonDesc.a
bin/llvm-lto2: lib/libLLVMLanaiDesc.a
bin/llvm-lto2: lib/libLLVMMipsDesc.a
bin/llvm-lto2: lib/libLLVMMSP430Desc.a
bin/llvm-lto2: lib/libLLVMNVPTXDesc.a
bin/llvm-lto2: lib/libLLVMPowerPCDesc.a
bin/llvm-lto2: lib/libLLVMRISCVDesc.a
bin/llvm-lto2: lib/libLLVMSparcDesc.a
bin/llvm-lto2: lib/libLLVMSystemZDesc.a
bin/llvm-lto2: lib/libLLVMWebAssemblyDesc.a
bin/llvm-lto2: lib/libLLVMX86Desc.a
bin/llvm-lto2: lib/libLLVMXCoreDesc.a
bin/llvm-lto2: lib/libLLVMAArch64Info.a
bin/llvm-lto2: lib/libLLVMAMDGPUInfo.a
bin/llvm-lto2: lib/libLLVMARMInfo.a
bin/llvm-lto2: lib/libLLVMBPFInfo.a
bin/llvm-lto2: lib/libLLVMHexagonInfo.a
bin/llvm-lto2: lib/libLLVMLanaiInfo.a
bin/llvm-lto2: lib/libLLVMMipsInfo.a
bin/llvm-lto2: lib/libLLVMMSP430Info.a
bin/llvm-lto2: lib/libLLVMNVPTXInfo.a
bin/llvm-lto2: lib/libLLVMPowerPCInfo.a
bin/llvm-lto2: lib/libLLVMRISCVInfo.a
bin/llvm-lto2: lib/libLLVMSparcInfo.a
bin/llvm-lto2: lib/libLLVMSystemZInfo.a
bin/llvm-lto2: lib/libLLVMWebAssemblyInfo.a
bin/llvm-lto2: lib/libLLVMX86Info.a
bin/llvm-lto2: lib/libLLVMXCoreInfo.a
bin/llvm-lto2: lib/libLLVMBitReader.a
bin/llvm-lto2: lib/libLLVMCore.a
bin/llvm-lto2: lib/libLLVMLinker.a
bin/llvm-lto2: lib/libLLVMLTO.a
bin/llvm-lto2: lib/libLLVMMC.a
bin/llvm-lto2: lib/libLLVMObject.a
bin/llvm-lto2: lib/libLLVMSupport.a
bin/llvm-lto2: lib/libLLVMTarget.a
bin/llvm-lto2: lib/libLLVMAArch64Utils.a
bin/llvm-lto2: lib/libLLVMAMDGPUUtils.a
bin/llvm-lto2: lib/libLLVMMIRParser.a
bin/llvm-lto2: lib/libLLVMARMUtils.a
bin/llvm-lto2: lib/libLLVMHexagonAsmParser.a
bin/llvm-lto2: lib/libLLVMHexagonDesc.a
bin/llvm-lto2: lib/libLLVMHexagonInfo.a
bin/llvm-lto2: lib/libLLVMLanaiAsmParser.a
bin/llvm-lto2: lib/libLLVMLanaiDesc.a
bin/llvm-lto2: lib/libLLVMLanaiInfo.a
bin/llvm-lto2: lib/libLLVMRISCVUtils.a
bin/llvm-lto2: lib/libLLVMMCDisassembler.a
bin/llvm-lto2: lib/libLLVMGlobalISel.a
bin/llvm-lto2: lib/libLLVMX86Utils.a
bin/llvm-lto2: lib/libLLVMAsmPrinter.a
bin/llvm-lto2: lib/libLLVMDebugInfoDWARF.a
bin/llvm-lto2: lib/libLLVMSelectionDAG.a
bin/llvm-lto2: lib/libLLVMObjCARCOpts.a
bin/llvm-lto2: lib/libLLVMPasses.a
bin/llvm-lto2: lib/libLLVMCodeGen.a
bin/llvm-lto2: lib/libLLVMTarget.a
bin/llvm-lto2: lib/libLLVMipo.a
bin/llvm-lto2: lib/libLLVMLinker.a
bin/llvm-lto2: lib/libLLVMScalarOpts.a
bin/llvm-lto2: lib/libLLVMVectorize.a
bin/llvm-lto2: lib/libLLVMBitWriter.a
bin/llvm-lto2: lib/libLLVMIRReader.a
bin/llvm-lto2: lib/libLLVMAsmParser.a
bin/llvm-lto2: lib/libLLVMKingEncode.a
bin/llvm-lto2: lib/libLLVMObfuscation.a
bin/llvm-lto2: lib/libLLVMAggressiveInstCombine.a
bin/llvm-lto2: lib/libLLVMInstCombine.a
bin/llvm-lto2: lib/libLLVMInstrumentation.a
bin/llvm-lto2: lib/libLLVMTransformUtils.a
bin/llvm-lto2: lib/libLLVMAnalysis.a
bin/llvm-lto2: lib/libLLVMObject.a
bin/llvm-lto2: lib/libLLVMBitReader.a
bin/llvm-lto2: lib/libLLVMBitstreamReader.a
bin/llvm-lto2: lib/libLLVMMCParser.a
bin/llvm-lto2: lib/libLLVMMC.a
bin/llvm-lto2: lib/libLLVMDebugInfoCodeView.a
bin/llvm-lto2: lib/libLLVMDebugInfoMSF.a
bin/llvm-lto2: lib/libLLVMProfileData.a
bin/llvm-lto2: lib/libLLVMCore.a
bin/llvm-lto2: lib/libLLVMBinaryFormat.a
bin/llvm-lto2: lib/libLLVMRemarks.a
bin/llvm-lto2: lib/libLLVMSupport.a
bin/llvm-lto2: /usr/lib/x86_64-linux-gnu/libz3.so
bin/llvm-lto2: lib/libLLVMDemangle.a
bin/llvm-lto2: tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-lto2"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-lto2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/build: bin/llvm-lto2

.PHONY : tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/build

tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 && $(CMAKE_COMMAND) -P CMakeFiles/llvm-lto2.dir/cmake_clean.cmake
.PHONY : tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/clean

tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-lto2 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-lto2/CMakeFiles/llvm-lto2.dir/depend
