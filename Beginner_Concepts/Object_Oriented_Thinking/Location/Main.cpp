#include <iostream>
#include <limits>
#include "Location.hpp"

/**
    This is a program that prompts the user to enter the number of rows in an array and 
    then prompts the user to enter the elements of the array, the column of the array being fixed and predetermined to be 4.
    The program then determines and displays the largest element in the array and it's position.
*/

int main(int argc, char const *argv[])
{
    // Variable to hold the number of rows in the array to be entered by the user.
    int rows = 0;

    // Prompts the user to enter the number of rows in the array.
    std::cout << "\nEnter the number of rows: ";
    std::cin >> rows;

    // Creates an 2-D array to hold user input.
    double array[rows][COLUMN_SIZE];

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() || rows <= 0)
    {
        std::cout << "\nError: Number of rows must be > 0, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Prompts the user to enter the elements of the array.
    for (int i = 0; i < rows; ++i)
    {
        std::cout << "\nEnter the " << COLUMN_SIZE << " elements of row " << i + 1 << ": ";

        for (int j = 0; j < COLUMN_SIZE; ++j)
        {
            std::cin >> array[i][j];
        }

        // Displays an error message, clears the input stream and goes to the previous iteration if the user input is invalid.
        if (std::cin.fail())
        {
            std::cout << "\nError: Invalid input, Use only integers or floating point numbers only, Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
            continue;
        }
    }

    // Determines the largest element and it's location.
    Location location = locateLargest(array, rows);

    // Displays the result.
    std::cout << "\nThe largest element is: " << location.maxValue
              << "\nIt is located at: (" << location.row << ", " << location.column << ")\n";

    return (0);
}
