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
include examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/depend.make

# Include the progress variables for this target.
include examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/progress.make

# Include the compile flags for this target's objects.
include examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/flags.make

examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o: examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/flags.make
examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o: ../examples/Kaleidoscope/BuildingAJIT/Chapter4/toy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/BuildingAJIT/Chapter4/toy.cpp

examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/BuildingAJIT/Chapter4/toy.cpp > CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.i

examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/BuildingAJIT/Chapter4/toy.cpp -o CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.s

# Object files for target BuildingAJIT-Ch4
BuildingAJIT__Ch4_OBJECTS = \
"CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o"

# External object files for target BuildingAJIT-Ch4
BuildingAJIT__Ch4_EXTERNAL_OBJECTS =

bin/BuildingAJIT-Ch4: examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/toy.cpp.o
bin/BuildingAJIT-Ch4: examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/build.make
bin/BuildingAJIT-Ch4: lib/libLLVMAnalysis.a
bin/BuildingAJIT-Ch4: lib/libLLVMCore.a
bin/BuildingAJIT-Ch4: lib/libLLVMExecutionEngine.a
bin/BuildingAJIT-Ch4: lib/libLLVMInstCombine.a
bin/BuildingAJIT-Ch4: lib/libLLVMObject.a
bin/BuildingAJIT-Ch4: lib/libLLVMOrcJIT.a
bin/BuildingAJIT-Ch4: lib/libLLVMRuntimeDyld.a
bin/BuildingAJIT-Ch4: lib/libLLVMScalarOpts.a
bin/BuildingAJIT-Ch4: lib/libLLVMSupport.a
bin/BuildingAJIT-Ch4: lib/libLLVMTransformUtils.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86CodeGen.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86AsmParser.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86Desc.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86Disassembler.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86Info.a
bin/BuildingAJIT-Ch4: lib/libLLVMX86Utils.a
bin/BuildingAJIT-Ch4: lib/libLLVMExecutionEngine.a
bin/BuildingAJIT-Ch4: lib/libLLVMRuntimeDyld.a
bin/BuildingAJIT-Ch4: lib/libLLVMJITLink.a
bin/BuildingAJIT-Ch4: lib/libLLVMPasses.a
bin/BuildingAJIT-Ch4: lib/libLLVMipo.a
bin/BuildingAJIT-Ch4: lib/libLLVMInstrumentation.a
bin/BuildingAJIT-Ch4: lib/libLLVMVectorize.a
bin/BuildingAJIT-Ch4: lib/libLLVMIRReader.a
bin/BuildingAJIT-Ch4: lib/libLLVMAsmParser.a
bin/BuildingAJIT-Ch4: lib/libLLVMKingEncode.a
bin/BuildingAJIT-Ch4: lib/libLLVMLinker.a
bin/BuildingAJIT-Ch4: lib/libLLVMObfuscation.a
bin/BuildingAJIT-Ch4: lib/libLLVMAsmPrinter.a
bin/BuildingAJIT-Ch4: lib/libLLVMDebugInfoDWARF.a
bin/BuildingAJIT-Ch4: lib/libLLVMGlobalISel.a
bin/BuildingAJIT-Ch4: lib/libLLVMSelectionDAG.a
bin/BuildingAJIT-Ch4: lib/libLLVMCodeGen.a
bin/BuildingAJIT-Ch4: lib/libLLVMScalarOpts.a
bin/BuildingAJIT-Ch4: lib/libLLVMInstCombine.a
bin/BuildingAJIT-Ch4: lib/libLLVMAggressiveInstCombine.a
bin/BuildingAJIT-Ch4: lib/libLLVMTransformUtils.a
bin/BuildingAJIT-Ch4: lib/libLLVMTarget.a
bin/BuildingAJIT-Ch4: lib/libLLVMBitWriter.a
bin/BuildingAJIT-Ch4: lib/libLLVMAnalysis.a
bin/BuildingAJIT-Ch4: lib/libLLVMProfileData.a
bin/BuildingAJIT-Ch4: lib/libLLVMObject.a
bin/BuildingAJIT-Ch4: lib/libLLVMBitReader.a
bin/BuildingAJIT-Ch4: lib/libLLVMCore.a
bin/BuildingAJIT-Ch4: lib/libLLVMRemarks.a
bin/BuildingAJIT-Ch4: lib/libLLVMBitstreamReader.a
bin/BuildingAJIT-Ch4: lib/libLLVMMCParser.a
bin/BuildingAJIT-Ch4: lib/libLLVMMCDisassembler.a
bin/BuildingAJIT-Ch4: lib/libLLVMMC.a
bin/BuildingAJIT-Ch4: lib/libLLVMBinaryFormat.a
bin/BuildingAJIT-Ch4: lib/libLLVMDebugInfoCodeView.a
bin/BuildingAJIT-Ch4: lib/libLLVMDebugInfoMSF.a
bin/BuildingAJIT-Ch4: lib/libLLVMSupport.a
bin/BuildingAJIT-Ch4: /usr/lib/x86_64-linux-gnu/libz3.so
bin/BuildingAJIT-Ch4: lib/libLLVMDemangle.a
bin/BuildingAJIT-Ch4: examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../bin/BuildingAJIT-Ch4"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/BuildingAJIT-Ch4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/build: bin/BuildingAJIT-Ch4

.PHONY : examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/build

examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 && $(CMAKE_COMMAND) -P CMakeFiles/BuildingAJIT-Ch4.dir/cmake_clean.cmake
.PHONY : examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/clean

examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/BuildingAJIT/Chapter4 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/Kaleidoscope/BuildingAJIT/Chapter4/CMakeFiles/BuildingAJIT-Ch4.dir/depend

