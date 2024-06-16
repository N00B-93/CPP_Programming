#include <iostream>
#include <vector>

/**
    This is a program that checks if generic vectors are Strictly Identical by using a function with the header;
                    template<typename T>
                    bool areStrictlyIdentical(vector<T> &v1, vector<T> &v2)
    Two vectors v1 and v2 are Strictly Identical if they have the same length and v1[i] == v2[i].
*/


/**
 * Determines whether two generic vectors are identical or not.
 * 
 * @param v1 The first vector.
 * @param v2 The second vector.
 * @return true if the vectors are strictly identical, else false.
*/
template<typename T>
bool areStrictlyIdentical(std::vector<T>& v1, std::vector<T>& v2)
{
    if (v1.size() != v2.size())
        return false;

    for (int i = 0; i < v1.size(); ++i)
    {
        if (v1[i] != v2[i])
            return false;
    }

    return true;
}

int main(int argc, char* const argv[])
{
    // Creates two vectors of integers.
    std::vector<int> v1 = {5, 4, 3, 2, 1}, v2 = {5, 4, 3, 2, 1};

    // Creates two vector of strings.
    std::vector<std::string> v3 = {"beef", "bread", "soda"}, v4 = {"soda", "beef", "bread"};

    // Displays whether the integer vectors are Strictly identical or not.
    std::cout << std::boolalpha << "\nIs v1 Strictly Identical to v2? " << areStrictlyIdentical(v1, v2) << "\n";

    // Displays whether the string vectors are Strictly identical or not.
    std::cout << std::boolalpha << "\nIs v3 Strictly Identical to v4? " << areStrictlyIdentical(v3, v4) << "\n";
    
    return (0);
}