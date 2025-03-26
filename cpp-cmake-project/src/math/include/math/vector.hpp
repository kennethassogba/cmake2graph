#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <vector>

class Vector {
public:
    Vector(size_t size);
    double& operator[](size_t index);
    const double& operator[](size_t index) const;
    size_t size() const;
    void fill(double value);

private:
    std::vector<double> data;
};

#endif // VECTOR_HPP