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
include lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/depend.make

# Include the progress variables for this target.
include lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/flags.make

lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o: lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/flags.make
lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o: ../lib/Target/Mips/TargetInfo/MipsTargetInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/TargetInfo/MipsTargetInfo.cpp

lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/TargetInfo/MipsTargetInfo.cpp > CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.i

lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/TargetInfo/MipsTargetInfo.cpp -o CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.s

# Object files for target LLVMMipsInfo
LLVMMipsInfo_OBJECTS = \
"CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o"

# External object files for target LLVMMipsInfo
LLVMMipsInfo_EXTERNAL_OBJECTS =

lib/libLLVMMipsInfo.a: lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/MipsTargetInfo.cpp.o
lib/libLLVMMipsInfo.a: lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/build.make
lib/libLLVMMipsInfo.a: lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMMipsInfo.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsInfo.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMipsInfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/build: lib/libLLVMMipsInfo.a

.PHONY : lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/build

lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsInfo.dir/cmake_clean.cmake
.PHONY : lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/clean

lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Mips/TargetInfo/CMakeFiles/LLVMMipsInfo.dir/depend

