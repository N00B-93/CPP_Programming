#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter the elements of a 2x2 matrix and then 
    displays the inverse matrix by using a function with the header;
                    void inverse(const double matrix[][SIZE], double inverseOfMatrix[][SIZE])
*/

const int SIZE = 2;  // Constant representing the row and column of a square matrix.

/**
 * Determines the inverse of a 2x2 matrix.
 * 
 * @param matrix The matrix whose inverse is to be determined
 * @param inverseOfMatrix The array to hold the inverse matrix.
*/
void inverse(const double matrix[][SIZE], double inverseOfMatrix[][SIZE])
{
    double determinant = matrix[0][0] * matrix[1][1] - (matrix[0][1] * matrix[1][0]);

    inverseOfMatrix[0][0] = matrix[1][1] / determinant;
    inverseOfMatrix[0][1] = -matrix[0][1] / determinant;
    inverseOfMatrix[1][0] = -matrix[1][0] / determinant;
    inverseOfMatrix[1][1] = matrix[0][0] / determinant;
}

/**
 * Displays an 2-D array.
 * 
 * @param matrix The array to be displayed.
*/
void displayMatrix(const double matrix[][SIZE])
{
    for (int row = 0; row < SIZE; ++row)
    {
        for (int col = 0; col < SIZE; ++col)
            std::cout << std::fixed << std::setprecision(2) << matrix[row][col] << " ";
        std::cout << "\n";
    }
    std::cout << "\n";
}

int main(int argc, char* const argv[])
{
    // Creates a matrix to hold the user input and the inverse of the matrix entered by the user.
    double matrix[SIZE][SIZE], inverseOfMatrix[SIZE][SIZE];

    // Prompts the user to enter the elements of a 2x2 matrix.
    std::cout << "\nEnter the values of a, b, c, d: ";
    std::cin >> matrix[0][0] >> matrix[0][1] >> matrix[1][0] >> matrix[1][1];

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use real numbers only as elements of the array, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // determines the inverse of the matrix.
    inverse(matrix, inverseOfMatrix);

    // Display the inverse matrix.
    std::cout << "\nThe inverse matrix is:\n";
    displayMatrix(inverseOfMatrix);

    return (0);
}
