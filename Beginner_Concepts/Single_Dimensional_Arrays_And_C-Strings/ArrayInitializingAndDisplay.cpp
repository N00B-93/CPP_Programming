#include <iostream>
#include <iomanip>

/**
	This is a program that creates an array of 50 double values then initializes the first 25 elements of 
	the array with the square of the index variable and the last 25 elements with three times the index variable.
	The array of double values is the displayed 5 elements per line.
*/

void initializeArray(double array[], const int size);  // Prototype of the initializeArray function.
void displayArray(const double array[], const int size, const int numberOfElementsPerLine);  // Prototype of the displayArray function.

int main(void)
{
	// Constants representing array size and number of elements to be displayed per line.
	const int SIZE = 50, NUMBER_OF_ELEMENTS_PER_LINE = 5;
	
	// Array of 50 double values.
	double array[SIZE];

	// Initializes the array with values.
	initializeArray(array, SIZE);

	// Displays elements of the array.
	std::cout << "\nThe elements of the array are:\n";
	displayArray(array, SIZE, NUMBER_OF_ELEMENTS_PER_LINE);

	return (0);
}

/**
 * Initializes the first half of an array with the square of the index variable and the second half with three times the index variable.
 *
 * @param array The array to be initialized.
 * @param size The number of elements in the array.
 */
void initializeArray(double array[], const int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (i <= (size / 2) - 1)
			array[i] = (i + 1) * (i + 1);
		else
			array[i] = 3 * (i + 1);
	}
}

/**
 * Display the elements of an array using the specified number of elements per line.
 *
 * @param array The array to be displayed.
 * @param size The number of elements in the array.
 * @param numberOfElementsPerLine The number of elements to be displayed per line.
 */
void displayArray(const double array[], const int size, const int numberOfElementsPerLine)
{
	int lineCounter  = 0;

	for (int i = 0; i < size; ++i)
	{
		std::cout << std::setw(4) << array[i] << " ";
		++lineCounter;

		if (lineCounter% numberOfElementsPerLine == 0)
			std::cout << "\n";
	}
	std::cout << "\n";
}

