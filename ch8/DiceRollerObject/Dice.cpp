#include "Dice.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

// Constructor
Dice::Dice() {
	rolls.resize(100, 0);
	Size = rolls.size();
}

// Roll the dice
void Dice::roll100() {
	srand(time(0));
	for (int i = 0; i < 100; i++) {
		rolls[i] = rand() % 6 + 1;
	}
}

// Calculate Rolls
void Dice::calculateRolls() {
	for (int j = 1; j <= 6; j++) {
		int count = 0;
		for (int i = 0; i < 100; i++) {
			if (rolls[i] == j) {
				count++;
			}
		}
		std::cout << "Number of " << j << "'s: " << count << std::endl;
	}
}

// Print Dice
void Dice::printDice() {
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << rolls[i * 10 + j] << " ";
		}
		std::cout << std::endl;
	}
}