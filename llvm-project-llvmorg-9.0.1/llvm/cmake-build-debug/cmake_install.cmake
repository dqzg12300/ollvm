# Install script for directory: /home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm

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
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include/llvm"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.td$" REGEX "/[^/]*\\.inc$" REGEX "/LICENSE\\.TXT$" REGEX "/\\.svn$" EXCLUDE)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xllvm-headersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/include/llvm"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/include/llvm-c"
    FILES_MATCHING REGEX "/[^/]*\\.def$" REGEX "/[^/]*\\.h$" REGEX "/[^/]*\\.gen$" REGEX "/[^/]*\\.inc$" REGEX "/CMakeFiles$" EXCLUDE REGEX "/config\\.h$" EXCLUDE REGEX "/\\.svn$" EXCLUDE)
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Demangle/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/Support/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/TableGen/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/TableGen/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/include/llvm/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/lib/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/FileCheck/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/PerfectShuffle/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/count/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/not/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/yaml-bench/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/projects/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/tools/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/runtimes/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/examples/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/lit/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/test/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/unittests/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/unittest/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/docs/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/cmake/modules/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/llvm-lit/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/utils/benchmark/cmake_install.cmake")
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/benchmarks/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
