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
include lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/depend.make

# Include the progress variables for this target.
include lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/progress.make

# Include the compile flags for this target's objects.
include lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyAsmBackend.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyAsmBackend.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyAsmBackend.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyAsmBackend.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyInstPrinter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyInstPrinter.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyInstPrinter.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyInstPrinter.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCAsmInfo.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCAsmInfo.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCAsmInfo.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCAsmInfo.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCCodeEmitter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCCodeEmitter.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCCodeEmitter.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCCodeEmitter.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCTargetDesc.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCTargetDesc.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCTargetDesc.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyMCTargetDesc.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyTargetStreamer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyTargetStreamer.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyTargetStreamer.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyTargetStreamer.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.s

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/flags.make
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o: ../lib/Target/WebAssembly/MCTargetDesc/WebAssemblyWasmObjectWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyWasmObjectWriter.cpp

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyWasmObjectWriter.cpp > CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.i

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc/WebAssemblyWasmObjectWriter.cpp -o CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.s

# Object files for target LLVMWebAssemblyDesc
LLVMWebAssemblyDesc_OBJECTS = \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o" \
"CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o"

# External object files for target LLVMWebAssemblyDesc
LLVMWebAssemblyDesc_EXTERNAL_OBJECTS =

lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyAsmBackend.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyInstPrinter.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCAsmInfo.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCCodeEmitter.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyMCTargetDesc.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyTargetStreamer.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/WebAssemblyWasmObjectWriter.cpp.o
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/build.make
lib/libLLVMWebAssemblyDesc.a: lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library ../../../libLLVMWebAssemblyDesc.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMWebAssemblyDesc.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMWebAssemblyDesc.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/build: lib/libLLVMWebAssemblyDesc.a

.PHONY : lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/build

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc && $(CMAKE_COMMAND) -P CMakeFiles/LLVMWebAssemblyDesc.dir/cmake_clean.cmake
.PHONY : lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/clean

lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/WebAssembly/MCTargetDesc /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/WebAssembly/MCTargetDesc/CMakeFiles/LLVMWebAssemblyDesc.dir/depend

