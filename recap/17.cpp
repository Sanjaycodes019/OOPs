//multiple inheritance : A derived class inherits from more than one base class.

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Mammal {
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

class Dog : public Animal, public Mammal {  // Dog inherits from Animal and Mammal
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.speak();  // Inherited from Animal
    dog1.walk();   // Inherited from Mammal
    dog1.bark();   // Derived class method
    return 0;
}

