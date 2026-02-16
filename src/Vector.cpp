#include <iostream>
#include <vector>
#include "Vector.hpp"

void Vector::print_version() {
    std::cout << "PyVec UoWM Engine v1.0 (C++20)" << std::endl;
    std::cout << "Author: Apostolos Chalis 2026 <cs05414@uowm.gr" << std::endl;
}

Vector Vector::from_points(const std::vector<double>& A, const std::vector<double>& B) {
    if (A.size() != B.size()) {
        throw std::invalid_argument("Dimensions mismatch!"); 
    }

    std::vector<double> result;
    for (size_t i = 0; i < A.size(); ++i) {
        result.push_back(B[i] - A[i]); 
    }
    return Vector(result);
}

double Vector::get(size_t index) const {
    if (index >= components.size()) {
        throw std::out_of_range("Index out of bounds for Vector");
    }
    return components[index];
}
