#pragma once
#include <vector>
#include <iostream>

/**
 * The generic type class.
 */
template<typename T>
class Stack
{
	public:
		Stack();  // No-arg constructor.
		bool isEmpty() const; // Prototype of the isEmpty function.
		void push(T);  // Prototype of the push function.
		T peek() const;  // Prototype of the peek function.
		T pop();  // Prototype of the pop function.
		int getSize() const; // Prototype of the getType function.
	
	// Attributes of a Stack.
	private:
		int size;
		std::vector<T> elements;
};

/**
 * Instantiates a new Stack.
 */
template <typename T>
Stack<T>::Stack() {}

/**
 * Pushes a generic item to the top of the Stack.
 *
 * @param item The item to be pushed to the top of the Stack.
 */
template <typename T>
void Stack<T>::push(T item)
{
	this->elements.push_back(item);
}

/**
 * Removes the item at the top of the Stack.
 *
 * @return The item at the top of the Stack.
 */
template <typename T>
T Stack<T>::pop()
{
	if (isEmpty())
		return T();
	T lastItem = this->elements.back();
	this->elements.pop_back();
	return lastItem;
}

/**
 * Checks whether a Stack is empty or not.
 *
 * @return true if a Stack is empty, else false.
 */
template <typename T>
bool Stack<T>::isEmpty() const
{
	return this->elements.size() == 0;
}

/**
 * Determines the number of elements in a Stack.
 *
 * @return The number of elements in a Stack.
 */
template <typename T>
int Stack<T>::getSize() const
{
	return this->elements.size();
}

/**
 * Shows the element at the top of the Stack but does not remove it from the Stack.
 *
 * @return The element at the top of the Stack.
 */
template <typename T>
T Stack<T>::peek() const
{
	if (this->isEmpty())
	{
		std::cout << "\nThe Stack is empty.\n";
		return T();
	}
	return this->elements.back();
}

