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
include lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/depend.make

# Include the progress variables for this target.
include lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/flags.make

lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o: lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/flags.make
lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o: ../lib/Target/AArch64/TargetInfo/AArch64TargetInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AArch64/TargetInfo/AArch64TargetInfo.cpp

lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AArch64/TargetInfo/AArch64TargetInfo.cpp > CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.i

lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AArch64/TargetInfo/AArch64TargetInfo.cpp -o CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.s

# Object files for target LLVMAArch64Info
LLVMAArch64Info_OBJECTS = \
"CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o"

# External object files for target LLVMAArch64Info
LLVMAArch64Info_EXTERNAL_OBJECTS =

lib/libLLVMAArch64Info.a: lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/AArch64TargetInfo.cpp.o
lib/libLLVMAArch64Info.a: lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/build.make
lib/libLLVMAArch64Info.a: lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../../libLLVMAArch64Info.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAArch64Info.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMAArch64Info.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/build: lib/libLLVMAArch64Info.a

.PHONY : lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/build

lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAArch64Info.dir/cmake_clean.cmake
.PHONY : lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/clean

lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/AArch64/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/AArch64/TargetInfo/CMakeFiles/LLVMAArch64Info.dir/depend

