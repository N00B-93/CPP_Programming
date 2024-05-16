#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

/**
	This is a program that genetates 25 numbers between 0 and 25 randomly and then determines the 
	sum of even integers by using a method with the header;
			int sum(const int array[], int size)
	and then displays the result.
*/

int sum(const int array[], int size);  // Prototype of the sum function.
void fillArray(int array[], int size);  // Prototype of the fillArray function.
void displayArray(const int array[], int size);  // Prototype of the displayArray function.

int main(void)
{
	// Variable to hold random array size.
	const int SIZE = 25;

	// Array to hold random integers.
	int array[SIZE];

	// Fills the array with random values from 0 - 25.
	fillArray(array, SIZE);

	// Display the elements of the random array of numbers.
	std::cout << "\nThe elements of the random array are:\n";
	displayArray(array, SIZE);

	// Displays the sum of even elements in the array.
	std::cout << "\nThe sum of even elements is: " << sum(array, SIZE) << "\n";

	return (0);
}

/**
 * Determines the sum of even elements in an array.
 *
 * @param array The array containing elements.
 * @param size The number of elements in the array.
 * @return The sum of even elements in the array.
 */
int sum(const int array[], int size)
{
	int sumOfEven = 0;

	for (int i = 0; i < size; ++i)
	{
		if (array[i] % 2 == 0)
			sumOfEven += array[i];
	}

	return sumOfEven;
}

/**
 * Displays the elements in an array, five per line.
 *
 * @param array The array whose elements are to be displayed.
 * @param size The number of elements in the array.
 */
void displayArray(const int array[], int size)
{
	int lineCounter = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << std::setw(4) << array[i] << " ";
		++lineCounter;
		if (lineCounter % 5 == 0)
			std::cout << "\n";
	}
}

/**
 * Fills an array with randomly generated integers from 0 - 25.
 *
 * @param array The array of integers.
 * @param size The number of elements in the array.
*/
void fillArray(int array[], int size)
{
	srand(time(NULL));

	for (int i = 0; i < size; ++i)
		array[i] = rand() % 25;
}

