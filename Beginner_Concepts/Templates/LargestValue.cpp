#include <iostream>
#include <string>

/**
    This is a program that creates three variables of int, double and string and then determines the largest
    of each type by using a generic function with the header;
                    T getLargest(T item1, T item2, T item3)
*/

/**
 * Determines the largest of three items of generic type.
 * 
 * @param item1 The first generic item.
 * @param item2 The second generic item.
 * @param item3 The third generic item.
 * @return The Largest of three items of generic type.
*/
template<typename T>
T getLargest(T item1, T item2, T item3)
{
    if (item1 >= item2 && item1 >= item3)
        return item1;
    else if (item2 >= item1 && item2 >= item3)
        return item2;
    return item3;
}

int main(int argc, char const *argv[])
{
    // Creates variable of different types.
    int number1 = 25, number2 = -61, number3 = 102;
    double number4 = 2.54, number5 = -33.25, number6 = 38.2;
    std::string str1("meatballs"), str2("sausage"), str3("lamb chops");

    // Displays the largest of each type.
    std::cout << "\nThe largest in " << number1 << ", " << number2 << ", " << number3 << " is " << getLargest(number1, number2, number3) << "\n";
    std::cout << "\nThe largest in " << number4 << ", " << number5 << ", " << number6 << " is " << getLargest(number4, number5, number6) << "\n";
    std::cout << "\nThe largest in " << "'" << str1 << "'," << " " << "'" << str2 << "'," << " " << "'" << 
    str3 << "' is '" << getLargest(str1, str2, str3) << "'\n";

    return (0);
}
