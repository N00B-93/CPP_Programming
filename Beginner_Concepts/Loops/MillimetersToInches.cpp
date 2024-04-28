#include <iostream>
#include <iomanip>

/**
    This is a program that converts lengths in the range 2 - 98 
    in millimeters to inches and displays the result in a tabular form.
*/

int main(void)
{
    // Declares a constant value for conversion of millimeters to inches.
    const float MILLIMETERS_TO_INCHES = 0.039;

    // Displays the conversion tablle.
    std::cout << "\nMillimeters\t\tInches\n";
    for (int i = 2; i <= 98; i += 2)
    {
        std::cout << std::fixed << std::setprecision(4) << i << "\t\t" << std::setw(14) << i * MILLIMETERS_TO_INCHES <<"\n";
    }
}