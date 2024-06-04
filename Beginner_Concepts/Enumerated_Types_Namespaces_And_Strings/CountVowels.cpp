#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter a string and then 
    counts the number of vowels present in the string using a function with the header;
                    int countVowel(const std::string& s)
*/

int countVowel(const std::string& s);  // Prototype of the countVowel function.

int main(int argc, char const *argv[])
{
    // A string variable to hold the user input.
    std::string str;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string: ";
    getline(std::cin, str);

    // Displays an error message and terminates the program if the user enters an empty string.
    if (str == "")
    {
        std::cout << "\nError: Use non empty strings only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the number of vowels in the string.
    int numberOfVowels = countVowel(str);

    // Displays the result.
    if (numberOfVowels == 0)
        std::cout << "\nNo vowels in '" << str << "'\n";
    else
        std::cout << "\nThe number of vowels in '" << str << "' is: " << numberOfVowels << "\n";
    
    return 0;
}

/**
 * Determines the number of vowels in a string.
 * 
 * @param s The string to be processed.
 * @return The number of vowels in a string.
*/
int countVowel(const std::string& s)
{
    std::string vowels = "aeiouAEIOU";
    int numberOfVowels = 0;

    for (char character: s)
    {
        if (vowels.find(character) != std::string::npos)
            ++numberOfVowels;
    }

    return numberOfVowels;
}