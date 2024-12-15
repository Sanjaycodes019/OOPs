// Exception Handling in C++
// A mechanism to handle runtime errors.
/*
1. try block

try {
    // Code that may cause an exception
}


2. throw statement

throw exception_type;

3. catch block 

catch (exception_type) {
    // Code to handle the exception
}

*/

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }
        cout << "Result: " << (a / b) << endl;
    } 
    catch (const char* msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
