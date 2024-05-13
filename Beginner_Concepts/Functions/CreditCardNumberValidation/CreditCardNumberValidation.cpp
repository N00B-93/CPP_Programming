#include "CreditCardNumberValidation.hpp"

/**
 * This determines the sum of digits in a number greater than or equal to 10.
 * 
 * @param number The 2-digit number whose digit is to be summed.
 * @return The sum of the two digits in the number if it is greater than 10, else the number itself is returned.
*/
int getDigit(int number)
{
    if (number >= 10)
        return (number / 10) + (number % 10);
    return number;
}

/**
 * Checks if a string starts with a particular sub string.
 * 
 * @param cardNumber The string to be checked.
 * @param subStr The sub string to be searched for at the beginning of the string.
 * @return true if the substring is found at the beginning of the string, else false.
*/
bool startsWith(const std::string& cardNumber, const std::string& subStr)
{
    if (cardNumber.find(subStr) == 0)
        return true;
    return false;
}

/**
 * Adds all odd placed digits from right to left in a numeric string.
 * 
 * @param cardNumber The string whose odd placed digits is to be added.
 * @return The sum of all odd placed digits in a string.
*/
int sumOfOddPlace(const std::string& cardNumber) 
{
    int sumOfOdd(0);
    std::string cardNumberCopy = cardNumber;

    for (int i = cardNumber.length() - 1; i >= 0; i = i - 2)
    {
        sumOfOdd += cardNumberCopy[i] - '0';
    }
    return sumOfOdd;
}

/**
 *  Double every second digit from right to left in a integer string. If doubling of a digit results in a two-digit number, it adds the two digits to get a single digit number.
 * 
 * @param The string whose sum of the double of it's even placed digits is to be determined.
 * @return Twice the sum of every second digit from right to left.
*/
int sumOfDoubleEvenPlace(const std::string& cardNumber) 
{
    int sumOfEven(0);
    std::string cardNumberCopy = cardNumber;

    for (int i = cardNumberCopy.length() - 2; i >= 0; i = i - 2)
    {
        int doubleDigit = 2 * (cardNumberCopy[i] - '0');
        
        sumOfEven += getDigit(doubleDigit);
    }
    return sumOfEven;
}

/**
 * Checks if a string is a numeric string, i.e., a string consists of only digits.
 * 
 * @param cardNumber The string to be checked.
 * @return true if the string is numeric, else false.
*/
bool isNumeric(const std::string& cardNumber)
{
    for (int i = 0; i < cardNumber.length(); ++i)
    {
        if (!isdigit(cardNumber[i]))
            return false;
    }
    return true;
}

/**
 * Checks if a number is a valid credit card number.
 * 
 * @param cardNumber The card number to be checked.
 * @return true if the card number is valid, else false.
*/
bool isValid(const std::string& cardNumber)
{
    int sum = sumOfOddPlace(cardNumber) + sumOfDoubleEvenPlace(cardNumber);

    if (cardNumber.length() < 13 || cardNumber.length() > 16)
        return false;
    else if (!startsWith(cardNumber, "4") && !startsWith(cardNumber, "5") && !startsWith(cardNumber, "37") && !startsWith(cardNumber, "6"))
        return false;
    else if (sum % 10 != 0)
        return false;
    return true;
}
