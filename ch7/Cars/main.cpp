#include <iostream>
#include "Car.h"

using namespace std;

int main() {
	// Create a Car object
	Car myCar{1999, "Honda"};

	// Accelerate 5 times
	cout << "Accelerating" << endl;
	for (int i = 0; i < 5; i++) {
		myCar.accelerate();
		cout << "Speed: " << myCar.getSpeed() << endl;
	}

	// Brake 5 times
	cout << "\nBraking" << endl;
	for (int i = 0; i < 5; i++) {
		myCar.brake();
		cout << "Speed: " << myCar.getSpeed() << endl;
	}

	// Test all accessors
	cout << "\nAccessors" << endl;
	cout << "Year: " << myCar.getYear() << endl;
	cout << "Make: " << myCar.getMake() << endl;
	
	
	return 0;
}