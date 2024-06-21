#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter an amount (e.g., 100), the annual 
    interest rate (e.g., 5), and the number of months (e.g., 6) and displays the amount 
    in the savings account after the given month.
*/

int main(void)
{
     // Variables to hold the amount deposited, the interest rate and the number of months.
    float amountDeposited, percentageYield;
    int numberOfMonths;

    // Prompts the user to enter the amount to be deposited into the account.
    std::cout << "\nEnter the amount to be deposited: $ ";
    std::cin >> amountDeposited;

    // Displays an error message and terminates the program if the user enters an invalid amount.
    if (std::cin.fail() || amountDeposited <= 0)
    {
        std::cout << "\nError: Enter an amount > $ 0.0, Try again.\n";
        return (1);
    }

    // Prompts the user to enter an interest rate.
    std::cout << "\nEnter a percentage yield(e.g., 3%): ";
    std::cin >> percentageYield;

    // Displays an error message and terminates the program if the user enters an invalid percentage interest.
        if (std::cin.fail() || percentageYield <= 0)
    {
        std::cout << "\nError: Enter a percentage yield > 0.0%, Try again.\n";
        return (2);
    }

    // Prompts the user to enter the number of months.
    std::cout << "\nEnter the number of months: ";
    std::cin >> numberOfMonths;

    // Displays an error message and terminates the program if the user enters an invalid number of months.
    if (std::cin.fail() || numberOfMonths <= 0)
    {
        std::cout << "\nError: Use number of months > 0, Try again.\n";
        return (3);
    }

    for (int i = 0; i < numberOfMonths; ++i)
    {
        // Computes the new value for each month.
        amountDeposited += amountDeposited * (percentageYield / 1200);
    }

    // Displays the amount in the account after the specified number of months.
    std::cout << std::fixed << std::setprecision(2) << "\nThe amount in the account after " << numberOfMonths << " month(s) is: $" << amountDeposited;
}
