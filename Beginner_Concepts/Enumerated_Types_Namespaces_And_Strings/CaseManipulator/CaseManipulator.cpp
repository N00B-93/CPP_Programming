#include "CaseManipulator.hpp"
#include <cstring>

void reverseCase(char* str)
{
    while (*str != '\0')
	{
        if (isupper(*str))
            *str = tolower(*str);
        else if (islower(*str))
            *str = toupper(*str);
        str++;
    }
}

void toLowercase(char* str)
{
    while (*str != '\0')
	{
        *str = tolower(*str);
        str++;
    }
}

void toUppercase(char* str)
{
    while (*str != '\0')
	{
        *str = toupper(*str);
        str++;
    }
}
