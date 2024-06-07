#include <iostream>
#include <limits>
#include <iomanip>

/**
    This is a program that prompts the user to enter the elements of two 3x3 matrices and then
    determines and displays the sum of the elements of the two matrices.
*/

const int COLUMN = 3;  // Constant that hold the number of columns in the square matrix.

/**
 * Determines the sum of the elements of two matrices.
 * 
 * @param matrixA A 2-D array representing the first array to be added.
 * @param matrixB A 2-D array representing the second array to be added.
 * @param matrixC The array to hold the sum of the elements of the first two arrays.
*/
void addMatrix(const double matrixA[][COLUMN], const double matrixB[][COLUMN], double matrixC[][COLUMN])
{
    for (int row = 0; row < COLUMN; ++row)
    {
        for (int col = 0; col < COLUMN; ++col)
            matrixC[row][col] = matrixA[row][col] + matrixB[row][col];
    }
}

/**
 * Reads elements into a 2-D array.
 * 
 * @param matrix The array to hold the values read from the user.
*/
void readMatrixElements(double matrix[][COLUMN])
{
    for (int row = 0; row < COLUMN; ++row)
    {
        std::cout << "\nEnter the " << COLUMN << " elements of row " << row << ": ";
        for (int col = 0; col < COLUMN; ++col)
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

/**
 * Displays the elements of a 2-D array.
 * 
 * @param matrix The array whose elements is to be displayed.
*/
void displayArray(const double matrix[][COLUMN])
{
    for (int row = 0; row < COLUMN; ++row)
    {
        for (int col = 0; col < COLUMN; ++col)
            std::cout << std::setw(8) << matrix[row][col] << "";
        std::cout << "\n";
    }
}

int main(int argc, char* const argv[])
{
    // Creates three arrays to hold the user's input and the sum of the two arrays.
    double matrixA[COLUMN][COLUMN], matrixB[COLUMN][COLUMN], matrixC[COLUMN][COLUMN];

    // Reads elements into matrixA.
    std::cout << "\nReading elements into matrixA...\n";
    readMatrixElements(matrixA);

    // Reads elements into matrixB.
    std::cout << "\nReading elements into matrixB...\n";
    readMatrixElements(matrixB);

    // Determines the sum of the matrices.
    addMatrix(matrixA, matrixB, matrixC);

    // Displays the sum of the two matrices.
    std::cout << "\n\nThe sum of the matrices is:\n";
    displayArray(matrixC);

    return (0);
}

