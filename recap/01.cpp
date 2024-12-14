/*

The key concepts of OOP are:

Data Hiding  : Restricting access to class members.
Abstraction  : Hiding internal details and showing only necessary features.
Encapsulation: Combining data and methods into a single unit.
Inheritance  : Reusing properties and behaviors of a base class in derived classes.
Polymorphism : Methods or operators taking multiple forms.

*/



/*

Advantages of OOP over Procedural Programming

Data Security   : Encapsulation ensures that data is not accessible directly.
Code Reusability: Inheritance allows the reuse of code.
Maintainability : Modular design makes the program easier to maintain.
Flexibility     : Polymorphism allows flexibility in function/method usage.
Better Real-World Modelling: Objects and classes represent real-world entities effectively.


*/

// Array in c++

#include <iostream>
using namespace std;

int main() {
    int marks[5] = {90, 85, 88, 76, 95};

    // cout << "Marks are: " << endl;
    // for (int i = 0; i < 5; i++) {
    //     cout << "marks[" << i << "] = " << marks[i] << endl;
    // }

    int sum = 0;  // sum of the element
    for (int i = 0; i < 5; i++) {
        sum += marks[i];
    }
    cout << "Sum = " << sum <<endl;


    //finding maximum and minimum
    int max = marks[0];
    for (int i = 1; i < 5; i++) {
    if (marks[i] > max)
        max = marks[i];
    }
    cout << "Maximum = " << max;

    return 0;
}
