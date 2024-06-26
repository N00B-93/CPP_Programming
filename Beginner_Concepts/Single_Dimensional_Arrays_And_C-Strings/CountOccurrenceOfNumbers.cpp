#include <iostream>

/**
    This is  a program that reads at most 100 integers between 1 and 100 and counts the occurrence of each number. Assuming 
    that the input ends with 0.
*/

int main (int argc, char *argv[])
{
  // Initialize and declares variables used in the program.
  const int MAX_VALUE = 100, MAX_INPUT = 100;
  int count[MAX_VALUE + 1] = {0};
  int totalNumberOfInput{0}, number;

  // Reads in up to 100 integers from 1 - 100.
  std::cout << "\nEnter up to " << MAX_INPUT << " integers between 1 - " << MAX_VALUE << "(press '0' to end input): ";
  while (totalNumberOfInput < MAX_INPUT)
  {
    std::cin >> number;

    if (number == 0)  // Breaks out of the loop if the user enters 0.
      break;
    else if (number < 0 || number > 100)  // Goes to the next iteration if the number is < 1 or > 100.
    {
      std::cout << "\nError: Use number in the range 1 - 100 only, Try again.\n";
      continue;
    }

    totalNumberOfInput++;
    count[number]++;  // Increments the count for the number.
  }

  // Displays an error message and terminates the program if the user's uses a non integer input.
  if (std::cin.fail())
  {
    std::cout << "\nError: Use integers from 1 - 100 only, Try again.\n";
    exit(EXIT_FAILURE);
  }

  // Displays the number of occurrence of each integer in the array.
  for (int i = 1; i <= MAX_VALUE; ++i)
  {
    if (count[i] == 1)
      std::cout << "\n" << i << " occurs " << count[i] << " time.\n";
    else if (count[i] > 1)
      std::cout << "\n" << i << " occurs " << count[i] << " times.\n";
  }

  return (0);
}
