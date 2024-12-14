// Call by Value vs Call by Reference

#include <iostream>
using namespace std;

// Call by Value
void callByValue(int x) {
    x = x + 5;
    cout << "Inside callByValue: " << x << endl;
}

// Call by Reference
void callByReference(int &x) {
    x = x + 5;
    cout << "Inside callByReference: " << x << endl;
}

int main() {
    int num = 10;

    callByValue(num);
    cout << "After callByValue: " << num << endl;

    callByReference(num);
    cout << "After callByReference: " << num << endl; //original value changes

    return 0;
}
