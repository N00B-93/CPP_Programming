#include "Party.hpp"
#include <iostream>

/**
 * Instantiates a Party Object with default values.
 */
Party::Party()
{
    this->mealServed = Meal();
    this->partyEntertainment = EntertainmentAct();
    this->numberOfGuests = 0;
}

/**
 * Overloads the stream extraction operator for the Party class.
 * 
 * @param inputStream A reference to an istream Object.
 * @param party The Party Object whose details is to be read from the user.
 * 
 * @throw invalid_argument exception if the user input is not numeric.
 * @throw OutOfRangeException if the number of guests is less than 2 or greater than 1000.
 * 
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, Party& party)
{
    int MIN_ATTENDANCE = 2, MAX_ATTENDANCE = 1000;

    inputStream >> party.mealServed;

    inputStream >> party.partyEntertainment;

    std::cout << "\nEnter number of guests: ";
    inputStream >> party.numberOfGuests;

    if (inputStream.fail())
        throw std::invalid_argument("Error: Number of guests must be a positive integer in the range 2 <= numberOfGuests <= 1000, Try again.");
    else if (party.getNumberOfGuests() < MIN_ATTENDANCE || party.getNumberOfGuests() > MAX_ATTENDANCE)
        throw OutOfRangeException(MIN_ATTENDANCE, MAX_ATTENDANCE, party.getNumberOfGuests());

    return inputStream;
}

/**
 * Overloads the stream insertion operator for the Party class.
 * 
 * @param outputStream A reference to an ostream Object.
 * @param Party The Party Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const Party& party)
{
    outputStream << party.getMealServed();
    outputStream << party.getEntertainmentAct();
    outputStream << "\nNumber Of Guests: " << party.getNumberOfGuests();
    outputStream << "\nTotal Cost of Party: $" << party.getTotalCost() << "\n";

    return outputStream;
}

/**
 * This returns the meal served at a Party. 
 * 
 * @return The meal served at a Party.
*/
Meal Party::getMealServed() const
{
    return this->mealServed;
}

EntertainmentAct Party::getEntertainmentAct() const
{
    return this->partyEntertainment;
}

/**
 * This returns the number of guests attending a Party.
 * 
 * @return The number of guests attending a Party.
 */
int Party::getNumberOfGuests() const
{
    return this->numberOfGuests;
}

/**
 * This returns the total cost of organizing a Party.
 * 
 * @return The total cost of organizing a Party.
 */
double Party::getTotalCost() const
{
    return this->partyEntertainment.getEntertainmentActPrice() + (this->getMealServed().getPrice() * this->getNumberOfGuests());
}
