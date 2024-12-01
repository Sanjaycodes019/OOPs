#include <iostream>
using namespace std;

// Class Definition
class employee {
private:
    int a, b, c; // Private members

public:
    int d, e; // Public members

    void setdata(int a, int b, int c); // Declare setdata function
    void getdata() {
    cout << "The value of a is: " << a << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of c is: " << c << endl;
    cout << "The value of d is: " << d << endl;
    cout << "The value of e is: " << e << endl;
} 
};

// Definition of setdata function outside the class
void employee::setdata(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

int main() {
    employee sanjay; // Create an employee object

    // Set values for public members
    sanjay.d = 23;
    sanjay.e = 34;

    // Call setdata to initialize private members
    sanjay.setdata(1, 3, 5);

    // Display all values
    sanjay.getdata();

    return 0;
}
