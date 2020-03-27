#include <iostream>
 
using namespace std;

class Stack
{
	private:
		struct Node
		{
			int key;
			Node* next;
		};
		Node* head;
		
	public:
		Stack();
		void push(int);
		int pop();
		int peek();
		bool isEmpty();
		void  printStack();
};

Stack::Stack()
{
	head = nullptr;
}
void Stack::push(int value)
{
	Node* newNode = new Node;
	newNode -> key = value;
	if(head != nullptr)
	{
		newNode -> next = head;
		head = newNode;
	}
	else
	{
		newNode -> next = nullptr;
		head  = newNode;
	}
}
int Stack::pop()
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
int Stack::peek()
{
	if(head != nullptr)
		return head -> key;
	return 0;
}
bool Stack::isEmpty()
{
	return (head == nullptr);
}
void  Stack::printStack()
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
	Stack myStack;
	if(myStack.isEmpty())
		cout << "Empty stack." << endl;
	else
		cout << "Nonempty stack" << endl;
	myStack.printStack();
	myStack.push(10);
	myStack.printStack();
	myStack.push(15);
	myStack.printStack();
	myStack.push(20);
	myStack.printStack();
	myStack.push(25);
	myStack.printStack();
	cout << "Popping: " << myStack.pop() << endl;
	myStack.printStack();
	cout << "Popping: " << myStack.pop() << endl;
	myStack.printStack();
	cout << "Popping: " << myStack.pop() << endl;
	myStack.printStack();
}