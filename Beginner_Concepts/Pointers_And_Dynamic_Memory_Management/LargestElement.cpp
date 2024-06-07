#include <iostream>
#include <algorithm>
#include <limits>

/**
	This is a program that prompts the user to enter the number of elements in an array and the elements 
	in the array and then displays the maximum element and it's position in the array.
*/

int main(int argc, char* const argv[])
{
	// Variable to hold the number of elements in the array.
	int numberOfElements;

	// Prompts the user to enter the number of elements.
	std::cout << "\nEnter the number of elements in the array: ";
	std::cin >> numberOfElements;
	
	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || numberOfElements < 1)
	{
		std::cout << "\nError: Use a positive number of elements > 0, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Creates an array to store the user's input.
	int array[numberOfElements];

	for (int i = 0; i < numberOfElements; ++i)
	{
		// Prompts the user to enter the elements of the array.
		std::cout << "\nEnter array[" << i << "]: ";
		std::cin >> array[i];
		
		// Displays an error message and clears the stdin if the user's input is invalid.
		if (std::cin.fail())
		{
			std::cout << "\nError: Invalid input, Use integers only.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--i;
		}
	}

	// Determines the maximun element in the array and its position.
	int* ptr = std::max_element(array, array + numberOfElements);

	// Displays the result.
	std::cout << "\nThe maximum element is " << *ptr << " at index " << ptr - array << "\n";

	return (0);
}

