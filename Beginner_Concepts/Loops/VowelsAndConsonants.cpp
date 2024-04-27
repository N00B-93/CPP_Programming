#include <iostream>
#include <cstring>

/**
    This is a program that prompts the user to enter a string and displays the number of 
    vowels and consonants in the string.
*/

int main(void)
{
    // Declares the variable to hold the string.
    std::string str;

    // Initializes variables to hold the number of vowels and consonants.
    int numberOfVowels = 0, numberOfConsonants = 0;

    // Prompts the user to enter the string to be processed.
    std::cout << "\nEnter a String: ";
    getline(std::cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        switch (tolower(str[i]))
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                numberOfVowels++;
                break;
            case 'b':
            case 'c':
            case 'd':
            case 'f':
            case 'g':
            case 'h':
            case 'j':
            case 'k':
            case 'l':
            case 'm':
            case 'n':
            case 'p':
            case 'q':
            case 'r':
            case 's':
            case 't':
            case 'v':
            case 'w':
            case 'x':
            case 'y':
            case 'z':
                numberOfConsonants++;
                break;
        }
    }

    // Displays the number of vowels and consonants.
    std::cout << "\nNumber of vowels: " << numberOfVowels << "\n";

    // Displays the number of consonant and consonants.
    std::cout << "Number of consonants: " << numberOfConsonants << "\n";

    return (0);
}
