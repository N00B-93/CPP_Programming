#include "Customer.hpp"
#include <iostream>

/**
 * Instantiates a new Customer Object.
 * 
 * @param customerName The name of the Customer.
 * @param customerIDNumber The ID number of the Customer.
 * @param city The Customer's City.
 */
Customer::Customer(std::string& customerName, int customerIDNumber, City& city)
{
    this->customerName = customerName;
    this->customerID = customerIDNumber;
    this->customerCity = city;
}

/**
 * This returns the name of a Customer.
 * 
 * @return A Customer's name.
 */
std::string Customer::getCustomerName() const
{
    return this->customerName;
}

/**
 * This returns the ID number of a Customer.
 * 
 * @return The ID number of a Customer.
 */
int Customer::getCustomerIDNumber() const
{
    return this->customerID;
}

/**
 * This returns a Customer's City.
 * 
 * @return A Customer's City.
 */
City Customer::getCity() const
{
    return this->customerCity;
}

/**
 * Displays a Customer's information.
 */
void displayCustomerDetails(Customer& customer)
{
    std::cout << "\nCustomer Name: " << customer.getCustomerName()
              << "\nCustomer ID: " << customer.getCustomerIDNumber()
              << "\nCity: " << customer.getCity().getCityName()
              << "\nState: " << customer.getCity().getStateName()
              << "\nZip Code: " << customer.getCity().getZipCode() << "\n";
}