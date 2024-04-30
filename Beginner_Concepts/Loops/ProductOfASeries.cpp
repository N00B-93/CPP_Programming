#include <iostream>
#include <iomanip>

/**
    This is a program that calculates the product of the series;
                1/5 x 1/9 x 1/13 x 1/17 x 1/21 x 1/25 x ... x 1/93 x 1/97.
*/

int main(void)
{
    // Initialize a variable to hold the sum of the terms in the series.
    float sumOfSeries = 0.0f;

    // Determines the sum of the series.
    for (int i = 5; i <= 97; i += 4)
    {
        sumOfSeries += 1 / static_cast<float>(i);
    }

    // Displays the sum of terms in the series.
    std::cout << std::fixed << std::setprecision(4) << "\nThe sum of the series is: " << sumOfSeries << "\n";

    return (0);
}
