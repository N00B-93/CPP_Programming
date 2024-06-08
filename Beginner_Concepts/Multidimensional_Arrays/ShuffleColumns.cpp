#include <iostream>
#include <cstdlib>
#include <ctime>

/**
	This is a program that shuffles the columns
	in a 3x5 array(matrix).
*/

const int COLUMN = 5;  // Constant representing the number of columns in an array(matrix).

/**
 * Swaps two integers
 *
 * @param number1 The first number to be swapped.
 * @param number2 The second number to be swapped.
 */
void swap(int& number1, int& number2)
{
	int temp = number1;
	number1 = number2;
	number2 = temp;
}

/**
 * Shuffles the column of an array(matrix)
 *
 * @param matrix The array(matrix) whose column is to be shuffled.
 * @param rowNumber The index of a row.
 */
void shuffle(int matrix[][COLUMN], int rowNumber)
{	
	for (int i = COLUMN - 1; i > 0; --i)
	{
		srand(time(NULL));
		int currentIndex = rand() % (i + 1);
		for (int row = 0; row < COLUMN; ++row)
			swap(matrix[rowNumber][i], matrix[rowNumber][currentIndex]);
	}
}

/**
 * Displays the elements of an array(matrix)
 *
 * @param matrix The matrix to be displayed.
 * @param size The number of rows in the matrix.
 */
void displayMatrix(const int matrix[][COLUMN], const int size)
{
	for (int row = 0; row < size; ++row)
	{
		for (int col = 0; col < COLUMN; ++col)
			std::cout << matrix[row][col] << " ";
		std::cout << "\n";
	}
}

int main(int argc, char* const argv[])
{
	// Constant representing the row of a matrix.
	const int SIZE = 3;
	
	// Declares a 3x5 array(matrix) whose columns is to be shuffled.
	int matrix[][COLUMN] = 
	{
		{1, 2, 3, 4, 5}, 
		{3, 4, 5, 6, 7}, 
		{5, 6, 7, 8, 9}
	};
	
	// Displays the array(matrix) before shuffling.
	std::cout << "\nMatrix before shuffling.\n";
	displayMatrix(matrix, SIZE);
	
	// Shuffles the column of the array(matrix).
	for (int row = 0; row < SIZE; ++row)
		shuffle(matrix, row);
	
	// Displays the array(matrix) after shuffling.
	std::cout << "\nMatrix after shuffling.\n";
	displayMatrix(matrix, SIZE);

	return (0);
}

