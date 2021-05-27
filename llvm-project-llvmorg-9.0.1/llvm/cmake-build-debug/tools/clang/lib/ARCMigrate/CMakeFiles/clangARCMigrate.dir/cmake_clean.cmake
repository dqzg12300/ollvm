file(REMOVE_RECURSE
  "../../../../lib/libclangARCMigrate.a"
  "../../../../lib/libclangARCMigrate.pdb"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/clangARCMigrate.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
