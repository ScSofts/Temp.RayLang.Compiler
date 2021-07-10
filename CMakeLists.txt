#############################################################################
# Name:        CMakeLists.txt
# Purpose:     Primary CMake for RayCompiler
# Author:      S·c
# Created:     2020-12-12
# Copyright:   (c) 2020 ScSofts development team
# Licence:     MIT licence
#############################################################################

cmake_minimum_required(VERSION 3.0.0)
set(RAYC_VERSION "0.0.1")
find_package(LLVM REQUIRED CONFIG)
SET(UTF8_TESTS "off" CACHE BOOL "Disable UTFCpp Tests" FORCE)
add_subdirectory(libs/antlr-rt)


message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

# Set your project compile flags.
# E.g. if using the C++ header files
# you will need to enable C++11 support
# for your compiler.

include_directories(${LLVM_INCLUDE_DIRS})
separate_arguments(LLVM_DEFINITIONS_LIST NATIVE_COMMAND ${LLVM_DEFINITIONS})
add_definitions(${LLVM_DEFINITIONS_LIST})


set(sources rayc.cc
            generated/RayBaseListener.cpp
            generated/RayBaseVisitor.cpp
            generated/RayLexer.cpp
            generated/RayListener.cpp
            generated/RayParser.cpp
            generated/RayVisitor.cpp
            core/RayCoreVisitor.cpp
            )

project(ray VERSION ${RAYC_VERSION})
add_executable(rayc ${sources})

target_include_directories(rayc PRIVATE ./libs/antlr-rt/runtime/src)
target_include_directories(rayc PRIVATE ./generated)
target_include_directories(rayc PRIVATE ./core/)

target_compile_definitions(rayc PUBLIC "RAYC_VERSION=\"${RAYC_VERSION}\"" PUBLIC "ANTLR4CPP_STATIC")
target_link_libraries(rayc antlr4_static)

# Find the libraries that correspond to the LLVM components
# that we wish to use
llvm_map_components_to_libnames(llvm_libs support core irreader)

# Link against LLVM libraries
target_link_libraries(rayc ${llvm_libs})

