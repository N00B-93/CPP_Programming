#include <iostream>
#include <string>
/**
   This is a program that promptes the user to enter two strings and then determines the 
   characters common to the string by using a function with the header;
                    string commonCharacters(const string& s1, const string& s2)
*/
std::string commonCharacters(const std::string& s1, const std::string& s2);  // Prototype of the commonCharacters function.

int main(void)
{
    // Variable to hold two strings entered by the user.
    std::string s1, s2;

    // Prompts the user to enter two strings.
    std::cout << "\nEnter the first string: ";
    getline(std::cin, s1);

    // Prompts the user to enter the second string.
    std::cout << "\nEnter the second string: ";
    getline(std::cin, s2);

    // Displays an error message and terminates the program if the user enters an empty string.
    if (s1 == "" || s2 == "")
    {
        std::cout << "\nError: Use two non empty strings only, try again.\n";
        exit(EXIT_FAILURE);
    }
    
    // Determines the characters common to both strings.
    std::string charactersInCommon = commonCharacters(s1, s2);

    // Displays the result.
    if (charactersInCommon == "")
        std::cout << "\nNo common characters.";
    else
        std::cout << "\nThe characters common to '" << s1 << "' and '" << s2 << "' is: " << charactersInCommon << "\n";

    return (0);
}

/**
 * This detemines the characters common to two strings.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return A string containing characters common to both strings.
*/
std::string commonCharacters(const std::string& s1, const std::string& s2)
{
    // A string to hold the common characters.
    std::string charactersInCommon;

    for (int i = 0; i < s1.length(); ++i)
    {
        // Checks if each character in s1 is present in s2 and adds it to a string holding the common characters 
        // if it's not present in the string holding the common characters.
        if (s2.find(s1[i]) != std::string::npos && charactersInCommon.find(s1[i]) == std::string::npos)
            charactersInCommon.append(1, s1[i]);
    }

    return charactersInCommon;
}
