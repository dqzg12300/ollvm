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
include tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/depend.make

# Include the progress variables for this target.
include tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/flags.make

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.o: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/flags.make
tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/c-index-test.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -std=gnu89 -o CMakeFiles/c-index-test.dir/c-index-test.c.o   -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/c-index-test.c

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c-index-test.dir/c-index-test.c.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -std=gnu89 -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/c-index-test.c > CMakeFiles/c-index-test.dir/c-index-test.c.i

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c-index-test.dir/c-index-test.c.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -std=gnu89 -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/c-index-test.c -o CMakeFiles/c-index-test.dir/c-index-test.c.s

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.o: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/flags.make
tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/core_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -o CMakeFiles/c-index-test.dir/core_main.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/core_main.cpp

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c-index-test.dir/core_main.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/core_main.cpp > CMakeFiles/c-index-test.dir/core_main.cpp.i

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c-index-test.dir/core_main.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS)  -fno-exceptions -fno-rtti -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test/core_main.cpp -o CMakeFiles/c-index-test.dir/core_main.cpp.s

# Object files for target c-index-test
c__index__test_OBJECTS = \
"CMakeFiles/c-index-test.dir/c-index-test.c.o" \
"CMakeFiles/c-index-test.dir/core_main.cpp.o"

# External object files for target c-index-test
c__index__test_EXTERNAL_OBJECTS =

bin/c-index-test: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/c-index-test.c.o
bin/c-index-test: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/core_main.cpp.o
bin/c-index-test: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/build.make
bin/c-index-test: lib/libLLVMSupport.a
bin/c-index-test: lib/libclang.so.9
bin/c-index-test: lib/libclangAST.a
bin/c-index-test: lib/libclangBasic.a
bin/c-index-test: lib/libclangCodeGen.a
bin/c-index-test: lib/libclangFrontend.a
bin/c-index-test: lib/libclangIndex.a
bin/c-index-test: lib/libclangSerialization.a
bin/c-index-test: lib/libLLVMCoroutines.a
bin/c-index-test: lib/libLLVMCoverage.a
bin/c-index-test: lib/libLLVMLTO.a
bin/c-index-test: lib/libLLVMObjCARCOpts.a
bin/c-index-test: lib/libLLVMPasses.a
bin/c-index-test: lib/libLLVMipo.a
bin/c-index-test: lib/libLLVMIRReader.a
bin/c-index-test: lib/libLLVMAsmParser.a
bin/c-index-test: lib/libLLVMLinker.a
bin/c-index-test: lib/libLLVMKingEncode.a
bin/c-index-test: lib/libLLVMObfuscation.a
bin/c-index-test: lib/libLLVMInstrumentation.a
bin/c-index-test: lib/libLLVMVectorize.a
bin/c-index-test: lib/libLLVMCodeGen.a
bin/c-index-test: lib/libLLVMBitWriter.a
bin/c-index-test: lib/libLLVMScalarOpts.a
bin/c-index-test: lib/libLLVMAggressiveInstCombine.a
bin/c-index-test: lib/libLLVMInstCombine.a
bin/c-index-test: lib/libLLVMTarget.a
bin/c-index-test: lib/libLLVMTransformUtils.a
bin/c-index-test: lib/libLLVMAnalysis.a
bin/c-index-test: lib/libLLVMObject.a
bin/c-index-test: lib/libclangFrontend.a
bin/c-index-test: lib/libLLVMProfileData.a
bin/c-index-test: lib/libclangDriver.a
bin/c-index-test: lib/libclangParse.a
bin/c-index-test: lib/libLLVMMCParser.a
bin/c-index-test: lib/libLLVMOption.a
bin/c-index-test: lib/libclangSerialization.a
bin/c-index-test: lib/libLLVMBitReader.a
bin/c-index-test: lib/libclangSema.a
bin/c-index-test: lib/libclangAnalysis.a
bin/c-index-test: lib/libclangASTMatchers.a
bin/c-index-test: lib/libclangEdit.a
bin/c-index-test: lib/libLLVMBitstreamReader.a
bin/c-index-test: lib/libclangFormat.a
bin/c-index-test: lib/libclangToolingInclusions.a
bin/c-index-test: lib/libclangToolingCore.a
bin/c-index-test: lib/libclangAST.a
bin/c-index-test: lib/libclangRewrite.a
bin/c-index-test: lib/libclangLex.a
bin/c-index-test: lib/libclangBasic.a
bin/c-index-test: lib/libLLVMCore.a
bin/c-index-test: lib/libLLVMRemarks.a
bin/c-index-test: lib/libLLVMMC.a
bin/c-index-test: lib/libLLVMBinaryFormat.a
bin/c-index-test: lib/libLLVMDebugInfoCodeView.a
bin/c-index-test: lib/libLLVMDebugInfoMSF.a
bin/c-index-test: lib/libLLVMSupport.a
bin/c-index-test: /usr/lib/x86_64-linux-gnu/libz3.so
bin/c-index-test: lib/libLLVMDemangle.a
bin/c-index-test: tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../../../bin/c-index-test"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c-index-test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/build: bin/c-index-test

.PHONY : tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/build

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test && $(CMAKE_COMMAND) -P CMakeFiles/c-index-test.dir/cmake_clean.cmake
.PHONY : tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/clean

tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/c-index-test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/tools/c-index-test/CMakeFiles/c-index-test.dir/depend

