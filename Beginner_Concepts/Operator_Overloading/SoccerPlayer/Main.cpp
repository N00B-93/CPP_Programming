#include "SoccerPlayer.hpp"
#include <iostream>
#include <limits>

/**
 * Determines the SoccerPlayer in an array of SoccerPlayer that has the highest number of goals plus assists.
 * 
 * @param players An array of SoccerPlayers.
 * @param size The number of SoccerPlayers in the array of SoccerPlayers.
 * @return The SoccerPlayer with the highest number of goals plus assists.
 */
SoccerPlayer getPlayerWithBestStats(SoccerPlayer players[], int size)
{
    SoccerPlayer playerWithBestStat = players[0];

    for (int i = 1; i < size; ++i)
    {
        if (players[i] > playerWithBestStat)
            playerWithBestStat = players[i];
    }

    return playerWithBestStat;
}


int main(int argc, char const *argv[])
{
    // Size of the array of SoccerPlayers.
    const int SIZE = 11;

    // Creates an array of SoccerPlayers.
    SoccerPlayer players[SIZE];

    // Reads in the stats of the SoccerPlayers.
    for (int i = 0; i < SIZE; ++i)
    {
        std::cout << "\nPlease enter player " << (i + 1) << "'s details:\n";
        std::cin >> players[i];

        if (std::cin.fail() || players[i].getAssists() < 0 || players[i].getGoals() < 0 || 
        players[i].getJerseyNumber() < 1 || players[i].getJerseyNumber() > 100)
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cerr << "\nError: Player jersey number must be in the range 1 <= jerseyNumber <= 100.\nGoals scored and assists must be positive.\nTry again.\n";
            --i;
            continue;
        }
    }

    // Displays the player with the highest goals plus assists.
    std::cout << "\nThe player with highest goals plus assists:" << getPlayerWithBestStats(players, SIZE); 

    return (0);
}
