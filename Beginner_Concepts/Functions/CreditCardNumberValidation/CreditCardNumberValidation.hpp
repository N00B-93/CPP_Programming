#include <string>
#ifndef CREDIT_CARD_NUMBER_VALIDATION_HPP
#define CREDIT_CARD_NUMBER_VALIDATION_HPP

bool isNumeric(const std::string& cardNumber);
bool startsWith(const std::string& cardNumber, const std::string& substr);
int getDigit(int number);
int sumOfOddPlace(const std::string& cardNumber);
int sumOfDoubleEvenPlace(const std::string& cardNumber);
bool isValid(const std::string& cardNumber);

#endif /* CREDIT_CARD_NUMBER_VALIDATION */