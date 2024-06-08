#include <iostream>
#include <limits>

/**
    This is a program that prompts the user to enter the elements of a two 2-D and determines
    if the matrices are strictly identical or not.
    Two 2-D arrays m1 and m2 are strictly identical if their corresponding elements are equal.
*/

const int SIZE = 3;  // Constant representing the row and column of a square matrix.

/**
 * Determines whether two arrays are strictly equal or not.
 * 
 * @param matrix1 The first array to be compared.
 * @param matrix2 The second array to be compared.
 * @return true if the arrays are strictly identical, else false.
*/
bool equal(const int matrix1[][SIZE], const int matrix2[][SIZE])
{
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
        {
            if (matrix1[row][col] != matrix2[row][col])
                return false;
        }
    }
    return true;
}

/**
 * Reads elements into a 2-D array.
 * 
 * @param matrix The array to hold the values read from the user.
*/
void readMatrixElements(int matrix[][SIZE])
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
		}
    }
}

int main(int argc, char const *argv[])
{
    // Creates two arrays to hold the user's input.
    int matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];

    // Reads in elements of the first array.
    std::cout << "\nReading the elements of the first array...\n";
    readMatrixElements(matrix1);

    // Reads in elements of the second array.
    std::cout << "\n\nReading the elements of the second array...\n";
    readMatrixElements(matrix2);

    // Displays the result.
    equal(matrix1, matrix2) ? std::cout << "\n\nThe arrays are strictly identical.\n" : std::cout << "\n\nThe arrays are not strictly identical.\n";

    return 0;
}
