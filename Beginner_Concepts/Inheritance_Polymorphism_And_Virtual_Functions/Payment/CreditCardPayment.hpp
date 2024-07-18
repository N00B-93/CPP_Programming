#pragma once
#include "Payment.hpp"
#include <string>

class CreditCardPayment: public Payment
{
    // Utility functions of the CreditCardPayment class.
    public:
        CreditCardPayment();
        CreditCardPayment(float, std::string, std::string, long);
        std::string getCardName() const;
        std::string getExpirationDate() const;
        long getCardNumber() const;
        void setCardName(std::string);
        void setExpirationDate(std::string);
        void setCardNumber(long);
        void paymentDetails() const;

    // Attributes of a CreditCardPayment.
    private:
        std::string cardHolderName;
        std::string cardExpirationDate;
        int cardNumber;
};
