//catching multiple exceptions
#include <iostream>
using namespace std;

int main() {
    try {
        throw 3.14; // Throwing a double
    } catch (...) {
        cout << "Caught an exception of unknown type!" << endl;
    }
    return 0;
}
