#include <iostream>
#include <iomanip>

/**
    This is a program that converts weight from pounds to ounces and ounces
    to pounds using two methods with headers;
                double poundsToOunces(double pounds)
                double ouncesToPounds(double ounces)
 */

// Prototypes for the poundsToOunces function and the ouncesToPounds function.
double poundsToOunces(double pounds);
double ouncesToPounds(double ounces);

int main(void)
{
    // Displays weight converted from pounds to ounces and vice versa in tabular form.
    std::cout << "\nPounds\tOunces\t|\tOunces\tPounds\n";
    for (int pounds = 11, ounces = 1; pounds <= 20 and ounces <= 50; ++pounds, ++ounces)
        std::cout << std::fixed << std::setprecision(3) << pounds << "\t" << poundsToOunces(pounds) << "\t|\t" << ounces << "\t"  << ouncesToPounds(ounces) << "\n";
}

/**
 * Converts a weight from pounds to ounces.
 * 
 * @param pounds The weight to be converted to ounces.
 * @return The weigth in ounces.
*/
inline double poundsToOunces(double pounds)
{
    return pounds * 0.0625;
}

/**
 * Converts a weight from ounces to pounds.
 * 
 * @param ounces The weight to be converted to pounds.
 * @return The weigth in pounds.
*/
inline double ouncesToPounds(double ounces)
{
    return ounces / 0.0394;
}
