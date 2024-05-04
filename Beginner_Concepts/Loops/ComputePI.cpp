#include <iostream>
#include <cmath>
#include <iomanip>

/**
    This is a program that computes the value of PI using the approximation;
                PI = (6 x (1/4 + 1/9 + 1/25 + ... + 1/n^2)) ^ 0.5
    for n = 100,200,...,600.
*/

int main(void)
{
    // Variable to hold the value of pi.
    float pi(0.0f);

    // Displays the value of PI for i in steps of 100.
    std::cout << "\nn\t\tPI\n";
    for (int i = 100; i <= 600; i += 100)
    {
        float sumOfSeries(0.0f);

        for (int j = 1; j <= i; ++j)
        {
            sumOfSeries += 1 / (pow(j, 2));
        }

        pi = sqrt(6 * sumOfSeries);
        std::cout << std::fixed << std::setprecision(5) << i << "\t\t" << pi << "\n";
    }
}
