// filepath: /cpp-cmake-project/cpp-cmake-project/src/core/src/utils.cpp
#include "core/utils.hpp"

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    throw std::invalid_argument("Division by zero");
}