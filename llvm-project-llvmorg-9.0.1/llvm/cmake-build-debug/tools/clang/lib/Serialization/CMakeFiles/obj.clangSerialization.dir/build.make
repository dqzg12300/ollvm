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
include tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTCommon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTCommon.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTCommon.cpp > CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTCommon.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReader.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReader.cpp > CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReader.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderDecl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderDecl.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderDecl.cpp > CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderDecl.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderStmt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderStmt.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderStmt.cpp > CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTReaderStmt.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriter.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriter.cpp > CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriter.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterDecl.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterDecl.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterDecl.cpp > CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterDecl.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterStmt.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterStmt.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterStmt.cpp > CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ASTWriterStmt.cpp -o CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GeneratePCH.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GeneratePCH.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GeneratePCH.cpp > CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GeneratePCH.cpp -o CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GlobalModuleIndex.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GlobalModuleIndex.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GlobalModuleIndex.cpp > CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/GlobalModuleIndex.cpp -o CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/InMemoryModuleCache.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/InMemoryModuleCache.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/InMemoryModuleCache.cpp > CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/InMemoryModuleCache.cpp -o CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/Module.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/Module.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/Module.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/Module.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/Module.cpp > CMakeFiles/obj.clangSerialization.dir/Module.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/Module.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/Module.cpp -o CMakeFiles/obj.clangSerialization.dir/Module.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleFileExtension.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleFileExtension.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleFileExtension.cpp > CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleFileExtension.cpp -o CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleManager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleManager.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleManager.cpp > CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/ModuleManager.cpp -o CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.s

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.o: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/flags.make
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/PCHContainerOperations.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/PCHContainerOperations.cpp

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/PCHContainerOperations.cpp > CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.i

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization/PCHContainerOperations.cpp -o CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.s

obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTCommon.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReader.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderDecl.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTReaderStmt.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriter.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterDecl.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ASTWriterStmt.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GeneratePCH.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/GlobalModuleIndex.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/InMemoryModuleCache.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/Module.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleFileExtension.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/ModuleManager.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/PCHContainerOperations.cpp.o
obj.clangSerialization: tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/build.make

.PHONY : obj.clangSerialization

# Rule to build all files generated by this target.
tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/build: obj.clangSerialization

.PHONY : tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/build

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization && $(CMAKE_COMMAND) -P CMakeFiles/obj.clangSerialization.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/clean

tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Serialization /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Serialization/CMakeFiles/obj.clangSerialization.dir/depend

