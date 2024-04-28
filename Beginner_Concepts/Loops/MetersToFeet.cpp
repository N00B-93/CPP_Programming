#include <iostream>
#include <iomanip>

/**
    This is a program that converts lengths in the range 1 - 15 
    in meters to feet and displays the result in a tabular form.
*/

int main(void)
{
    // Declares a constant value for conversion of meters to feet.
    const float METERS_TO_FEET =  3.280;

    // Displays the conversion tablle.
    std::cout << "\nMeters\t\tFeet\n";
    for (int i = 1; i <= 15; i ++)
    {
        std::cout << std::fixed << std::setprecision(3) << i << "\t\t" << std::setw(0) << i * METERS_TO_FEET <<"\n";
    }
}