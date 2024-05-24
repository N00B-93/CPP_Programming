#include <iostream>

/**
    This is a program that asks for the actual value of a piece of property and displays the assessment value and property tax. 
    The assesment value is 10% of the actual value and the property tax is 75 cents for each $100 of the assesment value.
*/

int main(int argc, char const *argv[])
{
    // Variables to hold the actual value and the assesment value.
    float actualValue, assesmentValue;

    // Constant representing tax per $100 of the assesment value.
    const float TAX_PER_100_DOLLARS = 0.75;

    // Prompts the user to enter the actual value of the property.
    std::cout << "\nPlease enter the property's actual value: $";
    std::cin >> actualValue;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() || actualValue <= 0)
    {
        std::cout << "\nError: Actual property value must be > 0, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determine's the property's assesment value.
    assesmentValue = 0.6 * actualValue;

    // Determines the property tax.
    float propertyTax = (assesmentValue / 100) * TAX_PER_100_DOLLARS;

    // Displays the assesment value and the actual tax.
    std::cout << "\nAssesment Value: $" << assesmentValue << "\n"
              << "Property Tax: $" << propertyTax << "\n";

    return 0;
}
