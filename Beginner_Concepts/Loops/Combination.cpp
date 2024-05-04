#include <iostream>

/**
    This is a program that displays all possible combinations for 
    picking two numbers from integers 1 to 7. The program also displays the total number of all combinations
*/

int main(void)
{
    // Variable to hold the number of all combinations.
    int combinationCounter(0);

    // Displays all the possible combinations for picking two numbers.
    std::cout << "\nThe possible combinations are:\n";
    for (int i = 1; i < 7; ++i)
    {
        for (int j = i + 1; j <= 7; ++j)
        {
            std::cout << "(" << i << ", " << j << ")\n";
            combinationCounter++;
        }
    }

    // Displays the number of combination.
    std::cout << "\nThe number of combination is: " << combinationCounter << "\n";

    return (0);
}
