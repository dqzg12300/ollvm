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
include lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/depend.make

# Include the progress variables for this target.
include lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o: ../lib/Target/XCore/XCoreAsmPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreAsmPrinter.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreAsmPrinter.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreAsmPrinter.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o: ../lib/Target/XCore/XCoreFrameLowering.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameLowering.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameLowering.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameLowering.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o: ../lib/Target/XCore/XCoreInstrInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreInstrInfo.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreInstrInfo.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreInstrInfo.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o: ../lib/Target/XCore/XCoreISelDAGToDAG.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelDAGToDAG.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelDAGToDAG.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelDAGToDAG.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o: ../lib/Target/XCore/XCoreISelLowering.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelLowering.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelLowering.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreISelLowering.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o: ../lib/Target/XCore/XCoreLowerThreadLocal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreLowerThreadLocal.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreLowerThreadLocal.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreLowerThreadLocal.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o: ../lib/Target/XCore/XCoreMachineFunctionInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMachineFunctionInfo.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMachineFunctionInfo.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMachineFunctionInfo.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o: ../lib/Target/XCore/XCoreMCInstLower.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMCInstLower.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMCInstLower.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreMCInstLower.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o: ../lib/Target/XCore/XCoreRegisterInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreRegisterInfo.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreRegisterInfo.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreRegisterInfo.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o: ../lib/Target/XCore/XCoreSubtarget.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSubtarget.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSubtarget.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSubtarget.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o: ../lib/Target/XCore/XCoreTargetMachine.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetMachine.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetMachine.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetMachine.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o: ../lib/Target/XCore/XCoreTargetObjectFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetObjectFile.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetObjectFile.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreTargetObjectFile.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o: ../lib/Target/XCore/XCoreSelectionDAGInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSelectionDAGInfo.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSelectionDAGInfo.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreSelectionDAGInfo.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.s

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/flags.make
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o: ../lib/Target/XCore/XCoreFrameToArgsOffsetElim.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameToArgsOffsetElim.cpp

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameToArgsOffsetElim.cpp > CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.i

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCoreFrameToArgsOffsetElim.cpp -o CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.s

# Object files for target LLVMXCoreCodeGen
LLVMXCoreCodeGen_OBJECTS = \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o" \
"CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o"

# External object files for target LLVMXCoreCodeGen
LLVMXCoreCodeGen_EXTERNAL_OBJECTS =

lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreAsmPrinter.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameLowering.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreInstrInfo.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelDAGToDAG.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreISelLowering.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreLowerThreadLocal.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMachineFunctionInfo.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreMCInstLower.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreRegisterInfo.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSubtarget.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetMachine.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreTargetObjectFile.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreSelectionDAGInfo.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/XCoreFrameToArgsOffsetElim.cpp.o
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/build.make
lib/libLLVMXCoreCodeGen.a: lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking CXX static library ../../libLLVMXCoreCodeGen.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && $(CMAKE_COMMAND) -P CMakeFiles/LLVMXCoreCodeGen.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMXCoreCodeGen.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/build: lib/libLLVMXCoreCodeGen.a

.PHONY : lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/build

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && $(CMAKE_COMMAND) -P CMakeFiles/LLVMXCoreCodeGen.dir/cmake_clean.cmake
.PHONY : lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/clean

lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/XCore/CMakeFiles/LLVMXCoreCodeGen.dir/depend

