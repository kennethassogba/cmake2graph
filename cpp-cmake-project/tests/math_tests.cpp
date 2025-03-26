#include <gtest/gtest.h>
#include "math/matrix.hpp"
#include "math/vector.hpp"

TEST(MatrixTest, Addition) {
    Matrix A(2, 2);
    Matrix B(2, 2);
    A(0, 0) = 1; A(0, 1) = 2;
    A(1, 0) = 3; A(1, 1) = 4;
    B(0, 0) = 5; B(0, 1) = 6;
    B(1, 0) = 7; B(1, 1) = 8;

    Matrix C = A + B;

    EXPECT_EQ(C(0, 0), 6);
    EXPECT_EQ(C(0, 1), 8);
    EXPECT_EQ(C(1, 0), 10);
    EXPECT_EQ(C(1, 1), 12);
}

TEST(VectorTest, DotProduct) {
    Vector v1(3);
    Vector v2(3);
    v1[0] = 1; v1[1] = 2; v1[2] = 3;
    v2[0] = 4; v2[1] = 5; v2[2] = 6;

    double result = v1.dot(v2);

    EXPECT_EQ(result, 32); // 1*4 + 2*5 + 3*6
}

TEST(MatrixTest, Multiplication) {
    Matrix A(2, 3);
    Matrix B(3, 2);
    A(0, 0) = 1; A(0, 1) = 2; A(0, 2) = 3;
    A(1, 0) = 4; A(1, 1) = 5; A(1, 2) = 6;
    B(0, 0) = 7; B(0, 1) = 8;
    B(1, 0) = 9; B(1, 1) = 10;
    B(2, 0) = 11; B(2, 1) = 12;

    Matrix C = A * B;

    EXPECT_EQ(C(0, 0), 58);
    EXPECT_EQ(C(0, 1), 64);
    EXPECT_EQ(C(1, 0), 139);
    EXPECT_EQ(C(1, 1), 154);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}