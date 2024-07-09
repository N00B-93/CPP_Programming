#include "SalesPerson.hpp"
#include "Sale.hpp"

int main()
{
    // Create instances of Salesperson and Sale
    SalesPerson salesperson1(101, "Smith");
    Sale sale1(15, 1500.0, 101);

    // Display the information using the friend function
    display(sale1, salesperson1);

    return (0);
}
