#include "MyInteger.hpp"

/**
 * Instantiates a new MyInteger Object.
 * 
 * @param integervalue The value of the MyInteger Object.
*/
MyInteger::MyInteger(int integerValue)
{
    value = integerValue;
}

/**
 * This returns the value of a MyInteger Object.
 * 
 * @return The value of a MyInteger Object.
*/
int MyInteger::getValue() const
{
    return value;
}

/**
 * Checks if the value of a MyInteger Object is even.
 * 
 * @return true if the value is even, else false.
*/
bool MyInteger::isEven() const
{
    return value % 2 == 0;
}

/**
 * Checks if the value of a MyInteger Object is odd.
 * 
 * @return true if the value is odd, else false.
*/
bool MyInteger::isOdd() const
{
    return value % 2 != 0;
}

/**
 * Checks if the value of a MyInteger Object is prime
 * 
 * @return true if the value is prime, else false.
*/
bool MyInteger::isPrime() const
{
    if (value <= 1)
        return false;

    for (int i = 2; i <= value / 2; ++i)
    {
        if (value % i == 0)
            return false;
    }
    return true;
}

/**
 * Checks if an integer is even.
 * 
 * @param number The number to be checked.
 * @return true if the integer is even, else false.
*/
bool MyInteger::isEven(int number)
{
    return number % 2 == 0;
}

/**
 * Checks if an integer is odd.
 * 
 * @param number The number to be checked.
 * @return true if the integer is odd, else false.
*/
bool MyInteger::isOdd(int number)
{
    return number % 2 != 0;
}

/**
 * Checks if the value of an integer is prime
 * 
 * @param number The number to be checked.
 * @return true if the integer is prime, else false.
*/
bool MyInteger::isPrime(int number)
{
    if (number <= 1)
        return false;

    for (int i = 2; i <= number / 2; ++i)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}

/**
 * Checks if the value of a MyInteger Object is even.
 * 
 * @param number The reference to the MyInteger Object to be checked.
 * @return true if the value is even, else false.
*/
bool MyInteger::isEven(const MyInteger& number)
{
    return number.value % 2 == 0;
}

/**
 * Checks if the value of a MyInteger Object is odd.
 * 
 * @param number The reference to the MyInteger Object to be checked.
 * @return true if the value is odd, else false.
*/
bool MyInteger::isOdd(const MyInteger& number)
{
    return number.value % 2 != 0;
}

/**
 * Checks if the value of a MyInteger Object is prime.
 * 
 * @param number The reference to the MyInteger Object to be checked.
 * @return true if the value is prime, else false.
*/
bool MyInteger::isPrime(const MyInteger& number)
{
    return number.isPrime(number.value);
}

/**
 * Checks if the value in the Object is equal to the specified value.
 * 
 * @param number The value to be comparaed with the value in the MyInteger Object.
 * @return true if both values are equal, else false.
*/
bool MyInteger::equals(int number) const
{
    return value == number;
}

/**
 * Checks if the value in the Object is equal to the value pointed to by a MyInteger reference.
 * 
 * @param number The value to be comparaed with the value in the MyInteger Object.
 * @return true if both values are equal, else false.
*/
bool MyInteger::equals(const MyInteger& number) const
{
    return value == number.value;
}

int MyInteger::parseInt(const std::string& str)
{
    return std::stoi(str);
}
