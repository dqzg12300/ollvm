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
include tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/flags.make

tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.o: tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/flags.make
tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Tooling/DependencyScanning/DependencyScanningWorker.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Tooling/DependencyScanning/DependencyScanningWorker.cpp

tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Tooling/DependencyScanning/DependencyScanningWorker.cpp > CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.i

tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Tooling/DependencyScanning/DependencyScanningWorker.cpp -o CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.s

obj.clangDependencyScanning: tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependencyScanningWorker.cpp.o
obj.clangDependencyScanning: tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/build.make

.PHONY : obj.clangDependencyScanning

# Rule to build all files generated by this target.
tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/build: obj.clangDependencyScanning

.PHONY : tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/build

tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning && $(CMAKE_COMMAND) -P CMakeFiles/obj.clangDependencyScanning.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/clean

tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Tooling/DependencyScanning /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Tooling/DependencyScanning/CMakeFiles/obj.clangDependencyScanning.dir/depend

