#include "City.hpp"
#include <iostream>
#include "Customer.hpp"

int main(int argc, char const *argv[])
{
    // Creates a City Object.
    std::string cityName("Ifako");
    std::string state("Lagos State");
    City city(cityName, state, 11245);

    // Creates a Customer Object.
    std::string customerName("Demilade Adebisi");
    Customer customer(customerName, 102, city);

    // Displays the Customer's details.
    std::cout << "\n\t\tCustomer details\n";
    displayCustomerDetails(customer);

    return (0);
}
