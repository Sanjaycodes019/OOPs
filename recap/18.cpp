// In multilevel inheritance, a derived class inherits from another derived class, creating a chain of inheritance.

#include <iostream>
using namespace std;

class Animal {
public:
    void speak() {
        cout << "Animal speaks" << endl;
    }
};

class Mammal : public Animal {  // Mammal inherits from Animal
public:
    void walk() {
        cout << "Mammal walks" << endl;
    }
};

class Dog : public Mammal {  // Dog inherits from Mammal (which inherits from Animal)
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
