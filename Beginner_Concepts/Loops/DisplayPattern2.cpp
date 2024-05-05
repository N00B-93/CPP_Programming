#include <iostream>

/**
    This is a program that displays the pattern below;
                123456
                1    6
                1    6
                1    6
                1    6
                123456
*/

int main(void)
{
    std::cout << "\n";
    for (int i = 1; i <= 6; ++i)
    {
        for (int j = 1; j <= 6; ++j)
        {
            if (i == 1 or i == 6)
                std::cout << j;
            else
            {
                if (j == 1 or j == 6)
                    std::cout << j;
                else
                    std::cout << " ";
           }
        }
        std::cout << "\n";
    }
    return (0);
}

