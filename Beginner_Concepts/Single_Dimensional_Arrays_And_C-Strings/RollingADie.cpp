#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

/**
	This is a program that simulates the rolling of a 6-sided die 10000 times and
	then displays each value and its number of occurrence.
*/

void rollDie(int frequency[], const int numberOfRolls);  // Prototype for the rollDie function.

int main(void)
{
	// An array to hold the frequency of occurrence of each face of a die.
	int frequency[7] = {0};

	// Rolls the die 10000 times.
	rollDie(frequency, 10000);

	// Displays each face of the die and it's number of occurrence.
	std::cout << "\nFace\t\tFrequency\n";
	for (int i = 1; i < 7; i++)
		std::cout << std::setw(4) << i << "\t\t" << std::setw(9) << frequency[i] << "\n";

	return (0);
}

/**
 * Rolls a die a by randomly generating a number between 1 and 6 a specified amount of times and 
 * records the frequency of occurrence of each face of the die.
 *
 * @param frequency An array to hold the frequency of occurrence of each face.
 * @param numberOfRolls The number of times the die is to be rolled.
 */
void rollDie(int frequency[], const int numberOfRolls)
{
	// Seeds the random number generator with the number of seconds since the unix epoch.
	srand(time(NULL));

	for (int i = 1; i <= numberOfRolls; ++i)
	{
		int face = 1 + (rand() % 6);

		++frequency[face];
	}
}

