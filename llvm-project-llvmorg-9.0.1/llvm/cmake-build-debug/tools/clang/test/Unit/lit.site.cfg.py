## Autogenerated from /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/test/Unit/lit.site.cfg.py.in
## Do not edit!

import sys

config.llvm_src_root = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm"
config.llvm_obj_root = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug"
config.llvm_tools_dir = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./bin"
config.llvm_libs_dir = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./lib"
config.llvm_build_mode = "."
config.clang_obj_root = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/clang"
config.enable_shared = 1
config.shlibdir = "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/./lib"
config.target_triple = "x86_64-unknown-linux-gnu"

# Support substitution of the tools_dir, libs_dirs, and build_mode with user
# parameters. This is used when we can't determine the tool dir at
# configuration time.
try:
    config.llvm_tools_dir = config.llvm_tools_dir % lit_config.params
    config.llvm_libs_dir = config.llvm_libs_dir % lit_config.params
    config.llvm_build_mode = config.llvm_build_mode % lit_config.params
except KeyError:
    e = sys.exc_info()[1]
    key, = e.args
    lit_config.fatal("unable to find %r parameter, use '--param=%s=VALUE'" % (key,key))

# Let the main config do the real work.
lit_config.load_config(config, "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/test/Unit/lit.cfg.py")
