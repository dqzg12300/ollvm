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

# Utility rule file for XCoreCommonTableGen.

# Include the progress variables for this target.
include lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/progress.make

lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenAsmWriter.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenCallingConv.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenDAGISel.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenDisassemblerTables.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenInstrInfo.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenRegisterInfo.inc
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen: lib/Target/XCore/XCoreGenSubtargetInfo.inc


lib/Target/XCore/XCoreGenAsmWriter.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenAsmWriter.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenAsmWriter.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building XCoreGenAsmWriter.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-asm-writer -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenAsmWriter.inc

lib/Target/XCore/XCoreGenCallingConv.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenCallingConv.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenCallingConv.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building XCoreGenCallingConv.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-callingconv -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenCallingConv.inc

lib/Target/XCore/XCoreGenDAGISel.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenDAGISel.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenDAGISel.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building XCoreGenDAGISel.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-dag-isel -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenDAGISel.inc

lib/Target/XCore/XCoreGenDisassemblerTables.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenDisassemblerTables.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenDisassemblerTables.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building XCoreGenDisassemblerTables.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-disassembler -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenDisassemblerTables.inc

lib/Target/XCore/XCoreGenInstrInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenInstrInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenInstrInfo.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building XCoreGenInstrInfo.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-instr-info -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenInstrInfo.inc

lib/Target/XCore/XCoreGenRegisterInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenRegisterInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenRegisterInfo.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building XCoreGenRegisterInfo.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-register-info -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenRegisterInfo.inc

lib/Target/XCore/XCoreGenSubtargetInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenSubtargetInfo.inc: bin/llvm-tblgen
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCore.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCoreCallingConv.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCoreInstrFormats.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCoreInstrInfo.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCoreRegisterInfo.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/CodeGen/SDNodeProperties.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/CodeGen/ValueTypes.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/Attributes.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/Intrinsics.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsAArch64.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsAMDGPU.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsARM.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsBPF.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsHexagon.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsMips.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsNVVM.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsPowerPC.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsRISCV.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsSystemZ.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsWebAssembly.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsX86.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/IR/IntrinsicsXCore.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Option/OptParser.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/TableGen/SearchableTable.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/GenericOpcodes.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/GlobalISel/RegisterBank.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/GlobalISel/SelectionDAGCompat.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/GlobalISel/Target.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/Target.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetCallingConv.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetInstrPredicate.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetItinerary.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetPfmCounters.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetSchedule.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../include/llvm/Target/TargetSelectionDAG.td
lib/Target/XCore/XCoreGenSubtargetInfo.inc: ../lib/Target/XCore/XCore.td
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building XCoreGenSubtargetInfo.inc..."
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && ../../../bin/llvm-tblgen -gen-subtarget -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include -I /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore/XCore.td -o /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/XCoreGenSubtargetInfo.inc

XCoreCommonTableGen: lib/Target/XCore/CMakeFiles/XCoreCommonTableGen
XCoreCommonTableGen: lib/Target/XCore/XCoreGenAsmWriter.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenCallingConv.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenDAGISel.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenDisassemblerTables.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenInstrInfo.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenRegisterInfo.inc
XCoreCommonTableGen: lib/Target/XCore/XCoreGenSubtargetInfo.inc
XCoreCommonTableGen: lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/build.make

.PHONY : XCoreCommonTableGen

# Rule to build all files generated by this target.
lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/build: XCoreCommonTableGen

.PHONY : lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/build

lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/clean:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore && $(CMAKE_COMMAND) -P CMakeFiles/XCoreCommonTableGen.dir/cmake_clean.cmake
.PHONY : lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/clean

lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/depend:
	cd /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/lib/Target/XCore /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/Target/XCore/CMakeFiles/XCoreCommonTableGen.dir/depend

