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
include lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/depend.make

# Include the progress variables for this target.
include lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/flags.make

lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o: lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/flags.make
lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o: ../lib/Target/Mips/Disassembler/MipsDisassembler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/Disassembler/MipsDisassembler.cpp

lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/Disassembler/MipsDisassembler.cpp > CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.i

lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/Disassembler/MipsDisassembler.cpp -o CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.s

# Object files for target LLVMMipsDisassembler
LLVMMipsDisassembler_OBJECTS = \
"CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o"

# External object files for target LLVMMipsDisassembler
LLVMMipsDisassembler_EXTERNAL_OBJECTS =

lib/libLLVMMipsDisassembler.a: lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/MipsDisassembler.cpp.o
lib/libLLVMMipsDisassembler.a: lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/build.make
lib/libLLVMMipsDisassembler.a: lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMMipsDisassembler.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsDisassembler.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMipsDisassembler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/build: lib/libLLVMMipsDisassembler.a

.PHONY : lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/build

lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMipsDisassembler.dir/cmake_clean.cmake
.PHONY : lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/clean

lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/Mips/Disassembler /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/Mips/Disassembler/CMakeFiles/LLVMMipsDisassembler.dir/depend

