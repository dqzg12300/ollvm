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
include examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/depend.make

# Include the progress variables for this target.
include examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/progress.make

# Include the compile flags for this target's objects.
include examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/flags.make

examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o: examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/flags.make
examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o: ../examples/HowToUseLLJIT/HowToUseLLJIT.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/HowToUseLLJIT/HowToUseLLJIT.cpp

examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/HowToUseLLJIT/HowToUseLLJIT.cpp > CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.i

examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/HowToUseLLJIT/HowToUseLLJIT.cpp -o CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.s

# Object files for target HowToUseLLJIT
HowToUseLLJIT_OBJECTS = \
"CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o"

# External object files for target HowToUseLLJIT
HowToUseLLJIT_EXTERNAL_OBJECTS =

bin/HowToUseLLJIT: examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/HowToUseLLJIT.cpp.o
bin/HowToUseLLJIT: examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/build.make
bin/HowToUseLLJIT: lib/libLLVMCore.a
bin/HowToUseLLJIT: lib/libLLVMOrcJIT.a
bin/HowToUseLLJIT: lib/libLLVMSupport.a
bin/HowToUseLLJIT: lib/libLLVMX86CodeGen.a
bin/HowToUseLLJIT: lib/libLLVMX86Desc.a
bin/HowToUseLLJIT: lib/libLLVMX86Info.a
bin/HowToUseLLJIT: lib/libLLVMExecutionEngine.a
bin/HowToUseLLJIT: lib/libLLVMJITLink.a
bin/HowToUseLLJIT: lib/libLLVMRuntimeDyld.a
bin/HowToUseLLJIT: lib/libLLVMPasses.a
bin/HowToUseLLJIT: lib/libLLVMipo.a
bin/HowToUseLLJIT: lib/libLLVMInstrumentation.a
bin/HowToUseLLJIT: lib/libLLVMVectorize.a
bin/HowToUseLLJIT: lib/libLLVMIRReader.a
bin/HowToUseLLJIT: lib/libLLVMAsmParser.a
bin/HowToUseLLJIT: lib/libLLVMKingEncode.a
bin/HowToUseLLJIT: lib/libLLVMLinker.a
bin/HowToUseLLJIT: lib/libLLVMObfuscation.a
bin/HowToUseLLJIT: lib/libLLVMMCDisassembler.a
bin/HowToUseLLJIT: lib/libLLVMAsmPrinter.a
bin/HowToUseLLJIT: lib/libLLVMDebugInfoDWARF.a
bin/HowToUseLLJIT: lib/libLLVMGlobalISel.a
bin/HowToUseLLJIT: lib/libLLVMSelectionDAG.a
bin/HowToUseLLJIT: lib/libLLVMCodeGen.a
bin/HowToUseLLJIT: lib/libLLVMTarget.a
bin/HowToUseLLJIT: lib/libLLVMBitWriter.a
bin/HowToUseLLJIT: lib/libLLVMScalarOpts.a
bin/HowToUseLLJIT: lib/libLLVMAggressiveInstCombine.a
bin/HowToUseLLJIT: lib/libLLVMInstCombine.a
bin/HowToUseLLJIT: lib/libLLVMTransformUtils.a
bin/HowToUseLLJIT: lib/libLLVMAnalysis.a
bin/HowToUseLLJIT: lib/libLLVMObject.a
bin/HowToUseLLJIT: lib/libLLVMBitReader.a
bin/HowToUseLLJIT: lib/libLLVMBitstreamReader.a
bin/HowToUseLLJIT: lib/libLLVMMCParser.a
bin/HowToUseLLJIT: lib/libLLVMMC.a
bin/HowToUseLLJIT: lib/libLLVMDebugInfoCodeView.a
bin/HowToUseLLJIT: lib/libLLVMDebugInfoMSF.a
bin/HowToUseLLJIT: lib/libLLVMProfileData.a
bin/HowToUseLLJIT: lib/libLLVMCore.a
bin/HowToUseLLJIT: lib/libLLVMBinaryFormat.a
bin/HowToUseLLJIT: lib/libLLVMRemarks.a
bin/HowToUseLLJIT: lib/libLLVMX86Utils.a
bin/HowToUseLLJIT: lib/libLLVMSupport.a
bin/HowToUseLLJIT: /usr/lib/x86_64-linux-gnu/libz3.so
bin/HowToUseLLJIT: lib/libLLVMDemangle.a
bin/HowToUseLLJIT: examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/HowToUseLLJIT"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/HowToUseLLJIT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/build: bin/HowToUseLLJIT

.PHONY : examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/build

examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT && $(CMAKE_COMMAND) -P CMakeFiles/HowToUseLLJIT.dir/cmake_clean.cmake
.PHONY : examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/clean

examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/examples/HowToUseLLJIT /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/HowToUseLLJIT/CMakeFiles/HowToUseLLJIT.dir/depend

