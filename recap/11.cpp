// class and objects

#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    void displayInfo() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;  // Object creation
    car1.model = "Toyota";
    car1.year = 2020;
    car1.displayInfo();  // Calling the member function
    return 0;
}
