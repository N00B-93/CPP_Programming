#include <iostream>

/**
    THis is a program that prompts the user to enter an integer and then displays
    whether the integer is even or odd by using a function with the header;
                int getType(int n)
*/

// Prototype of the getType function.
int getType(int n);

int main(void)
{
    // Variable to hold the user input.
    int number;

    // Prompts the user to enter an integer greater than 0.
    std::cout << "\nEnter an integer: ";
    std::cin >> number;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use integers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays if the number is even or odd.
    getType(number) == 1 ? std::cout << "\n" << number <<  " is even.\n" : std::cout << "\n" << number <<  " is odd.\n";

    return (0);
}

/**
 * This determines if an integer is even or odd.
 * 
 * @param n The number to be checked.
 * @return 1 is returned if the number is even, else 0 is returned.
*/
inline int getType(int n)
{
    if (n % 2 == 0)
        return 1;
    return 0;
}