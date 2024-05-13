#include <iostream>
#include <string>

/**
    A large company pays its salespeople on a commission basis. The salespeople each receive $200 per week plus 9% of their gross sales for that week.
    This is a program that uses a while statement to input each salesperson’s gross sales for last week and calculates and displays that salesperson’s earnings.
*/

int main(void)
{
    // Variable to hold the user's sales and mothly salary.
    float sales(0.0f), monthlySalary(0.0f);

    // Variable to hold invalid user input.
    std::string garbageCollector = "";

    while (sales != -1)
    {
        // Prompts the user to enter his or her sales.
        std::cout << "\nEnter sales in dollars(-1 to end): $";
        std::cin >> sales;

        if (sales == -1)  // Breaks out of the loop if the user enters -1.
            break;
        else if (std::cin.fail() or sales < 0)  // Displays an error message and clears the input stream if user input is invalid.
        {
            std::cout << "\nError: Use floating point numbers >= 0 for sales, Try again.\n";
            std::cin.clear();
            getline(std::cin, garbageCollector);
            continue;
        }

        // determines the monthly salary.
        monthlySalary = 200 + (0.09 * sales);

        // Displays the user's monthly salary.
        std::cout << "\nSalary is: $" << monthlySalary << "\n";
    }
}
