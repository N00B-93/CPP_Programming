#include "Phonecall.hpp"
#include <iostream>
#include <iomanip>


/**
 * Instantiates a PhoneCall Object with default values.
 */
PhoneCall::PhoneCall(): phoneNumber(""), callDuration(0.0), ratePerMinute(0.0){};


/**
 * Instantiates a new PhoneCall Object.
 * 
 * @param phoneNumber A phone number to be called.
 * @param callDuration The number of minutes a PhoneCall lasted.
 * @param ratePerMinute The amount charged per minute for a PhoneCall.
 */
PhoneCall::PhoneCall(std::string& phoneNumber, double callDuration, double ratePerMinute): phoneNumber(phoneNumber), callDuration(callDuration), ratePerMinute(ratePerMinute){};


/**
 * Overloaded stream insertion operator
 * 
 * @param outputStream The ostream Object.
 * @param phoneCall The PhoneCall Object whose details is to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, PhoneCall& phoneCall)
{
    std::cout << "\nNumber Called: " << phoneCall.getPhoneNumber()
              << std::fixed << std::setprecision(2) <<  "\nNumber of Minutes: " << phoneCall.getCallDuration()
              << std::fixed << std::setprecision(2) << "\nRate Per Minute: $" << phoneCall.getRatePerMinute() << "\n";

    return outputStream;
}

/**
 * Overloaded stream extraction operator.
 * 
 * @param inputStream The instream Object.
 * @param phoneCall The PhoneCall Object whose details is to be displayed.
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, PhoneCall& phoneCall)
{
    std::cout << "\nEnter phone number: ";
    inputStream >> phoneCall.phoneNumber;

    std::cout << "\nEnter call length (minutes): ";
    inputStream >> phoneCall.callDuration;
    
    if (inputStream.fail() || phoneCall.callDuration <= 0)
        return inputStream;

    std::cout << "\nEnter rate per minute: $";
    inputStream >> phoneCall.ratePerMinute;

    if (inputStream.fail() || phoneCall.ratePerMinute <= 0)
        return inputStream;

    return inputStream;
}

/**
 * Overloads the == operator.
 * 
 * @param phoneCall A PhoneCall Object to be compared for equality with the current instance.
 * @return true if the current instance phone number is the same as the specified PhoneCall's phone number, else false.
 */
bool PhoneCall::operator==(const PhoneCall& phoneCall) const
{
    if (this->getPhoneNumber() == phoneCall.getPhoneNumber())
        return true;
    return false;
}

/**
 * This returns the phone number to be called.
 * 
 * @return The phone number to be called.
 */
std::string PhoneCall::getPhoneNumber() const
{
    return this->phoneNumber;
}

/**
 * This returns the duration of a PhoneCall.
 * 
 * @return The duration a PhoneCall lasted.
 */
double PhoneCall::getCallDuration() const
{
    return this->callDuration;
}

/**
 * This returns the amount charged per minute for a PhoneCall.
 * 
 * @return The amount charged per minute for a PhoneCall.
 */
double PhoneCall::getRatePerMinute() const
{
    return this->ratePerMinute;
}
