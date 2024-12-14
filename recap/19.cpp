//In hierarchical inheritance, multiple derived classes inherit from a single base class.

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

class Cat : public Animal {  // Cat also inherits from Animal
public:
    void meow() {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog dog1;
    dog1.speak();  // Inherited from Animal
    dog1.bark();   // Dog's own method

    Cat cat1;
    cat1.speak();  // Inherited from Animal
    cat1.meow();   // Cat's own method

    return 0;
}
