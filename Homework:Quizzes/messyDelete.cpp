// You may add helper functions between this comment and the deleteMovie
// definition if you like
string findSmallest(MovieNode* ptr);
void removeNodeHelper(std::string title, MovieNode* parent);
void removeMatch(MovieNode* parent, MovieNode* match, bool left);
void removeMatch(MovieNode* parent, MovieNode* match, bool left)
{
	if(parent != NULL)
	{
		MovieNode* delPtr;
		string matchTitle = match->title;
		string smallestInRightSubtree;
		
		//first case in which matching node has 0 children
		if(match->leftChild == NULL && match->rightChild == NULL)
		{
			delPtr = match;
			left == true ? parent->leftChild = NULL : parent->rightChild = NULL;
			delete match;
			//deletes node containing the matching title;
		}
		//case of 1 child
		else if(match->leftChild == NULL && match->rightChild != NULL)
		{
			left == true ? parent->leftChild = match->rightChild : parent->rightChild = match->rightChild;
			match->rightChild = NULL;
			delPtr = match;
			delete match;
			/*
			if(left == true)
			{
			    parent->leftChild = match->rightChild;
			}
			else
			    parent->rightChild = match->rightChild;
			    match->rightChild = NULL;
			    delete match;*/
		}
		//other case
		else if(match->leftChild != NULL && match->rightChild == NULL)
		{
			left == true ? parent->leftChild = match->leftChild : parent->rightChild = match->leftChild;
			match->leftChild = NULL;
			delPtr = match;
			delete match;
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


string findSmallest(MovieNode* ptr)
{
	string temp;
	if (ptr == NULL)
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
void removeRootMatch(MovieNode* root)
{
	if(root != NULL)
	{
		MovieNode* delPtr = root;
		string rootValue = root->title;
		string smallestInRightSubtree;
		
		if(root->leftChild == NULL && root->rightChild == NULL)
		{
			root = NULL;
		    //delete root here
		}
		//next case with 1 child
		else if(root->leftChild == NULL && root->rightChild != NULL)
		{
			root = root->rightChild;
			delete delPtr;
			//delPtr->rightChild = NULL;
			//delete root?
		}
		else if(root->leftChild != NULL && root->rightChild == NULL)
		{
			root = root->leftChild;
			delete delPtr;
			//delPtr->leftChild = NULL;
			//delete root?
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
	else
	{
	    cout << "Movie not found." << endl;
	}
	//else tree is empty (print something?)
}



void removeNodeHelper(std::string title, MovieNode* parent)
{
	if (parent != NULL)
	{
		if (parent->title == title)
		{
			removeRootMatch(parent);
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
			else
			{
				cout << "Movie not found." << endl;
			}
		}
	}
	else
	{
	    cout << "Movie not found." << endl;
	}
	//possible else for empty tree
	
}

void MovieTree::deleteMovie(std::string title)
{
    removeNodeHelper(title, root);
}