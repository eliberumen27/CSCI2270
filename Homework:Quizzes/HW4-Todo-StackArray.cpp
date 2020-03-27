/*
Elijah Berumen
Instructor: Boese
Assignment #4
*/
#include <iostream>
#include "HW4-Todo-StackArray.hpp"

TodoStackArray::TodoStackArray()
{
	stackTop = -1;
	//declares that it's empty
}

bool TodoStackArray::isEmpty()
{
	return (stackTop == -1);
}

bool TodoStackArray::isFull()
{
	if(stackTop == MAX_STACK_SIZE-1)
		return true;
	else
		return false;
}

void TodoStackArray::push(std::string todoItem)
{
	if(stackTop == (MAX_STACK_SIZE-1))
	{
		std::cout << "Stack full, cannot add new todo item." << std::endl;
	}

	else
	{
	    std::string temp = todoItem;
	    stackTop++;
		stack[stackTop]->todo = temp;
	}
	    
}

void TodoStackArray::pop()
{
	if(!isEmpty())
		stackTop--;
	else
	    std::cout << "Stack empty, cannot pop item." << std::endl;
}

TodoItem* TodoStackArray::peek()
{
	if(!isEmpty())
	{   
		return stack[stackTop];
	}
	else
	{
	std::cout << "Stack empty, cannot peek." << std::endl;
	return NULL;
	}
}