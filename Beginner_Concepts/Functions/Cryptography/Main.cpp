#include <iostream>
#include "Cryptography.hpp"

/**
    This is a program that prompts the user to enter a 4-digit
    then encrypts the number, displays the encrypted number 
    and then decrypts the number to get it's original value.
*/

int main(void)
{
    // Variable to hold the number to be encrypted.
    std::string number;

    // Prompts the user to enter a 4-digit number to be encrypted.
    std::cout << "\nEnter a 4-digit number to be encrypted: ";
    std::cin >> number;

    //Terminates the program if the user input is invalid.
    if (std::cin.fail() || number.size() != 4)
    {
        std::cout << "\nError: Use a 4-digit number only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Encrypts the 4-digit number.
    std::string encryptedNumber = encrypt4Digit(number);

    // Displays the encrypted number.
    std::cout << "\n" << "The encrypted 4-digit number is: " << encryptedNumber << "\n";

    // Decrypts and displays the decrypted number.
    std::cout << "\n" << "The decrypted 4-digit number is: " << decrypt4Digit(encryptedNumber) << "\n";

    return (0);
}
