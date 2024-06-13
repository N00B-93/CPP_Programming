#include <iostream>
#include <limits>

// Constant representing the number of columns in the array.
const int COLUMNS = 4;

void locateLargest(const double a[][COLUMNS], int location[]);  // Prototype of the locateLargest function.

int main(int argc, char* const argv[])
{
    // Constant representing the number of rows in the array.
    const int ROWS = 3;

    // An array to hold the user's input.
    double array[ROWS][COLUMNS];

    // Array to hold the location of the largest element.
    int location[] = {0, 0};
    
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

    // Determines the location of the largest element.
    locateLargest(array, location);

    // Displays the location of the largest element.
    std::cout << "\nThe location of the largest element is: (" << location[0] << ", " << location[1] << ")\n";

    return (0);
}

/**
 * Determines the location of the largest element in a 2-D array.
 * 
 * @param a A 2-D array containing integer elements.
 * @param location A 1-D array to store the location of the largest element.
*/
void locateLargest(const double a[][COLUMNS], int location[])
{
    double largestElement = a[0][0];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < COLUMNS; ++j)
        {
            if (largestElement < a[i][j])
            {
                largestElement = a[i][j];
                location[0] = i;
                location[1] = j;
            }
        }
    }
}
