#include <iostream>

/**
	This is a program that prompts the user to enter the size and elements of an integer array and then
	displays the elements of the array in reverse order.
*/

int* reverseArray(const int array[], const int size);  // Prototype of the reverseArray function.

int main(int argc, char* const argv[])
{
	// Creates a variable to hold the number of elements in the array.
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
	
	// Creates an array that stores the elements of the original array in reverse.
	int* ptr = reverseArray(array, numberOfElements);

	// Displays the array in reverse.
	std::cout << "\nThe array in reverse is: ";
	for (int i = 0; i < numberOfElements; ++i)
		std::cout << ptr[i] << " ";
	std::cout << "\n";

	// Deletes the Pointer.
	delete[] ptr;

	return (0);
}

/**
 * Creates a copy of an array with the elements reversed.
 *
 * @param array The array whose copy is to be created.
 * @param size The number of elements in the array.
 * @return A pointer to the first element of the copy of the array.
 */
int* reverseArray(const int array[], const int size)
{
	int *ptr = new int[size];

	for (int i = 0, j = size - 1; j >= 0; ++i, --j)
		ptr[i] = array[j];

	return ptr;
}

