#pragma once
#include "Payment.hpp"

class CashPayment: public Payment
{
    // Utility functions of the CashPayment class.
    public:
        CashPayment();
        CashPayment(float);
        void paymentDetails() const;
};
