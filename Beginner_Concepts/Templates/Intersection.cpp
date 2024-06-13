#include <iostream>
#include <vector>

/**
	This is a program that displays the elements common to two vectors using a function with the header;
			void intersect(const std::vector<T>& v1,const std::vector<T>& v2)
*/


/**
 * Determines whether a vector contains a value or not.
 *
 * @param items A vector containing generic values.
 * @param key The value to be searched for.
 * @return true if the value is found, else false.
 */
template<typename T>
bool contains(const std::vector<T>& items, T key)
{
	for (T item: items)
	{
		if (item == key)
			return true;
	}

	return false;
}

/**
 * Determines the common elements of two vectors.
 *
 * @param v1 The first vector.
 * @param v2 The second vector.
 */
template<typename T>
void intersect(const std::vector<T>& v1,const std::vector<T>& v2)
{
	std::vector<T> commonElements;

	for (int i = 0; i < v1.size(); ++i)
	{
		if (contains(v2, v1[i]) && !contains(commonElements, v1[i]))
			commonElements.push_back(v1[i]);
	}

	if (commonElements.size() == 0)
		std::cout << "\nBoth vectors have no common elements.\n";
	else
	{
		std::cout << "\nThe common element(s) are: ";
		for (T item: commonElements)
			std::cout << item << " ";
	}
	std::cout << "\n";
}

int main(int argc, char* const argv[])
{
	std::vector<int> v1 = {1, 2, 3, 3, 4}, v2 = {2, 3, 7, 4, 0};
	std::vector<std::string> str1 = {"common", "sense", "is", "not", "common"}, str2 = {"is", "common", "sense"};
	intersect(v1, v2);
	intersect(str1, str2);

	return (0);
}

