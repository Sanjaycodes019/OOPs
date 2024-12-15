//Template
//Templates are the blueprint for creating functions or classes that work with any type of data.


#include <iostream>
using namespace std;

// // these are the functions without template
// int add(int a, int b) {
//     return a + b;
// }

// double add(double a, double b) {
//     return a + b;
// }

template <typename T> // T is a placeholder for any data type
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << "Integer Addition: " << add(2, 3) << endl;
    cout << "Double Addition: " << add(2.5, 3.5) << endl;
    return 0;
}
