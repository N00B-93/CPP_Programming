#include <iostream>
#include <cmath>
#include <iomanip>
#define PI 3.14159f

/**
    This is a program that displays the values of tan and cot
    in the range 1 - 60 in steps of 10 degrees.
*/

int main(void)
{
    std::cout << "\nDegree\t\tsin/cos\t\tcos/sin\n";
    for (int i = 0; i <= 60; i += 10)
    {
        float radians = i * PI / 180.0;
        std::cout << std::fixed << std::setprecision(4) << i << "\t\t" << sin(radians) / cos(radians) << "\t\t" << cos(radians) / sin(radians) << "\n";
    }

    return (0);
}
