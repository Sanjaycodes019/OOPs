// functions

//inline function

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    int n = 4;
    cout << "Square of " << n << " is " << square(n);
    return 0;
}
