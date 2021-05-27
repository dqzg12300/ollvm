add_llvm_library( LLVMKStringEncode
        KStringEncode.cpp

        ADDITIONAL_HEADER_DIRS
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms
        ${LLVM_MAIN_INCLUDE_DIR}/llvm/Transforms/KStringEncode

        DEPENDS
        intrinsics_gen
        )