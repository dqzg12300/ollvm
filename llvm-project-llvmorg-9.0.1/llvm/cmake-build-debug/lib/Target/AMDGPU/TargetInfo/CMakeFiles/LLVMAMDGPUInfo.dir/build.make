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
include lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/depend.make

# Include the progress variables for this target.
include lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/flags.make

lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o: lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/flags.make
lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o: ../lib/Target/AMDGPU/TargetInfo/AMDGPUTargetInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AMDGPU/TargetInfo/AMDGPUTargetInfo.cpp

lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AMDGPU/TargetInfo/AMDGPUTargetInfo.cpp > CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.i

lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AMDGPU/TargetInfo/AMDGPUTargetInfo.cpp -o CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.s

# Object files for target LLVMAMDGPUInfo
LLVMAMDGPUInfo_OBJECTS = \
"CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o"

# External object files for target LLVMAMDGPUInfo
LLVMAMDGPUInfo_EXTERNAL_OBJECTS =

lib/libLLVMAMDGPUInfo.a: lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/AMDGPUTargetInfo.cpp.o
lib/libLLVMAMDGPUInfo.a: lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/build.make
lib/libLLVMAMDGPUInfo.a: lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMAMDGPUInfo.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAMDGPUInfo.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMAMDGPUInfo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/build: lib/libLLVMAMDGPUInfo.a

.PHONY : lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/build

lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAMDGPUInfo.dir/cmake_clean.cmake
.PHONY : lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/clean

lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AMDGPU/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/AMDGPU/TargetInfo/CMakeFiles/LLVMAMDGPUInfo.dir/depend

