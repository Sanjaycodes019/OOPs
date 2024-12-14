//access modifier

/*
public   : Members are accessible from outside the class.
private  : Members are not accessible from outside the class.
protected: Members are accessible in the class and derived classes.
*/

#include <iostream>
using namespace std;

class Car {
private:
    string model;
    int year;

public:
    void setInfo(string m, int y) {
        model = m;
        year = y;
    }

    void displayInfo() {
        cout << "Model: " << model << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    car1.setInfo("BMW", 2023);  // Setting values using public function
    car1.displayInfo();  // Accessing public method
    return 0;
}
