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

# Utility rule file for check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.

# Include the progress variables for this target.
include tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/progress.make

tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running lit suite /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/test/CXX/temp/temp.decls/temp.class/temp.mem.enum"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/test && /usr/bin/python /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./bin/llvm-lit -sv --param clang_site_config=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/test/lit.site.cfg --param USE_Z3_SOLVER=0 /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/test/CXX/temp/temp.decls/temp.class/temp.mem.enum

check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum: tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum
check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum: tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/build.make

.PHONY : check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum

# Rule to build all files generated by this target.
tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/build: check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum

.PHONY : tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/build

tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/test && $(CMAKE_COMMAND) -P CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/cmake_clean.cmake
.PHONY : tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/clean

tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/test /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/test/CMakeFiles/check-clang-cxx-temp-temp.decls-temp.class-temp.mem.enum.dir/depend

