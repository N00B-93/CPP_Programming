#include "SoccerPlayer.hpp"
#include <iostream>

/**
 * Instantiates a new SoccerPlayer Object with default values.
 */
SoccerPlayer::SoccerPlayer(): jerseyNumber(0), goals(0), assists(0){};

/**
 * Instantiates a new SoccerPlayer.
 * 
 * @param jerseyNo The player's jersey number.
 * @param goalsScored The number of goals scored by the player.
 * @param assistGiven The number provided by the player.
 */
SoccerPlayer::SoccerPlayer(int jerseyNo, int goalsScored, int assistGiven): jerseyNumber(jerseyNo), goals(goalsScored), assists(assistGiven){};

/**
 * The overloaded stream insertion operator function.
 * 
 * @param outputStream An ostream Object reference representing the stdout.
 * @param soccerPlayer The SoccerPlayerObject to be displayed.
 * @return An ostream reference.
 */
std::ostream& operator<<(std::ostream& outputStream, const SoccerPlayer& soccerPlayer)
{
    outputStream << "\nJersey Number: " << soccerPlayer.getJerseyNumber();
    outputStream << "\nGoals Scored: " << soccerPlayer.getGoals();
    outputStream << "\nAssists: " << soccerPlayer.getAssists() << "\n";

    return outputStream;
}

/**
 * The overloaded stream extraction operator function.
 * 
 * @param inputStream An istream Object reference representing stdin.
 * @param soccerPlayer A SoccerPlayer whose data fields are to be read from the user.
 * @return A istream reference.
 */
std::istream& operator>>(std::istream& inputStream, SoccerPlayer& soccerPlayer)
{
    std::cout << "\nEnter the player Jersey Number: ";
    inputStream >> soccerPlayer.jerseyNumber;

    if (inputStream.fail() || soccerPlayer.jerseyNumber < 1 || soccerPlayer.jerseyNumber > 100)
        return inputStream;
    
    std::cout << "\nEnter the number of goals scored by the player: ";
    inputStream >> soccerPlayer.goals;

    if (inputStream.fail() || soccerPlayer.goals < 0)
        return inputStream;

    std::cout << "\nEnter the players number of assists: ";
    inputStream >> soccerPlayer.assists;
    
    if (inputStream.fail() || soccerPlayer.assists < 1)
        return inputStream;

    return inputStream;
}

/**
 * Overloaded > operator used to compare the total goals and assists of two SoccerPlayers.
 * 
 * @param player1 The first SoccerPlayer to be compared.
 * @param player2 The second SoccerPlayer to be compared.
 * @return true if the first player's total goals and assists is greater than the second players total goals and assists.
 */
bool operator>(const SoccerPlayer& player1, const SoccerPlayer& player2)
{
    return (player1.goals + player1.assists) > (player2.goals + player2.assists);
}

/**
 * This returns the total goals scored by a SoccerPlayer.
 * 
 * @return The total goals scored by a SoccerPlayer.
 */
int SoccerPlayer::getGoals() const
{
    return this->goals;
}

/**
 * This returns the total assists provided by a SoccerPlayer.
 * 
 * @return The total assists provided by a SoccerPlayer.
 */
int SoccerPlayer::getAssists() const
{
    return this->assists;
}

/**
 * This returns the jersey number by a SoccerPlayer.
 * 
 * @return The jersey number by a SoccerPlayer.
 */
int SoccerPlayer::getJerseyNumber() const
{
    return this->jerseyNumber;
}
