#include <iostream>
#include <cstring>

/**
    ISBN-13 is a new standard for identifying books. It uses 13 digits d1d2d3d4d5d6d7d8d9d10d11d12d13. The last digit d13 is a checksum, 
    which is calculated from the other digits using the following formula:
            10 - (d1 + 3d2 + d3 + 3d4 + d5 + 3d6 + d7 + 3d8 + d9 + 3d10 + d11 + 3d12) % 10
    If the checksum is 10, it is replaced with 0.
    This program prompts the user to enter the first 12 digits of an ISBN-13 number and the displays the complete ISBN-13 number.
*/

int main(void)
{
    // Declares a variable to hold the first 12 digits of the ISBN-13 number.
    std::string ISBN12;

    // Prompts the user to enter the first 12 digits of the ISBN-13 number.
    std::cout << "\nEnter the first 12 digits of the ISBN-13 number: ";
    std::cin >> ISBN12;

    // Displays an error message and terminates the program if the user enters an empty string or the user uses a string with length != 12.
    if (ISBN12 == "" or ISBN12.size() != 12)
    {
        std::cout << "\nError: Use a valid 12-digit number, Try again.\n";
        return (1);
    }

    //Displays an error message and terminates the program if the user uses a non numeric string.
    for (char character: ISBN12)
    {
        if (not isdigit(character))
        {
            std::cout << "\nError: Use numeric strings only, Try again.\n";
            return (2);
        }
    }

    // Initializes a variable to hold the sum of digits.
    int sumOfDigits = 0;

    // Determines the sum of all the digits in the first 12 digits of the ISBN-13 number.
    for (int i = 0; i < ISBN12.length(); i++)
    {
        int digit = ISBN12[i] - '0';
        
        if (i % 2 == 0)
            sumOfDigits += digit;
        else
            sumOfDigits += 3 * digit;
    }

    // Determines the checksum of the ISBN-13 number.
    int checksum = (10 - sumOfDigits % 10) % 10;

    // Displays the ISBN-13 number.
    if (checksum == 10)
        std::cout << "\nThe ISBN-13 number is: " << ISBN12 << "0\n";
    else
        std::cout << "\nThe ISBN-13 number is: " << ISBN12 << checksum << "\n";

    return (0);
}
