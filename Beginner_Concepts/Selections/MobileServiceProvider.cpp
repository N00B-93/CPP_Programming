#include <iostream>
#include <ctype.h>

/**
    A mobile phone service provider has three different subscription packages for its customers: 

    Package A: For $39.99 per month 450 minutes are provided. Additional minutes are $0.45 per minute. 
    Package B: For $59.99 per month 900 minutes are provided. Additional minutes are $0.40 per minute. 
    Package C: For $69.99 per month unlimited minutes provided.

    This program prompts the user to enter his/her monthly package and the number of minutes
    used and then displays the customer's monthly bill.
*/

int main (int argc, char *argv[])
{
    // Variables to hold the user's package, monthly bill and the minutes used.
    char subscriptionPackage;
    int minutesUsed;
    float monthlyBill;

    // Prompts the user to enter his/her subscription package.
    std::cout << "\nPlease enter your subscription package('A', 'B', 'C'): ";
    std::cin >> subscriptionPackage;

    // Converts the user input to uppercase.
    subscriptionPackage = toupper(subscriptionPackage);
    
    // Displays an error mesage and terminates the program if the subscription package is invalid.
    if (subscriptionPackage != 'A' && subscriptionPackage != 'B' && subscriptionPackage != 'C')
    {
        std::cout << "\nError: Wrong subscription package selected\nSubscription package should be; 'A', or 'B' or 'C'\nTry again.\n";
        exit(EXIT_FAILURE);
    }

    // Prompts the user to enter the minutes used.
    std::cout << "\nPlease enter the minutes used: ";
    std::cin >> minutesUsed;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() || minutesUsed <= 0)
    {
        std::cout << "\nError: Minutes used should be >= 0, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the monthly bill based on the package selected by the user.
    switch(subscriptionPackage)
    {
        case 'A':
            if (minutesUsed <= 450)
                monthlyBill = 39.99;
            else
                monthlyBill = 39.99 + 0.45 * (minutesUsed - 450);
            break;
        case 'B':
            if (minutesUsed <= 900)
                monthlyBill = 59.99;
            else
                monthlyBill = 59.99 + 0.40 * (minutesUsed - 900);
            break;
        case 'C':
            monthlyBill = 69.99;
    }
    
    // Displays the monthly bill.
    std::cout << "\nYour monthly bill is: $" << monthlyBill << "\n";

    return 0;
}

