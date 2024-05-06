#include <iostream>

void displayPattern(int n);  // Prototype for the displayPattern function.
/**
    This is a program that prompts the user to enter an integer and then displays the pattern;
                ********************
                *******************
                ******************
                *****************
                ****************
                ***************
                **************
                *************
                ************
                ***********
                **********
                ...
                *
    using a function with the header;
                void displayPattern(int n).
*/

int main(void)
{
    // Variable to hold the value of n.
    int n;

    // Prompts the user to enter the value of n.
    std::cout << "\nEnter the value of n: ";
    std::cin >> n;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail() or n <= 0)
    {
        std::cout << "\nError: Use positive integers > 0 only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the pattern.
    displayPattern(n);

    return (0);
}

/**
 * Displays a triangular pattern for a given integer.
 * 
 * @param n An integer representing the number of lines in the pattern. 
*/
void displayPattern(int n)
{
    for (int x = n; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            std::cout << "* ";
        }
        std::cout << "\n";
    }
}