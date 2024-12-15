#include <iostream>
using namespace std;

class Complex{
int real, img;

public:
Complex (int r = 0, int i = 0) : real(r), img(i){}

Complex operator+(const Complex& c){
    return Complex(real + c.real, img + c.img);
}
void display(){
    cout <<"The sum is: "<<real<<" + "<<img<<"i"<<endl;
}
};

int main(){
    Complex c1(3, 5), c2(2, 4);
    Complex c3 = c1 + c2; //calls operator+()
    c3.display();
    return 0;
}