#include "Phonecall.hpp"
#include <iostream>
#include <limits>

const int MAX_CALLS = 10;

int main()
{
    // Creates an array of PhoneCall Objects.
    PhoneCall phoneCalls[MAX_CALLS];
    PhoneCall newCall;  // Creates a reference to a PhoneCall Object.

    std::cout << "Enter details for 10 phone calls:\n";

    int currentSize = 0;

    for (int i = 0; i < MAX_CALLS; ++i)
    {
        // Reads in data for a new PhoneCall.
        std::cout << "\nCall " << (i + 1) << ":\n";
        std::cin >> newCall;

        // Handles case when the user input is invalid.
        if (std::cin.fail() || newCall.getRatePerMinute() <= 0 || newCall.getCallDuration() <= 0.0)
        {
            std::cout << "\nError: Call duration and rate per minute must be a >= 0.0, try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            --i;
            continue;
        }

        // Check if this phone number has already been called
        bool foundDuplicate = false;

        for (int j = 0; j < currentSize; ++j)
        {
            if (phoneCalls[j] == newCall)
            {
                std::cout << "\nThis number has already been called. Skipping this entry.\n";
                foundDuplicate = true;
                break;
            }
        }
        
        // Adds the PhoneCall Object to the array if the number has not been called.
        if (!foundDuplicate)
        {
            phoneCalls[currentSize] = newCall;
            currentSize++;
        }
        else
            --i; // decrement i to repeat this iteration

        if (currentSize >= MAX_CALLS)
        {
            std::cout << "\nMaximum number of calls reached.\n";
            break;
        }
    }

    // Displays all PhoneCall Objects in the list.
    std::cout << "\nList of unique phone calls:\n";
    for (int i = 0; i < currentSize; ++i)
    {
        std::cout << phoneCalls[i] << "\n";
    }

    return (0);
}
