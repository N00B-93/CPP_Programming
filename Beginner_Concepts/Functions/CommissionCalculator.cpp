#include <iostream>
#include <iomanip>

/**
	This is a program that prompts the user to enter his or her daily sales and then determines the
	corresponding commission by using a function with the header;
			double getCommission(double& dailySales)
*/

/**
 * Determines the commission amount for a given daily sales.
 *
 * @param dailySales Sales made by a sales person in a day.
 * @return The commission for a given daily sales.
 */
double getCommission(double& dailySales)
{
	if (dailySales >= 0 && dailySales <= 999)
		return 0.03 * dailySales;
	else if (dailySales >= 1000 && dailySales <= 2999)
		return 0.035 * dailySales;
	return 0.045 * dailySales;
}

int main(int argc, char* const argv[])
{
	// Variable to hold the user's daily sales.
	double dailySales;

	// Prompts the user to enter his/her daily sales.
	std::cout << "\nEnter your daily sales: £";
	std::cin >> dailySales;

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || dailySales < 0)
	{
		std::cout << "\nError: Daily sales must be greater than or equal to £0.0, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Displays the user's commission.
	std::cout << std::fixed << std::setprecision(2) << "\nCommission on £" << dailySales << " sales is: £" << getCommission(dailySales);

	return (0);
}

