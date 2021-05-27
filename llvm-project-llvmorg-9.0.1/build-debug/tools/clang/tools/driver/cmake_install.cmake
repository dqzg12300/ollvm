# Install script for directory: /home/king/ollvm/llvm-project-llvmorg-9.0.1/clang/tools/driver

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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/bin/clang-9"
    "/home/king/ollvm/llvm-project-llvmorg-9.0.1/build-debug/bin/clang"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/clang-9"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/clang"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(clang++ clang bin)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(clang-cl clang bin)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/king/ollvm/llvm-project-llvmorg-9.0.1/llvm/cmake/modules/LLVMInstallSymlink.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xclangx" OR NOT CMAKE_INSTALL_COMPONENT)
  install_symlink(clang-cpp clang bin)
endif()

