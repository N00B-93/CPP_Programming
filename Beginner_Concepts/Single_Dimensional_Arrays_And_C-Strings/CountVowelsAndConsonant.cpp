#include <iostream>
#include <vector>
#include <string>

/**
    This is a program that prompts the user to enter an unspecified number of characters(input ends when the user enters 0)
    and then displays the number of consonants and vowel in the user's input.
*/
int main(int argc, char const *argv[])
{
    // Vector to hold the characters entered by the user.
    std::vector<char> characters;

    // Strings representing vowels and consonants.
    std::string vowels = "aeiou"; 
    std::string consonant = "bcdfghjklmnpqrstvwxyz";

    // Variables to hold the number of consonant and vowels in the string of alphabets entered by the user.
    int numberOfConsonant = 0, numberOfVowels = 0;

    char input;

    // Prompts the user to enter a string of alphabets.
    std::cout << "\nEnter a string of alphabets(press ENTER to end input): ";
    while (std::cin.get(input) && input != '\n')
        characters.push_back(input);

    // Displays an error message and terminates the program if the user does't enter any character.
    if (characters.empty())
    {
        std::cout << "\nError: No character entered, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the number of consonant and vowel in the user's input.
    for (char character: characters)
    {
        if (consonant.find(tolower(character)) != std::string::npos)
            numberOfConsonant++;
        else if (vowels.find(tolower(character)) != std::string::npos)
            numberOfVowels++;
    }

    // Displays the number of consonant and vowels.
    std::cout << "\nNumber of consonants: " << numberOfConsonant
            << "\n" << "Number of vowels: " << numberOfVowels << "\n";

    return 0;
}
