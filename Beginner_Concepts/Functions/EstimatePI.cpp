#include <iostream>
#include <iomanip>
#include <cmath>

/**
    This is a program that computes the value of PI by using a function with the header;
                double getValueOfPI(int n)
*/

double getValueOfPI(int n);  // Prototype of the getValueOfPI function.

int main(void)
{
    // Displays the value of PI for i in steps of 2.
    std::cout << "\nn\t\tPI\n";
    for (int i = 2; i <= 20; i += 2)
        std::cout << std::fixed << std::setprecision(5) << i << "\t\t" << getValueOfPI(i) << "\n";   
}

/**
 * Determines the value of the constant PI for a specified number of terms using the formula PI = (6 x (1/4 + 1/9 + 1/25 + ... + 1/n^2)) ^ 0.5.
 * 
 * @param n The number of terms of the series PI = (6 x (1/4 + 1/9 + 1/25 + ... + 1/n^2)) ^ 0.5 to be calculated.
 * @return The value of PI for a specified number of terms.
*/
double getValueOfPI(int n)
{
    double pi = (0.0), sumOfSeries(0.0);

    for (int j = 1; j <= n; ++j)
    {
        sumOfSeries += 1 / (pow(j, 2));
    }

    pi = sqrt(6 * sumOfSeries);
    
    return pi;
}
