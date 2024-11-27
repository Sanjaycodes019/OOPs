#include <iostream>
#include <cmath>
using namespace std;

class circle {
private:
    double radius; // Private member variable

public:
    void getRadius();   // Method to set the radius
    double showArea();  // Corrected return type to double
};

void circle::getRadius() {
    radius = 1.5; // Set radius to 1.5
}

double circle::showArea() {
    return radius * radius * 3.1416; // Area formula: π * r^2
}

int main() {
    circle c1;
    c1.getRadius(); // Set the radius
    cout << "Area = " << c1.showArea(); // Output the area
    return 0;
}
