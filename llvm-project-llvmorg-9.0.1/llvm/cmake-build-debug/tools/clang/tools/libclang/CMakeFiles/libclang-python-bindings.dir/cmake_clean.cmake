file(REMOVE_RECURSE
  "libclang.exports"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/libclang-python-bindings.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
