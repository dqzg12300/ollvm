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
include lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/depend.make

# Include the progress variables for this target.
include lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/flags.make

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/flags.make
lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o: ../lib/CodeGen/MIRParser/MILexer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MILexer.cpp

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MILexer.cpp > CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.i

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MILexer.cpp -o CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.s

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/flags.make
lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o: ../lib/CodeGen/MIRParser/MIParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIParser.cpp

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIParser.cpp > CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.i

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIParser.cpp -o CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.s

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/flags.make
lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o: ../lib/CodeGen/MIRParser/MIRParser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIRParser.cpp

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIRParser.cpp > CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.i

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser/MIRParser.cpp -o CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.s

# Object files for target LLVMMIRParser
LLVMMIRParser_OBJECTS = \
"CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o" \
"CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o" \
"CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o"

# External object files for target LLVMMIRParser
LLVMMIRParser_EXTERNAL_OBJECTS =

lib/libLLVMMIRParser.a: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MILexer.cpp.o
lib/libLLVMMIRParser.a: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIParser.cpp.o
lib/libLLVMMIRParser.a: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/MIRParser.cpp.o
lib/libLLVMMIRParser.a: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/build.make
lib/libLLVMMIRParser.a: lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX static library ../../libLLVMMIRParser.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMIRParser.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMMIRParser.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/build: lib/libLLVMMIRParser.a

.PHONY : lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/build

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser && $(CMAKE_COMMAND) -P CMakeFiles/LLVMMIRParser.dir/cmake_clean.cmake
.PHONY : lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/clean

lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/CodeGen/MIRParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CodeGen/MIRParser/CMakeFiles/LLVMMIRParser.dir/depend
