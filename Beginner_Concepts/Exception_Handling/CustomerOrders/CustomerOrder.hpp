#pragma once
#include "NonNumericException.hpp"
#include <iostream>

class CustomerOrder
{
    // Utility functions of the CustomerOrder class.
    public:
        CustomerOrder();
        CustomerOrder(int, int, double);
        friend std::ostream& operator<<(std::ostream&, const CustomerOrder&);
        friend std::istream& operator>>(std::istream&, CustomerOrder&);
        int getOrderNumber() const;
        int getQuantityOrdered() const;
        double getUnitPrice() const;
        double getTotalPrice() const;

    // Attributes of a CustomerOrder.
    private:
        int orderNumber;
        int quantityOrdered;
        double unitPrice;
        double totalPrice;
};
