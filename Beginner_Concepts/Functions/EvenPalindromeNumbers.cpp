#include <iostream>
#include <iomanip>

/**
    This is a program that displays the first 50 even palindriome
    numbers, five numbers per line.
*/

int reverseDigit(int number);  // Prototype for the reverse function.
bool isPalindrome(int number);  // Prototype of the isPalindrome function.

int main(void)
{
    int counter = 0;

    std::cout << "\nThe first 50 even Palindromes are:\n";
    for (int i = 1; ; ++i)
    {
        if (i % 2 == 0 and isPalindrome(i))
        {
            // Displays an integer if it is an even palindrome number.
            std::cout << std::setw(4) << i << " ";

            // Increments the line counter by 1.
            counter++;

            if (counter % 5 == 0)  // Displays a new line after 5 digits has been displayed.
                std::cout << "\n";

            if (counter == 50)  // Breaks out of the loop after 50 digits has been displayed.
                break;
        }
    }
}

/**
 * This returns the reverse of an integer number.
 * 
 * @param number The number to be reversed.
 * @return The reverse of an integer.
*/
int reverseDigit(int number)
{
    int reverse = 0;

    while (number > 0)
    {
        int remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    }
    return reverse;
}

/**
 * Checks if an integer is a palindrome or not.
 * 
 * @param number The number to be checked.
 * @return true if the number is a palindrome, else false is returned.
*/
inline bool isPalindrome(int number)
{
    if (number == reverseDigit(number))
        return true;
    return false;
}
