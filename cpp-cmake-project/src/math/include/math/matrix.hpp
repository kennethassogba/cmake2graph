#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>

class Matrix {
public:
    Matrix(int rows, int cols);
    void set(int row, int col, double value);
    double get(int row, int col) const;
    Matrix transpose() const;
    Matrix operator+(const Matrix& other) const;
    Matrix operator*(const Matrix& other) const;

private:
    int rows_;
    int cols_;
    std::vector<std::vector<double>> data_;
};

#endif // MATRIX_HPP