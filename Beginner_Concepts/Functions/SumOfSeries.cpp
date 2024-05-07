#include <iostream>
#include <iomanip>

/**
    This is a program that displays the sum of the series;
                f(n) = 1/3 + 1/8 + 1/15 ... + 1/(n(n + 2))
    for n = 1,2,3...,14, usinf a function with the header;
                double sumOfSeries(int n)
*/

double sumOfSeries(int n);  // Prototype for the sumOfSeries function.

int main(void)
{
    // Displays a table for the sum of the series from 2 to 14 in steps of 2.
    std::cout << "\nn\t\tf(n)\n";
    for (int i = 2; i <= 14; i += 2)
    {
        std::cout << std::fixed << std::setprecision(6) << i << "\t\t" << sumOfSeries(i) << "\n";
    }
}

/**
 * Determines the sum of a series for a given number of terms.
 * 
 * @param n The number of terms.
 * @return The sum of the series for the given number of terms.
*/
double sumOfSeries(int n)
{
    double sum(0.0);

    for (int i = 1; i <= n; ++i)
    {
        sum += 1.0 / (i * (i + 2));
    }

    return sum;
}
