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

# Utility rule file for check-llvm-transforms-loopversioning.

# Include the progress variables for this target.
include test/CMakeFiles/check-llvm-transforms-loopversioning.dir/progress.make

test/CMakeFiles/check-llvm-transforms-loopversioning:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test/Transforms/LoopVersioning"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test && /usr/bin/python /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./bin/llvm-lit -sv /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test/Transforms/LoopVersioning

check-llvm-transforms-loopversioning: test/CMakeFiles/check-llvm-transforms-loopversioning
check-llvm-transforms-loopversioning: test/CMakeFiles/check-llvm-transforms-loopversioning.dir/build.make

.PHONY : check-llvm-transforms-loopversioning

# Rule to build all files generated by this target.
test/CMakeFiles/check-llvm-transforms-loopversioning.dir/build: check-llvm-transforms-loopversioning

.PHONY : test/CMakeFiles/check-llvm-transforms-loopversioning.dir/build

test/CMakeFiles/check-llvm-transforms-loopversioning.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test && $(CMAKE_COMMAND) -P CMakeFiles/check-llvm-transforms-loopversioning.dir/cmake_clean.cmake
.PHONY : test/CMakeFiles/check-llvm-transforms-loopversioning.dir/clean

test/CMakeFiles/check-llvm-transforms-loopversioning.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test/CMakeFiles/check-llvm-transforms-loopversioning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : test/CMakeFiles/check-llvm-transforms-loopversioning.dir/depend

