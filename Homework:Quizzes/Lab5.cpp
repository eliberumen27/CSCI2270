#include <iostream>
#include <cstdio>

//node implementation for doubly linked list
struct Node
{
	int key;
	Node* previous;
	Node* next;
};

void insertNode(Node** tail, int value);
void printList(Node* tail);

using namespace std;

int main()
{
	Node* head;
	Node* tail;
	Node* firstNode = new Node;
	
	head = firstNode;
	tail = firstNode;
	
	firstNode -> key = 6;
	firstNode -> previous = NULL;
	firstNode -> next = NULL;
	
	insertNode(&tail, 5);
	insertNode(&tail, 4);
	insertNode(&tail, 3);
	insertNode(&tail, 2);
	insertNode(&tail, 1);
	
	printList(tail);
}
//insert a node at the end of the list
void insertNode(Node** tail, int value)
{
	Node* newNode = new Node;
	newNode -> previous = NULL;
	newNode -> next = NULL;
	newNode -> key = value;
	
	if(*tail != NULL)
	{
		(*tail) -> next = newNode;
		newNode -> previous = (*tail);
	}
	*tail = newNode;
	//arrow acts as a dot operator for pointers
}
//print the list tail to head
void printList(Node* tail)
{
	Node* temp = tail;
	while(temp->previous != NULL)
	{
		printf("%d <-- ", temp -> key);
		temp = temp->previous;
	}
	printf("%d\n", temp -> key);
}