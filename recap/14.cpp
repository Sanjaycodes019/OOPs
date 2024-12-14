//member function and datamembers

#include <iostream>
using namespace std;

class Circle {
public:
    double radius;

    void setRadius(double r) {
        radius = r;
    }

    double calculateArea() {
        return 3.14159 * radius * radius;
    }
};

int main() {
    Circle circle1;
    circle1.setRadius(5.0);
    cout << "Area of circle: " << circle1.calculateArea() << endl;
    return 0;
}
