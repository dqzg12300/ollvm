file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleLLVM.a"
  "../../../../../lib/libclangHandleLLVM.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleLLVM.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
