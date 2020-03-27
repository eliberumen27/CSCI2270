// You may add helper functions between this comment and the deleteMovie
// definition if you like
MovieNode* FindMin(MovieNode* root);
MovieNode* FindMin(MovieNode* root)
{
    MovieNode* temp = root;
	while(temp->leftChild != NULL) 
	    temp = temp->leftChild;
	return temp;
}
MovieNode* deleteMovieHelper(MovieNode* root, std::string title);
MovieNode* deleteMovieHelper(MovieNode* root, std::string title)
{
	if(root == NULL) 
	    cout << "Movie not found." << endl;
	
	else if(title < root->title) 
	    root->leftChild = deleteMovieHelper(root->leftChild,title);
	
	else if (title > root->title) 
	    root->rightChild = deleteMovieHelper(root->rightChild,title);
	
	else
	{
		// Case 1:  No child
		if(root->leftChild == NULL && root->rightChild == NULL) 
		{ 
		    root = NULL;
			delete root;
		}
		//Case 2: One child 
		else if(root->leftChild == NULL && root->rightChild != NULL) 
		{
		    //struct node = temp?
			MovieNode *temp = root;
			root = root->rightChild;
			delete temp;
			temp = NULL;
		
		}
		else if(root->rightChild == NULL && root->leftChild != NULL)
		{
			MovieNode *temp = root;
			root = root->leftChild;
			delete temp;
			temp = NULL;
	
		}
		// case 3: 2 children
		else 
		{ 
			MovieNode *temp = FindMin(root->rightChild);
			root->title = temp->title;
			//set up the rest of the node information
			root->rightChild = deleteMovieHelper(root->rightChild,temp->title);
		}
	}
	return root;
	
}

void MovieTree::deleteMovie(std::string title)
{
    deleteMovieHelper(root, title);
    // Your code here
}
