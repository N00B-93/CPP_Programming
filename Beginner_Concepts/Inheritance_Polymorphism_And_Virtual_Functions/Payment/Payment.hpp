#pragma once

class Payment
{
    // Utility functions of the Payment class.
    public:
        Payment();
        Payment(float);
        float getAmount() const;
        void setAmount(float);
        virtual void paymentDetails() const;
    
    // Attribute of a Payment.
    private:
        float amount;
};