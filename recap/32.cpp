//class template
//Class templates are useful when the same logic applies to different data types.

#include <iostream>
using namespace std;

// // class without template
// class Integer {
//     int value;
// public:
//     Integer(int v) : value(v) {}
//     int getValue() { return value; }
// };

// class Double {
//     double value;
// public:
//     Double(double v) : value(v) {}
//     double getValue() { return value; }
// };

// // with template

template <typename T>
class Generic {
    T value;
public:
    Generic(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Generic<int> i(5);     // Integer type
    Generic<double> d(5.5); // Double type

    cout << "Integer Value: " << i.getValue() << endl;
    cout << "Double Value: " << d.getValue() << endl;
    return 0;
}

