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

# Utility rule file for install-LLVMWebAssemblyDisassembler-stripped.

# Include the progress variables for this target.
include lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/progress.make

lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/Disassembler && /home/king/clion/bin/cmake/linux/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMWebAssemblyDisassembler" -DCMAKE_INSTALL_DO_STRIP=1 -P /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake_install.cmake

install-LLVMWebAssemblyDisassembler-stripped: lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped
install-LLVMWebAssemblyDisassembler-stripped: lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/build.make

.PHONY : install-LLVMWebAssemblyDisassembler-stripped

# Rule to build all files generated by this target.
lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/build: install-LLVMWebAssemblyDisassembler-stripped

.PHONY : lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/build

lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/Disassembler && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/cmake_clean.cmake
.PHONY : lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/clean

lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/Disassembler /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/Disassembler /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/WebAssembly/Disassembler/CMakeFiles/install-LLVMWebAssemblyDisassembler-stripped.dir/depend

