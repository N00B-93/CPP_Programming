#include <iostream>

/**
    This is a program that prompts the user to enter six integers and then displays the largest and the
    smallest of the integers entered.
*/

void largestAndSmallestIntegers(int integers[], int largestAndSmallest[], const int SIZE);  // Prototype for the largestAndSmallestIntegers function.

/**
 * Determines the largest and smallest integers in an array of 6 integers.
 *
 * @param integers An array containing 6 integers.
 * @param largestAndSmallest An array to hold the largest and smallest elements of the array of integers.
 * @param SIZE The size of the array of integers.
 */
void largestAndSmallestIntegers(int integers[], int largestAndSmallest[], const int SIZE)
{
	int largest = integers[0], smallest = integers[0];

	for (int i = 0; i < SIZE; i++)
	{
		if (integers[i] > largest)
			largest = integers[i];
		else if (smallest > integers[i])
			smallest = integers[i];
	}

	largestAndSmallest[0] = smallest;
	largestAndSmallest[1] = largest;
}

int main(void)
{
	// Variable representing size of array holding user input.
	const int SIZE = 6;

	// Creates two arrays to hold user input and the largest and smallest of the user's input.
	int integers[SIZE], largestAndSmallest[2];

	// Prompts the user to enter a list of 6 integers.
	std::cout << "\nEnter 6 integers: ";
	for (int i = 0; i < SIZE; ++i)
		std::cin >> integers[i];

	// Displays an error message and terminates the program if user input is invalid.
	if (std::cin.fail())
	{
		std::cout << "\nError: Use integers only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Determines the largest and smallest integers.
	largestAndSmallestIntegers(integers, largestAndSmallest, SIZE);

	// Displays the result.
	std::cout << "\nLargest: " << largestAndSmallest[1] << "\n";
	std::cout << "Smallest: " << largestAndSmallest[0] << "\n";

	return (0);
}

