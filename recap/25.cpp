//In function overriding,
//a derived class provides its own version of a function that exists in the base class.

#include<iostream>
using namespace std;

class Animal {
    public:
    virtual void sound(){ //virtual function
        cout<<"Animal makes a sound"<<endl;
    }
};

class Dog : public Animal {
    public:
    void sound() override { //overriding function
        cout << " Dog barks"<<endl;
    }
};

int main(){
    Animal *a;
    Dog d;

    a = &d;
    a -> sound(); //calls dog's sound() because of virtual function
    return 0;
}