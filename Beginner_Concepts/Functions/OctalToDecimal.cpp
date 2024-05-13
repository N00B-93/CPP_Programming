#include <iostream>
#include <string>
#include <cmath>

/**
    This is a program that prompts the user to enter a octal number and then converts the number to decimal and displays the result.
    The function with header;
                    int octal2Dec(const int& octalNumber)
    is used to convert the number from octal to decimal.
*/

int octal2Dec(const int& octalNumber);  // Prototype of the Octal2Dec function.

int main(void)
{
    // Variable to hold the octal number entered by the user.
    int octalNumber;

    // Prompts the user to enter a number in base 8.
    std::cout << "\nEnter a number in base 8: ";
    std::cin >> octalNumber;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail() || std::to_string(octalNumber).find("8") != std::string::npos || octalNumber < 0)
    {
        std::cout << "\nError: Use valid positive octal numbers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the result.
    std::cout << "\n" << octalNumber << " converted to decimal is: " << octal2Dec(octalNumber);
<<<<<<< Updated upstream
=======

    return (0);
>>>>>>> Stashed changes
}

/**
 * Converts an octal number to a decimal number.
 * 
 * @param octalNumber The number to be converted to decimal.
 * @return The decimal equivalent of an octal number.
*/
int octal2Dec(const int& octalNumber)
{
    int decimalNumber(0), octalNumberCopy = octalNumber;

    int numberOfDigits = std::to_string(octalNumber).size();

    for (int i = 0; i < numberOfDigits; ++i)
    {
        int remainder = octalNumberCopy % 10;
        decimalNumber += remainder * pow(8, i);
        octalNumberCopy /= 10;
    }
    return decimalNumber;
}