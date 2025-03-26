cmake_minimum_required(VERSION 3.14)
project(cpp-cmake-project 
        VERSION 1.0.0
        LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable testing
include(CTest)
enable_testing()

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)