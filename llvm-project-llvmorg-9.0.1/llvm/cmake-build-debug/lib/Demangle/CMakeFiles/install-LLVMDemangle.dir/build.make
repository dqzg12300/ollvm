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

# Utility rule file for install-LLVMDemangle.

# Include the progress variables for this target.
include lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/progress.make

lib/Demangle/CMakeFiles/install-LLVMDemangle:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Demangle && /home/king/clion/bin/cmake/linux/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMDemangle" -P /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake_install.cmake

install-LLVMDemangle: lib/Demangle/CMakeFiles/install-LLVMDemangle
install-LLVMDemangle: lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/build.make

.PHONY : install-LLVMDemangle

# Rule to build all files generated by this target.
lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/build: install-LLVMDemangle

.PHONY : lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/build

lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Demangle && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMDemangle.dir/cmake_clean.cmake
.PHONY : lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/clean

lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Demangle /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Demangle /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Demangle/CMakeFiles/install-LLVMDemangle.dir/depend

