#ifndef MOVIETREE_HPP
#define MOVIETREE_HPP
#include <string>

struct MovieNode
{
int ranking;
std::string title;
int year;
int quantity;
MovieNode *parent;
MovieNode *leftChild;
MovieNode *rightChild;
MovieNode(){};
MovieNode(int in_ranking, std::string in_title,
int in_year, int in_quantity)

{
ranking = in_ranking;
title = in_title;			
year = in_year;
quantity = in_quantity;
parent = leftChild = rightChild = nullptr;
}
};
class MovieTree
{
public:
MovieTree();
~MovieTree();
void printMovieInventory();
void addMovieNode(int ranking, std::string title,
int releaseYear, int quantity);
void countMovies();
void removeNode(std::string title);

void findMovie(std::string title);
void rentMovie(std::string title);
private:
//possible helper functions in here
//multiple implementations of helper functions follow
void removeMatch(MovieNode* parent, MovieNode* match, bool left);
void removeMatch(MovieNode* parent, MovieNode* match, bool left)
{
	if(root != NULL)
	{
		MovieNode* delPtr = new MovieNode;
		string matchTitle = match->title;
		string smallestInRightSubtree;
		
		//first case in which matching node has 0 children
		if(match->leftChild == NULL && match->rightChild == NULL)
		{
			delPtr = match;
			leftChild == true ? parent->leftChild = NULL : parent-rightChild = NULL;
			delete delPtr;
			//deletes node containing the matching title;
		}
		//case of 1 child
		else if(match->leftChild == NULL && match->rightChild != NULL)
		{
			leftChild == true ? parent->leftChild = match->rightChild : parent->rightChild = match->rightChild;
			match->rightChild = NULL;
			delPtr = match;
			delete delPtr;
		}
		//other case
		else if(match->rightChild == NULL && match->leftChild != NULL)
		{
			leftChild == true ? parent->leftChild = match->leftChild : parent->rightChild = match->leftChild;
			match->leftChild = NULL;
			delPtr = match;
			delete delPtr;
		}
		//matching node has 2 children case
		else
		{
			smallestInRightSubtree = findSmallest(match->rightChild);
			removeNodeHelper(smallestInRightSubtree, match);
			match->title = smallestInRightSubtree;
		}
		
		
	}
}

string findSmallest(MovieNode* ptr);
string findSmallest(MovieNode* ptr)
{
	string temp;
	if (root == NULL)
	{
		return temp;
	}
	else
	{
		if(ptr->leftChild != NULL)
		{
			return findSmallest(ptr->leftChild);
		}
		else
		{
			return ptr->title;
		}
	}
}

void removeRootMatch(MovieNode* root);
void removeRootMatch(MovieNode* root				)
{
	if(root != NULL)
	{
		MovieNode* delPtr = new MovieNode;
		delPtr = root;
		string rootValue = root->title;
		string smallestInRightSubtree;
		
		if(root->leftChild == NULL && root->rightChild == NULL)
		{
			root = NULL;
			delete delPtr;
		}
		//next case with 1 child
		else if(root->leftChild == NULL && root->rightChild != NULL)
		{
			root = root->rightChild;
			delPtr->rightChild = NULL;
			delete delPtr;
		}
		else if(root->leftChild != NULL && root->rightChild == NULL)
		{
			root = root->leftChild;
			delPtr->leftChild = NULL;
			delete delPtr;
		}
		//case of 2 children
		else
		{
			smallestInRightSubtree = findSmallest(root->rightChild);
			removeNodeHelper(smallestInRightSubtree, root);
			root->title = smallestInRightSubtree;
			//root title was overwritten with the new value of smallest
		}
	}
	//else tree is empty (print something?)
}

void removeNodeHelper(std::title, MovieNode* parent);
void removeNodeHelper(std::title, MovieNode* parent)
{
	if (root != NULL)
	{
		if (root->title == title)
		{
			removeRootMatch(root);
		}
		else
		{
			if (title < parent->title && parent->leftChild != NULL)
			{
				//another way to if and else with a boolean
				parent->leftChild->title == title ?
				removeMatch(parent, parent->leftChild, true) :
				removeNodeHelper(title, parent->leftChild);
				
			}
			else if (title > parent->title && parent->rightChild != NULL)
			{
				//another way to if and else with a boolean
				parent->rightChild->title == title ?
				removeMatch(parent, parent->rightChild, false) :
				removeNodeHelper(title, parent->rightChild);
				
			}
			/*else
			{
				cout << "Was not found in tree";
			}*/
		}
	}
	//possible else for empty tree
	
}

int countHelper(MovieNode* root);
int countHelper(MovieNode* root)
{
    int count = 1;
    if (root->leftChild != NULL) {
       count += countHelper(root->leftChild);
    }
    if (root->rightChild != NULL) {
        count += countHelper(root->rightChild);
    }
    return count;
}

void printMovieInventoryHelper(MovieNode* ptr);
void printMovieInventoryHelper(MovieNode* ptr)
{
    if(ptr != NULL)
    {
        if(ptr->leftChild != NULL)
        {
            printMovieInventoryHelper(ptr->leftChild);
        }
        cout << "Movie: " << ptr->title << " " << ptr->quantity << endl;
        if(ptr->rightChild != NULL)
        {
            printMovieInventoryHelper(ptr->rightChild);
        }
    }
}

void addMovieNodeHelper(MovieNode* ptr, MovieNode* newNode, int ranking, std::string title, int year, int quantity);
void addMovieNodeHelper(MovieNode* ptr, MovieNode* newNode, int ranking, std::string title, int year, int quantity)
{
	if(newNode->title < ptr->title)
		if(ptr->leftChild != NULL)
			addMovieNodeHelper(ptr->leftChild,newNode,ranking,title,year,quantity);
		else
			ptr->leftChild = newNode;
	else//newNode->key >= ptr->key
	{
		if(ptr->rightChild != NULL)
			addMovieNodeHelper(ptr->rightChild,newNode,ranking,title,year,quantity);
		else
			ptr->rightChild = newNode; 
	}	    
}
void removeSubTree(MovieNode* ptr);
void removeSubTree(MovieNode* ptr)
{
	if(ptr != NULL)
	{
		if(ptr->leftChild != NULL)
		{
			removeSubtree(ptr->left);
		}
		if(ptr->rightChild != NULL)
		{
			removeSubtree(ptr->right);
		}
		delete ptr;
	}
}

MovieNode *search(MovieNode *node, std::string title);
MovieNode *search(MovieNode *node, std::string title)
{
	if(node != NULL)
	{
		if (node->title == title)
		{
			return node;
		}
		else
		{
			if(title < node->title)
			{
				return search(node->leftChild, title);
			}
			else
			{
				return search(node->rightChild, title);
			}
		}
	}
	else
	{
		return NULL;
	}
}

MovieNode *root;
};
#endif // MOVIETREE_HPP