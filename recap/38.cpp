#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30};

    // Check if 20 exists
    if (binary_search(v.begin(), v.end(), 20)) {
        cout << "20 found" << endl;
    } else {
        cout << "20 not found" << endl;
    }

    return 0;
}
