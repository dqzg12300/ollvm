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
include unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/depend.make

# Include the progress variables for this target.
include unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/flags.make

unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o: unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/flags.make
unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o: ../unittests/tools/llvm-exegesis/AArch64/TargetTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/tools/llvm-exegesis/AArch64/TargetTest.cpp

unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/tools/llvm-exegesis/AArch64/TargetTest.cpp > CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.i

unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/tools/llvm-exegesis/AArch64/TargetTest.cpp -o CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.s

# Object files for target LLVMExegesisAArch64Tests
LLVMExegesisAArch64Tests_OBJECTS = \
"CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o"

# External object files for target LLVMExegesisAArch64Tests
LLVMExegesisAArch64Tests_EXTERNAL_OBJECTS =

unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/TargetTest.cpp.o
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/build.make
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMC.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMCParser.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMObject.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMSupport.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMSymbolize.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64CodeGen.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64AsmParser.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Desc.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Disassembler.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Info.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Utils.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMSupport.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libgtest_main.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libgtest.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMExegesis.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMExegesisAArch64.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMDebugInfoPDB.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64CodeGen.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAsmPrinter.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMDebugInfoDWARF.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64AsmParser.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Disassembler.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Desc.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Info.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAArch64Utils.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMExegesis.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMGlobalISel.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMSelectionDAG.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMCodeGen.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMScalarOpts.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAggressiveInstCombine.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMInstCombine.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMBitWriter.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMTransformUtils.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMCDisassembler.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMCJIT.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMExecutionEngine.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMTarget.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMAnalysis.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMProfileData.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMRuntimeDyld.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMObjectYAML.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMObject.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMCParser.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMMC.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMBitReader.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMBitstreamReader.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMCore.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMBinaryFormat.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMRemarks.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMDebugInfoCodeView.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMDebugInfoMSF.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMSupport.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: /usr/lib/x86_64-linux-gnu/libz3.so
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: lib/libLLVMDemangle.a
unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests: unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LLVMExegesisAArch64Tests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMExegesisAArch64Tests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/build: unittests/tools/llvm-exegesis/AArch64/LLVMExegesisAArch64Tests

.PHONY : unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/build

unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 && $(CMAKE_COMMAND) -P CMakeFiles/LLVMExegesisAArch64Tests.dir/cmake_clean.cmake
.PHONY : unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/clean

unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/tools/llvm-exegesis/AArch64 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/tools/llvm-exegesis/AArch64/CMakeFiles/LLVMExegesisAArch64Tests.dir/depend

