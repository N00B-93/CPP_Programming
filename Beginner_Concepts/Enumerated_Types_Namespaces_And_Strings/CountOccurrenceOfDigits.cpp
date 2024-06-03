#include <iostream>
#include <limits>

/**
	This is a program that prompts the user to enter an integer and then displays the number of
	occurrence of each digit in the integer by using a function with the header;
			void countDigit(const int& number, int array[], int size)
*/

void countDigit(const int& number, int array[], int size);  // Prototype of the countDigit function.

int main(int argc, char* const argv[])
{
	// Variable to hold the number entered by the user, an array to hold the number of occurrence 
	// of each digit in the user input and a constant variable to hold the size of the array.
	int number;
	const int SIZE = 10;
	int array[SIZE] = {0};

	// Prompts the user to enter an integer.
	std::cout << "\nEnter an integer > 1: ";
	std::cin >> number;
	
	// Loop that validates the user's input.
	while (true)
	{
		if (std::cin.fail())
		{
			std::cout << "\nError: Use poitive integers > 1 only, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "\nEnter an integer > 1: ";
			std::cin >> number;
		}
		else if (number < 1)
		{
			std::cout << "\nError: Use a number > 1, Try again.\n";
			std::cout << "\nEnter an integer > 1: ";
			std::cin >> number;
		}
		else
			break;
	}

	// Determines the number of occurrence of each digit.
	countDigit(number, array, SIZE);

	// Displays the occurrence of each digit.
	for (int i = 0; i < SIZE; ++i)
	{
		if (array[i] == 0)
			continue;
		else if (array[i] == 1)
			std::cout << "\n" << i << " occurs " << array[i] << " time in " << number << "\n";
		else
			std::cout << "\n" << i << " occurs " << array[i] << " times in " << number << "\n";
	}

	return (0);
}

/**
 * Counts the occurrence of each digit in a number.
 *
 * @param number The number to be processed.
 * @param array An integer array to hold the occurrence of each digit.
 * @param size The size of the integer array holding the occurrence of each digit.
 */
void countDigit(const int& number, int array[], int size)
{
	int tempVariable = number;

	while (tempVariable > 0)
	{
		int remainder = tempVariable % 10;
		++array[remainder];
		tempVariable /= 10;
	}
}

