cmake_minimum_required(VERSION 3.17)
project(CreatorHelper)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(NOT DEFINED ENV{GEODE_SDK_PATH})
    message(FATAL_ERROR "GEODE_SDK_PATH is not set. Make sure you build with geode-sdk/build-geode-mod.")
endif()

include("$ENV{GEODE_SDK_PATH}/cmake/Geode.cmake")

geode_mod(
    SOURCES
        src/main.cpp
)
