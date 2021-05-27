
#include "llvm/Pass.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/Transforms/KingEncode/KingEncode.h"

using namespace llvm;

namespace {

    struct KingEncode : public FunctionPass {

        static char ID;
        bool enable_flag;
        KingEncode() : FunctionPass(ID) {}

        KingEncode(bool flag) : FunctionPass(ID) {
            enable_flag=flag;
        }

        bool runOnFunction(Function &F) override {
            if(enable_flag){
                errs() << "KingEncode: ";

            }
            return false;
        }

    };

    char KingEncode::ID = 0;

}

Pass* llvm::createKingEncode(bool flag){ return new KingEncode(flag);}