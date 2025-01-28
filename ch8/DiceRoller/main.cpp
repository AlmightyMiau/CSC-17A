#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rollDice(int* rolls, int size);
int numOnes(int* rolls, int size);
int numTwos(int* rolls, int size);
int numThrees(int* rolls, int size);
int numFours(int* rolls, int size);
int numFives(int* rolls, int size);
int numSixes(int* rolls, int size);

int main() {
	int size = 100;
	int rolls[size];

	rollDice(rolls, size);

	cout << "Number of 1's: " << numOnes(rolls, size) << endl;
	cout << "Number of 2's: " << numTwos(rolls, size) << endl;
	cout << "Number of 3's: " << numThrees(rolls, size) << endl;
	cout << "Number of 4's: " << numFours(rolls, size) << endl;
	cout << "Number of 5's: " << numFives(rolls, size) << endl;
	cout << "Number of 6's: " << numSixes(rolls, size) << endl;
}

void rollDice(int* rolls, int size) {
	srand(time(0));

	for (int i = 0; i < size; i++) {
		rolls[i] = rand() % 6 + 1;
	}
}

int numOnes(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 1) {
			count++;
		}
	}
	return count;
}

int numTwos(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 2) {
			count++;
		}
	}
	return count;
}

int numThrees(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 3) {
			count++;
		}
	}
	return count;
}

int numFours(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 4) {
			count++;
		}
	}
	return count;
}

int numFives(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 5) {
			count++;
		}
	}
	return count;
}

int numSixes(int* rolls, int size) {
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (rolls[i] == 6) {
			count++;
		}
	}
	return count;
}

