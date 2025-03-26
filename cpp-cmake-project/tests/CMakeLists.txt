find_package(GTest REQUIRED)

add_executable(core_tests core_tests.cpp)
target_link_libraries(core_tests
    PRIVATE
        core
        GTest::GTest
        GTest::Main
)

add_executable(math_tests math_tests.cpp)
target_link_libraries(math_tests
    PRIVATE
        math
        GTest::GTest
        GTest::Main
)

add_test(NAME CoreTests COMMAND core_tests)
add_test(NAME MathTests COMMAND math_tests)