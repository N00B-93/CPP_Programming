#include <iostream>
#include <string>

/**
	This is a program that prompts the user to enter a string and then displays the number of 
	occurrence of each letter in the string using a function with header;
			void countOccurrenceOfLetters(const char sentence[], int occurrence[], int size)
*/

/**
 * Counts the occurrence of each letter in an array of characters.
 *
 * @param sentence An array containing letters.
 * @param occurrence An array to hold the occurrence of each letter.
 * @param size The number of letters in the array of characters.
 */
void countOccurrenceOfLetters(const char sentence[], int occurrence[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (!isalpha(sentence[i]))
			continue;
		else if (isupper(sentence[i]))
		{
			char lowerCase = sentence[i] + 32;
			++occurrence[lowerCase - 'a'];
			continue;
		}
		++occurrence[sentence[i] - 'a'];
	}
}

int main(int argc, char* const argv[])
{
	// String to hold user input.
	std::string sentence;

	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, sentence);

	// Displays an error message and terminates the program if the user enter's an empty string.
	if (sentence.empty())
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Creates an array to hold the occurrence of each letter.
	int occurrence[26] = {0};

	// Determines the occurrence of each letter.
	countOccurrenceOfLetters(sentence.c_str(), occurrence, sentence.length());

	// Displays the number of occurrence of each character.
	std::cout << "\nCharacters and occurrence:\n";
	for (int j = 0; j < 26; ++j)
	{
		if (occurrence[j] != 0)
			std::cout << static_cast<char>(j + 'a') << ": " << occurrence[j] << " times" << "\n";
	}

	return (0);
}

