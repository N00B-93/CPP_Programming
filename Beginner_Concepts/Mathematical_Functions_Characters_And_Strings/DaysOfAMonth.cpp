#include <iostream>
#include <cstring>

int main()
{
    // Declares variables to hold the year, days in month, and the first 3 letters of the month.
    int year, daysInMonth;
    std::string month;

    // Prompts the user to enter the year.
    std::cout << "\nEnter the year: ";
    std::cin >> year;

    // Prompts the user to enter the month.
    std::cout << "\nEnter the month(e.g., Jan): ";
    std::cin >> month;

    // Checks if the first letter of the month is capitalized and exits the program if not.
    if (!isupper(month[0]))
    {
        std::cout << "\nError: " << month << " is invalid. Please try again.\n";
        return (1);
    }

    // Displays the number of days based on the month.
    if (month == "Sep" || month == "Apr" || month == "Jun" || month == "Nov")
    {
        std::cout << "\n" << month << " " << year << " has 30 days.\n";
    }
    else if (month == "Jan" || month == "Mar" || month == "May" || month == "Jul" || month == "Aug" || month == "Oct" || month == "Dec")
    {
        std::cout << "\n" << month << " " << year << " has 31 days.\n";
    }
    else if (month == "Feb")
    {
	// Check if the year is a leap year.
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
            std::cout << "\n" << month << " " << year << " has 29 days.\n";
        }
	else
	{
            std::cout << "\n" << month << " " << year << " has 28 days.\n";
        }
    }
    else
    {
        std::cout << "\nInvalid month.\n";
    }

    return (0);
}

