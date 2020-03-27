/*
Elijah Berumen
Instructor: Boese
Assignment 5 MovieTree main 
*/
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include "MovieTree.hpp"
using namespace std;
int main(int argc,char* argv[])
{
    MovieTree myTree;
    string data;
    ifstream myFile;
    myFile.open(argv[1]);
    while(getline(myFile, data))
    {
        string tempRank;
        string tempName;
        string tempYear;
        string tempQuantity;
        istringstream ss(data);
    
        
        getline(ss,tempRank,',');
        int rank = stoi(tempRank);
        getline(ss,tempName,',');
        getline(ss,tempYear,',');
        int yr = stoi(tempYear);
        getline(ss,tempQuantity,',');
        int quant = stoi(tempQuantity);
        myTree.addMovieNode(rank, tempName, yr, quant);
    }
	bool quit = false;
	string s_input;
	int input;
	//looping until user selects quit
	string inputTitle;
	string inputTitle2;
	while(!quit)
	{
		cout << "======Main Menu======" << endl;
		cout << "1. Find a movie" << endl;
		cout << "2. Rent a movie" << endl;
		cout << "3. Print the inventory" << endl;
		cout << "4. Quit" << endl;
		//then read in the input assuming it's a number
		getline(cin, s_input);
		input = stoi(s_input);
		
		switch (input)
		{
		case 1: //Find the movie and display it's information
		{	
			cout << "Enter title:" << endl;
			getline(cin, inputTitle);
			myTree.findMovie(inputTitle);
			break;
		}
		case 2: //Rent the movie and display the new information
	    {
			cout << "Enter title:" << endl;
			getline(cin, inputTitle2);
			myTree.rentMovie(inputTitle2);
			break;
		}
		case 3: //Print the entire movie inventory
		{
			myTree.printMovieInventory();
			break;
		}
		case 4: //Quit program
	    {
		    quit = true;
		    cout << "Goodbye!" << endl;
			break;
		}
		}
		
	}
	
	return 0;
}