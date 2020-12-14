#############################################################################
# Name:        CMakeLists.txt
# Purpose:     Primary CMake for RayCompiler
# Author:      S·c
# Created:     2020-12-12
# Copyright:   (c) 2020 ScSofts development team
# Licence:     MIT licence
#############################################################################

cmake_minimum_required(VERSION 3.0.0)
set(VERSION "0.0.1")


if(NOT CMAKE_CONFIGURATION_TYPES)
    get_property(HAVE_MULTI_CONFIG_GENERATOR GLOBAL PROPERTY GENERATOR_IS_MULTI_CONFIG)
    # Set default configuration types for multi-config generators
    if(HAVE_MULTI_CONFIG_GENERATOR)
        set(CMAKE_CONFIGURATION_TYPES "Debug;Release")
    endif()
endif()
set(sources )
list(APPEND sources rayc.cc)
project(ray VERSION ${VERSION})
add_executable(rayc ${sources})