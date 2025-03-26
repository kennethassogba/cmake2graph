#include "math/vector.hpp"

Vector::Vector(int size) : size(size) {
    data = new double[size];
}

Vector::~Vector() {
    delete[] data;
}

double Vector::get(int index) const {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    return data[index];
}

void Vector::set(int index, double value) {
    if (index < 0 || index >= size) {
        throw std::out_of_range("Index out of range");
    }
    data[index] = value;
}

int Vector::getSize() const {
    return size;
}

Vector Vector::operator+(const Vector& other) const {
    if (size != other.size) {
        throw std::invalid_argument("Vectors must be of the same size");
    }
    Vector result(size);
    for (int i = 0; i < size; ++i) {
        result.set(i, this->get(i) + other.get(i));
    }
    return result;
}

double Vector::dot(const Vector& other) const {
    if (size != other.size) {
        throw std::invalid_argument("Vectors must be of the same size");
    }
    double result = 0.0;
    for (int i = 0; i < size; ++i) {
        result += this->get(i) * other.get(i);
    }
    return result;
}