#include <iostream>

/**
    This is a program that computes the rent in five years and the total rent for one year starting five years 
    from now, suppose that the current rent is $1,000 and it increases by 3% annually.
*/

int main(void)
{
    // Initialize a constant variable to hold the percent increment of the rent.
    const float INCREMENT_PERCENT = 0.03F;

    // Variable holding the current rent and total rent.
    float currentRent = 1000.0f, totalRent = currentRent;

    for (int i = 0; i < 5; i++)
    {
        currentRent += currentRent * INCREMENT_PERCENT;
        totalRent += currentRent;
    }

    // Displays the total rent.
    std::cout << "\nTotal Rent for 5 years: $" << totalRent;

    // Displays the rent in the six year.
    std::cout << "\nRent after 5 years: $" << currentRent + (currentRent * INCREMENT_PERCENT);

    std::cout << "\n";

    return (0);
}
