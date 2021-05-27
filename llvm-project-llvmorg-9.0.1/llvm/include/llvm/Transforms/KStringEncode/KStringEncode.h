//
// Created by king on 2020/10/7.
//

#ifndef LLVM_KSTRINGENCODE_H
#define LLVM_KSTRINGENCODE_H

#include <llvm/Pass.h>

namespace llvm{
    Pass* createKStringEncode(bool flag);
}

#endif //LLVM_KSTRINGENCODE_H



