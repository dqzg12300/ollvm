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

# Utility rule file for check-llvm-object-riscv.

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-object-riscv.dir/progress.make

test/CMakeFiles/check-llvm-object-riscv:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test/Object/RISCV"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test && /usr/bin/python /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./bin/llvm-lit -sv /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test/Object/RISCV

check-llvm-object-riscv: test/CMakeFiles/check-llvm-object-riscv
check-llvm-object-riscv: test/CMakeFiles/check-llvm-object-riscv.dir/build.make

.PHONY : check-llvm-object-riscv

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-object-riscv.dir/build: check-llvm-object-riscv

.PHONY : test/CMakeFiles/check-llvm-object-riscv.dir/build

test/CMakeFiles/check-llvm-object-riscv.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-object-riscv.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-object-riscv.dir/clean

test/CMakeFiles/check-llvm-object-riscv.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test/CMakeFiles/check-llvm-object-riscv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-object-riscv.dir/depend

