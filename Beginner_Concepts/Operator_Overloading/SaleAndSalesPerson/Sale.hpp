#pragma once

// Forward declaration of the salesPerson class.
class SalesPerson;

class Sale
{
    friend void display(const Sale&, const SalesPerson&);  // Friend function that displays a SalesPerson and a Sale Object.

    // Utility functions of the Sale class
    public:
        Sale();
        Sale(int, double, int);
        int getDayOfMonth() const;
        int getSalesPersonID() const;
        double getSaleAmount() const;
        void setDayOfMonth(int dayOfMonth);
        void setSaleAmount(double saleAmount);
        void setSalesPersonID(int);

    // Attributes of a Sale.
    private:
        int dayOfTheMonth;
        int salesPersonID;
        double amountOfSale;
};
