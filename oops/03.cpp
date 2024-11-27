#include <iostream>
#include <string>
using namespace std;

class shop {
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void getprice(void);
    void displayprice(void);
};

void shop::getprice(void) {
    cout << "Enter id of your item: " << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item: " << endl;
    cin >> itemprice[counter];
    counter++;
}

void shop::displayprice(void) {
    for (int i = 0; i < counter; i++) {
        cout << "The price of item with id: " << itemid[i] << " is " << itemprice[i] << endl;
    }
}

int main() {
    shop s;
    s.initcounter(); // Initialize counter to 0
    s.getprice();    // Get price and id of one item
    s.displayprice(); // Display prices of all entered items
    return 0;
}
