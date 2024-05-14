#include <iostream>

/**
    This is a program that displays the number of days in February from 1985, ..., upto 2025
    using a function with header;
                    int numberOfDaysInFebruary(int year)
*/

int numberOfDaysInFebruary(int year);  // Prototype of the numberOfDaysInFebruary function.

int main(void)
{
    // Displays the number of days in February from 1985 to 2025.
    for (int year = 1985; year <= 2025; ++year)
    {
        std::cout << "\n" << "February " << year << " has " << numberOfDaysInFebruary(year) << " days.\n";
    }

    return (0);
}

/**
 * This determines the number of days in February in a given year.
 * 
 * @param year The year whose number of days in February is to be determined.
 * @return The number of days in February in a specified year.
*/
int numberOfDaysInFebruary(int year)
{
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        return (29);
    return (28);
}
