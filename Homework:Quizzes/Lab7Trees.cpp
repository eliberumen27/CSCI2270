/*
Elijah Berumen
Lab 7
Instructor: Boese
*/
#include <iostream>
using namespace std;

struct Node
{
	int key;
	Node* left;
	Node* right;
};
//function prototypes
Node* addNode(Node* root, int value);
void addHelper(Node* root, Node* newNode);
int getSize(Node* root);
int getMinValue(Node* root);
int getMaxDepth(Node* root);
void printTree(Node* root);
//main for testing functions
int main()
{
	Node* root = nullptr;
	int size, min, depth;
	
	root = addNode(root, 8);
	root = addNode(root, 0);
	root = addNode(root, -12);
	root = addNode(root, 15);
	root = addNode(root, 8);
	root = addNode(root, 6);
	root = addNode(root, 2);
	root = addNode(root, 1);
	root = addNode(root, 1);
	root = addNode(root, 17);
	root = addNode(root, -600);
	
	printTree(root);
	
	size = getSize(root);
	cout << "Size: " << size << endl;
	depth = getMaxDepth(root);
	cout << "Max depth: " << depth << endl;
	min = getMinValue(root);
	cout << "Minimum value: " << min << endl; 
	
	return 0;
}
//adds a node to the binary tree
Node* addNode(Node* root, int value)
{
	Node* newNode = new Node; 
	newNode->key = value;
	newNode->left = nullptr;
	newNode->right = nullptr;
	
	if(root == nullptr)
		root = newNode;
	else
		addHelper(root, newNode);
	return root;
}
//helper function to addNode
void addHelper(Node* root, Node* newNode)
{
	if(newNode->key < root->key)
		if(root->left != nullptr)
			addHelper(root->left,newNode);
		else
			root->left = newNode;
	else//newNode->key >= root->key
		if(root->right != nullptr)
			addHelper(root->right,newNode);
		else
			root->right = newNode; 
}
//returns the number of nodes in the tree
int getSize(Node* root)
{
	int size = 0;
	if (root != nullptr)
	{
		if(root->left != nullptr)
			size += getSize(root->left);
		size++;
		if(root->right != nullptr)
			size += getSize(root->right);
	}
	return size;
}
//returns the minimum value in the binary tree
int getMinValue(Node* root)
{
	//int temp; can use temp variable to return if desired
	if(root != nullptr)
	{
		while(root->left != nullptr)
		{
			root = root->left;
		}
		return root->key;
	}
	return 0;
}
//returns maximum depth of the binary tree
int getMaxDepth(Node* root)
{
	int depthLeft = 0;
	int depthRight = 0;
	if(root != nullptr)
	{
		if(root->left != nullptr)
			depthLeft += getMaxDepth(root->left);
		depthLeft++;
		depthRight++;
		if(root->right != nullptr)
			depthRight += getMaxDepth(root->right);
	}
	if(depthLeft > depthRight)
		return depthLeft;
	else
		return depthRight;
		
	//return (depthLeft > depthRight ? depthLeft : depthRight);
}

void printTree(Node* root)
{
	if(root != nullptr)
	{
		if(root->left != nullptr)
			printTree(root->left);
		cout << root->key << endl;
		if(root->right != nullptr)
			printTree(root->right);
	}
	else
		cout << "Tree empty." << endl;
		
	
}