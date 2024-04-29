#include <iostream>

/**
    This is a program that displays the multiples of 10, 15 per line
    from 4000 to 4500, separated by exactly one space.
*/

int main(void)
{
    // Initialize a variable to count the numbers on a line.
    int count = 0;

    std::cout << "\nThe multiples of 10 between 4000 and 4500 are:\n";
    for (int i = 4000; i <= 4500; i += 10)
    {
        std::cout << i << " ";
        count++;

        // Displays a newline if there are 10 numbers on a line.
        if (count % 10 == 0)
            std::cout << "\n";
    }

    return (0);
}