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
include lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/depend.make

# Include the progress variables for this target.
include lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/progress.make

# Include the compile flags for this target's objects.
include lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o: ../lib/TextAPI/ELF/ELFStub.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/ELFStub.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/ELFStub.cpp > CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/ELFStub.cpp -o CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o: ../lib/TextAPI/ELF/TBEHandler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/TBEHandler.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/TBEHandler.cpp > CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/ELF/TBEHandler.cpp -o CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o: ../lib/TextAPI/MachO/Architecture.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Architecture.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Architecture.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Architecture.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o: ../lib/TextAPI/MachO/ArchitectureSet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/ArchitectureSet.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/ArchitectureSet.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/ArchitectureSet.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o: ../lib/TextAPI/MachO/InterfaceFile.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/InterfaceFile.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/InterfaceFile.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/InterfaceFile.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o: ../lib/TextAPI/MachO/PackedVersion.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/PackedVersion.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/PackedVersion.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/PackedVersion.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o: ../lib/TextAPI/MachO/Symbol.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Symbol.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Symbol.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/Symbol.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o: ../lib/TextAPI/MachO/TextStub.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStub.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStub.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStub.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.s

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/flags.make
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o: ../lib/TextAPI/MachO/TextStubCommon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStubCommon.cpp

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStubCommon.cpp > CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.i

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI/MachO/TextStubCommon.cpp -o CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.s

# Object files for target LLVMTextAPI
LLVMTextAPI_OBJECTS = \
"CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o" \
"CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o"

# External object files for target LLVMTextAPI
LLVMTextAPI_EXTERNAL_OBJECTS =

lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/ELFStub.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/ELF/TBEHandler.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Architecture.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/ArchitectureSet.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/InterfaceFile.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/PackedVersion.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/Symbol.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStub.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/MachO/TextStubCommon.cpp.o
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/build.make
lib/libLLVMTextAPI.a: lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX static library ../libLLVMTextAPI.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && $(CMAKE_COMMAND) -P CMakeFiles/LLVMTextAPI.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMTextAPI.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/build: lib/libLLVMTextAPI.a

.PHONY : lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/build

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI && $(CMAKE_COMMAND) -P CMakeFiles/LLVMTextAPI.dir/cmake_clean.cmake
.PHONY : lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/clean

lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/TextAPI /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/TextAPI/CMakeFiles/LLVMTextAPI.dir/depend

