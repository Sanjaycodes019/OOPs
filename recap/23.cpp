//Runtime polymorphism, (virtual function)
//virtual function is a function that is defined in the base class and overridden in the derived class..

#include <iostream>
using namespace std;

class Shape {
    public: 
    virtual void draw(){ //virtual function
        cout<<"Drawing Shape"<<endl;
    }
};

class Circle : public Shape{
    public: 
    void draw() override { //overriding the base class function
        cout<<"Drawing Circle"<<endl;
    }
};

class Square : public Shape {
    public: 
    void draw() override { //overriding the base class function
        cout<<"Drawing Square" <<endl;
    }
};

int main(){
    Shape* shape;
    Circle c;
    Square s;

    shape = &c;
    shape->draw();

    shape = &s;
    shape->draw();

    return 0;
}