// function prototyping

#include <iostream>
using namespace std;

int multiply(int, int); // Function Prototype

int main() {
    cout << "Product: " << multiply(4, 5);
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
