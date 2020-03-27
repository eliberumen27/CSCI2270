/*
Elijah Berumen
Instructor: Boese
Assignment #4
*/
#include <iostream>
#include "HW4-Todo-QueueLinkedList.hpp"

TodoQueueLinkedList::TodoQueueLinkedList()
{
	queueFront = NULL;
	queueEnd = NULL;
}

TodoQueueLinkedList::~TodoQueueLinkedList()
{
	struct TodoItem* temp;
	while (queueFront != NULL)
	{
		temp = queueFront->next;
		delete queueFront;
		queueFront = temp;
	}
}

bool TodoQueueLinkedList::isEmpty()
{
	return (queueFront == NULL);
}

void TodoQueueLinkedList::enqueue(std::string todoItem)
{
	TodoItem* newNode = new TodoItem;
	newNode -> next = NULL;
	newNode -> todo = todoItem;
	if (queueFront != NULL)
	{
		queueEnd -> next = newNode;
		queueEnd = newNode;
	}
	else
	{
		queueFront = newNode;
		queueEnd = newNode;
	}
}

void TodoQueueLinkedList::dequeue()
{
	if (queueFront != NULL)
	{
		int temp = queueFront -> todo;
		TodoItem* ptr = queueFront;
		queueFront = queueFront -> next;
		delete ptr;	
	}
}

TodoItem* TodoQueueLinkedList::peek()
{
	if(queueFront != NULL)
		return queueFront;
	return;
}
