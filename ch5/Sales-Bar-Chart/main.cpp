#include <iostream>

using namespace std;

int main() {
    int store1, store2, store3;
    cout << "Enter today's sales for store 1: ";
    cin >> store1;
    cout << "Enter today's sales for store 2: ";
    cin >> store2;
    cout << "Enter today's sales for store 3: ";
    cin >> store3;

    cout << "\nDAILY SALES\n";
    cout << "(each*= $100)\n";

    cout << "Store 1: ";
    for (int i = 0; i < store1 / 100; i++) {
        cout << "*";
    }

    cout << "\nStore 2: ";
    for (int i = 0; i < store2 / 100; i++) {
        cout << "*";
    }

    cout << "\nStore 3: ";
    for (int i = 0; i < store3 / 100; i++) {
        cout << "*";
    }

    cout << endl;
}