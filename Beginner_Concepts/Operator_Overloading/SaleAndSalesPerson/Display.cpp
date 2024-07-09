#include "Sale.hpp"
#include "SalesPerson.hpp"
#include <iostream>

/**
 * Displays a salesPerson Object.
 * 
 * @param salesPerson The SalesPerson to be displayed.
 */
void display(const Sale &sale, const SalesPerson &salesPerson)
{
    std::cout << "\n\t\tSale Information" << std::endl;
    std::cout << "Date of sale: Day " << sale.getDayOfMonth() << std::endl;
    std::cout << "Amount: $" << sale.getSaleAmount() << std::endl;
    std::cout << "Sales Person ID: " << sale.getSalesPersonID() << std::endl;
    std::cout << "Sales Person Name: " << salesPerson.getLastName() << std::endl;
    std::cout << std::endl;
}
