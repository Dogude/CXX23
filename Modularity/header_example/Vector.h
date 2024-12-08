class Vector {
public:
    Vector(int s);              // Constructor
    double& operator[](int i);  // Subscript operator
    int size();                 // Size function

private:
    double* elem;               // Pointer to an array of doubles
    int sz;                     // Number of elements
};
