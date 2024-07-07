#include "JobBid.hpp"
#include <iostream>
#include <algorithm>

/**
 * This returns the JobBid with the lowest quoted price.
 * 
 * @param bids An array of JobBids.
 * @param size The number of elements in the array of JobBids.
 * @return The JobBid with the lowest quoted price.
 */
JobBid getLowestJobBid(JobBid bids[], int size)
{
    JobBid lowest = bids[0];

    for (int i = 0; i < size; ++i)
    {
        if (lowest > bids[i])
            lowest = bids[i];
    }

    return lowest;
}


int main()
{
    // Size of the array of JoBids
    const int SIZE = 4;

    // Create an array of JobBid objects
    JobBid bids[SIZE];

    // Reading JobBids from user
    for (int i = 0; i < SIZE; ++i)
    {
        bool inputValid = false;

        // Loop until valid input is entered
        while (!inputValid)
        {
            std::cout << "\nEnter details for JobBid " << i + 1 << ":\n";

            if (!(std::cin >> bids[i]) || bids[i].getBidNumber() < 100 || bids[i].getBidNumber() > 999 || bids[i].getQuotedPrice() < 0)
            {
                // If input fails, clear the buffer and try again
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "\nError: Bid number must be a 3-digit number and quoted price must be greater than $0.0, Try again.\n";
            }
            else
                inputValid = true; // Valid input received, exit loop
        }
    }

    // Displaying the lowest JobBid
    std::cout << "\nLowest JobBid:" << getLowestJobBid(bids, SIZE) << std::endl;

    return (0);
}
