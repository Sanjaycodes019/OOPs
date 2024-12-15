//If a class contains at least one pure virtual function, it becomes an abstract class.
// You cannot instantiate abstract classes.

#include <iostream>
using namespace std;

class Shape {
    public:
    virtual void area() = 0; //pure virtual function
};

class Circle : public Shape {
    public: 
    void area() override {
        cout << "Area of circle: "<<endl;
    }
};


class Rectangle : public Shape {
    public: void area() override {
        cout << "Area of Rectangle: "<<endl;
    }
};

int main(){
    Shape* shape;

    Circle circle;
    Rectangle rect;

    shape = &circle;
    shape->area();

    shape = &rect;
    shape -> area();

    return 0;
}


/*

Key Points to Remember

1. Static Polymorphism:
Resolved during compile time.
Achieved using function overloading and operator overloading.

2. Dynamic Polymorphism:
Resolved during runtime.
Achieved using function overriding and virtual functions.

3. Virtual Functions:
Enable late binding.
Allow base-class pointers to call derived-class methods.

4. Pure Virtual Functions:
Make a class abstract.
Force derived classes to implement the function.

*/