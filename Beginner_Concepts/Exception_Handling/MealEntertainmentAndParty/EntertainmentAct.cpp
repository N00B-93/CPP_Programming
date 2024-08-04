#include "OutOfRangeException.hpp"
#include "EntertainmentAct.hpp"
#include <iostream>

/**
 * Instantiates an EntertainmentAct Object with default values.
 */
EntertainmentAct::EntertainmentAct(): actPhoneNumber(""), entertainmentActPrice(0.0){};

/**
 * @param actPhoneNumber The phone number of the artist entertaining the guests.
 * @param entertainmentActPrice The price of an EntertainmentAct.
 */
EntertainmentAct::EntertainmentAct(std::string& actPhoneNumber, double entertainmentActPrice)
{
    this->actPhoneNumber = actPhoneNumber;
    this->entertainmentActPrice = entertainmentActPrice;
}

/**
 * Overloads the stream insertion operator for the EntertainmentAct class.
 * 
 * @param outputStream A reference to an ostream Object.
 * @param EntertainmentAct The EntertainmentAct Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const EntertainmentAct& entertainmentAct)
{
    outputStream << "\nArtist Phone Number: " << entertainmentAct.getActPhoneNumber();
    outputStream << "\nEntertainment Price: $" << entertainmentAct.getEntertainmentActPrice();

    return outputStream;
}

/**
 * Overloads the stream extraction operator for the EntertainmentAct class.
 * 
 * @param inputStream A reference to an istream Object.
 * @param entertainmentAct The EntertainmentAct Object whose details are to be read from the user.
 * 
 * @throw invalid_argument exception if the user enters non numeric inputs.
 * @throw OutOfRangeException if the EntertainmentAct's price is less than $50.00 or greater than $3000.00.
 * 
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, EntertainmentAct& entertainmentAct)
{
    std::string phoneNumber;
    double price;

    const double MIN_PRICE = 50.00, MAX_PRICE = 3000.00;

    std::cout << "\nEnter the phone number of the entertainer: ";
    inputStream >> phoneNumber;

    std::cout << "\nEnter the price of the entertainment act: $";
    inputStream >> price;

    if (inputStream.fail())
        throw std::invalid_argument("\nError: Price of entertainment must be in the range 50.0 <= price <= 3000.00, Try again");
    else if (price < MIN_PRICE || price > MAX_PRICE)
        throw OutOfRangeException(MIN_PRICE, MAX_PRICE, price);

    entertainmentAct = EntertainmentAct(phoneNumber, price);

    return inputStream;
}

/**
 * This returns the phone number of the artist entertaining the guests.
 * 
 * @return The phone number of the artist entertaining the guests..
 */
std::string EntertainmentAct::getActPhoneNumber() const
{
    return this->actPhoneNumber;
}

/**
 * This returns the price of an EntertainmentAct.
 * 
 * @return The price of an EntertainmentAct.
 */
double EntertainmentAct::getEntertainmentActPrice() const
{
    return this->entertainmentActPrice;
}
