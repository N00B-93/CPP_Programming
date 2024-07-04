#include "CaseManipulator.hpp"
#include <cctype>
#include <cstring>

void capitalize(std::string* str)
{
	for (int i = 0; i< str.length(); ++i)
		str[i] = toupper(str[i]);

}

void toLowercase(std::string* str)
{
	for (int i = 0; i < str.length(); ++i)
		str[i] = tolower(str[i]);
}

void reverseString(std::string* str)
{
	for (int i = 0, j = str.length() - 1; i < str.length(); ++i, --j)
	{
		char tempCharacter = str[i];
		str[i] = str[j];
		str[j] = tempCharacter;
	}
}

