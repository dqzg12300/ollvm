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
include tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/depend.make

# Include the progress variables for this target.
include tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/progress.make

# Include the compile flags for this target's objects.
include tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FixItRewriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FixItRewriter.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FixItRewriter.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FixItRewriter.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FrontendActions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FrontendActions.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FrontendActions.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/FrontendActions.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/HTMLPrint.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/HTMLPrint.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/HTMLPrint.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/HTMLPrint.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/InclusionRewriter.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/InclusionRewriter.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/InclusionRewriter.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/InclusionRewriter.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteMacros.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteMacros.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteMacros.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteMacros.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteModernObjC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteModernObjC.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteModernObjC.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteModernObjC.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteObjC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteObjC.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteObjC.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteObjC.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.s

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.o: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/flags.make
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.o: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.o"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.o -c /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteTest.cpp

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.i"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteTest.cpp > CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.i

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.s"
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite/RewriteTest.cpp -o CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.s

obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FixItRewriter.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/FrontendActions.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/HTMLPrint.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/InclusionRewriter.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteMacros.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteModernObjC.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteObjC.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/RewriteTest.cpp.o
obj.clangRewriteFrontend: tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/build.make

.PHONY : obj.clangRewriteFrontend

# Rule to build all files generated by this target.
tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/build: obj.clangRewriteFrontend

.PHONY : tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/build

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite && $(CMAKE_COMMAND) -P CMakeFiles/obj.clangRewriteFrontend.dir/cmake_clean.cmake
.PHONY : tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/clean

tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Frontend/Rewrite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/clang/lib/Frontend/Rewrite/CMakeFiles/obj.clangRewriteFrontend.dir/depend

