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
include examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/depend.make

# Include the progress variables for this target.
include examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/progress.make

# Include the compile flags for this target's objects.
include examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/flags.make

examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o: examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/flags.make
examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o: ../examples/Kaleidoscope/Chapter9/toy.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/Chapter9/toy.cpp

examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/Chapter9/toy.cpp > CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.i

examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/Chapter9/toy.cpp -o CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.s

# Object files for target Kaleidoscope-Ch9
Kaleidoscope__Ch9_OBJECTS = \
"CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o"

# External object files for target Kaleidoscope-Ch9
Kaleidoscope__Ch9_EXTERNAL_OBJECTS =

bin/Kaleidoscope-Ch9: examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/toy.cpp.o
bin/Kaleidoscope-Ch9: examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/build.make
bin/Kaleidoscope-Ch9: lib/libLLVMCore.a
bin/Kaleidoscope-Ch9: lib/libLLVMExecutionEngine.a
bin/Kaleidoscope-Ch9: lib/libLLVMObject.a
bin/Kaleidoscope-Ch9: lib/libLLVMOrcJIT.a
bin/Kaleidoscope-Ch9: lib/libLLVMSupport.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86CodeGen.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86AsmParser.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86Desc.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86Disassembler.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86Info.a
bin/Kaleidoscope-Ch9: lib/libLLVMX86Utils.a
bin/Kaleidoscope-Ch9: lib/libLLVMExecutionEngine.a
bin/Kaleidoscope-Ch9: lib/libLLVMRuntimeDyld.a
bin/Kaleidoscope-Ch9: lib/libLLVMJITLink.a
bin/Kaleidoscope-Ch9: lib/libLLVMPasses.a
bin/Kaleidoscope-Ch9: lib/libLLVMipo.a
bin/Kaleidoscope-Ch9: lib/libLLVMInstrumentation.a
bin/Kaleidoscope-Ch9: lib/libLLVMVectorize.a
bin/Kaleidoscope-Ch9: lib/libLLVMIRReader.a
bin/Kaleidoscope-Ch9: lib/libLLVMAsmParser.a
bin/Kaleidoscope-Ch9: lib/libLLVMKingEncode.a
bin/Kaleidoscope-Ch9: lib/libLLVMLinker.a
bin/Kaleidoscope-Ch9: lib/libLLVMObfuscation.a
bin/Kaleidoscope-Ch9: lib/libLLVMAsmPrinter.a
bin/Kaleidoscope-Ch9: lib/libLLVMDebugInfoDWARF.a
bin/Kaleidoscope-Ch9: lib/libLLVMGlobalISel.a
bin/Kaleidoscope-Ch9: lib/libLLVMSelectionDAG.a
bin/Kaleidoscope-Ch9: lib/libLLVMCodeGen.a
bin/Kaleidoscope-Ch9: lib/libLLVMTarget.a
bin/Kaleidoscope-Ch9: lib/libLLVMBitWriter.a
bin/Kaleidoscope-Ch9: lib/libLLVMScalarOpts.a
bin/Kaleidoscope-Ch9: lib/libLLVMAggressiveInstCombine.a
bin/Kaleidoscope-Ch9: lib/libLLVMInstCombine.a
bin/Kaleidoscope-Ch9: lib/libLLVMTransformUtils.a
bin/Kaleidoscope-Ch9: lib/libLLVMAnalysis.a
bin/Kaleidoscope-Ch9: lib/libLLVMProfileData.a
bin/Kaleidoscope-Ch9: lib/libLLVMObject.a
bin/Kaleidoscope-Ch9: lib/libLLVMBitReader.a
bin/Kaleidoscope-Ch9: lib/libLLVMCore.a
bin/Kaleidoscope-Ch9: lib/libLLVMRemarks.a
bin/Kaleidoscope-Ch9: lib/libLLVMBitstreamReader.a
bin/Kaleidoscope-Ch9: lib/libLLVMMCParser.a
bin/Kaleidoscope-Ch9: lib/libLLVMMCDisassembler.a
bin/Kaleidoscope-Ch9: lib/libLLVMMC.a
bin/Kaleidoscope-Ch9: lib/libLLVMBinaryFormat.a
bin/Kaleidoscope-Ch9: lib/libLLVMDebugInfoCodeView.a
bin/Kaleidoscope-Ch9: lib/libLLVMDebugInfoMSF.a
bin/Kaleidoscope-Ch9: lib/libLLVMSupport.a
bin/Kaleidoscope-Ch9: /usr/lib/x86_64-linux-gnu/libz3.so
bin/Kaleidoscope-Ch9: lib/libLLVMDemangle.a
bin/Kaleidoscope-Ch9: examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../bin/Kaleidoscope-Ch9"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Kaleidoscope-Ch9.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/build: bin/Kaleidoscope-Ch9

.PHONY : examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/build

examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 && $(CMAKE_COMMAND) -P CMakeFiles/Kaleidoscope-Ch9.dir/cmake_clean.cmake
.PHONY : examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/clean

examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/Kaleidoscope/Chapter9 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/Kaleidoscope/Chapter9/CMakeFiles/Kaleidoscope-Ch9.dir/depend

