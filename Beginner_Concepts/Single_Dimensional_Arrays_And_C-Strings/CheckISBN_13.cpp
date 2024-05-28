#include <iostream>
#include <string>

/**
	This is a program that prompts the user to enter the first 12 digits of an ISBN-13 number and 
	then calculates the checksum using a function with the header;
			int getCheckSum(const char s[])
	and then displays the complete ISBN-13 number.
 */

int getCheckSum(const char s[]);  // Prototype of the getCheckSum function.

int main(void)
{
	// Constant to hold the size of the array that contains the ISBN-13 number.
	const int SIZE = 14;
	
	// Character array to hold the ISBN-13 number.
	char isbn13Number[SIZE];
	
	// Prompts the user to enter the first 12 digits of an ISBN-13 number.
	std::cout << "\nEnter the first 12 digits of an ISBN-13 number as a string: ";
	for (int i = 0; i < 12; ++i)
	{
		std::cin >> isbn13Number[i];
		
		// Terminates the program if the user's input is invalid.
		if (!isdigit(isbn13Number[i]))
		{
			std::cout << "\nError: Enter 12 integers > 0 only, Try again.\n";
			exit(EXIT_FAILURE);
		}
	}
	
	// Determines the checksum.
	int checkSum = getCheckSum(isbn13Number);
	
	// Inserts the checksum and the null character into the array the representing ISBN-13 number.
	isbn13Number[12] = checkSum + '0';
	isbn13Number[13] = '\0';
	
	// Displays the complete ISBN-13 number.
	std::cout << "\nThe complete ISBN-13 number is: ";
	for (int i = 0; i < SIZE; ++i)
		std::cout << isbn13Number[i];
	std::cout << "\n";
	
	return (0);
}

/**
 * Determines the checksum of an ISBN-13 number.
 *
 * @param s The array containing the first 12 digits of an ISBN-13 number.
 * @return 0 if the checksum is 10 otherwise the checksum is returned.
 */
int getCheckSum(const char s[])
{
    int sum = 0;

    for (int i = 0; i < 12; ++i)
    {
        int digit = s[i] - '0'; // Convert character to integer.
        if (i % 2 == 0)
            sum += digit;
        else
            sum += 3 * digit;
    }

    int checkSum = 10 - (sum % 10);

    return (checkSum == 10) ? 0 : checkSum; // If checksum is 10, it should be 0.
}
