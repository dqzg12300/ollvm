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
include tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/flags.make

tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o: tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/flags.make
tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Analysis/plugins/SampleAnalyzer/MainCallChecker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Analysis/plugins/SampleAnalyzer/MainCallChecker.cpp

tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Analysis/plugins/SampleAnalyzer/MainCallChecker.cpp > CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.i

tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Analysis/plugins/SampleAnalyzer/MainCallChecker.cpp -o CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.s

# Object files for target SampleAnalyzerPlugin
SampleAnalyzerPlugin_OBJECTS = \
"CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o"

# External object files for target SampleAnalyzerPlugin
SampleAnalyzerPlugin_EXTERNAL_OBJECTS =

lib/SampleAnalyzerPlugin.so: tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/MainCallChecker.cpp.o
lib/SampleAnalyzerPlugin.so: tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/build.make
lib/SampleAnalyzerPlugin.so: lib/libLLVMSupport.a
lib/SampleAnalyzerPlugin.so: lib/libclangAnalysis.a
lib/SampleAnalyzerPlugin.so: lib/libclangAST.a
lib/SampleAnalyzerPlugin.so: lib/libclangStaticAnalyzerCore.a
lib/SampleAnalyzerPlugin.so: lib/libclangStaticAnalyzerFrontend.a
lib/SampleAnalyzerPlugin.so: lib/libclangStaticAnalyzerCheckers.a
lib/SampleAnalyzerPlugin.so: lib/libclangStaticAnalyzerCore.a
lib/SampleAnalyzerPlugin.so: lib/libclangCrossTU.a
lib/SampleAnalyzerPlugin.so: lib/libclangIndex.a
lib/SampleAnalyzerPlugin.so: lib/libclangFrontend.a
lib/SampleAnalyzerPlugin.so: lib/libclangDriver.a
lib/SampleAnalyzerPlugin.so: lib/libclangParse.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMMCParser.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMOption.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMProfileData.a
lib/SampleAnalyzerPlugin.so: lib/libclangSerialization.a
lib/SampleAnalyzerPlugin.so: lib/libclangSema.a
lib/SampleAnalyzerPlugin.so: lib/libclangAnalysis.a
lib/SampleAnalyzerPlugin.so: lib/libclangEdit.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMBitReader.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMBitstreamReader.a
lib/SampleAnalyzerPlugin.so: lib/libclangFormat.a
lib/SampleAnalyzerPlugin.so: lib/libclangToolingInclusions.a
lib/SampleAnalyzerPlugin.so: lib/libclangToolingCore.a
lib/SampleAnalyzerPlugin.so: lib/libclangRewrite.a
lib/SampleAnalyzerPlugin.so: lib/libclangASTMatchers.a
lib/SampleAnalyzerPlugin.so: lib/libclangAST.a
lib/SampleAnalyzerPlugin.so: lib/libclangLex.a
lib/SampleAnalyzerPlugin.so: lib/libclangBasic.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMCore.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMRemarks.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMMC.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMBinaryFormat.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMDebugInfoCodeView.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMDebugInfoMSF.a
lib/SampleAnalyzerPlugin.so: lib/libLLVMSupport.a
lib/SampleAnalyzerPlugin.so: /usr/lib/x86_64-linux-gnu/libz3.so
lib/SampleAnalyzerPlugin.so: lib/libLLVMDemangle.a
lib/SampleAnalyzerPlugin.so: tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module ../../../../../../lib/SampleAnalyzerPlugin.so"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SampleAnalyzerPlugin.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/build: lib/SampleAnalyzerPlugin.so

.PHONY : tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/build

tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer && $(CMAKE_COMMAND) -P CMakeFiles/SampleAnalyzerPlugin.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/clean

tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Analysis/plugins/SampleAnalyzer /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Analysis/plugins/SampleAnalyzer/CMakeFiles/SampleAnalyzerPlugin.dir/depend

