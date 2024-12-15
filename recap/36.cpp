// iterators
// Iterators are used to traverse containers.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        cout << *it << " "; // Dereference iterator to access value
    }
    cout << endl;

    return 0;
}
