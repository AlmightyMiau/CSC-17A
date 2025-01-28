#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

class Dice {
	private:
		std::vector<int> rolls;
		int Size;
	public:
		// Constructor
		Dice(); // Initializes dice
		void roll100(); // Rolls 100 dice
		void calculateRolls(); // Calculates the number of times each number was rolled
		void printDice(); // Prints the number of times each number was rolled
};

#endif