#include <iostream>
#include <vector>

/**
    This is a program that reads in a C string and then determines the number of letters in the 
    string by using a function with an header;
                        int countLetters(const std::vector<char> arrayOfCharacters)
*/

int countLetters(const std::vector<char> arrayOfCharacters);  // Prototype of the countLetter function.

int main(int argc, char const *argv[])
{
    // Creates a vector to hold the user's input.
    std::vector<char> arrayOfCharacters;

    char userInput;

    // Prompts the user to enter a string.
    std::cout << "\nEnter a string(press ENTER to end input): ";

    // Read characters until Enter is pressed.
    while (std::cin.get(userInput) && userInput != '\n')
        arrayOfCharacters.push_back(userInput);
    
    // Displays an error message if the user enters an empty string.
    if (arrayOfCharacters.empty())
    {
        std::cout << "\nError: Use a string of characters only, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the number of letters in the input string.
    int numberOfLetters = countLetters(arrayOfCharacters);

    // Displays the result.
    std::cout << "\nThe number of letters in '";
    for (char letter: arrayOfCharacters)
        std::cout << letter;
    std::cout << "' is: " << countLetters(arrayOfCharacters) << "\n";

    return (0);
}

/**
 * Counts the numbers of letters in a vector of characters.
 * 
 * @param arrayOfCharacters The vector containing characters.
 * @return The number of letters in a vector of characters.
*/
int countLetters(const std::vector<char> arrayOfCharacters)
{
    int numberOfLetters = 0;

    for (char character: arrayOfCharacters)
    {
        if (isalpha(character))
            ++numberOfLetters;
    }
    return numberOfLetters;
}
