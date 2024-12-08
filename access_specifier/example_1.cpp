#include <iostream>

class Base {
public:
    void publicMethod() {
        std::cout << "Base::publicMethod()" << std::endl;
    }

protected:
    void protectedMethod() {
        std::cout << "Base::protectedMethod()" << std::endl;
    }

private:
    void privateMethod() {
        std::cout << "Base::privateMethod()" << std::endl;
    }
};

class Derived : private Base {
public:
    void derivedMethod() {
        // Can access public and protected members of Base
        publicMethod();
        protectedMethod();

        // Cannot access private members of Base
        // privateMethod(); // This would cause a compilation error
    }
};

int main() {
    
    Derived d;
    d.derivedMethod(); // calls both publicMethod and protectedMethod
    // d.publicMethod(); // This would cause a compilation error
    return 0;
}
