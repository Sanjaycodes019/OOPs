#include<iostream>
using namespace std;

class customer {
    string name; // Customer name
    int id;      // Customer ID
    int age;     // Customer age

public:
    // Copy constructor
    // customer(customer &b) {
    //     name = b.name;
    //     id = b.id;
    //     age = b.age;
    // } // is this part is commented, the code will still run

    // Parameterized constructor
    customer(string a, int x, int y) {
        name = a;
        id = x;
        age = y;
    }

    // Function to display customer details
    void display() {
        cout << "Name: " << name << ", ID: " << id << ", Age: " << age << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    customer a1("sanjay", 20, 23);
    
    // Creating a new object using the copy constructor
    customer a2(a1); //default copy constructor is already present 

    // Displaying details of both objects
    a1.display();
    a2.display();

    return 0;
}
