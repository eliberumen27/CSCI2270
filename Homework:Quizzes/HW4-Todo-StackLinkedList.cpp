/*
Elijah Berumen
Instructor: Boese
Assignment #4
*/
TodoStackLinkedList::TodoStackLinkedList()
{
	stackHead = NULL;
}

TodoStackLinkedList::~TodoStackLinkedList()
{
	struct TodoItem* temp;
	while (stackHead != NULL)
	{
		temp = stackHead->next;
		delete stackHead;
		stackHead = temp;
	}
}

bool TodoStackLinkedList::isEmpty()
{
	return (stackHead == NULL);
}

void TodoStackLinkedList::push(std::string todoItem)
{
	TodoItem* newNode = new Node;
	newNode -> todo = std::todoItem;
	if(stackHead != NULL)
	{
		newNode -> next = stackHead;
		stackHead = newNode;
	}
	else
	{
		newNode -> next = NULL;
		stackHead  = newNode;
	}
}

void TodoStackLinkedList::pop()
{
	if(stackHead == NULL)
	{
		std::cout << "Queue empty, cannot pop an item" << std::endl;
	}
	else if (head != NULL)
	{
		int temp = stackHead -> todo;
		todoItem* ptr = stackHead;
		stackHead = stackHead -> next;
		delete ptr;	
	}
}

TodoItem* TodoStackLinkedList::peek()
{
	return stackHead;
}