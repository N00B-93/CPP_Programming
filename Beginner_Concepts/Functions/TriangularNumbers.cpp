#include <iostream>
#include <iomanip>


int getTriangularNumber(int n);  // Function prototype for the getTriangularNumber function

/**
    A triangular number is defined as m(m + 1)/2 for m = 1, 2, and so on. Therefore, the first few numbers are 1, 3, 6, 10, . . . .
    This is a program that uses a function with the header;
                int getTriangularNumber(int n)
    to display the first 75 triangular numbers, 5 per line. 
*/

int main(void)
{
    // Variable to count the amount of numbers printed per line.
    int lineCounter = 0;

    // Displays the first 75 triangular numbers.
    std::cout << "\nThe first 75 Triangular numbers are:\n";
    for (int i = 1; i <= 75; ++i)
    {
        // Displays a triangular number.
        std::cout << std::setw(4) << getTriangularNumber(i) << " ";

        // Increments the variable counting numbers printed per line.
        lineCounter++;

        // Displays a newline if 5 numbers have been printed on a line.
        if (lineCounter % 5 == 0)
            std::cout << "\n";
    }

    return (0);
}

/**
 * Determines the Triangular number equivalent of a given integer.
 * 
 * @param n The integer whose triangular number equivalent is to be determined.
 * @return The triangular number equivalent of a given integer.
*/
int getTriangularNumber(int n)
{
    return (n * (n + 1)) / 2;
}
