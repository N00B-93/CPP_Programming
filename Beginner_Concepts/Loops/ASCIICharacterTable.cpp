#include <iostream>

/**
    This is a program that displays all the ASCII uppercase characters,
    the characters are displayed 5 per line.
*/

int main(void)
{
    // Displays the ASCII Uppercase characters.
    std::cout << "\nThe ASCII Uppercase characters are: \n";
    for (int i = 65; i <= 90; i++)
    {
        std::cout << static_cast<char>(i) << " ";

        // Displays a newline after every 5 characters.
        if ((i + 1) % 5 == 0)
            std::cout << "\n";
    }

    return (0);
}
