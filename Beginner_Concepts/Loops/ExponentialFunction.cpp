#include <iostream>
#include <cmath>
#include <iomanip>


/**
    This is a program that prints a table of the exponent of 
    integers from 1 - 10 using the exp function.
*/

int main(void)
{
    std::cout << "\nNumber\t\tExponent\n";
    for (int i = 0; i <= 10; ++i)
    {
        std::cout << std::setprecision(6) << i << "\t\t" << exp(i) << "\n";
    }

    return (0);
}
