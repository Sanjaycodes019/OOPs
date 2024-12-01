//destructor 
//instance member function that is invoked automatically whenever an object is going to be destroyed
//called befored object is destroyed

#include <iostream>
using namespace std;

class Customer {
    string name;  // Customer name
    int *balance; // Dynamically allocated balance

public:
    // Constructor to initialize name and balance
    Customer(string name, int bal) {
        this->name = name;
        balance = new int;
        *balance = bal;
    }

    // Method to display customer details
    void display() {
        cout << "Name: " << name << ", Balance: " << *balance << endl;
    }

    // Destructor to release dynamically allocated memory
    ~Customer() {
        delete balance;
    }
};

int main() {
    Customer c1("sanjay", 20);
    c1.display(); // Correct method call

    return 0;
}
