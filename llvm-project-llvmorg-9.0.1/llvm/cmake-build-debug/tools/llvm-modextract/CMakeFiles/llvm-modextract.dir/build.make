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
include tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/depend.make

# Include the progress variables for this target.
include tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/progress.make

# Include the compile flags for this target's objects.
include tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/flags.make

tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o: tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/flags.make
tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o: ../tools/llvm-modextract/llvm-modextract.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-modextract/llvm-modextract.cpp

tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-modextract/llvm-modextract.cpp > CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.i

tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-modextract/llvm-modextract.cpp -o CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.s

# Object files for target llvm-modextract
llvm__modextract_OBJECTS = \
"CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o"

# External object files for target llvm-modextract
llvm__modextract_EXTERNAL_OBJECTS =

bin/llvm-modextract: tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/llvm-modextract.cpp.o
bin/llvm-modextract: tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/build.make
bin/llvm-modextract: lib/libLLVMIRReader.a
bin/llvm-modextract: lib/libLLVMBitReader.a
bin/llvm-modextract: lib/libLLVMBitWriter.a
bin/llvm-modextract: lib/libLLVMCore.a
bin/llvm-modextract: lib/libLLVMSupport.a
bin/llvm-modextract: lib/libLLVMAsmParser.a
bin/llvm-modextract: lib/libLLVMAnalysis.a
bin/llvm-modextract: lib/libLLVMProfileData.a
bin/llvm-modextract: lib/libLLVMObject.a
bin/llvm-modextract: lib/libLLVMBitReader.a
bin/llvm-modextract: lib/libLLVMBitstreamReader.a
bin/llvm-modextract: lib/libLLVMCore.a
bin/llvm-modextract: lib/libLLVMRemarks.a
bin/llvm-modextract: lib/libLLVMMCParser.a
bin/llvm-modextract: lib/libLLVMMC.a
bin/llvm-modextract: lib/libLLVMBinaryFormat.a
bin/llvm-modextract: lib/libLLVMDebugInfoCodeView.a
bin/llvm-modextract: lib/libLLVMDebugInfoMSF.a
bin/llvm-modextract: lib/libLLVMSupport.a
bin/llvm-modextract: /usr/lib/x86_64-linux-gnu/libz3.so
bin/llvm-modextract: lib/libLLVMDemangle.a
bin/llvm-modextract: tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-modextract"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-modextract.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/build: bin/llvm-modextract

.PHONY : tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/build

tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract && $(CMAKE_COMMAND) -P CMakeFiles/llvm-modextract.dir/cmake_clean.cmake
.PHONY : tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/clean

tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-modextract /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-modextract/CMakeFiles/llvm-modextract.dir/depend

