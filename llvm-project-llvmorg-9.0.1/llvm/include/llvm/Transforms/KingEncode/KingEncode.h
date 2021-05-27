//
// Created by king on 2020/9/21.
//

#ifndef LLVM_KINGENCODE_H
#define LLVM_KINGENCODE_H

#include <llvm/Pass.h>

namespace llvm{
    Pass* createKingEncode(bool flag);
}

#endif //LLVM_KINGENCODE_H
