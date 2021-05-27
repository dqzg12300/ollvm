# Install script for directory: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include" TYPE FILE FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/adxintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/altivec.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ammintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/arm_acle.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/armintr.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/arm64intr.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx2intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512bf16intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512bwintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512bitalgintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlbitalgintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512cdintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vpopcntdqintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512dqintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512erintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512fintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512ifmaintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512ifmavlintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512pfintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vbmiintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vbmivlintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vbmi2intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlvbmi2intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlbf16intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlbwintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlcdintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vldqintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vp2intersectintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlvp2intersectintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vpopcntdqvlintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vnniintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avx512vlvnniintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/avxintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/bmi2intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/bmiintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_builtin_vars.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_cmath.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_complex_builtins.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_device_functions.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_intrinsics.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_libdevice_declares.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_math_forward_declares.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__clang_cuda_runtime_wrapper.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cetintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cldemoteintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/clzerointrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cpuid.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/clflushoptintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/clwbintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/emmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/enqcmdintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/f16cintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/float.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/fma4intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/fmaintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/fxsrintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/gfniintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/htmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/htmxlintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ia32intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/immintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/inttypes.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/invpcidintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/iso646.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/limits.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/lwpintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/lzcntintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/mm3dnow.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/mmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/mm_malloc.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/module.modulemap"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/movdirintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/msa.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/mwaitxintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/nmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/opencl-c.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/opencl-c-base.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/pkuintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/pmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/pconfigintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/popcntintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/prfchwintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ptwriteintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/rdseedintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/rtmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/sgxintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/s390intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/shaintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/smmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdalign.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdarg.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdatomic.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdbool.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stddef.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__stddef_max_align_t.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdint.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/stdnoreturn.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/tbmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/tgmath.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/tmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/unwind.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/vadefs.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/vaesintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/varargs.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/vecintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/vpclmulqdqintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/waitpkgintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/wbnoinvdintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/wmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__wmmintrin_aes.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/__wmmintrin_pclmul.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/x86intrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xopintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xsavecintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xsaveintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xsaveoptintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xsavesintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/xtestintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/tools/clang/lib/Headers/arm_neon.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/tools/clang/lib/Headers/arm_fp16.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/cuda_wrappers" TYPE FILE FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cuda_wrappers/algorithm"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cuda_wrappers/complex"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/cuda_wrappers/new"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/ppc_wrappers" TYPE FILE FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ppc_wrappers/mmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ppc_wrappers/xmmintrin.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ppc_wrappers/mm_malloc.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/ppc_wrappers/emmintrin.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclang-resource-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/clang/9.0.1/include/openmp_wrappers" TYPE FILE FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/openmp_wrappers/math.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/openmp_wrappers/cmath"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/openmp_wrappers/__clang_openmp_math.h"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/lib/Headers/openmp_wrappers/__clang_openmp_math_declares.h"
    )
endif()

