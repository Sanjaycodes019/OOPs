/*

STL (Standard Template Library)
-Containers (to store data)
-Iterators (to traverse data)
-Algorithms (to perform operations like sorting, searching)

*/


// vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v; // Create an empty vector

    // Add elements
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Access elements
    cout << "First Element: " << v[0] << endl;

    // Traverse using a loop
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}
