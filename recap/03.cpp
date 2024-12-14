//Strings Using Character Arrays

#include <iostream>
using namespace std;

 int main(){

// char name[20] = "Sanjay Gupta";
// cout<<"Name: "<<name<<endl;

// char name[20];
// cout << "Enter your name: ";
// cin >> name;
// cout << "Hello, " << name <<endl;

char name[50];
cout << "Enter full name: ";
cin.getline(name, 50); //cin stops taking space as input
cout << "Hello, " << name << endl;

     return 0; 
 }

