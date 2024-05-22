#include <iostream>

/**
	This is a program that prompts the user to enter 15 integers and then sorts them in descending
	order by using the bubble sort algorithm.
*/

void bubbleSort(int array[], const int size);  // Prototype of the bubbleSort function.

void swap(int& number1, int& number2); // Prototype of the swap function.

void displayArray(const int array[], const int SIZE);  // Prototype of the displayArray function.

int main(void)
{
	// Constant to hold the size of the array.
	const int SIZE = 15;

	// Array to hold the numbers to be sorted in descending order.
	int array[SIZE] = {0};

	// Prompts the user to enter the elements of the array.
	std::cout << "\nEnter " << SIZE << " integers to be sorted in descending order: ";
	for (int i = 0; i < SIZE; ++i)
		std::cin >> array[i];

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail())
	{
		std::cout << "\nError: Use real numbers only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Displays the array before sorting.
	std::cout << "\nThe array before sorting is: ";
	displayArray(array, SIZE);

	// Sorts the array.
	bubbleSort(array, SIZE);

	// Displays the array after sorting.
	std::cout << "\nThe array after sorting is: ";
	displayArray(array, SIZE);

	return (0);
}

/**
 * Swaps two integers.
 *
 * @param number1 The first number to be swapped.
 * @param number2 The second number to be swapped.
 */
void swap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;

	return;
}

/**
 * Displays an array of integers.
 *
 * @param array The array whose elements is to be displayed.
 * @param size The number of elements in an array.
 */
void displayArray(const int array[], const int size)
{
	for (int i = 0; i < size; ++i)
		std::cout << array[i] << " ";
	std::cout << "\n";
}

/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param array The array whose elements is to be sorted.
 * @param size The number of elements in the array.
 */
void bubbleSort(int array[], int size)
{
	bool changed = true;

	do
	{
		changed = false;

		for (int j = 0; j < size - 1; ++j)
		{
			if (array[j] < array[j + 1])
			{
				swap(array[j], array[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}

