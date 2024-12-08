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

template<int M, int K, int S>
struct Unit {

    Unit() { cout << "unit const" << endl; }
    enum { m = M, kg = K, s = S };

};

template<typename Unit>
struct Value {
    double val;
    explicit Value(double d) : val(d) 
    {
        Unit di; // output "unit const"
        cout << di.m; // output "1"
    }
};

using number = Value<Unit<1,2,3>>;

int main(){
    
    number e(23.1);

    // number e = 12.1 // error because of explicit keyword
    
}
