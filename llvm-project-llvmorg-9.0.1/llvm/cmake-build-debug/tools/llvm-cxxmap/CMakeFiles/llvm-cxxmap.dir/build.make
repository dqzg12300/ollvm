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
include tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/flags.make

tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o: tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/flags.make
tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o: ../tools/llvm-cxxmap/llvm-cxxmap.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cxxmap/llvm-cxxmap.cpp

tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cxxmap/llvm-cxxmap.cpp > CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.i

tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cxxmap/llvm-cxxmap.cpp -o CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.s

# Object files for target llvm-cxxmap
llvm__cxxmap_OBJECTS = \
"CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o"

# External object files for target llvm-cxxmap
llvm__cxxmap_EXTERNAL_OBJECTS =

bin/llvm-cxxmap: tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/llvm-cxxmap.cpp.o
bin/llvm-cxxmap: tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/build.make
bin/llvm-cxxmap: lib/libLLVMCore.a
bin/llvm-cxxmap: lib/libLLVMSupport.a
bin/llvm-cxxmap: lib/libLLVMBinaryFormat.a
bin/llvm-cxxmap: lib/libLLVMRemarks.a
bin/llvm-cxxmap: lib/libLLVMSupport.a
bin/llvm-cxxmap: /usr/lib/x86_64-linux-gnu/libz3.so
bin/llvm-cxxmap: lib/libLLVMDemangle.a
bin/llvm-cxxmap: tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-cxxmap"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-cxxmap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/build: bin/llvm-cxxmap

.PHONY : tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/build

tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap && $(CMAKE_COMMAND) -P CMakeFiles/llvm-cxxmap.dir/cmake_clean.cmake
.PHONY : tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/clean

tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-cxxmap /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-cxxmap/CMakeFiles/llvm-cxxmap.dir/depend

