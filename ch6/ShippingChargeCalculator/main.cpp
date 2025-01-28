#include <iostream>

using namespace std;

float calculateCharge(float weight, float distance);

int main() {
    // Inputs
    float weight;
    float distance;

    // Get package weight
    cout << "Weight: ";
    cin >> weight;

    // Loop until weight is 0
    while (weight != 0) {
        // Get shipping distance
        cout << "Distance: ";
        cin >> distance;

        // Calculate and Display shipping cost
        cout << "Shipping charge: " << calculateCharge(weight, distance) << endl;

        // Get package weight
        cout << "Weight: ";
        cin >> weight;
    }
}

float calculateCharge(float weight, float distance) {
    // Shipping rates / 500 miles
    // <=2kg : $3.10
    // >2kg but <=6kg : $4.20
    // >6kg but <=10kg : $5.30
    // >10kg : $6.40

    // Calculate shipping cost
    if (weight <= 2) {
        return (distance / 500) * 3.10;
    } else if (weight <= 6) {
        return (distance / 500) * 4.20;
    } else if (weight <= 10) {
        return (distance / 500) * 5.30;
    } else {
        return (distance / 500) * 6.40;
    }
}

/*
                Get weight
                Get distance
                Pass to calculateCharge()
                calculateCharge computes and returns shipping according to table
                display shipping charge
                Loop while weight != 0
*/