#include <iostream>

/**
	This is a program that prompt the user to enter a list of numbers, adds the to an array and
	determines if the array is already sorted in increasing order by using a function with the header;
			bool isSorted(const int list[], int size)
*/

bool isSorted(const int list[], int size);  // Prototype of the isSorted function.

int main(void)
{
	// Constant holding the maximum number of elements the array can contain.
	const int MAX_SIZE = 80;

	// Declares an array of 80 integers.
	int array[MAX_SIZE];

	// Variable to hold the number of elements of the array that the user is willing to enter.
	int numberOfElements;

	// Prompts the user to enter a list of numbers.
	std::cout << "\nEnter a list of numbers(NB: The first number represents the number of element that will be stored in the array): ";
	std::cin >> numberOfElements;
	for (int i = 0; i < numberOfElements; ++i)
		std::cin >> array[i];

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || numberOfElements <= 0 || numberOfElements > 80)
	{
		std::cout << "\nError: Use a list of real numbers only, with the first digit > 0.\nTry again.\n";
		exit(EXIT_SUCCESS);
	}

	// Displays if the array is sorted or not.
	if (isSorted(array, numberOfElements))
		std::cout << "\nThe array is already sorted.\n";
	else
		std::cout << "\nThe array is not sorted.\n";

	return (0);
}


/**
 * Checks if an array of integers is sorted in increasing order or not.
 *
 * @param array The array of integers.
 * @param size The number of elements in the array.
 * @return true if the array is sorted, else false.
 */
bool isSorted(const int array[], int size)
{
	for (int i = 1; i < size; ++i)
	{
		if (array[i - 1] > array[i])
			return false;
	}
	return true;
}

