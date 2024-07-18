#include "Payment.hpp"
#include <iostream>

/**
 * No-arg constructor that initializes a Payment Object with default values.
 */
Payment::Payment(): amount(0.0f){};

/**
 * Instantiates a new Payment Object.
 * 
 * @param amountOfPayment The amount of the Payment.
 */
Payment::Payment(float amountOfPayment): amount(amountOfPayment){};

/**
 * This returns the amount of a Payment.
 * 
 * @return The amount of a Payment.
 */
float Payment::getAmount() const
{
    return this->amount;
}

/**
 * Sets a Payment amount to the specified value.
 * 
 * @param amount The new Payment amount.
 */
void Payment::setAmount(float amount)
{
    this->amount = amount;
}

/**
 * Displays information about a Payment.
 */
void Payment::paymentDetails() const
{
    std::cout << "\nAmount: $" << this->amount;
}
