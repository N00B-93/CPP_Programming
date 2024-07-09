#include "Sale.hpp"
#include <iostream>

/**
 * No-arg constructor that set all field of a Sale Object to default values.
 */
Sale::Sale(): dayOfTheMonth(0), amountOfSale(0.0), salesPersonID(0){};

/**
 * Instantiates a new Sale Object.
 * 
 * @param monthDay The day of the month the Sale was made.
 * @param amount The value of the Sale.
 * @param IDNumber The 3-digit ID number of the sales person that made the Sale.
 */
Sale::Sale(int monthDay, double amount, int IDNumber)
{
    if (monthDay < 1 || monthDay > 31)
        this->dayOfTheMonth = 0;
    this->dayOfTheMonth = monthDay;

    if (amount < 0)
        this->amountOfSale = 0.0;
    this->amountOfSale = amount;

    if (IDNumber < 100 || IDNumber > 999)
        this->salesPersonID = 0;
    this->salesPersonID = IDNumber;
}

/**
 * This returns the day of the month the Sale was made.
 * 
 * @return The day of the month a Sale was made.
 */
int Sale::getDayOfMonth() const
{
    return this->dayOfTheMonth;
}

/**
 * The return the amount made from a Sale.
 * 
 * @return The amount made from a Sale.
 */
double Sale::getSaleAmount() const
{
    return this->amountOfSale;
}

/**
 * This returns the 3-digit number of the sales person that made a Sale.
 * 
 * @param The ID number of the sales person that made a sale.
 */
int Sale::getSalesPersonID() const
{
    return this->salesPersonID;
}

/**
 * This sets the day of the month the Sale was made to the specified value.
 * 
 * @param dayOfMonth The day of the month a sale was made.
 */
void Sale::setDayOfMonth(int dayOfMonth)
{
    this->dayOfTheMonth = dayOfMonth;
}

/**
 * This sets the amount made from a Sale to the specified value.
 * 
 * @param amountOfSale The amount of made from a Sale.
 */
void Sale::setSaleAmount(double amountOfSale)
{
    this->amountOfSale = amountOfSale;
}

/**
 * This sets the ID number of a sales person that made a Sale to the specified value.
 * 
 * @param salesPersonID The ID number of the sales person that made a Sale.
 */
void Sale::setSalesPersonID(int salesPersonID)
{
    this->salesPersonID = salesPersonID;
}
