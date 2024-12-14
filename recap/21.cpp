//Polymorphism
//Polymorphism means the ability to take many forms.
//In C++, polymorphism can be achieved through function overloading, operator overloading, and runtime polymorphism (using virtual functions).

//function overloading

#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

int main() {
    Calculator calc;
    cout << "Sum of integers: " << calc.add(5, 3) << endl;
    cout << "Sum of doubles: " << calc.add(5.5, 3.3) << endl;
    return 0;
}
