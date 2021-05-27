file(REMOVE_RECURSE
  "../../../../../lib/libclangHandleCXX.a"
  "../../../../../lib/libclangHandleCXX.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangHandleCXX.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
