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

# Utility rule file for install-llvm-mca.

# Include the progress variables for this target.
include tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/progress.make

tools/llvm-mca/CMakeFiles/install-llvm-mca:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-mca && /home/king/clion/bin/cmake/linux/bin/cmake -DCMAKE_INSTALL_COMPONENT="llvm-mca" -P /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake_install.cmake

install-llvm-mca: tools/llvm-mca/CMakeFiles/install-llvm-mca
install-llvm-mca: tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/build.make

.PHONY : install-llvm-mca

# Rule to build all files generated by this target.
tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/build: install-llvm-mca

.PHONY : tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/build

tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-mca && $(CMAKE_COMMAND) -P CMakeFiles/install-llvm-mca.dir/cmake_clean.cmake
.PHONY : tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/clean

tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-mca /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-mca /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-mca/CMakeFiles/install-llvm-mca.dir/depend

