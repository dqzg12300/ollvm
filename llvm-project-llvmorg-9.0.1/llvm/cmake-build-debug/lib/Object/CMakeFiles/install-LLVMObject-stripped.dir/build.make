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

# Utility rule file for install-LLVMObject-stripped.

# Include the progress variables for this target.
include lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/progress.make

lib/Object/CMakeFiles/install-LLVMObject-stripped:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Object && /home/king/clion/bin/cmake/linux/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMObject" -DCMAKE_INSTALL_DO_STRIP=1 -P /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake_install.cmake

install-LLVMObject-stripped: lib/Object/CMakeFiles/install-LLVMObject-stripped
install-LLVMObject-stripped: lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/build.make

.PHONY : install-LLVMObject-stripped

# Rule to build all files generated by this target.
lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/build: install-LLVMObject-stripped

.PHONY : lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/build

lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Object && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMObject-stripped.dir/cmake_clean.cmake
.PHONY : lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/clean

lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Object /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Object /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Object/CMakeFiles/install-LLVMObject-stripped.dir/depend

