#include <iostream>
#include <limits>

/**
    This is a program that prompts the user to enter the elements of a 4x4 matrix
    and then displays the sum of elements in the major disgonal.
*/

// Constant representing the number of columns in the array.
const int COLUMNS = 4;

double sumMajorDiagonal(const double array[][COLUMNS]);  // Prototype of the sumMajorDiagonal function.

int main(int argc, char* const argv[])
{
    // Constant representing the number of rows in the array.
    const int ROWS = 4;

    // An array to hold the user's input.
    double array[ROWS][COLUMNS];
    
    // Reads in elements into the array.
    for (int row = 0; row < ROWS; ++row)
    {
        std::cout << "\nEnter elements of row " << row << ": ";
        for (int col = 0; col < COLUMNS; ++col)
            std::cin >> array[row][col];
        
        // Displays an error message and clears the stdin if the user's input is invalid.
		if (std::cin.fail())
		{
			std::cout << "\nError: Use real numbers only as elements of the array, Try again.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			--row;
		}
    }

    // Displays the sum of elements in the major diagonal.
    std::cout << "\nThe sum of elements in the major diagonal is: " << sumMajorDiagonal(array);

    return (0);
}

/**
 * Determines the sum of elements in the major diagonal of a square matrix.
 * 
 * @param array The array whose sum of elements in it's major disgonal is to be determined.
 * @return The sum of elements in the major diagonal of a square array.
*/
double sumMajorDiagonal(const double array[][COLUMNS])
{
    double sum{0.0};

    for (int row = 0, col = 0; col < COLUMNS; ++row, ++col)
        sum += array[row][col];

    return sum;
}
