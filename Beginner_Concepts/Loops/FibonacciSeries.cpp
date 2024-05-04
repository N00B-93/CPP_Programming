#include <iostream>

/**
    This is a program that displays the first 10 numbers in the Fibonacci series
    separated by a single space.
*/

int main(void)
{
    // Variables to hold the first, second and next term of the series.
    int firstTerm(0), secondTerm(1), nextTerm;

    // Displays the first 10 terms of the series.
    std::cout << "\nThe first 10 Fibonacci numbers are: " << firstTerm << " " << secondTerm << " ";
    for (int i = 0; i < 8; ++i)
    {
        // Determines the next term by adding the second and the first term.
        nextTerm = firstTerm + secondTerm;

        // Update the values of the second and the first term.
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        // Displays the next term.
        std::cout << nextTerm << " ";
    }

    return (0);
}
