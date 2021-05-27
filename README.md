# ollvm
混淆pass代码合并在llvm9.0版本中，并且插入自己的一个简单的字符串混淆pass例子。

## 编译

可以使用ninja编译。如果没安装ninja可以使用make编译。但是要调整一下脚本。修改cmake的参数Ninja为Unix Makefiles

`cd ./ollvm/llvm-project-llvmorg-9.0.1/ninja_build`

`./build_release.sh`

`ninja`

