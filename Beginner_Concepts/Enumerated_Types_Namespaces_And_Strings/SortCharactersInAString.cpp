#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter a string and then sorts the 
    characters in the string using a function with the header;
                    std::string sort(std::string& str)
*/

std::string sort(std::string& str);  // Prototype of the sort function.

int main(int argc, char const *argv[])
{
    // A string variable to hold the user input.
    std::string str;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays the result.
    std::cout << "\nThe sorted string is: " << sort(str) << "\n";

    return (0);
}

/**
 * Sorts a string using selection sorting algorith.
 * 
 * @param str The string to be sorted.
 * @return The sorted string.
*/
std::string sort(std::string& str)
{
    for (int i = 0; i < str.length(); ++i)
    {
        int stringMin = str.at(i);
        int minIndex = i;

        for (int j = i + 1; j < str.length(); ++j)
        {
            if (str.at(j) < stringMin)
            {
                minIndex = j;
                stringMin = str.at(j);
            }
        }

        if (minIndex != i)
        {   
            str.at(minIndex) = str.at(i);
            str.at(i) = stringMin;
        }
    }

    return str;
}
