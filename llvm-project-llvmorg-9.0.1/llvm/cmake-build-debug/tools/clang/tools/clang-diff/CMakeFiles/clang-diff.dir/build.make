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
include tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/depend.make

# Include the progress variables for this target.
include tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/flags.make

tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.o: tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/flags.make
tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/clang-diff/ClangDiff.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/clang-diff.dir/ClangDiff.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/clang-diff/ClangDiff.cpp

tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/clang-diff.dir/ClangDiff.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/clang-diff/ClangDiff.cpp > CMakeFiles/clang-diff.dir/ClangDiff.cpp.i

tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/clang-diff.dir/ClangDiff.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/clang-diff/ClangDiff.cpp -o CMakeFiles/clang-diff.dir/ClangDiff.cpp.s

# Object files for target clang-diff
clang__diff_OBJECTS = \
"CMakeFiles/clang-diff.dir/ClangDiff.cpp.o"

# External object files for target clang-diff
clang__diff_EXTERNAL_OBJECTS =

bin/clang-diff: tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/ClangDiff.cpp.o
bin/clang-diff: tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/build.make
bin/clang-diff: lib/libLLVMSupport.a
bin/clang-diff: lib/libclangBasic.a
bin/clang-diff: lib/libclangFrontend.a
bin/clang-diff: lib/libclangSerialization.a
bin/clang-diff: lib/libclangTooling.a
bin/clang-diff: lib/libclangToolingASTDiff.a
bin/clang-diff: lib/libclangFrontend.a
bin/clang-diff: lib/libclangParse.a
bin/clang-diff: lib/libLLVMMCParser.a
bin/clang-diff: lib/libLLVMProfileData.a
bin/clang-diff: lib/libclangSerialization.a
bin/clang-diff: lib/libclangSema.a
bin/clang-diff: lib/libclangEdit.a
bin/clang-diff: lib/libclangAnalysis.a
bin/clang-diff: lib/libLLVMBitReader.a
bin/clang-diff: lib/libLLVMBitstreamReader.a
bin/clang-diff: lib/libclangDriver.a
bin/clang-diff: lib/libLLVMOption.a
bin/clang-diff: lib/libclangASTMatchers.a
bin/clang-diff: lib/libclangFormat.a
bin/clang-diff: lib/libclangToolingInclusions.a
bin/clang-diff: lib/libclangToolingCore.a
bin/clang-diff: lib/libclangRewrite.a
bin/clang-diff: lib/libclangAST.a
bin/clang-diff: lib/libclangLex.a
bin/clang-diff: lib/libclangBasic.a
bin/clang-diff: lib/libLLVMCore.a
bin/clang-diff: lib/libLLVMRemarks.a
bin/clang-diff: lib/libLLVMMC.a
bin/clang-diff: lib/libLLVMBinaryFormat.a
bin/clang-diff: lib/libLLVMDebugInfoCodeView.a
bin/clang-diff: lib/libLLVMDebugInfoMSF.a
bin/clang-diff: lib/libLLVMSupport.a
bin/clang-diff: /usr/lib/x86_64-linux-gnu/libz3.so
bin/clang-diff: lib/libLLVMDemangle.a
bin/clang-diff: tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../../../bin/clang-diff"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clang-diff.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/build: bin/clang-diff

.PHONY : tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/build

tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff && $(CMAKE_COMMAND) -P CMakeFiles/clang-diff.dir/cmake_clean.cmake
.PHONY : tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/clean

tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/clang-diff /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/tools/clang-diff/CMakeFiles/clang-diff.dir/depend

