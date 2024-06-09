#include <iostream>
#include <limits>
#include <cstdlib>

/**
	This is a program that prompts the user to enter the number of elements in an array and the elements
	of the array and then displays the array and the number of even and odd elements in the array.
*/

int* analyzeAndDisplayArray(int array[], const int size);  // Prototype of the analyzeAndDisplayArray function.

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
	
	// Displays the elements of the array.
	std::cout << "\nThe elements of the array are: ";
	int *ptr = analyzeAndDisplayArray(array, numberOfElements);
	
	// Displays the number of even and odd elements.
	std::cout << "\nNumber of even Elements: " << ptr[0];
	std::cout << "\nNumber of odd Elements: " << ptr[1] << "\n";
	
	// Frees the memory allocated to ptr.
	free(ptr);

	return (0);
}

/**
 * This Displays the elements of an integer array and determines the number of even and odd elements in the array.
 *
 * @param array The array to be processed.
 * @param size The number of elements in the array.
 * @return A pointer to an array holding the number of even and odd elements in the array(The first member represents count 
 * of even numbers and second member represents count of odd members.
 */
int* analyzeAndDisplayArray(int array[], const int size)
{
	int* ptr = (int*) malloc(2 * sizeof(int));

	for (int i = 0; i < size; ++i)
	{
		std::cout << array[i] << " ";
		array[i] % 2 == 0 ? ++ptr[0] : ++ptr[1];
	}

	return ptr;
}

