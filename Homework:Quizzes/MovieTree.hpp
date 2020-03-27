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

void findMovie(std::string title);
void rentMovie(std::string title);
private:
//possible helper functions in here
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