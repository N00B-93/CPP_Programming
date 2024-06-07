#include <iostream>
#include <string>

/**
	This is a program that prompts the user to enter a string and then encrypts the string by using the
	ROT13 letter substitution cypher and a function with the header;
			void encryptROT13(string str)
*/

void encryptROT13(std::string& str);  // Prototype of the encryptROT13 function.

int main(int argc, char* const argv[])
{
	// Variable to hold the string entered by the user.
	std::string str;
	
	// Prompts the user to enter a string.
	std::cout << "\nEnter a string to be encrypted: ";
	getline(std::cin, str);

	// Displays an error message and terminates the program if the user enters an empty string.
	if (str == "")
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Encrypts the string.
	encryptROT13(str);
	
	// Disoplays the encrypted string.
	std::cout << "\nThe encrypted string is: " << str << "\n";
	
	return (0);
}

/**
 * Encrypts a string using the ROT13 letter substitution cypher.
 *
 * @param str The string to be encrypted.
 */
void encryptROT13(std::string& str)
{
	const int SHIFT_VALUE = 13;

	for (int i = 0; i < str.length(); ++i)
	{

		char currentChar = str[i];

   		// Check if character is alphabetic
    		if (isalpha(currentChar))
		{
			bool isUpper = isupper(currentChar);  // Check if uppercase

      			// Convert to lowercase for processing
      			currentChar = tolower(currentChar);

			int newPosition = (currentChar - 'a' + SHIFT_VALUE) % 26;
			char newChar = newPosition + 'a';

			// Convert back to uppercase if original was uppercase
			str[i] = isUpper ? toupper(newChar) : newChar;
    		}
  	}
}

