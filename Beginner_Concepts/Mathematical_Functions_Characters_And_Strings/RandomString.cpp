#include <iostream>
#include <string>
#include <time.h>

/**
	This is a program that randomly generates six lowercase letters
	and then uses them to form a random string.
*/

int main() 
{
    // Seed the random number generator
    srand(time(NULL));

    // Generate six random lowercase letters
    char letter1 = 'a' + rand() % 26;
    char letter2 = 'a' + rand() % 26;
    char letter3 = 'a' + rand() % 26;
    char letter4 = 'a' + rand() % 26;
    char letter5 = 'a' + rand() % 26;
    char letter6 = 'a' + rand() % 26;

    // Concatenate the characters to form a string
    std::string randomString = std::string(1, letter1) +
                               std::string(1, letter2) +
                               std::string(1, letter3) +
                               std::string(1, letter4) +
                               std::string(1, letter5) +
                               std::string(1, letter6);

    // Output the random string
    std::cout << "\nThe random string is: " << randomString << "\n";

    return 0;
}


