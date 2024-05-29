#include <iostream>
#include "EvenNumber.hpp"

/**
 * Instantiates a new EvenNumber with a specified value.
 * 
 * @param evenNumber The value to the assigned to the EvenNumber Object.
*/
EvenNumber::EvenNumber(int evenNumber)
{
    if (evenNumber < 2)
    {
        std::cout << "\nError: Use a value >= 2, Try again.\n";
        return;
    }
    value = evenNumber;
}

/**
 * This returns the value of the even Number.
 * 
 * @return The value of the EvenNumber Object.
*/
int EvenNumber::getValue()
{
    return value;
}

/**
 * This returns the next even number after the current value referenced by the EvenNumber Object.
 * 
 * @return The next even number immediately after the value referenced by the EvenNumber Object.
*/
int EvenNumber::getNext()
{
    return value + 2;
}

/**
 * This returns the previous even number before the current value referenced by the EvenNumber Object.
 * 
 * @return The previous even number immediately before the value referenced by the EvenNumber Object.
*/
int EvenNumber::getPrevious()
{
    return value - 2;
}
