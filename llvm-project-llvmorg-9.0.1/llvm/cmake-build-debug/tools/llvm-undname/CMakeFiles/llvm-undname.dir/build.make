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
include tools/llvm-undname/CMakeFiles/llvm-undname.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-undname/CMakeFiles/llvm-undname.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-undname/CMakeFiles/llvm-undname.dir/flags.make

tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o: tools/llvm-undname/CMakeFiles/llvm-undname.dir/flags.make
tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o: ../tools/llvm-undname/llvm-undname.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-undname/llvm-undname.cpp

tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-undname.dir/llvm-undname.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-undname/llvm-undname.cpp > CMakeFiles/llvm-undname.dir/llvm-undname.cpp.i

tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-undname.dir/llvm-undname.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-undname/llvm-undname.cpp -o CMakeFiles/llvm-undname.dir/llvm-undname.cpp.s

# Object files for target llvm-undname
llvm__undname_OBJECTS = \
"CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o"

# External object files for target llvm-undname
llvm__undname_EXTERNAL_OBJECTS =

bin/llvm-undname: tools/llvm-undname/CMakeFiles/llvm-undname.dir/llvm-undname.cpp.o
bin/llvm-undname: tools/llvm-undname/CMakeFiles/llvm-undname.dir/build.make
bin/llvm-undname: lib/libLLVMDemangle.a
bin/llvm-undname: lib/libLLVMSupport.a
bin/llvm-undname: lib/libLLVMDemangle.a
bin/llvm-undname: /usr/lib/x86_64-linux-gnu/libz3.so
bin/llvm-undname: tools/llvm-undname/CMakeFiles/llvm-undname.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-undname"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-undname.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-undname/CMakeFiles/llvm-undname.dir/build: bin/llvm-undname

.PHONY : tools/llvm-undname/CMakeFiles/llvm-undname.dir/build

tools/llvm-undname/CMakeFiles/llvm-undname.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname && $(CMAKE_COMMAND) -P CMakeFiles/llvm-undname.dir/cmake_clean.cmake
.PHONY : tools/llvm-undname/CMakeFiles/llvm-undname.dir/clean

tools/llvm-undname/CMakeFiles/llvm-undname.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-undname /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-undname/CMakeFiles/llvm-undname.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-undname/CMakeFiles/llvm-undname.dir/depend

