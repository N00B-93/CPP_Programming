#include <iostream>
#include <iomanip>
#include <cmath>

/**

*/

int main(void)
{
	// Variables to hold the loan amount and the number of years.
	int loanAmount, numberOfYears;

	// Prompts the user to enter the loan amount and number of years.
	std::cout << "\nEnter the loan amount and number of years: ";
	std::cin >> loanAmount >> numberOfYears;

	// Displays an error message and terminates the program if the loan amount or number of years is invalid.
	if (std::cin.fail() or loanAmount <= 0 or numberOfYears <= 0)
	{
		std::cout << "\nError: Loan amonut and number of years must be >= 0, Try again.\n";
		return (1);
	}
	
	// Variable that holds the interest rate lower limit.
	float interestRateLimit = 5.00 / 100;

	std::cout << "\nInterest Rate\t\t\tMonthly Payment\t\t\tTotal Payment\n";
	while (interestRateLimit <= 8.00)
	{
		float monthlyInterestRate = interestRateLimit / 12;
		float monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, 12 * numberOfYears));

		float totalPayment = monthlyPayment * 12 * numberOfYears;

		std::cout << std::fixed << std::setprecision(2) << interestRateLimit << "\t\t\t" << monthlyPayment << "\t\t\t" << totalPayment << "\n";

		interestRateLimit += 0.125 / 100;
	}

	return (0);
}

