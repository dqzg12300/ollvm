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

# Utility rule file for ObjcopyOptsTableGen.

# Include the progress variables for this target.
include tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/progress.make

tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen: tools/llvm-objcopy/ObjcopyOpts.inc


tools/llvm-objcopy/ObjcopyOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/ObjcopyOpts.inc: bin/llvm-tblgen
tools/llvm-objcopy/ObjcopyOpts.inc: ../tools/llvm-objcopy/ObjcopyOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../tools/llvm-objcopy/StripOpts.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/CodeGen/SDNodeProperties.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/CodeGen/ValueTypes.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/Attributes.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/Intrinsics.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsAArch64.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsARM.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsBPF.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsHexagon.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsMips.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsNVVM.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsRISCV.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsX86.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/IR/IntrinsicsXCore.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Option/OptParser.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/TableGen/SearchableTable.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/GenericOpcodes.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/GlobalISel/Target.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/Target.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetCallingConv.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetInstrPredicate.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetItinerary.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetPfmCounters.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetSchedule.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../include/llvm/Target/TargetSelectionDAG.td
tools/llvm-objcopy/ObjcopyOpts.inc: ../tools/llvm-objcopy/ObjcopyOpts.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building ObjcopyOpts.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-objcopy && ../../bin/llvm-tblgen -gen-opt-parser-defs -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-objcopy -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-objcopy/ObjcopyOpts.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-objcopy/ObjcopyOpts.inc

ObjcopyOptsTableGen: tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen
ObjcopyOptsTableGen: tools/llvm-objcopy/ObjcopyOpts.inc
ObjcopyOptsTableGen: tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/build.make

.PHONY : ObjcopyOptsTableGen

# Rule to build all files generated by this target.
tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/build: ObjcopyOptsTableGen

.PHONY : tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/build

tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-objcopy && $(CMAKE_COMMAND) -P CMakeFiles/ObjcopyOptsTableGen.dir/cmake_clean.cmake
.PHONY : tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/clean

tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/tools/llvm-objcopy /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-objcopy /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tools/llvm-objcopy/CMakeFiles/ObjcopyOptsTableGen.dir/depend

