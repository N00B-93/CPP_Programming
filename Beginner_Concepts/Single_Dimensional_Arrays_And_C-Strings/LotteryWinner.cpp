#include <iostream>

/**
	A lottery ticket buyer purchases 10 tickets a week, always playing the same 10 5-digit “lucky” 
	combinations. This program initializes an array with these lottery numbers and then prompts the
	user to enter a winning 5-digit lottery number, searches for the winning number in the array of
	numbers played by the user and reports whether the user wins the lottery or not.
 */


/**
 * Determines whether a lottery number exists in an array of lottery numbers using binary search algorithm.
 *
 * @param ticketsPlayed An integer array containing lottery tickets holding 5-digit lottery numbers.
 * @param winningTicket The lottery number to be searched for in an array of lottery numbers.
 * @param size The number of tickets in the array of lottery tickets.
 */
bool isLotteryWinner(const int ticketsPlayed[], const int winningTicket, const int size)
{
	bool found = false;

	int high = size - 1, low = 0;

	while (!found && high >= low)
	{
		int mid = (high + low) / 2;

		if (winningTicket < ticketsPlayed[mid])
			high = mid - 1;
		else if (winningTicket == ticketsPlayed[mid])
			found = true;
		else if (winningTicket > ticketsPlayed[mid])
			low = mid + 1;
	}

	return found;
}

int main(int argc, char* const argv[])
{
	// Constant to hold the number of tickets played.
	const int SIZE = 10;

	// Array to hold the 10 tickets played by the user.
	int ticketsPlayed[SIZE] = {13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};

	// Prompts the user to enter the number on the winning lottery ticket.
	int winningNumber;
	std::cout << "\nEnter the number on the winning ticket: ";
	std::cin >> winningNumber;

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || winningNumber < 0)
	{
		std::cout << "\nError: Lottery number should be a positive 5-digit integer, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Displays whether the user wins the lottery or not.
	isLotteryWinner(ticketsPlayed, winningNumber, SIZE) ? std::cout << "\nCongratulations, You won the Lottery!\n" : std::cout << "\nSorry, You lose, Better luck next time.\n";

	return (0);
}

