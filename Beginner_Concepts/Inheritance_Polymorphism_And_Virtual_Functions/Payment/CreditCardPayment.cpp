#include "CreditCardPayment.hpp"
#include <iostream>

/**
  * Instantiates a new CreditCardPayment Object.
  * 
  * @param paymentAmount The amount of the CreditCardPayment.
  * @param cardName The name on the credit card used to make a CreditCardPayment.
  * @param expirationDate The expiration date of a credit card.
  * @param creditCardNumber The number on a credit card used to make a CreditCardPayment.
  */
CreditCardPayment::CreditCardPayment(float paymentAmount, std::string cardName, std::string expirationDate, long creditCardNumber): Payment(paymentAmount)
{
    this->cardHolderName = cardName;
    this->cardExpirationDate = expirationDate;
    this->cardNumber = creditCardNumber;
}

std::string CreditCardPayment::getCardName() const
{
    return this->cardHolderName;
}

void CreditCardPayment::setCardName(std::string cardHolderName)
{
    this->cardHolderName = cardHolderName;
}

std::string CreditCardPayment::getExpirationDate() const
{
    return this->cardExpirationDate;
}

void CreditCardPayment::setExpirationDate(std::string cardExpirationDate)
{
    this->cardExpirationDate = cardExpirationDate;
}

long CreditCardPayment::getCardNumber() const
{
    return this->cardNumber;
}

/**
  * Sets a CreditCardPayment's card number to the specified value.
  *
  * @param cardNumber The new credit card number.
  */
void CreditCardPayment::setCardNumber(long cardNumber)
{
    this->cardNumber = cardNumber;
}

/**
  * Displays details of a CreditCardPayment Object.
  */
void CreditCardPayment::paymentDetails() const
{
    this->Payment::paymentDetails();
    std::cout << "\nCard Name: " << this->getCardName();
    std::cout << "\nCard Number: " << this->getCardNumber();
    std::cout << "\nCard Expiration Date: " << this->getExpirationDate();
    std::cout << "\nPayment Type: Credit Card\n";
}
