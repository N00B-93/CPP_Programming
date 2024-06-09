#include "Stack.hpp"
#include <string>

/**
	This is a driver program for the generic Stack class.
*/

int main(int argc, char* const argv[])
{
	// Creates a Stack of integers and strings.
	Stack<int> numbers;
	Stack<std::string> food;

	// Checks if both Stacks are empty or not.
	std::cout << std::boolalpha << "\nIs the integer Stack empty? " << numbers.isEmpty() << "\n";
	std::cout << std::boolalpha << "\nIs the string Stack empty? " << food.isEmpty() << "\n";

	// Push 10 integers onto the int Stack.
	std::cout << "\nAdding 10 integers to the Stack...\n";
	for (int i = 10; i <= 100; i += 10)
		numbers.push(i);
	
	// Checks whether the integer Stack is empty or not.
	std::cout << std::boolalpha << "\nIs the integer Stack empty? " << numbers.isEmpty() << "\n";

	// Push 10 strings onto the string Stack.
	std::cout << "\nAdding 10 strings to the string Stack...\n";
	food.push("lamb chops");
	food.push("sausages");
	food.push("ramen noodle soup");
	food.push("lemon pepper wings");
	food.push("fruit salad");
	food.push("wagyu steak");
	food.push("chocolate ice cream");
	food.push("fish and chips");
	food.push("strawberry jam springroll");
	food.push("egg fried rice");
	
	// Checks whether the string Stack is empty or not.
	std::cout << std::boolalpha << "\nIs the string Stack empty? " << food.isEmpty() << "\n";

	// Displays the size of each Stack.
	std::cout << "\nSize of integer Stack: " << numbers.getSize();
	std::cout << "\nSize of string Stack: " << food.getSize();

	// Displays the elements at the top of each Stack.
	std::cout << "\n\nLast element in the integer Stack: " << numbers.peek();
	std::cout << "\nLast element in the string Stack: " << food.peek();
	
	// Removing all elements from the string Stack.
	std::cout << "\n\nPopping elements from the string Stack...\n";
	while (!food.isEmpty())
		std::cout << food.pop() << "\n";

	// Removing all elements from the integer stack.
	std::cout << "\n\nPopping elements from the integer Stack...\n";
	while (!numbers.isEmpty())
		std::cout << numbers.pop() << "\n";

	// Displaying the size of each Stack after popping all elements.
	std::cout << "\nSize of integer Stack: " << numbers.getSize();
	std::cout << "\nSize of string Stack: " << food.getSize();	

	return (0);
}

