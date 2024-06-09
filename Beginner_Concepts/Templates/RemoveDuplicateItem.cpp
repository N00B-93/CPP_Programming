#include <iostream>
#include <vector>

/**
    This is a program that displays the distinct elements in a vector of integers.
*/

/**
 * This determines whether an item exists in a generic vector.
 * 
 * @param items The vector containing items of generic type.
 * @param key The item whose existence in the generic vector is to be checked.
*/
template <typename T>
bool contains(std::vector<T> items, T key)
{
    for (T item: items)
    {
        if (item == key)
            return true;
    }

    return false;
}

/**
 * Displays the element of a generic array.
 *
 * @param array The array whose elements are to be displayed.
 * @param size The number of elements in the array to be displayed.
 */
template<typename T>
void displayArray(std::vector<T> items)
{
	for (T item: items)
		std::cout << item << " ";
	std::cout << "\n";
}

int main(int argc, char const *argv[])
{
    // Creates a vector of integers.
    std::vector<int> integers = {34, 5, 3, 5, 6, 4, 33, 2, 2, 4};

    // Vector to hold distinct integers.
    std::vector<int> distinctIntegers;

    // Removes duplicate integers.
    for (int i = 0; i < integers.size(); ++i)
    {
        if (!contains(distinctIntegers, integers[i]))
            distinctIntegers.push_back(integers[i]);
    }

    // Displays the distinct integers.
    std::cout << "\nThe distinct integers are: ";
    displayArray(distinctIntegers);
    
    return (0);
}
