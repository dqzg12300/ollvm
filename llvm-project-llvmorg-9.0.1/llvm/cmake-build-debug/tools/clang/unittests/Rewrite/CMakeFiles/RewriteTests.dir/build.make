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
include tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/depend.make

# Include the progress variables for this target.
include tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/flags.make

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/flags.make
tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriteBufferTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriteBufferTest.cpp

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriteBufferTest.cpp > CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.i

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriteBufferTest.cpp -o CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.s

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/flags.make
tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriterTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriterTest.cpp

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RewriteTests.dir/RewriterTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriterTest.cpp > CMakeFiles/RewriteTests.dir/RewriterTest.cpp.i

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RewriteTests.dir/RewriterTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite/RewriterTest.cpp -o CMakeFiles/RewriteTests.dir/RewriterTest.cpp.s

# Object files for target RewriteTests
RewriteTests_OBJECTS = \
"CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o" \
"CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o"

# External object files for target RewriteTests
RewriteTests_EXTERNAL_OBJECTS =

tools/clang/unittests/Rewrite/RewriteTests: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriteBufferTest.cpp.o
tools/clang/unittests/Rewrite/RewriteTests: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/RewriterTest.cpp.o
tools/clang/unittests/Rewrite/RewriteTests: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/build.make
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMSupport.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMSupport.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libgtest_main.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libgtest.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangFrontend.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangRewrite.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangSerialization.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangTooling.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangFrontend.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangParse.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMMCParser.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMProfileData.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangSerialization.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangSema.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangEdit.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangAnalysis.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMBitReader.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMBitstreamReader.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangDriver.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMOption.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangASTMatchers.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangFormat.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangToolingInclusions.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangToolingCore.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangRewrite.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangAST.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangLex.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libclangBasic.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMCore.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMRemarks.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMMC.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMBinaryFormat.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMDebugInfoCodeView.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMDebugInfoMSF.a
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMSupport.a
tools/clang/unittests/Rewrite/RewriteTests: /usr/lib/x86_64-linux-gnu/libz3.so
tools/clang/unittests/Rewrite/RewriteTests: lib/libLLVMDemangle.a
tools/clang/unittests/Rewrite/RewriteTests: tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RewriteTests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RewriteTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/build: tools/clang/unittests/Rewrite/RewriteTests

.PHONY : tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/build

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite && $(CMAKE_COMMAND) -P CMakeFiles/RewriteTests.dir/cmake_clean.cmake
.PHONY : tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/clean

tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/unittests/Rewrite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/unittests/Rewrite/CMakeFiles/RewriteTests.dir/depend

