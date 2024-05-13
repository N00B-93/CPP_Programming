#include <iostream>
#include "CreditCardNumberValidation.hpp"

/**
     Credit card numbers follow certain patterns. A credit card number must have between 13 and 16 digits. The number 
    must start with the following:
            4 for Visa cards
            5 for MasterCard cards
            37 for American Express cards
            6 for Discover cards
    In 1954, Hans Luhn of IBM proposed an algorithm for validating credit card numbers. The algorithm is useful to determine whether a card number is entered correctly or is scanned correctly by a scanner. The Luhn check or Luhn algorithm validates a card number as follows;
            1.  Double every second digit from right to left. If doubling of a digit results in a two-digit number, add the 
                two digits to get a single digit number.
            2.  Add all single-digit numbers from Step 1.
            3.  Add all digits in the odd places from right to left in the card number.
            4.  Sum the results from Step 2 and Step 3.
            5.  If the result from Step 4 is divisible by 10, the card number is valid; otherwise, it is invalid.
    This is a program that prompts the user to enter a card number and then determines whether the card number is valid or
    not by using the Luhn algorithm described above.
*/

int main(void)
{
    // Variable to hold the card number entered by the user.
    std::string cardNumber;

    // Prompts the user to enter a card number.
    std::cout << "\nEnter a card number: ";
    std::cin >> cardNumber;

    // Displays an error message and terminates the program if the user input is invalid.
    if (!isNumeric(cardNumber))
    {
        std::cout << "\nError: Card number should consist of integers only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays whether the card number is valid or not.
    if (isValid(cardNumber))
        std::cout << "\n" << cardNumber << " is a valid card number.\n";
    else
        std::cout << "\n" << cardNumber << " is an invalid card number.\n";

    return (0);
}