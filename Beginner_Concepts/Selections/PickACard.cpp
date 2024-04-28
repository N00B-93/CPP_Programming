#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

/**
    This is a program that simulates picking a card from a deck of 52 cards. 
    The program displays the rank (Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King) and suit (Clubs, Diamonds, Hearts, Spades) of the card.
*/

int main(void)
{
    // Declares variable to hold the rank and the suit of a card.
    int rank, suit;
    std::string rankString, suitString;

    // Seeds the random number generator with the Linux epoch.
    srand(time(NULL));

    // Generates a number from 1 - 13 to represent a rank and 1 - 4 to represent the suit of the card..
    rank = 1 + rand() % 13;
    suit = 1 + rand() % 4;

    // Assigns a rank to its corresponding number representation.
    switch (rank)
    {
        case 1:
            rankString = "Ace";
            break;
        case 11:
            rankString = "Jack";
            break;
        case 12:
            rankString = "Queen";
            break;
        case 13:
            rankString = "King";
            break;
    }

    // Assigns a suit to its corresponding number representation.
    switch (suit)
    {
        case 1:
            suitString = "Clubs";
            break;
        case 2:
            suitString = "Diamonds";
            break;
        case 3:
            suitString = "Hearts";
            break;
        case 4:
            suitString = "Spades";
            break;
    }

    // Displays the rank and suit of a card.
    if (rank == 1 or (rank >= 11 and rank <= 13))
        std::cout << "\nThe card you picked is: " << rankString << " of " << suitString << "\n";
    else
        std::cout << "\nThe card you picked is: " << rank << " of " << suitString << "\n";

    return (0);
}