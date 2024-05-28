#include <iostream>
#include "Account.hpp"

/**
 * Un-parameterized constructor that instantiates an Account wwith default values.
*/
Account::Account()
{
    accountID = 0;
    balance = 0.0;
    annualInterestRate = 0.0;
}

/**
 * This returns the monthly interest rate on an Account.
 * 
 * @return The monthly interest rate.
*/
double Account::getMonthlyInterestRate()
{
    return annualInterestRate / 1200;
}

/**
 * Withdraws a specific amount from an Account.
 * 
 * @param The amount to be withdrawn.
*/
void Account::withdraw(double amount)
{
    if (amount > balance)
    {
        std::cout << "\nError: Insufficient balance, Try again.";
        return;
    }
    else if (amount <= 0)
    {
        std::cout << "\nError: Use an amount to be withdrawn that is > $0.0, Try again.\n";
        return;
    }
    else
    {
        balance -= amount;
        std::cout << "\n$" << amount << " withdrawn successfully!\n";
    }
}

/**
 * Deposits a specified amount into an Account.
 * 
 * @param amount The amount to be deposited.
*/
void Account::deposit(double amount)
{
    if (amount <= 0)
    {
        std::cout << "\nError: Use an amount >= $0.0, Try again.\n";
        return;
    }

    balance += amount;

    std::cout << "\n$" << amount << " successfully deposited!\n";
}
