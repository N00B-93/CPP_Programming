#include <iostream>
#include <iomanip>
#include <cmath>

/**
    This is a program that calcukates and displays the velocity of water flowing out of a two ended tube whose ends has unequal radius
    given that the velocity of the water flowing into the tube is 1ft/sec, the input tube radisu is 0.75in and the ouput tube radius is
    0.5in.
*/

int main(void)
{
    const int INCHES_TO_FEET_MULTIPLIER = 12;

    // Constants variable holding the radii of the tube in inches and the in flow velocity of water in ft/sec.
    const float VIN = 1, RIN = 0.75, ROUT = 0.5;

    // Converts the input and output radii from inches to feet.
    const float RIN_IN_FEET = INCHES_TO_FEET_MULTIPLIER / RIN, ROUT_IN_INCHES = INCHES_TO_FEET_MULTIPLIER / ROUT;

    // Determines the output velocity of the water in the tube.
    float vout = VIN * pow((RIN / ROUT), 2);

    // Displays the output velocity of the water.
    std::cout << std::fixed << std::setprecision(2) << "\nThe output velocity of the water is: " << vout << "ft/sec\n";

    return (0);
}