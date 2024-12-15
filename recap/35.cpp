//map

#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    // Insert elements
    m["apple"] = 50;
    m["banana"] = 30;

    // Access using keys
    cout << "Price of apple: " << m["apple"] << endl;

    // Traverse map
    for (auto pair : m) {
        cout << pair.first << ": " << pair.second << endl;
    }

    return 0;
}
