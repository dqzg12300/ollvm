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

# Utility rule file for LTO_exports.

# Include the progress variables for this target.
include tools/lto/CMakeFiles/LTO_exports.dir/progress.make

tools/lto/CMakeFiles/LTO_exports: tools/lto/LTO.exports


tools/lto/LTO.exports: ../tools/lto/lto.exports
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Creating export file for LTO"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && echo "LLVM_9 {" > LTO.exports
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && grep -q [[:alnum:]] /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/lto/lto.exports && echo "  global:" >> LTO.exports || :
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && sed -e "s/\$$/;/" -e "s/^/    /" < /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/lto/lto.exports >> LTO.exports
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && echo "  local: *;" >> LTO.exports
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && echo "};" >> LTO.exports

LTO_exports: tools/lto/CMakeFiles/LTO_exports
LTO_exports: tools/lto/LTO.exports
LTO_exports: tools/lto/CMakeFiles/LTO_exports.dir/build.make

.PHONY : LTO_exports

# Rule to build all files generated by this target.
tools/lto/CMakeFiles/LTO_exports.dir/build: LTO_exports

.PHONY : tools/lto/CMakeFiles/LTO_exports.dir/build

tools/lto/CMakeFiles/LTO_exports.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto && $(CMAKE_COMMAND) -P CMakeFiles/LTO_exports.dir/cmake_clean.cmake
.PHONY : tools/lto/CMakeFiles/LTO_exports.dir/clean

tools/lto/CMakeFiles/LTO_exports.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/lto /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/lto/CMakeFiles/LTO_exports.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/lto/CMakeFiles/LTO_exports.dir/depend

