#include "as1.hpp"

namespace homework {

void printHello() { std::cout << "Hello, World!" << std::endl; }

void AddOneRef(int &x) { 
    ++x;
    return; }

bool isOdd(int x) { 
    return x % 2; }

int floatToItnt(float x) { 
    x = static_cast<int>(x);
    return 0; }

int factorial(int n) { 
    int result{1};
    for (int i ; i <= n ; ++i){
        result *= i;
    }
    return result; }

}; // namespace homework
