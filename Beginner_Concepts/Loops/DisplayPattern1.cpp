#include <iostream>

/**
    This is a program that displays the pattern below;
                         1
                       1 2
                     1 2 3
                   1 2 3 4
                 1 2 3 4 5
               1 2 3 4 5 6
*/

int main(void)
{
    // Variable to hold the number of spaces to be printed.
    int spaces = 6;

    for (int i = 1; i <= 6; ++i)
    {
        // Displays spaces before numbers are displayed.
        for (int j = 0; j < spaces; j++)
            std::cout << "  ";

        for (int k = 1; k <= i; ++k)
            std::cout << k << " ";
        
        // Displays a newline.
        std::cout << "\n";

        // Reduce the number of spaces by 1.
        spaces--;
    }

    return (0);
}
