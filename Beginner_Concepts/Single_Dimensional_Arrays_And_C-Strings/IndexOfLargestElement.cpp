#include <iostream>

/**
	This is a program that prompts the user to enter 15 numbers and returns the index of the largest
	element, if the largest element occurs more than once the index of it's first occurrence is returned.
*/

int indexOfLargestElement(double array[], int size)
;  // Prototype of the indexOfLargestElement function.

int main(void)
{
	// Variable to hold the size of the array of numbers.
	const int SIZE = 15;

	// int array to hold the user input.
	double numbers[SIZE];

	// Prompts the user to enter 15 numbers.
	std::cout << "\nEnter 15 numbers: ";
	for (int i = 0; i < SIZE; ++i)
		std::cin >> numbers[i];

	// Displays an error message and terminates the program if the user uses non numeric input.
	if (std::cin.fail())
	{
		std::cout << "\nError: Use numeric inputs only, Try again.\n";
		exit(EXIT_SUCCESS);
	}
	
	// Determines the index of the largest elements.
	int index = indexOfLargestElement(numbers, SIZE);

	// Displays the index of the first occurrence of the largest element.
	std::cout << "\nThe index of the first occurrence of the largest element is: " << index << "\n";

	return (0);
}

/**
 * This determines the index of the first occurrence of the largest element in an array.
 *
 * @param array The array of numbers.
 * @param size The number of elements in the array.
 * @return The index of the first occurrence of the largest element in an array.
 */
int indexOfLargestElement(double array[], int size)
{
	double largest = array[0];
	int indexOfLargest = 0;

	for (int i = 0; i < size; ++i)
	{
		if (array[i] > largest)
		{
			largest = array[i];
			indexOfLargest = i;
		}
	}

	return indexOfLargest;
}

