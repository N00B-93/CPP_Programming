#include <iostream>
#include <iomanip>
#include <string>

/**
    A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor.
    This is a program calculates a theater’s gross and net box office profit for a night. The program asks for the name of the 
    movie, and how many adult and child tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) 
    and then calculates and displays the box office's gross and net profit.
    NB: It is assumed that the theater keeps 20% of the gross box office profit
*/

int main(void)
{
    // Variable to hold the name of a movie.
    std::string nameOfMovie;

    // Variable to hold the number of adult and child tickets sold.
    int numberOfAdultTickets, numberOfChildTickets;

    // Constants to hold the prices of adults and children tickets and theatre percentage revenue.
    const double PRICE_OF_ADULT_TICKET = 10.00, PRICE_OF_CHILD_TICKET = 6.00, THEATRE_PERCENTAGE_REVENUE = 0.2;

    // Prompts the user to enter the name of the movie.
    std::cout << "\nEnter the name of the movie: ";
    getline(std::cin, nameOfMovie);

    // Prompts the user to enter the number of adult and child ticket sold.
    std::cout << "\nEnter the number of adult and child ticket sold: ";
    std::cin >> numberOfAdultTickets >> numberOfChildTickets;

    // Calculates the gross box office profit.
    double grossBoxOfficeProfit = numberOfChildTickets * PRICE_OF_CHILD_TICKET + numberOfAdultTickets * PRICE_OF_ADULT_TICKET;

    // Calculates the net box office profit.
    double netBoxOfficeProfit = grossBoxOfficeProfit * THEATRE_PERCENTAGE_REVENUE;

    // Calculates the amount paid to the distributors.
    double amountPaidToDistributor = grossBoxOfficeProfit - netBoxOfficeProfit;

    // Displays the result.
    std::cout << std::setw(40) << "\nMovie Name: " << nameOfMovie;
    std::cout << std::setw(40) << "\nNumber of Child Tickets sold: " << numberOfChildTickets;
    std::cout << std::setw(40) << "\nNumber of Adult Tickets sold: " << numberOfAdultTickets;
    std::cout << std::setw(40) << std::fixed << std::setprecision(2) << "\nNet Box Office Profit: $" << netBoxOfficeProfit;
    std::cout << std::setw(40) << std::fixed << std::setprecision(2) << "\nGross Box Office Profit: $" << grossBoxOfficeProfit;
    std::cout << std::setw(40) << std::fixed << std::setprecision(2) << "\nAmount paid to Distributor: $" << amountPaidToDistributor;

    return (0);
}
