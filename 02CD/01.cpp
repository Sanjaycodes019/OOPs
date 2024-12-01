//special function that is invoked automatically at the time of object creation
// no return type
//name is same as the class name

//implemented constructor

#include<iostream>
using namespace std;
class employee{
    string name;
    int account_number;
    int balance;
    public:
    employee(){ //default constructor
    name = "Sanjay";
    account_number = 5;
    balance = 100;
    }
    // employee( string a, int x, int y){ //parameterised constructor
    //     this->name = a;
    //     this->account_number = x;
    //     this->balance = y;
    // }
    void display(){ 
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    //inline constructor
    inline employee(string a, int x, int y): name(a), account_number(x), balance(y){}

};
int main(){

    employee e1, e2("bipin", 23, 200);
    e1.display(); //Sanjay 5 100
    // e2.display(); //Sanjay 5 100
    e2.display();

    return 0;
}