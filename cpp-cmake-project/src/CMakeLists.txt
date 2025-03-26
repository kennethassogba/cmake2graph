cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CppCMakeProject)

# Add subdirectories for core and math
add_subdirectory(core)
add_subdirectory(math)

# Main executable
add_executable(app main.cpp)
target_link_libraries(app
    PRIVATE
        core
        math
)