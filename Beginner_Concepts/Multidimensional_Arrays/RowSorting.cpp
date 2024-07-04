#include <iostream>
#include <limits>
#include <iomanip>

/**
    This is a program that prompts the user to enter the elements of a 3 x 3 matrix 
    and then sorts the elements in each row of the matrix in ascending order.
 */

const int SIZE = 3;

/**
 * Swaps two integers.
 *
 * @param number1 The first number to be swapped.
 * @param number2 The second number to be swapped.
 */
void swap(double& number1, double& number2)
{
	double temp = number1;
	number1 = number2;
	number2 = temp;

	return;
}

/**
 * Sorts an array of integers using the bubble sort algorithm.
 *
 * @param array The array whose elements is to be sorted.
 * @param size The number of elements in the array.
 */
void bubbleSort(double array[], int size)
{
	bool changed = true;

	do
	{
		changed = false;

		for (int j = 0; j < size - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(array[j], array[j + 1]);
				changed = true;
			}
		}
	} while (changed);
}

/**
 * Reads elements into a 2-D array.
 * 
 * @param matrix The array to hold the values read from the user.
*/
void readMatrixElements(double matrix[][SIZE])
{
    for (int row = 0; row < SIZE; ++row)
    {
        std::cout << "\nEnter the " << SIZE << " elements of row " << row << ": ";
        for (int col = 0; col < SIZE; ++col)
            std::cin >> matrix[row][col];

        // Displays an error message and clears the stdin if the user's input is invalid.
		if (std::cin.fail())
		{
			std::cout << "\nError: Use real numbers only as elements of the array, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--row;
            break;
		}
    }
}

/**
 * Displays the elements of a 2-D array.
 * 
 * @param matrix The array whose elements is to be displayed.
*/
void displayArray(const double matrix[][SIZE])
{
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
            std::cout << std::setw(8) << matrix[row][col] << "";
        std::cout << "\n";
    }
}

int main(int argc, char const *argv[])
{
    // 2-D array to hold the user's input.
    double array[SIZE][SIZE];

    // Reads elements into the array.
    std::cout << "\nReading elements into the array...\n";
    readMatrixElements(array);

    // Sorts the rows in the array.
    for (int i = 0; i < SIZE; ++i)
        bubbleSort(array[i], SIZE);

    // Displays the sorted array.
    std::cout << "\nThe matrix sorted by row is:\n";
    displayArray(array);

    return 0;
}
