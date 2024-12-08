#include "Vector.h"

Vector::Vector(int s)
    : elem{new double[s]}, sz{s} { }  // Initialize members

double& Vector::operator[](int i) {
    return elem[i];                   // Access ith element
}

int Vector::size() {
    return sz;                        // Return size
}
