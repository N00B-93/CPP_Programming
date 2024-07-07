#pragma once
#include <ostream>
#include <istream>
#include <string>

class PhoneCall
{
    // Utility functions of the PhoneCall class.
    public:
        PhoneCall();
        PhoneCall(std::string&, double, double);
        friend std::ostream& operator<<(std::ostream&, PhoneCall&);
        friend std::istream& operator>>(std::istream&, PhoneCall&);
        bool operator==(const PhoneCall&) const;
        std::string getPhoneNumber() const;
        double getCallDuration() const;
        double getRatePerMinute() const;
    
    // Attributes of a PhoneCall.
    private:
        std::string phoneNumber;  // A phone number to be called.
        double callDuration;  // The number of minutes a call lasts.
        double ratePerMinute;  // The amount charged per minute for a PhoneCall.
};
