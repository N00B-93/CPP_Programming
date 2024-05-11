#include <iostream>

void displayEven(int number);  // Function prototype for the displayEven function.
bool checkEven(int number);  // Function prototype of the checkEven function.

/**
    This is a program that prompts the user to enter an integer and displays the even digits in it
    using a method with the header;
                    void displayEven(int number)
*/

int main(void)
{
    // Variable to hold the user input.
    int number;

    // Prompts the user to enter an integer.
    std::cout << "\nEnter an integer: ";
    std::cin >> number;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail())
    {
        std::cout << "\nError: Use integer only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Checks if even digits are present in the number and displays them.
    if (checkEven(number))
        displayEven(number);
    else  // Displays a message informing the user that no even digits are present in the number.
        std::cout << "\nNo even number in " << number << "\n";

    return (0);
}

/**
 * Checks if even digits are present in a number.
 * 
 * @param number The number to be checked.
 * @return true if even digits are present, else false.
*/
bool checkEven(int number)
{
    while (number > 0)
    {
        int remainder = number % 10;

        if (remainder % 2 == 0)
            return true;
        number /= 10;
    }
    return false;
}

/**
 * Displays all the even digits in a number.
 * 
 * @param number The number whose even digits are to be displayed.
*/
void displayEven(int number)
{
    std::cout << "\nThe even digits in " << number << " are: ";
    while (number > 0)
    {
        int remainder = number % 10;

        if (remainder % 2 == 0)
            std::cout << remainder;
        number /= 10;
    }
}
