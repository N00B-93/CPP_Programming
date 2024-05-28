#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

/**
 * The type Account.
*/
class Account
{
    public:
        // Attributes of an Account.
        int accountID;
        double balance;
        double annualInterestRate;

        Account();  // No-arg constructor.

        double getMonthlyInterestRate();  // Prototype of the getMonthlyInterestRate method.

        void withdraw(double amount);  // Prototype of the withdraw method.

        void deposit(double amount);  // Prototype of the deposit method.
};

#endif /* ACCOUNT_HPP */
