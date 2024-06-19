#include <iostream>
#include <iomanip>
#include <cmath>

/**
	This is a program that prompts the user to enter 10 numbers and then determines and displays their
	mean and standard deviation of the numbers using functions with headers;
			double mean(const double x[], int size)
			double deviation(const double x[], int size)
*/

double deviation(const double x[], int size);  // Prototype of the deviation function.
double mean(const double x[], int size);  // Prototype of the mean function.

int main(void)
{
	// Variable to hold size of the array of numbers.
	const int SIZE = 10;

	// Array of double values to hold user input.
	double numbers[SIZE];

	// Prompts the user to enter 10 numbers.
	std::cout << "\nEnter 10 numbers: ";
	for (int i = 0; i < SIZE; ++i)
		std::cin >> numbers[i];

	// Displays an error message and terminates the program if user's input is invalid.
	if (std::cin.fail())
	{
		std::cout << "\nError: Use real numbers only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Determines the mean deviation.
	double meanDeviation = deviation(numbers, SIZE);

	// Displays the mean and standard deviation.
	std::cout << "\nMean = " << mean(numbers, SIZE) << "\n" << "Standard deviation = " << sqrt(meanDeviation / (SIZE - 1)) << "\n";

	return (0);
}

/**
 * Determines the mean of an array of numbers.
 *
 * @param x The array of numbers.
 * @param size The number of elements in the array.
 * @return The mean of an array of numbers.
 * */
double mean(const double x[], int size)
{
	double sum(0.0);

	for (int i = 0; i < size; ++i)
		sum += x[i];
	return sum / size;
}

/**
 * Determines the mean deviation of an array of numbers.
 *
 * @param x The array of numbers.
 * @param size The number of elements in the array.
 * @return The mean deviation of an array of numbers.
 */
double deviation(const double x[], int size)
{
	double meanDeviation(0.0);

	double average = mean(x, size);

	for (int i = 0; i < size; ++i)
		meanDeviation += pow(x[i] - average, 2);
	return meanDeviation;
}

