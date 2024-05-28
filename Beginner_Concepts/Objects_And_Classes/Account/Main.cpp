#include <iostream>
#include "Account.hpp"

/**
    This is a program that tests the functionality of the user-defined Account class.
*/

int main(int argc, char const *argv[])
{
    // Creates an Account Object.
    Account account = Account();

    // Assigns values to the Account balance, accountID and annualInterestRate.
    account.accountID = 1122;
    account.annualInterestRate = 4.5;
    account.balance = 20'000;

    // Withdraw $2,500 from the Account.
    account.withdraw(2'500);

    // Displays the current balance after the withdrawal.
    std::cout << "\n\nCurrent Balance: $" << account.balance << "\n";

    // Deposits $3,000 to the Account.
    account.deposit(3'000);

    // Displays the current balance after the money has been deposited.
    std::cout << "\n\nCurrent Balance: $" << account.balance;

    // Displays the Account details.
    std::cout << "\n\n\t\tAccount Details\n";
    std::cout << "\nAccount ID: " << account.accountID;
    std::cout << "\nBalance: $" << account.balance;
    std::cout << "\nAnnual Interest Rate: " << account.annualInterestRate << "%\n";

    return (0);
}
