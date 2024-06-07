#include <iostream>
#include <limits>
#include <iomanip>

/**
	This is a program that prompts the user to enter the number of rows in an array and the elements of
	the array and then displays the sum of elements in each column of the array.
*/

const int SIZE = 4;  // Constant indicating predefined number of columns.

double sumOfColumn(const double array[][SIZE], int rowSize, int columnIndex);  // Prototype of the sumOfColumn function.

int main(int argc, char* const argv[])
{
	int rows;  // Variable to hold the number of rows.
	
	// Prompts the user to enter the number of rows.
	std::cout << "\nEnter the number of rows: ";
	std::cin >> rows;

	// Displays an error message and terminates the program if the user enters an invalid number of rows.
	if (std::cin.fail() || rows < 1)
	{
		std::cout << "\nError: Use a number of rows > 0, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Array to store user's input.
	double array[rows][SIZE];

	// Prompts the user to enter the elements of the array.
	for (int i = 0; i < rows; ++i)
	{
		std::cout << "\nEnter the " << SIZE << " elements of row " << i << ": ";
		for (int j = 0; j < SIZE; ++j)
			std::cin >> array[i][j];

		// Displays an error message and clears the stdin if the user's input is invalid.
		if (std::cin.fail())
		{
			std::cout << "\nError: Use real numbers only as elements of the array, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--i;
		}
	}
	
	// Displays the sum of each column in the array.
	for (int i = 0; i < SIZE; ++i)
		std::cout << std::fixed << std::setprecision(2) << "\nThe sum of elements in column " << i << " is: " << sumOfColumn(array, rows, i);

	return (0);
}

/**
 * Determines the sum of elements in the column of a array.
 *
 * @param array The array whose sum of column elements is required.
 * @param rowSize The number of rows in the array.
 * @param columnIndex The index of the column whose sum of elements is required.
 */
double sumOfColumn(const double array[][SIZE], int rowSize, int columnIndex)
{
	double sum{0.0};

	for (int row = 0; row < rowSize; ++row)
		sum += array[row][columnIndex];

	return sum;
}

