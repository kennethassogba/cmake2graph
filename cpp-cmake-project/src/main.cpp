#include <iostream>
#include "core/logger.hpp"
#include "math/matrix.hpp"
#include "math/vector.hpp"

int main() {
    Logger logger;
    logger.log("Application started.");

    Matrix mat(3, 3);
    Vector vec(3);
    
    // Example usage of Matrix and Vector
    mat.set(0, 0, 1);
    mat.set(1, 1, 2);
    mat.set(2, 2, 3);
    
    vec.set(0, 1);
    vec.set(1, 2);
    vec.set(2, 3);

    logger.log("Matrix and Vector initialized.");

    // Perform operations (to be implemented)
    // mat.multiply(vec);
    
    logger.log("Application finished.");
    return 0;
}