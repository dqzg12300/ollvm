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
include lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/depend.make

# Include the progress variables for this target.
include lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/flags.make

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/flags.make
lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o: ../lib/Transforms/AggressiveInstCombine/AggressiveInstCombine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/AggressiveInstCombine.cpp

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/AggressiveInstCombine.cpp > CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.i

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/AggressiveInstCombine.cpp -o CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.s

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/flags.make
lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o: ../lib/Transforms/AggressiveInstCombine/TruncInstCombine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/TruncInstCombine.cpp

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/TruncInstCombine.cpp > CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.i

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine/TruncInstCombine.cpp -o CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.s

# Object files for target LLVMAggressiveInstCombine
LLVMAggressiveInstCombine_OBJECTS = \
"CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o" \
"CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o"

# External object files for target LLVMAggressiveInstCombine
LLVMAggressiveInstCombine_EXTERNAL_OBJECTS =

lib/libLLVMAggressiveInstCombine.a: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/AggressiveInstCombine.cpp.o
lib/libLLVMAggressiveInstCombine.a: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/TruncInstCombine.cpp.o
lib/libLLVMAggressiveInstCombine.a: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/build.make
lib/libLLVMAggressiveInstCombine.a: lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../../libLLVMAggressiveInstCombine.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAggressiveInstCombine.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMAggressiveInstCombine.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/build: lib/libLLVMAggressiveInstCombine.a

.PHONY : lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/build

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine && $(CMAKE_COMMAND) -P CMakeFiles/LLVMAggressiveInstCombine.dir/cmake_clean.cmake
.PHONY : lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/clean

lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Transforms/AggressiveInstCombine /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Transforms/AggressiveInstCombine/CMakeFiles/LLVMAggressiveInstCombine.dir/depend

