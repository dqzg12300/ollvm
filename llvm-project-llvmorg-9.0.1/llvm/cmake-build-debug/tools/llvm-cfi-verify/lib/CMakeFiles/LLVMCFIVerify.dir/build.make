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
include tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/flags.make

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/flags.make
tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o: ../tools/llvm-cfi-verify/lib/FileAnalysis.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/FileAnalysis.cpp

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/FileAnalysis.cpp > CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.i

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/FileAnalysis.cpp -o CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.s

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/flags.make
tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o: ../tools/llvm-cfi-verify/lib/GraphBuilder.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/GraphBuilder.cpp

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/GraphBuilder.cpp > CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.i

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib/GraphBuilder.cpp -o CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.s

# Object files for target LLVMCFIVerify
LLVMCFIVerify_OBJECTS = \
"CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o" \
"CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o"

# External object files for target LLVMCFIVerify
LLVMCFIVerify_EXTERNAL_OBJECTS =

lib/libLLVMCFIVerify.a: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/FileAnalysis.cpp.o
lib/libLLVMCFIVerify.a: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/GraphBuilder.cpp.o
lib/libLLVMCFIVerify.a: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/build.make
lib/libLLVMCFIVerify.a: tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../../lib/libLLVMCFIVerify.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && $(CMAKE_COMMAND) -P CMakeFiles/LLVMCFIVerify.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMCFIVerify.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/build: lib/libLLVMCFIVerify.a

.PHONY : tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/build

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib && $(CMAKE_COMMAND) -P CMakeFiles/LLVMCFIVerify.dir/cmake_clean.cmake
.PHONY : tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/clean

tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cfi-verify/lib /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-cfi-verify/lib/CMakeFiles/LLVMCFIVerify.dir/depend

