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
include tools/clang/lib/Index/CMakeFiles/clangIndex.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Index/CMakeFiles/clangIndex.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Index/CMakeFiles/clangIndex.dir/flags.make

# Object files for target clangIndex
clangIndex_OBJECTS =

# External object files for target clangIndex
clangIndex_EXTERNAL_OBJECTS = \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/CodegenNameGenerator.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/CommentToXML.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/FileIndexRecord.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexBody.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexDecl.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexingAction.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexingContext.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexSymbol.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexTypeSourceInfo.cpp.o" \
"/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/USRGeneration.cpp.o"

lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/CodegenNameGenerator.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/CommentToXML.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/FileIndexRecord.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexBody.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexDecl.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexingAction.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexingContext.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexSymbol.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/IndexTypeSourceInfo.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/obj.clangIndex.dir/USRGeneration.cpp.o
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/clangIndex.dir/build.make
lib/libclangIndex.a: tools/clang/lib/Index/CMakeFiles/clangIndex.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../../../../lib/libclangIndex.a"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index && $(CMAKE_COMMAND) -P CMakeFiles/clangIndex.dir/cmake_clean_target.cmake
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangIndex.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tools/clang/lib/Index/CMakeFiles/clangIndex.dir/build: lib/libclangIndex.a

.PHONY : tools/clang/lib/Index/CMakeFiles/clangIndex.dir/build

tools/clang/lib/Index/CMakeFiles/clangIndex.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index && $(CMAKE_COMMAND) -P CMakeFiles/clangIndex.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Index/CMakeFiles/clangIndex.dir/clean

tools/clang/lib/Index/CMakeFiles/clangIndex.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Index /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Index/CMakeFiles/clangIndex.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Index/CMakeFiles/clangIndex.dir/depend

