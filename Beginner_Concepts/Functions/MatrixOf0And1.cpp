#include <iostream>
#include <cstdlib>
#include <ctime>

void printMatrix(int n);  // Prototype of the printMatrix function.

/**
    This is a program that prompts the user to enter a number of rows and then 
    displays a square matrix of 0's and 1's generated randomly with the row of 
    the generated matrix being the number entered by the user.
*/

int main(void)
{


    // Variable to hold the number of rows of the matrix to be generated.
    int numberOfRows;

    // Prompts the user to enter the number of rows.
    std::cout << "\nEnter the number of rows of the square matrix: ";
    std::cin >> numberOfRows;

    // Displays an error mesage and terminates the program if the user input is invalid.
    if (std::cin.fail() or numberOfRows <= 0)
    {
        std::cout << "\nError: Use a number of rows > 0, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays a matrix of 1's and 0's with the given nuimber of rows.
    std::cout << "\nThe generated matrix is:\n";
    printMatrix(numberOfRows);

    return (0);
}

/**
 * Displays a matrix of 0's and 1's generated randomly for a given row.
 * 
 * @param n The number of rows of the matrix to be generated.
*/
void printMatrix(int n)
{
    // Seeds the random number generator with the number of time since the Linux epoch.
    srand(time(NULL));

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int randomNumber = rand() % 2;
            std::cout << randomNumber << " ";
        }
        std::cout << "\n";
    }
}
