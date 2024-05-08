#include <iostream>
#include <string>

/**
    This is a program that prompts the user to enter a string and substring and the displays
    the index of the substring in the main string with the aid of a function with header;
				int indexOf(const string& s1, const string& s2)
*/

int indexOf(const std::string& s1, const std::string& s2);  // Prototype for the indexOf function.

int main()
{
	// Variables to hold the string and the substring.
	std::string str, subStr;
	
	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, str);
	
	// Prompts the user to enter the substring.
	std::cout << "\nEnter the substring to be searched for: ";
	getline(std::cin, subStr);
	
	// Displays an error message and terminates the program if the user enters empty strings.
	if (str == "" or subStr == "")
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
    // Displays the index of the string in the substring.
	if (indexOf(str, subStr) != -1)
		std::cout << "\nThe index of '" << subStr << "' in '" << str << "' is: " << indexOf(str, subStr) << "\n";
	else
		std::cout << "\n'" << subStr << "' is not a substring of '" << str << "'\n";

    	return 0;
}

/**
 * Checks if a string is a substring of another string.
 *
 * @param s1 The string that may contain another string.
 * @param s2 The substring to be searched for in the main string.
 * @return The index of the first occurrence of the substring, -1 is returned if the second string is not a substring of the first.
 */
int indexOf(const std::string& s1, const std::string& s2)
{
	for (int k = 0; k < s1.size(); k++)
	{
		if (s1[k] == s2[0])
		{
			bool flag = true;
			
			for (int m = k + 1, j = 1; m <= k + s2.size() - 1; m++, j++)
			{
				if (s1[m] != s2[j])
				{
					flag = false;
					break;
				}
			}
			if (flag)
			    return k;
		}
	}
	return -1;
}

