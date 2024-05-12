#include <string>
#include "Cryptography.hpp"

/**
 * Encrypts a 4-digit number by replacing each digit with the result of adding 7 to the digit and getting the remainder after dividing the new value by 10. Then swaps the first digit with the third, and swap the second digit with the fourth.
 * 
 * @param number The number to be encrypted.
 * @return The encryped number.
*/
std::string encrypt4Digit(std::string number)
{
    std::string encryptedNumber = "";

    for (int i = 0; i < number.size(); ++i)
        encryptedNumber += std::to_string(((number[i] - '0') + 7) % 10);
    
    encryptedNumber = swap(encryptedNumber, 0, 2, 1, 3);

    return encryptedNumber;
}

/**
 * Decrypts a 4-digit number by replacing each digit with the result of subtracting 7 from it if the digit is greater than or equal to 7 or adding 10 to the digit and subtracting 7 from if the digit is less than 7. Then swaps the first digit with the third, and swap the second digit with the fourth.
 * 
 * @param number The number to be decrypted.
 * @return The decrypted number.
*/
std::string decrypt4Digit(std::string number)
{
    std::string decryptedNumber = "";

    for  (int i = 0; i < number.size(); ++i)
    {
        int digit = number[i] - '0';

        if (digit >= 7)
            decryptedNumber += std::to_string(digit - 7);
        else
            decryptedNumber += std::to_string(digit + 10 - 7);
    }

    decryptedNumber = swap(decryptedNumber, 2, 0, 3, 1);

    return decryptedNumber;
}

/**
 * Swaps characters in a 4-character string by using the specified indices.
 * 
 * @param idx1 The first index.
 * @param idx2 The second index.
 * @param idx3 The third index.
 * @param idx4 The fourth index.
 * @return The string with it's characters swapped.
*/
std::string swap(std::string number, int idx1, int idx2, int idx3, int idx4)
{
    char temp1 = number[idx1];
    number[idx1] = number[idx2];
    number[idx2] = temp1;

    char temp2 = number[idx3];
    number[idx3] = number[idx4];
    number[idx4] = temp2;

    return number;
}