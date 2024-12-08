#include <iostream>

class Base {
public:
    Base() : x(0) {std::cout << "Base constructor" << std::endl;}
    void func() {std::cout << "hello test" << std::endl;}
    ~Base(){std::cout << "Base Destructor" << std::endl;}
public:    
    int x;
};

class Derived :  Base {
    
    public:
        void baz()
        {
            func();
            
        }
    
    ~Derived(){ std::cout << "Derived Destructor" << std::endl; }
    
};

int main() {
    
    Derived* ptr = new Derived;
    
    delete ptr;
    
    // output     Base constructor
    //            Derived Destructor
    //            Base Destructor
    
}
