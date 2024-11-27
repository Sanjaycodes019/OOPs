#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    double radius; // Private member variable

public:
    // Constructor to initialize the radius
    Circle(double r = 1.5) : radius(r) {}

    // Getter function to retrieve the radius
    double getRadius() {
        return radius;
    }

    // Setter function to set the radius
    void setRadius(double r) {
        radius = r;
    }

    // Function to calculate and return the area
    double showArea() {
        return radius * radius * 3.1416; // Area formula: π * r^2
    }
};

int main() {
    Circle C1; // Create a Circle object with default radius (1.5)

    cout << "Radius: " << C1.getRadius() << endl; // Display the radius
    cout << "Area: " << C1.showArea() << endl;    // Display the area

    return 0;
}
