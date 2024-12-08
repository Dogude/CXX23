#include <iostream>

class Base {
public:
    Base() : x(0) {std::cout << "Base constructor" << std::endl;}
    void func() {std::cout << "hello test" << std::endl;}
    virtual ~Base(){std::cout << "Base Destructor" << std::endl;}
public:    
    int x;
};

class Derived : Base {
    
    public:
        void baz()
        {
            func();
            
        }
    
    ~Derived(){ std::cout << "Derived Destructor" << std::endl; }
    
};

int main() {
    
    Base* ptr = new Derived; // error, Base is private
    Derived d;
    d.func(); // error Base::func is private within Derived
    d.baz(); // ok
    delete ptr;
    
}
