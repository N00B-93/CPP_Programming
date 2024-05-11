#include <iostream>
#include <iomanip>

/**
    This is a program that converts distance from miles to kilometers and kilometers
    to miles using two methods with headers;
                double millimetersToInches(double millimeter)
                double inchesToMillimeters(double inches)
 */


double millimetersToInches(double millimeter);  // Prototypes for the millimetersToInches function.
double inchesToMillimeters(double inches);  // Prototype of the InchesToMillimeters function.

int main(void)
{
    // Displays distances converted from millimeters to inches and vice versa in tabular form.
    std::cout << "\nMillimeters\tInches\t\t|\tInches\t\tMillimeters\n";
    for (int millimeters = 2, inches = 1; millimeters <= 100 and inches <= 50; millimeters += 2, ++inches)
        std::cout << std::fixed << std::setprecision(3) << millimeters << "\t\t" << millimetersToInches(millimeters) << "\t\t|\t" << inches << "\t\t"  << inchesToMillimeters(inches) << "\n";
}

/**
 * Converts a length from millimeters to inches.
 * 
 * @param millimeter The length to be converted to inches.
 * @return The length in inches.
*/
inline double millimetersToInches(double millimeter)
{
    return millimeter * 0.0394;
}

/**
 * Converts a length from inches to millimeters.
 * 
 * @param inches The length to be converted to millimeters.
 * @return The length in millimeters.
*/
inline double inchesToMillimeters(double inches)
{
    return inches / 0.0394;
}
