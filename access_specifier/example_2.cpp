#include <iostream>

class Base {
public:
    Base() : x(0) {std::cout << "Base constructor" << std::endl;}
    void func() {std::cout << "hello test" << std::endl;}
public:    
    int x;
};

class Derived : Base {
    
    public:
        void baz()
        {
            func();
            
        }
    
};

int main() {
    
    Derived d; // output : Base constructor
    //std::cout << d.x ;  // error 
    d.baz(); // output : hello test
    
    return 0;
    
}
