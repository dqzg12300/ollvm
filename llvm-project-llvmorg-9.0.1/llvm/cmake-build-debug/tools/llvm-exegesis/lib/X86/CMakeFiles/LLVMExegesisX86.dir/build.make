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
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/flags.make

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/flags.make
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o: ../tools/llvm-exegesis/lib/X86/Target.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-exegesis/lib/X86/Target.cpp

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-exegesis/lib/X86/Target.cpp > CMakeFiles/LLVMExegesisX86.dir/Target.cpp.i

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-exegesis/lib/X86/Target.cpp -o CMakeFiles/LLVMExegesisX86.dir/Target.cpp.s

# Object files for target LLVMExegesisX86
LLVMExegesisX86_OBJECTS = \
"CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o"

# External object files for target LLVMExegesisX86
LLVMExegesisX86_EXTERNAL_OBJECTS =

lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/Target.cpp.o
lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build.make
lib/libLLVMExegesisX86.a: tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../../lib/libLLVMExegesisX86.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -P CMakeFiles/LLVMExegesisX86.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMExegesisX86.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build: lib/libLLVMExegesisX86.a

.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/build

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 && $(CMAKE_COMMAND) -P CMakeFiles/LLVMExegesisX86.dir/cmake_clean.cmake
.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/clean

tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-exegesis/lib/X86 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86 /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-exegesis/lib/X86/CMakeFiles/LLVMExegesisX86.dir/depend

