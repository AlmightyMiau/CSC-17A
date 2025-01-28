#include <iostream>

using namespace std;

int main() {
	string salsaType[5] = {"mild", "medium", "sweet", "hot", "zesty"};
	int salsaSold[5];
	int total = 0;
	int highest = 0;
	int lowest = 0;

	// Get the number of jars sold for each salsa type
	for (int i = 0; i < 5; i++) {
		cout << "Enter the number of jars sold for " << salsaType[i] << ": ";
		cin >> salsaSold[i];
		total += salsaSold[i];
	}

	// Find the highest and lowest selling salsa types
	for (int i = 1; i < 5; i++) {
		if (salsaSold[i] > salsaSold[highest])
			highest = i;
		else if (salsaSold[i] < salsaSold[lowest])
			lowest = i;
	}

	// Display the sales report
	cout << "\nSales Report\n";
	for (int i = 0; i < 5; i++) 
		cout << salsaType[i] << ": " << salsaSold[i] << " jars\n";
	cout << "Total sales: " << total << " jars\n";
	cout << "Highest selling product: " << salsaType[highest] << "\n";
	cout << "Lowest selling product: " << salsaType[lowest] << "\n";
}