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

# Utility rule file for install-LLVMX86AsmParser.

# Include the progress variables for this target.
include lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/progress.make

lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/X86/AsmParser && /home/king/clion/bin/cmake/linux/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMX86AsmParser" -P /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake_install.cmake

install-LLVMX86AsmParser: lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser
install-LLVMX86AsmParser: lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/build.make

.PHONY : install-LLVMX86AsmParser

# Rule to build all files generated by this target.
lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/build: install-LLVMX86AsmParser

.PHONY : lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/build

lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/X86/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMX86AsmParser.dir/cmake_clean.cmake
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/clean

lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/X86/AsmParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/X86/AsmParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/X86/AsmParser/CMakeFiles/install-LLVMX86AsmParser.dir/depend

