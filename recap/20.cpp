// In hybrid inheritance, a combination of two or more types of inheritance is used. In this case, it combines multiple inheritance and multilevel inheritance.

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

class Bird {
public:
    void fly() {
        cout << "Bird flies" << endl;
    }
};

class Bat : public Mammal, public Bird {  // Bat inherits from both Mammal and Bird
public:
    void screech() {
        cout << "Bat screeches" << endl;
    }
};

int main() {
    Bat bat1;
    bat1.speak();  // Inherited from Animal
    bat1.walk();   // Inherited from Mammal
    bat1.fly();    // Inherited from Bird
    bat1.screech();  // Bat's own method
    return 0;
}
