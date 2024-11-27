
    //oops classes and objects

    //c++ --> c with classes, by stroustroup
    //class --> extension of structure ( in c)
    // structures has limititaitons, members were public, and cant set methods 
    //classes ==> structures + more (methods, properties)
    // classes can make public and private
    // classes in c++ are already typedefed
    // declare object with along with class declaration

    /*
    class employee{
    class defination
    } sanjay, bipin, gopal;
    */ 
   
     //sanjay.salary = 123412413; does't make sense if salary is private

     //nesting of function

#include <iostream>
#include <string>
using namespace std;

class binary {
    string s; // Private member variable to store the binary string

public:
    void read();     // Member function to read binary input
    void chk_bin();  // Member function to check if input is binary
};

void binary::read() {
    cout << "Enter a binary number: ";
    cin >> s;
}

void binary::chk_bin() {
    for (int i = 0; i < s.length(); i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {
            cout << "Incorrect binary format" << endl;
            exit(0); // Exit if the string is not binary
        }
    }
    cout << "The binary number is valid." << endl;
}

int main() {
    binary b; // Create an object of the binary class
    b.read(); // Call the read method
    b.chk_bin(); // Call the chk_bin method to validate the binary string

    return 0;
}
