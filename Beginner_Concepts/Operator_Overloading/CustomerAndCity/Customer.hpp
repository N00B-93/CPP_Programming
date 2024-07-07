#pragma once
#include "City.hpp"

class Customer
{
    public:
        Customer();  // No-arg constructor.
        Customer(std::string&, int, City&);  // Parameterized constructor.
        std::string getCustomerName() const;  // Prototype of the getCustomerName method.
        int getCustomerIDNumber() const;  // Prototype of the getCustomerIDNumber function.
        City getCity() const; // Prototype of the getCity function.
        friend void displayCustomerDetails(Customer&);  // Prototype of the displayCustomerDetails function.

    // Attributes of a Customer.
    private:
        std::string customerName;
        int customerID;
        City customerCity;
};
