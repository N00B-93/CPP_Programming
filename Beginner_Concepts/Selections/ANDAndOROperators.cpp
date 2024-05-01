#include <iostream>

/**
    This is a program that prompts the user to enter an integer and determines whether it is divisible by 5 and 6, whether it is divisible by 
    5 or 6, and whether it is divisible by 5 or 6, but not both.
*/

int main(void)
{
    // Variable to hold the user's input.
    int number;

    // Prompts the user to enter a positive integer greater than 0.
    std::cout << "\nEnter a positive integer greater than 0: ";
    std::cin >> number;

    // Displays an error message and terminates the program if the user input is invalid.
    if (not std::cin or number <= 0)
    {
        std::cerr << "\nError: Use numbers greater than or equal to 0 only, Try again.\n";
        return (1);
    }
    else
    {
        std::cout << "\nIs " << number << " divisible by 5 or 6? " << std::boolalpha << ((number % 5 == 0) || (number % 6 == 0));
        std::cout << "\nIs " << number << " divisible and 5 and 6? " << std::boolalpha << ((number % 5 == 0) and (number % 6 == 0));
        std::cout << "\nIs " << number << " divisible by 5 or 6, but not both? " << ((number % 5 == 0) ^ (number % 6 == 0)) ? true : false;
    }

    return (0);
}
