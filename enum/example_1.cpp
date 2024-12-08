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

enum Color { red, green, blue };

enum class Traffic_light {  pink };

int main(){

    int col = green;  // Implicitly converts to int
    cout << green << endl; // output : 1
    cout << ::green << endl; // output : 1
    cout << Color::green << endl; // output : 1 

    cout << pink << endl; // error

}
