add_llvm_library( LLVMKingEncode
        KingEncode.cpp

        ADDITIONAL_HEADER_DIRS
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms/KingEncode

        DEPENDS
        intrinsics_gen
        )