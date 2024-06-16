#include <iostream>
#include <array>
#include <string>
#include <limits>
#include <iomanip>

// Constant to hold the size of the arrays used.
const size_t SIZE = 5;

int getLargestElement(std::array<int, SIZE>& list); // Prototype of the getIndexOfLargestElement function.
void displayWinners(std::array<int, SIZE>& list, int largestElement, std::array<std::string, SIZE>& names); // Prototype of the allIndicesOfLargestElement function.

int main(int argc, char const *argv[])
{
    // Arrays holding the candidates names.
    std::array<std::string, SIZE> candidates;

    // Array holding the votes received by each candidate.
    std::array<int, SIZE> votesReceived;

    // Variable to hold the total votes received by all candidates.
    int totalVotes(0);

    // Prompts the user to enter the candidates names and the votes each candidate received.
    for (size_t i = 0; i < SIZE; ++i)
    {
        // Reads in the candidate's name.
        std::cout << "\nEnter candidate's name: ";
        getline(std::cin, candidates[i]);

        // Reads in the votes received by the candidate.
        std::cout << "\nEnter the number of votes " << candidates[i] << " received: ";
        std::cin >> votesReceived[i];

        // Displays an error message and restarts the current iteration if the votes entered by the user is invalid.
        if (std::cin.fail() || votesReceived[i] < 0)
        {
            std::cout << "\nError: Votes received must be non negative, Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
            continue;
        }

        // Adds the current candidate's votes to the total votes.
        totalVotes += votesReceived[i];
    }

    // Displays the name's votes received and the percentage of total votes for each candidates.
    std::cout << "\nCandidate\t\tVotes Received\t\t% of Total Votes\n";
    for (size_t i = 0; i < SIZE; ++i)
    {
        std::cout << std::left << std::setw(20) << candidates[i] 
                  << std::setw(15) << std::right << votesReceived[i] 
                  << std::setw(20) << std::fixed << std::setprecision(2) 
                  << (static_cast<float>(votesReceived[i]) / totalVotes) * 100 << "\n";
    }

    int highestVote = getLargestElement(votesReceived);  // Determines the largest vote.
    displayWinners(votesReceived, highestVote, candidates);  // displays the winner(s) of the election.

    return (0);
}

/**
 * This determines the largest element in an array of integers.
 * 
 * @param list An array containing integers.
 * @return The largest element in an array.
*/
int getLargestElement(std::array<int, SIZE>& list)
{
    int largest = list[0];

    for (size_t i = 0; i < list.size(); ++i)
    {
        if (list[i] > largest)
        {
            largest = list[i];
        }
    }

    return largest;
}

/**
 * Displays name of candidates with the highest number of votes.
 * 
 * @param votes An array containing candidates votes.
 * @param largestVote The largest vote.
 * @param names An array containing candidate's names.
*/

void displayWinners(std::array<int, SIZE>& votes, int largestVote, std::array<std::string, SIZE>& names)
{
    std::cout << "\nThe Winner(s) of the election is:\n";
    int countWinners = 0;

    for (size_t i = 0; i < votes.size(); ++i)
    {
        if (votes[i] == largestVote)
        {
            countWinners++;
            std::cout << names[i] << "\n";
        }
    }
    if (countWinners > 1)
        std::cout << "There was a tie.\n";
}
