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
include unittests/Remarks/CMakeFiles/RemarksTests.dir/depend.make

# Include the progress variables for this target.
include unittests/Remarks/CMakeFiles/RemarksTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/Remarks/CMakeFiles/RemarksTests.dir/flags.make

unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o: unittests/Remarks/CMakeFiles/RemarksTests.dir/flags.make
unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o: ../unittests/Remarks/RemarksStrTabParsingTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/RemarksStrTabParsingTest.cpp

unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/RemarksStrTabParsingTest.cpp > CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.i

unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/RemarksStrTabParsingTest.cpp -o CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.s

unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o: unittests/Remarks/CMakeFiles/RemarksTests.dir/flags.make
unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o: ../unittests/Remarks/YAMLRemarksParsingTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/YAMLRemarksParsingTest.cpp

unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/YAMLRemarksParsingTest.cpp > CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.i

unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks/YAMLRemarksParsingTest.cpp -o CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.s

# Object files for target RemarksTests
RemarksTests_OBJECTS = \
"CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o" \
"CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o"

# External object files for target RemarksTests
RemarksTests_EXTERNAL_OBJECTS =

unittests/Remarks/RemarksTests: unittests/Remarks/CMakeFiles/RemarksTests.dir/RemarksStrTabParsingTest.cpp.o
unittests/Remarks/RemarksTests: unittests/Remarks/CMakeFiles/RemarksTests.dir/YAMLRemarksParsingTest.cpp.o
unittests/Remarks/RemarksTests: unittests/Remarks/CMakeFiles/RemarksTests.dir/build.make
unittests/Remarks/RemarksTests: lib/libLLVMRemarks.a
unittests/Remarks/RemarksTests: lib/libLLVMSupport.a
unittests/Remarks/RemarksTests: lib/libLLVMSupport.a
unittests/Remarks/RemarksTests: lib/libgtest_main.a
unittests/Remarks/RemarksTests: lib/libgtest.a
unittests/Remarks/RemarksTests: lib/libLLVMSupport.a
unittests/Remarks/RemarksTests: /usr/lib/x86_64-linux-gnu/libz3.so
unittests/Remarks/RemarksTests: lib/libLLVMDemangle.a
unittests/Remarks/RemarksTests: unittests/Remarks/CMakeFiles/RemarksTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable RemarksTests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RemarksTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/Remarks/CMakeFiles/RemarksTests.dir/build: unittests/Remarks/RemarksTests

.PHONY : unittests/Remarks/CMakeFiles/RemarksTests.dir/build

unittests/Remarks/CMakeFiles/RemarksTests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks && $(CMAKE_COMMAND) -P CMakeFiles/RemarksTests.dir/cmake_clean.cmake
.PHONY : unittests/Remarks/CMakeFiles/RemarksTests.dir/clean

unittests/Remarks/CMakeFiles/RemarksTests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/Remarks /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/Remarks/CMakeFiles/RemarksTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/Remarks/CMakeFiles/RemarksTests.dir/depend

