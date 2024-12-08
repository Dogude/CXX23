#include <iostream>
#include <fstream>
#include <windows.h>
#include <random>
#include <stack>
#include <vector>
#include <set>
#include <array>
#include <list>
#include <string>
#include <cctype>
#include "test.h"

using namespace std;
    
class SimpleContainer {
public:

    // Constructor to initialize the container with values
    SimpleContainer(const std::vector<int>& data) : container(data) {}

    // Type definition for iterator
    using iterator = std::vector<int>::iterator;
    using number = int;

    // Begin and end functions for iterators
    iterator begin() { return container.begin(); }
    iterator end() { return container.end(); }

private:
    std::vector<int> container;  // Underlying data storage
    
};

template<class SimpleContainer>
//SimpleContainer::number func() { // error
typename SimpleContainer::number func() {

    return 34;

}

int main(){
    
    SimpleContainer::number du = 90;
    cout << func<SimpleContainer>(); // output "34"

}
