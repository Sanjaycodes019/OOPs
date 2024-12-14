//constructor

#include <iostream>
using namespace std;

class Car {
public:
    string model;
    int year;

    Car(string m, int y) {  // Constructor
        model = m;
        year = y;
        cout << "Car " << model << " created!" << endl;
    }

    ~Car() {  // Destructor
        cout << "Car " << model << " destroyed!" << endl;
    }
};

int main() {
    Car car1("Tesla", 2022);  // Constructor is called
    cout << "Model: " << car1.model << ", Year: " << car1.year << endl;
    return 0;  // Destructor is called when car1 goes out of scope
}
