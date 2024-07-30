#include "NonNumericException.hpp"
#include "CustomerOrder.hpp"
#include <array>

int main(int argc, char* const argv[])
{   
    // Creates an array of 5 CustomerOrder Objects.
    std::array<CustomerOrder, 5> customerOrders;

    for (int i = 0; i < customerOrders.size(); ++i)
    {
        try
        {
            // Reads in values for the data fields of each CustomerOrder object in the array.
            std::cout << "\nCustomer Order " << i + 1;
            std::cin >> customerOrders[i];
        }
        catch (const NonNumericException& ex)
        {
            std::cerr << "\n" << ex.what() << '\n';
            --i;
        }
        catch (const int& quantityOrdered)
        {
            std::cerr << "\nError: " << quantityOrdered << " is an invalid quantity ordered, use a number > 0 and <= 50.\n";
            --i;
        }
        catch (const double& unitPrice)
        {
            std::cerr << "\nError: " << unitPrice << " is invalid, use a unit price > $0.0 and <= $39.95, Try again.\n";
            --i;
        }
        catch (const CustomerOrder& customerOrder)
        {
            std::cerr << "\n" << customerOrder.getTotalPrice() << " is greater than the $1000.00 price limit.\n";
            std::cerr << "Please check the customer's credit limit." << std::endl;
        }
        catch (std::out_of_range& ex)
        {
            std::cerr << "\n" << ex.what() << '\n';
            --i;
        }
    }

    // Displays all the CustomerOrders.
    std::cout << "\n\t\tOrder Details";
    for (int i = 0; i < customerOrders.size(); ++i)
        std::cout << customerOrders[i];

    return (0);
}
