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
include lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/depend.make

# Include the progress variables for this target.
include lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVAsmBackend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVAsmBackend.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVAsmBackend.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVAsmBackend.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVELFObjectWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFObjectWriter.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFObjectWriter.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFObjectWriter.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVInstPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVInstPrinter.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVInstPrinter.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVInstPrinter.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVMCAsmInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCAsmInfo.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCAsmInfo.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCAsmInfo.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVMCCodeEmitter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCCodeEmitter.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCCodeEmitter.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCCodeEmitter.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVMCExpr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCExpr.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCExpr.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCExpr.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVMCTargetDesc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCTargetDesc.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCTargetDesc.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVMCTargetDesc.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVTargetStreamer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVTargetStreamer.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVTargetStreamer.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVTargetStreamer.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.s

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/flags.make
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o: ../lib/Target/RISCV/MCTargetDesc/RISCVELFStreamer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFStreamer.cpp

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFStreamer.cpp > CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.i

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc/RISCVELFStreamer.cpp -o CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.s

# Object files for target LLVMRISCVDesc
LLVMRISCVDesc_OBJECTS = \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o" \
"CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o"

# External object files for target LLVMRISCVDesc
LLVMRISCVDesc_EXTERNAL_OBJECTS =

lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVAsmBackend.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFObjectWriter.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVInstPrinter.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCAsmInfo.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCCodeEmitter.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCExpr.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVMCTargetDesc.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVTargetStreamer.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/RISCVELFStreamer.cpp.o
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/build.make
lib/libLLVMRISCVDesc.a: lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library ../../../libLLVMRISCVDesc.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMRISCVDesc.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMRISCVDesc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/build: lib/libLLVMRISCVDesc.a

.PHONY : lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/build

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMRISCVDesc.dir/cmake_clean.cmake
.PHONY : lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/clean

lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/RISCV/MCTargetDesc /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/RISCV/MCTargetDesc/CMakeFiles/LLVMRISCVDesc.dir/depend

