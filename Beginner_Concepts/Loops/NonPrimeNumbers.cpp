#include <iostream>
#include <cmath>

int main(void)
{
    const int max_number = 100;
    const int numbers_per_line = 5;
    int count = 0;

    for (int i = 1; i <= max_number; i++)
    {
        bool isPrime = true;

        for (int j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (!isPrime)
        {
            std::cout << i << " ";
            count++;

            // Check if it's time to start a new line
            if (count % numbers_per_line == 0)
            {
                std::cout << std::endl;
            }
        }
    }

    return (0);
}
