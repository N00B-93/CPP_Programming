#include <iostream>
#include <iomanip>

double averageDigits(long n);  // Function prototype for the averageDigits function.

/**
    This is a program that prompts the user to enter an integer and displays the sum of all its digits using a function
    with the header;
                    double averageDigits(long n).
*/

int main(void)
{
    // Variable to hold the user input
    long number;

    // Prompts the user to enter a positive number.
    std::cout << "\nEnter a positive integer: ";
    std::cin >> number;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail() or number < 0)
    {
        std::cout << "\nError: Use integers >= 0 only. Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the result.
    std::cout << std::setprecision(2) << std::showpoint << "\nThe average of the digits in " << number << " is: " <<averageDigits(number) << "\n";

    return (0);
}

/**
 * Calculates the average of the digits in an integer.
 * 
 * @param n The integer whose average of it's digit is to be calculated.
 * @return The average of the digits in an integer.
*/
double averageDigits(long n)
{
    int sum(0), numberOfDigits(0);

    while (n > 0)
    {
        int remainder = n % 10;
        sum += remainder;
        numberOfDigits++;
        n /= 10;
    }

    return sum / static_cast<double>(numberOfDigits);
}