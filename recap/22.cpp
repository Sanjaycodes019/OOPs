// Operator Overloading
// Operator overloading allows you to redefine the functionality of operators for user-defined classes.

#include <iostream>
using namespace std;

class Complex {
public:
    int real, imag;

    Complex operator + (const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;
    c1.real = 2; c1.imag = 3;
    c2.real = 1; c2.imag = 4;
    result = c1 + c2;  // Using overloaded + operator
    cout << "Sum: " << result.real << " + " << result.imag << "i" << endl;
    return 0;
}
