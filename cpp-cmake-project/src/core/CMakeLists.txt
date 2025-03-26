cmake_minimum_required(VERSION 3.10)

# Define the core library target
add_library(core STATIC
    src/logger.cpp
    src/utils.cpp
)

# Specify the include directories for the core module
target_include_directories(core
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_compile_features(core
    PUBLIC
        cxx_std_17
)