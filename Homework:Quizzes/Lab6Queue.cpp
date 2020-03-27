#include <iostream>

using namespace std;

class Queue
{
	private:
		struct Node
		{
			int key;
			Node* next;
		};
		Node* head;
		Node* tail;
		
	public:
		Queue();
		void enqueue(int);
		int dequeue();
		int peek();
		bool isEmpty();
		void printQueue();
};

Queue::Queue()
{
	head = nullptr;
	tail = nullptr;
}

void Queue::enqueue(int value)
{
	Node* newNode = new Node;
	newNode -> next = nullptr;
	newNode -> key = value;
	if (head != nullptr)
	{
		tail -> next = newNode;
		tail = newNode;
	}
	else
	{
		head = newNode;
		tail = newNode;
	}
}

int Queue::dequeue()
{
	if (head != nullptr)
	{
		int temp = head -> key;
		Node* ptr = head;
		head = head -> next;
		delete ptr;
		return temp;	
	}
	return 0;
}

int Queue::peek()
{
	if(head != nullptr)
		return head -> key;
	return 0;
}

bool Queue::isEmpty()
{
	return (head == nullptr);
}

void Queue::printQueue()
{
	Node* temp = head;
	while(temp != NULL)
	{
		cout << temp -> key << " --> ";
		temp = temp -> next;
	}
	cout << "NULL\n";
}

int main()
{
	Queue myQueue;
	myQueue.printQueue();
	if (myQueue.isEmpty())
		cout << "Empty Queue." << endl;
	else
		cout << "Nonempty queue." << endl;
	myQueue.enqueue(5);
	myQueue.printQueue();
	myQueue.enqueue(4);
	myQueue.printQueue();
	myQueue.enqueue(3);
	myQueue.printQueue();
	myQueue.enqueue(2);
	myQueue.printQueue();
	cout << "Dequeueing: " << myQueue.dequeue() << endl;
	myQueue.printQueue();
	cout << "Dequeueing: " << myQueue.dequeue() << endl;
	myQueue.printQueue();
	cout << "Dequeueing: " << myQueue.dequeue() << endl;
	myQueue.printQueue();
	cout << "Peeking: " << myQueue.peek() << endl;
	return 0;
}


