#pragma once
#include <string>

// Forward declaration of the Sale class.
class Sale;

class SalesPerson
{
    friend void display(const Sale&, const SalesPerson&);  // Friend function that displays a SalesPerson and a Sale Object.

    // Utility functions of the SalesPerson class.
    public:
        SalesPerson();
        SalesPerson(int, std::string);
        int getIDNumber() const;
        std::string getLastName() const;
        void setIDNumber(int IDNumber);
        void setLastName(std::string);
    
    // Attributes of SalesPerson.
    private:
        int IDNumber;
        std::string lastName;
};
