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
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend.make

# Include the progress variables for this target.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o: ../unittests/CodeGen/AArch64SelectionDAGTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/AArch64SelectionDAGTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/AArch64SelectionDAGTest.cpp > CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/AArch64SelectionDAGTest.cpp -o CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o: ../unittests/CodeGen/DIEHashTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/DIEHashTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/DIEHashTest.cpp > CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/DIEHashTest.cpp -o CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o: ../unittests/CodeGen/LowLevelTypeTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/LowLevelTypeTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/LowLevelTypeTest.cpp > CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/LowLevelTypeTest.cpp -o CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o: ../unittests/CodeGen/MachineInstrBundleIteratorTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp > CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrBundleIteratorTest.cpp -o CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o: ../unittests/CodeGen/MachineInstrTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrTest.cpp > CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineInstrTest.cpp -o CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o: ../unittests/CodeGen/MachineOperandTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineOperandTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineOperandTest.cpp > CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/MachineOperandTest.cpp -o CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o: ../unittests/CodeGen/ScalableVectorMVTsTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp > CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/ScalableVectorMVTsTest.cpp -o CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o: ../unittests/CodeGen/TypeTraitsTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TypeTraitsTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TypeTraitsTest.cpp > CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TypeTraitsTest.cpp -o CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.s

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/flags.make
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o: ../unittests/CodeGen/TargetOptionsTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TargetOptionsTest.cpp

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TargetOptionsTest.cpp > CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.i

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen/TargetOptionsTest.cpp -o CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.s

# Object files for target CodeGenTests
CodeGenTests_OBJECTS = \
"CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o" \
"CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o"

# External object files for target CodeGenTests
CodeGenTests_EXTERNAL_OBJECTS =

unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/AArch64SelectionDAGTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DIEHashTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/LowLevelTypeTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrBundleIteratorTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineInstrTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/MachineOperandTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/ScalableVectorMVTsTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TypeTraitsTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/TargetOptionsTest.cpp.o
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build.make
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64CodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64AsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Desc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Disassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Info.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Utils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBPFCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBPFAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBPFDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBPFDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBPFInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMipsCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMipsAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMipsDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMipsDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMipsInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMSP430CodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMSP430AsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMSP430Desc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMSP430Disassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMSP430Info.a
unittests/CodeGen/CodeGenTests: lib/libLLVMNVPTXCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMNVPTXDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMNVPTXInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMPowerPCCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMPowerPCAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMPowerPCDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMPowerPCDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMPowerPCInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRISCVUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSparcCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSparcAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSparcDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSparcDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSparcInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86CodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86AsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86Desc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86Disassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86Info.a
unittests/CodeGen/CodeGenTests: lib/libLLVMX86Utils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMXCoreCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMXCoreDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMXCoreDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMXCoreInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAnalysis.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAsmPrinter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCore.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMC.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSelectionDAG.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTarget.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: lib/libgtest_main.a
unittests/CodeGen/CodeGenTests: lib/libgtest.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Desc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Info.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAArch64Utils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMIRParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAMDGPUUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMARMUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMHexagonInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLanaiInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMipo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMVectorize.a
unittests/CodeGen/CodeGenTests: lib/libLLVMIRReader.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAsmParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMInstrumentation.a
unittests/CodeGen/CodeGenTests: lib/libLLVMKingEncode.a
unittests/CodeGen/CodeGenTests: lib/libLLVMLinker.a
unittests/CodeGen/CodeGenTests: lib/libLLVMObfuscation.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSystemZInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyDesc.a
unittests/CodeGen/CodeGenTests: lib/libLLVMWebAssemblyInfo.a
unittests/CodeGen/CodeGenTests: lib/libLLVMGlobalISel.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoDWARF.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSelectionDAG.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCodeGen.a
unittests/CodeGen/CodeGenTests: lib/libLLVMScalarOpts.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAggressiveInstCombine.a
unittests/CodeGen/CodeGenTests: lib/libLLVMInstCombine.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitWriter.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTarget.a
unittests/CodeGen/CodeGenTests: lib/libLLVMTransformUtils.a
unittests/CodeGen/CodeGenTests: lib/libLLVMAnalysis.a
unittests/CodeGen/CodeGenTests: lib/libLLVMProfileData.a
unittests/CodeGen/CodeGenTests: lib/libLLVMObject.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMCParser.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitReader.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBitstreamReader.a
unittests/CodeGen/CodeGenTests: lib/libLLVMCore.a
unittests/CodeGen/CodeGenTests: lib/libLLVMRemarks.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMCDisassembler.a
unittests/CodeGen/CodeGenTests: lib/libLLVMMC.a
unittests/CodeGen/CodeGenTests: lib/libLLVMBinaryFormat.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoCodeView.a
unittests/CodeGen/CodeGenTests: lib/libLLVMDebugInfoMSF.a
unittests/CodeGen/CodeGenTests: lib/libLLVMSupport.a
unittests/CodeGen/CodeGenTests: /usr/lib/x86_64-linux-gnu/libz3.so
unittests/CodeGen/CodeGenTests: lib/libLLVMDemangle.a
unittests/CodeGen/CodeGenTests: unittests/CodeGen/CMakeFiles/CodeGenTests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable CodeGenTests"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CodeGenTests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build: unittests/CodeGen/CodeGenTests

.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/build

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen && $(CMAKE_COMMAND) -P CMakeFiles/CodeGenTests.dir/cmake_clean.cmake
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/clean

unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/unittests/CodeGen /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/CodeGen/CMakeFiles/CodeGenTests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CodeGen/CMakeFiles/CodeGenTests.dir/depend

