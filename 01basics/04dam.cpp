//implemented dynamic memory allocation code

#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age; int roll_number;
    string grade;
};
int main(){
    Student *S = new Student;
    (*S).name = "Sanjay";
    (*S).age = 20;
    (*S).roll_number = 1621;
    (*S).grade = "A+";

    cout<<" hi i'm "<<S->name<<", and i'm "<<S->age<<". My rollnumber is: "<<S->roll_number<<" and my grade is: "<<S->grade<<endl;
    return 0;
}