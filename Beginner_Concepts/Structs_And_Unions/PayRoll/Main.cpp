#include "PayRoll.hpp"
#include <iostream>
#include <iomanip>

/**
    This is a program that calculates pay for either an hourly paid worker or a salaried worker. Hourly paid workers are paid their 
    hourly pay rate times the number of hours worked. Salaried workers are paid their regular salary plus any bonus they may have earned.
*/

int main(int argc, char const *argv[])
{
    // Creates a union representing workers
    Worker staff;

    // Variable to store user's options.
    int option;

    // Constant to hold the maximum number of hours an hourly paid worker can work.
    const int MAXIMUM_NUMBER_OF_HOURS = 80;

    while (true)
    {
        // Displays the main menu.
        std::cout << "\n\t\tEmployee Earnings Calculator\n";
        std::cout << "\n1. Salaried Worker\n2. Hourly Paid Worker\n3. Exit\n";
        std::cout << "\nSelect an option: ";
        std::cin >> option;

        // Displays an error message and clears the input stream if the user's option is invalid.
        if (std::cin.fail() || option < 1 || option > 3)
        {
            std::cout << "\nError: Invalid option selected, Try again.\n";
            clearInputStream();
            continue;
        }

        else if  (option == 1)
        {
            // Prompts the user to enter his/her salary.
            std::cout << "\nEnter your monthly salary: $";
            std::cin >> staff.salariedWorker.salary;

            // Displays an error message and clears the input stream if the user's salary is invalid.
            if (std::cin.fail() || staff.salariedWorker.salary < 1)
            {
                std::cout << "\nError: Invalid salary, Try again with a valid non-negative amount.\n";
                clearInputStream();
                continue;
            }

            // Prompts the user to enter his/her monthly bonus.
            std::cout << "\nEnter your monthly bonus: $";
            std::cin >> staff.salariedWorker.bonus;

            // Displays an error message and clears the input stream if the user's bonus is invalid.
            if (std::cin.fail() || staff.salariedWorker.bonus < 1)
            {
                std::cout << "\nError: Invalid bonus amount, Try again with a valid non-negative amount.\n";
                clearInputStream();
                continue;
            }

            // calculates and displays the user's total monthly earnings.
            std::cout << std::fixed << std::setprecision(2) << "\nYour total Monthly earnings is: $" << getTotalPay(staff.salariedWorker) << "\n";
        }

        else if (option == 2)
        {
            // Prompts the user to enter his/her hourly rate.
            std::cout << "\nEnter your hourly rate: $";
            std::cin >> staff.hourlyPaidWorker.hourlyRate;

            // Displays an error message and clears the input stream if the user's hourly rate is invalid.
            if (std::cin.fail() || staff.hourlyPaidWorker.hourlyRate < 1)
            {
                std::cout << "\nError: Invalid hourly rate amount, Try again with a valid non-negative amount.\n";
                clearInputStream();
                continue;
            }

            // Prompts the user to enter his/her number of hours worked.
            std::cout << "\nEnter number of hours worked: ";
            std::cin >> staff.hourlyPaidWorker.hoursWorked;
            
            // Displays an error message and clears the input stream if the user's number of hours worked is invalid.
            if (std::cin.fail() || staff.hourlyPaidWorker.hoursWorked < 1 || staff.hourlyPaidWorker.hoursWorked > MAXIMUM_NUMBER_OF_HOURS)
            {
                std::cout << "\nError: Invalid number of hours worked, Try again with a valid number less than or equal to " << MAXIMUM_NUMBER_OF_HOURS << " hours.\n";
                clearInputStream();
                continue;
            }

            // Calculates and displays the user's total earnings.
            std::cout << std::fixed << std::setprecision(2) << "\nYour total earnings is: $" << getTotalPay(staff.hourlyPaidWorker) << "\n";
        }
        // Breaks out of the loop.
        else if (option == 3)
        {
            std::cout << "\nThanks for using our services!!!\n";
            break;
        }
    }

    return (0);
}
