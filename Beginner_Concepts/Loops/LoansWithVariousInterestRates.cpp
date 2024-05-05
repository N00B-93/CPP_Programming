#include <iostream>
#include <iomanip>
#include <cmath>

/**
    This is a program that lets the user enter the loan amount and loan period in number of years 
	and displays the monthly and total payments for each interest rate starting from 5% 
	to 8%, with an increment of 1/8.
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
	float interestRateLimit = 5.00;

	// Displays the interest rate, monthly payment and the total payment for each value of the interest rate in tabular form.
	std::cout << "\nInterest Rate\t\tMonthly Payment\t\tTotal Payment\n";
	while (interestRateLimit <= 8.00)
	{
		// Calculates the monthly interest rate.
		float monthlyInterestRate = interestRateLimit / 1200;

		// Calculates the monthly payment.
		float monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, 12 * numberOfYears));

		// Calculates the total payment.
		float totalPayment = monthlyPayment * 12 * numberOfYears;

		// Displays the interest rate, monthly payment and the total amount for each interest rate.
		std::cout << std::fixed << std::setprecision(3) << interestRateLimit << "\t\t\t" << monthlyPayment << "\t\t\t" << totalPayment << "\n";

		// Increments the interest rate limit by 0.125.
		interestRateLimit += 0.125;
	}

	return (0);
}
