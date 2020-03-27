/*
Elijah Berumen
Instructor: Boese
Assignment #4
*/
#include <iostream>
#include "HW4-Todo-QueueArray.hpp"

using namespace std;

TodoQueueArray::TodoQueueArray()
{
	queueFront = -1;
	queueEnd = -1;
	//indices for the front and back of the array
}

bool TodoQueueArray::isEmpty()
{
	return((queueFront == -1) && (queueEnd == -1));
}

bool TodoQueueArray::isFull()
{		
	return (queueEnd + 1) % MAX_QUEUE_SIZE == queueFront ? true : false;
}

void TodoQueueArray::enqueue(std::string todoItem)
{
	/*border cases
	- queue full
		- deny, return false
	- empty
		- add it
	- stuff in queue, need to wrap
		- set to index zero
		- add it
	- stuff in queue, add 1
		- add 1
		- add it
	*/
	if(isFull())
	{
		//checks if the queue array is full
		cout << "Queue full, cannot add new todo item." << endl;
		
	}
	if(isEmpty())
	{
		queueFront = 0;	
		queueEnd = 0;
	    queue[queueEnd]->todo = todoItem;
		
	}
	else
	{
		queueEnd++;
		if(queueEnd > MAX_QUEUE_SIZE-1)
			queueEnd = 0;
		queue[queueEnd]->todo = todoItem;
		
	}
	/*Also you may:
	- Figure out how to use the %
	- Clean up the code "refactor"
	*/
}

void TodoQueueArray::dequeue()
{
	/* Border Cases
	- empty
	- something in queue
		- add 1 to front
		- wrap around
	*/
	if(isEmpty())
	{
		//error?
		
	}
	queueFront++;
	if (queueFront > MAX_QUEUE_SIZE - 1)
		queueFront = 0;
		
	//one way to implement
	if(queueFront == queueEnd) //empty!
	{
		queueFront= -1;
		queueEnd = -1;
	}
	
}

TodoItem* TodoQueueArray::peek()
{
    if(queueFront == -1)
		{
			return queue[queueFront]; 
		}
	return queue[queueFront];
}