//default arguement

#include <iostream>
using namespace std;

void display(char c = '*', int n = 5) {
    for (int i = 0; i < n; i++) {
        cout << c << " ";
    }
    cout << endl;
}

int main() {
    display();            // Default values
    display('#');         // Only first argument provided
    display('$', 3);      // Both arguments provided
    return 0;
}

/*
output:
* * * * * 
# # # # # 
$ $ $ 
*/