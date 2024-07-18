#include "CashPayment.hpp"
#include <iostream>

/**
 * Instantiates a new CashPayment Object.
 * 
 * @param amount The amount of the cashPayment.
 */
CashPayment::CashPayment(float amount): Payment(amount){};

/**
 * Displays details about a CashPayment.
 */
void CashPayment::paymentDetails() const
{
    this->Payment::paymentDetails();
    std::cout << "\nPayment Type: Cash\n";
}
