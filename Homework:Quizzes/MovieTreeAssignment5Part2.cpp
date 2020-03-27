#include <iostream>
#include <fstream>
#include <sstream>
#include "MovieTree.hpp"
using namespace std;

MovieTree::MovieTree()
{
	root = NULL;
}

MovieTree::~MovieTree()
{
	removeSubTree(root);
}

void MovieTree::printMovieInventory()
{
    printMovieInventoryHelper(root);
}

void MovieTree::addMovieNode(int ranking, std::string title, int year, int quantity)
{
        MovieNode* newNode = new MovieNode;
        newNode->ranking = ranking;
	    newNode->title = title;
	    newNode->year = year;
	    newNode->quantity = quantity;
	    newNode->leftChild = NULL;
	    newNode->rightChild = NULL;
	    
	    if(root==NULL)
	        root = newNode;
	   else
		    addMovieNodeHelper(root, newNode, ranking, title, year, quantity);
}

void MovieTree::findMovie(std::string title)
{
	MovieNode* foundMovie = new MovieNode;
    foundMovie = search(root, title);
    if (foundMovie == NULL)
    {
        cout << "Movie not found." << endl;
    }
    else if (foundMovie != NULL)
    {
        cout << "Movie Info:" << endl;
        cout << "===========" << endl;
        cout << "Ranking:" << foundMovie->ranking << endl;
        cout << "Title:" << foundMovie->title << endl;

        cout << "Year:" << foundMovie->year << endl;
        cout << "Quantity:" << foundMovie->quantity << endl;
    }
}

void MovieTree::rentMovie(string title)
{
    MovieNode* foundMovie = new MovieNode;
    foundMovie = search(root, title);
    if (foundMovie == NULL)
    {
        cout << "Movie not found." << endl;
    }
    else if (foundMovie != NULL)
    {
        if(foundMovie->quantity <= 0)
        {
            cout << "Movie out of stock." << endl;
        }
        else
        {
        foundMovie->quantity--;
        cout << "Movie has been rented." << endl;
        cout << "Movie Info:" << endl;
        cout << "===========" << endl;
        cout << "Ranking:" << foundMovie->ranking << endl;
        cout << "Title:" << foundMovie->title << endl;

        cout << "Year:" << foundMovie->year << endl;
        cout << "Quantity:" << foundMovie->quantity << endl;
        }
    }
}

void MovieTree::countMovies()
{
    int count = 0;
    if (root != NULL) {
        count = countHelper(root);
    }
    cout << "Count = " << count << endl;
}

void removeNode(std::string title)
{
	removeNodeHelper(title, root);
}