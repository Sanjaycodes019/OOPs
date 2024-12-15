//list
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;

    // Add elements
    l.push_back(10);
    l.push_back(20);
    l.push_front(5);

    // Traverse the list
    for (int value : l) { // range based for loop
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
