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
include unittests/AsmParser/CMakeFiles/AsmParserTests.dir/depend.make

# Include the progress variables for this target.
include unittests/AsmParser/CMakeFiles/AsmParserTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/AsmParser/CMakeFiles/AsmParserTests.dir/flags.make

unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o: unittests/AsmParser/CMakeFiles/AsmParserTests.dir/flags.make
unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o: ../unittests/AsmParser/AsmParserTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/AsmParser/AsmParserTest.cpp

unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/AsmParser/AsmParserTest.cpp > CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.i

unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/AsmParser/AsmParserTest.cpp -o CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.s

# Object files for target AsmParserTests
AsmParserTests_OBJECTS = \
"CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o"

# External object files for target AsmParserTests
AsmParserTests_EXTERNAL_OBJECTS =

unittests/AsmParser/AsmParserTests: unittests/AsmParser/CMakeFiles/AsmParserTests.dir/AsmParserTest.cpp.o
unittests/AsmParser/AsmParserTests: unittests/AsmParser/CMakeFiles/AsmParserTests.dir/build.make
unittests/AsmParser/AsmParserTests: lib/libLLVMAsmParser.a
unittests/AsmParser/AsmParserTests: lib/libLLVMCore.a
unittests/AsmParser/AsmParserTests: lib/libLLVMSupport.a
unittests/AsmParser/AsmParserTests: lib/libLLVMSupport.a
unittests/AsmParser/AsmParserTests: lib/libgtest_main.a
unittests/AsmParser/AsmParserTests: lib/libgtest.a
unittests/AsmParser/AsmParserTests: lib/libLLVMRemarks.a
unittests/AsmParser/AsmParserTests: lib/libLLVMBinaryFormat.a
unittests/AsmParser/AsmParserTests: lib/libLLVMSupport.a
unittests/AsmParser/AsmParserTests: /usr/lib/x86_64-linux-gnu/libz3.so
unittests/AsmParser/AsmParserTests: lib/libLLVMDemangle.a
unittests/AsmParser/AsmParserTests: unittests/AsmParser/CMakeFiles/AsmParserTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable AsmParserTests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AsmParserTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/AsmParser/CMakeFiles/AsmParserTests.dir/build: unittests/AsmParser/AsmParserTests

.PHONY : unittests/AsmParser/CMakeFiles/AsmParserTests.dir/build

unittests/AsmParser/CMakeFiles/AsmParserTests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser && $(CMAKE_COMMAND) -P CMakeFiles/AsmParserTests.dir/cmake_clean.cmake
.PHONY : unittests/AsmParser/CMakeFiles/AsmParserTests.dir/clean

unittests/AsmParser/CMakeFiles/AsmParserTests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/AsmParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/AsmParser/CMakeFiles/AsmParserTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/AsmParser/CMakeFiles/AsmParserTests.dir/depend

