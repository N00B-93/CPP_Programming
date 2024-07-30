#include "CustomerOrder.hpp"
#include <limits>

/**
 * Instantiates a new CustomerOrder Object with default values.
 */
CustomerOrder::CustomerOrder(): orderNumber(0), quantityOrdered(0), unitPrice(0.0){};

/**
 * Instantiates a new CustomerOrder Object.
 * 
 * @param orderNumber The order number of the CustomerOrder.
 * @param quantityOrdered The number of items ordered.
 * @param unitPrice The price of each item ordered.
 */
CustomerOrder::CustomerOrder(int orderNumber, int quantityOrdered, double unitPrice)
{
    this->orderNumber = orderNumber;
    this->quantityOrdered = quantityOrdered;
    this->unitPrice = unitPrice;
    this->totalPrice = this->getQuantityOrdered() * this->getUnitPrice();
}

/**
 * This returns the order number of a CustomerOrder.
 * 
 * @return The order number of a CustomerOrder.
 */
int CustomerOrder::getOrderNumber()const
{
    return this->orderNumber;
}

/**
 * This returns the number of items ordered.
 *  
 * @return The number of items ordered.
 */
int CustomerOrder::getQuantityOrdered() const
{
    return this->quantityOrdered;
}

/**
 * This returns the unit price of a CustomerOrder.
 * 
 * @return The unit price of a CustomerOrder.
 */
double CustomerOrder::getUnitPrice() const
{
    return this->unitPrice;
}

/**
 * This returns the total price of a CustomerOrder.
 * 
 * @return The total price of a CustomerOrder.
 */
double CustomerOrder::getTotalPrice() const
{
    return this->totalPrice;
}

/**
 * Overloads the stream insertion operator for the CustomerOrder class.
 * 
 * @param outputStream An ostream Object reference.
 * @param customerOrder The CustomerOrder Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const CustomerOrder& customerOrder)
{
    outputStream << "\nOrder Number: " << customerOrder.getOrderNumber();
    outputStream << "\nQuantity Ordered: " << customerOrder.getQuantityOrdered();
    outputStream << "\nUnit Price: $" << customerOrder.getUnitPrice();
    outputStream << "\nTotal Price: $" << customerOrder.getTotalPrice() << "\n";

    return outputStream;
}

/**
 * Overloads the stream extraction operator for the CustomerOrder class.
 * 
 * @param inputStream An istream Object reference.
 * @param customerOrder The CustomerOrder Object whose data fields are to be read from the user.
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, CustomerOrder& customerOrder)
{
    int orderNumber, quantityOrdered;
    double unitPrice;

    std::cout << "\nEnter the order number: ";
    inputStream >> orderNumber;

    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw NonNumericException("Error: Use positive integer values > 0 and <= 9999 only, Try again.");
    }
    else if (orderNumber <= 0 || orderNumber > 9999)
        throw std::out_of_range("Error: Order number must be > 0 and <= 9999, Try again.");

    std::cout << "\nEnter the quantity ordered: ";
    inputStream >> quantityOrdered;

    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw NonNumericException("Error: Use positive integer values > 0 and <= 50 only, Try again.");
    }
    else if (quantityOrdered <= 0 || quantityOrdered > 50)
        throw (quantityOrdered);

    std::cout << "\nEnter the unit price: $";
    inputStream >> unitPrice;

    if (inputStream.fail())
    {
        inputStream.clear();
        inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        throw NonNumericException("Error: Use positive integer values > $0.0 and <= $39.95 only, Try again.");
    }
    else if (unitPrice <= 0 || unitPrice > 39.95)
        throw (unitPrice);

    customerOrder = CustomerOrder(orderNumber, quantityOrdered, unitPrice);

    if (customerOrder.getTotalPrice() > 1000)
        throw (customerOrder);

    return inputStream;
}
