// Strings Using the <string> Class

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Hello, " << name << "!";

//finding the length
string s = "Hello";
cout << "Length = " << s.length()<<endl;


//concatenation
string s1 = "Hello, ";
string s2 = "World!";
string result = s1 + s2;
cout << result<<endl;

//finding position of string
//string s = "Hello World";
int pos = s.find("World");
cout << "Position: " << pos<<endl;


    return 0;
}
