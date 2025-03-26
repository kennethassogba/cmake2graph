# Set the library target for the math module
add_library(math
    src/matrix.cpp
    src/vector.cpp
)

# Specify the include directories for the math module
target_include_directories(math
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_link_libraries(math
    PUBLIC
        core
)

target_compile_features(math
    PUBLIC
        cxx_std_17
)