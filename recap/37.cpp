// algorithms
// STL provides functions for operations like sorting and searching.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {30, 10, 20};

    // Sort vector
    sort(v.begin(), v.end());

    for (int value : v) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}
