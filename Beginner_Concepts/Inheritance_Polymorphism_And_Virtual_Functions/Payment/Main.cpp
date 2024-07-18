#include "CashPayment.hpp"
#include "CreditCardPayment.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Creates a Payment, CashPayment and CreditCardPayment Objects.
    Payment payment(2562.33);
    CashPayment cashPayment(513.45);
    CreditCardPayment creditCardPayment(78966.23, "Alabeni Omosheye", "30-06-2025", 79139880);

    // Calls the paymentDetails functions of each Object.
    payment.paymentDetails();
    std::cout << "\n";
    cashPayment.paymentDetails();
    creditCardPayment.paymentDetails();

    return (0);
}
