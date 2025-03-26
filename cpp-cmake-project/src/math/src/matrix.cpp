#include "math/matrix.hpp"
#include <stdexcept>

Matrix::Matrix(size_t rows, size_t cols) : rows_(rows), cols_(cols) {
    if (rows == 0 || cols == 0) {
        throw std::invalid_argument("Matrix dimensions must be greater than zero.");
    }
    data_ = new double*[rows_];
    for (size_t i = 0; i < rows_; ++i) {
        data_[i] = new double[cols_]();
    }
}

Matrix::~Matrix() {
    for (size_t i = 0; i < rows_; ++i) {
        delete[] data_[i];
    }
    delete[] data_;
}

double Matrix::get(size_t row, size_t col) const {
    if (row >= rows_ || col >= cols_) {
        throw std::out_of_range("Matrix indices are out of range.");
    }
    return data_[row][col];
}

void Matrix::set(size_t row, size_t col, double value) {
    if (row >= rows_ || col >= cols_) {
        throw std::out_of_range("Matrix indices are out of range.");
    }
    data_[row][col] = value;
}

size_t Matrix::getRows() const {
    return rows_;
}

size_t Matrix::getCols() const {
    return cols_;
}

Matrix Matrix::operator+(const Matrix& other) const {
    if (rows_ != other.rows_ || cols_ != other.cols_) {
        throw std::invalid_argument("Matrices must have the same dimensions for addition.");
    }
    Matrix result(rows_, cols_);
    for (size_t i = 0; i < rows_; ++i) {
        for (size_t j = 0; j < cols_; ++j) {
            result.set(i, j, this->get(i, j) + other.get(i, j));
        }
    }
    return result;
}

// Additional matrix operations can be implemented here.