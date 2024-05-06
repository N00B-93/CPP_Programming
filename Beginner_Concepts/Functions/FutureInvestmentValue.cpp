#include <iostream>
#include <cmath>
#include <iomanip>

double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years);  // Prototype for the futureInvestmentValue function.
/**
    This is a program that prompts the user to enter the investment amount (e.g., 1000) and the interest rate (e.g., 9%) and prints a table that displays future value for the years from 1 to 30 using a function with the header;
                        double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
*/

int main(void)
{
    // Variables that holds the investment amount and interest rate.
    float investmentAmount, interestRate;

    // Prompts the user to enter the investment amount and interest rate.
    std::cout << "\nEnter the investment amount and interest rate(e.g., 3%): ";
    std::cin >> investmentAmount >> interestRate;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() or investmentAmount < 0 or interestRate < 0)
    {
        std::cout << "\nError: Investment amount and Interest rate should both be greater than 0, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the monthly interest rate.
    float monthlyInterestRate = interestRate / 1200;

    // Displays the future investment vakue per year in tabular form.
    std::cout << "\nYears\t\tFuture Value\n";
    for (int year = 1; year <= 30; ++year)
    {
        std::cout << std::fixed << std::setprecision(2) << year << "\t\t" << futureInvestmentValue(investmentAmount, monthlyInterestRate, year) << "\n";
    }
}

/**
 * This determines the future investment value of a given amount.
 * 
 * @param investmentAmount The amount to be invested.
 * @param monthlyInterestRate The monthly interest rate at which the money is invested.
 * @param years The number of years for which the amount is invested
 * @return The future invested value of the amount invested.
*/
double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years)
{
    return investmentAmount * pow(1 + monthlyInterestRate, years * 12);
}
