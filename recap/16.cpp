//inheritance
/*

Single Inheritance      : A derived class inherits from a single base class.
Multiple Inheritance    : A derived class inherits from more than one base class.
Multilevel Inheritance  : A derived class inherits from another derived class.
Hierarchical Inheritance: Multiple classes inherit from a single base class.
Hybrid Inheritance      : A combination of multiple types of inheritance.

*/

//single inheritance

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Dog : public Animal {  // Dog inherits from Animal
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.speak();  // Inherited method
    dog1.bark();   // Derived class method
    return 0;
}
