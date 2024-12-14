//friend function
//Not a member of the class but can access its private and protected members.

#include <iostream>
using namespace std;

class Box {
private:
    double length;

public:
    Box(double l) : length(l) {}  // Constructor to initialize length

    // Getter function to access private member length
    double getLength() const {
        return length;
    }
};

// Friend function definition outside the class
double calculateArea(Box b) {
    return b.getLength() * b.getLength();  // Accessing private member through getter function
}

int main() {
    Box box(5.0);  // Creating an object of Box
    cout << "Area of Box: " << calculateArea(box) << endl;  // Calling the friend function
    return 0;
}
