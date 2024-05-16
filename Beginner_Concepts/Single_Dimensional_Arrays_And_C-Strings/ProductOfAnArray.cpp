#include <iostream>
#include <iomanip>

/**
	This is a program that prompts the user to enter three double values and then displays the product
	of these values by using the overloaded functions;
		int product(const int array[], int size)
		double product(const double array[], int size)
*/

int product(const int array[], int size);
double product(const double array[], int size);
 
int main(void)
{
	// Variable to hold the size of the array of numbers.
	const int SIZE = 3;

	// Array to hold user input.
	double numbers[SIZE];

	// Prompts the user to enter three numbers.
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "\nEnter numbers[" << i + 1 << "]: ";
		std::cin >> numbers[i];

		if (std::cin.fail())
		{
			std::cout << "\nError: Use real numbers only, Try again.\n";
			exit(EXIT_FAILURE);
		}
	}
	
	// Displays the products of the elements in the array.
	std::cout << std::fixed << std::setprecision(2) << "\nThe product of elements in the array is: " << product(numbers, SIZE) << "\n";

	return (0);
}

/**
 * Determines the product of elements in an array of double values.
 *
 * @param array The array of double values.
 * @size The number of elements in the array.
 */
double product(const double array[], int size)
{
	double product = 1;

	for (int i = 0; i < size; ++i)
		product = product * array[i];
	return product;
}

/**
 * Determines the product of elements in an array of integer values.
 *
 * @param array The array of integer values.
 * @size The number of elements in the array.
 */
int product(const int array[], int size)
{
	int product = 1;

	for (int i = 0; i < size; ++i)
		product = product * array[i];
	return product;
}

