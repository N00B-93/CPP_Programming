#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter an amount (e.g., 10000) deposited in a CD(Certificate of deposit) account, the annual 
    percentage yield (e.g., 5.75), and the number of months (e.g., 18) and displays a table that
    shows the growth of the amount deposited per month.
*/

int main(void)
{
    // Variables to hold the amount deposited, the percentage yield and the nuumber of months.
    float amountDeposited, percentageYield, numberOfMonths;

    // Prompts the user to enter the amount to be deposited into the account.
    std::cout << "\nEnter the amount to be deposited: $ ";
    std::cin >> amountDeposited;

    // Displays an error message and terminates the program if the user enters an invalid amount.
    if (std::cin.fail() or amountDeposited <= 0)
    {
        std::cout << "\nError: Enter an amount > $ 0.0, Try again.\n";
        return (1);
    }

    // Prompts the user to enter a percentage yield.
    std::cout << "\nEnter a percentage yield(e.g., 3%): ";
    std::cin >> percentageYield;

    // Displays an error message and terminates the program if the user enters an invalid percentage interest.
        if (std::cin.fail() or percentageYield <= 0)
    {
        std::cout << "\nError: Enter a percentage yield > 0.0%, Try again.\n";
        return (2);
    }

    // Prompts the user to enter the number of months.
    std::cout << "\nEnter the number of months: ";
    std::cin >> numberOfMonths;

    // Displays an error message and terminates the program if the user enters an invalid number of months.
    if (std::cin.fail() or numberOfMonths <= 0)
    {
        std::cout << "\nError: Use number of months > 0, Try again.\n";
        return (3);
    }

    // Displays the CDValue for each month.
    std::cout << "\nMonth\t\tCDValue\n";
    for (int i = 0; i < numberOfMonths; ++i)
    {
        // Computes the new value for each month.
        amountDeposited += amountDeposited * (percentageYield / 1200);
        
        std::cout << std::fixed <<std::setprecision(2) << i + 1 << "\t\t" << amountDeposited << "\n";
    }
}