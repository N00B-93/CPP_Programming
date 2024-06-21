#include <iostream>

/**
    This is a program that prompts the user to enter an integer number and then
    displays the first five multiple of that integer.
*/

int main(void)
{
    // Declares a variable to hold the user input and initializes a variable to count the number of multiples found.
    int number, multipleCounter = 0;

    // Prompts the user to enter an integer.
    std::cout << "\nEnter an integer > 0: ";
    std::cin >> number;

    // Initializes a variable to hold the multiple.
    int multiple = number;

    // Displays an error message if the user enter's an invalid input.
    while (std::cin.fail() || number <= 0)
    {
        std::cin.clear();
        fflush(stdin);
        std::cout << "\nError: Use a positive number > 0, Try again.";

        std::cout << "\nEnter an integer > 0: ";
        std::cin >> number;
        multiple = number;
    }

    // Displays the first five multiples of the user input.
    std::cout << "\nThe first 5 multiples of " << number << " are: ";
    while (multipleCounter != 5)
    {
        std::cout << multiple << " ";
        multipleCounter += 1;
        multiple += number;
    }

    // Displays a newline.
    std::cout << "\n";

    return (0);
}