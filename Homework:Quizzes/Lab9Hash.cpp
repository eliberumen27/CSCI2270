#include <iostream>
#define SIZE 11
using namespace std;

struct Movie
{
	string title;
	int ranking;
	int year;
	Movie* next;
};

int hashFunction(string movieTitle);
bool insert(string movieTitle, int movieRanking, int movieYear, Movie* movieTable[]);
Movie* search(string movieTitle, Movie* movieTable[]);

int main()
{
	Movie* movieTable[SIZE] = {};
	
	//cout << hashFunction("aa") << endl;
	
	if(insert("Transformers", 7, 2004, movieTable))
		cout << "Transformers added successfully." << endl;
	if(insert("Transformers", 7, 2004, movieTable))
		cout << "Transformers added successfully." << endl;
		
		Movie* query = search("Transformers", movieTable);
		if(query != nullptr)
		{
			cout << "Here is the information for the movie you searched: " << endl;
			cout << "Title: " << query->title << endl;
			cout << "Ranking: " << query->ranking << endl;
			cout << "Year: " << query->year << endl;
		}
		else
			cout << "Transformers not in the hash table." << endl; 
			
		query = search("asdf", movieTable);
		if(query != nullptr)
		{
			cout << "Here is the information for the movie you searched: " << endl;
			cout << "Title: " << query->title << endl;
			cout << "Ranking: " << query->ranking << endl;
			cout << "Year: " << query->year << endl;
		}
		else
			cout << "asdf not in the hash table." << endl; 
		
	
	return 0;
}

int hashFunction(string movieTitle)
{
	int sum = 0;
	for(int ii = 0; ii < movieTitle.length(); ii++)
	{
		sum += movieTitle[ii];
	}
	return sum % SIZE;
}
bool insert(string movieTitle, int movieRanking, int movieYear, Movie* movieTable[])
{
	int idx = hashFunction(movieTitle);
	Movie* newMovie = new Movie;
	newMovie->title = movieTitle;
	newMovie->ranking = movieRanking;
	newMovie->year = movieYear;
	newMovie->next = nullptr;
	
	if(movieTable[idx] == nullptr)
	{
		movieTable[idx] = newMovie;
		return true;
	}
	else
	{
		Movie* temp = movieTable[idx];
		
		while( temp != nullptr)
		{
			if (temp->title == movieTitle)
			{
				cout << movieTitle << " is already in the hash table" << endl;
				return false;
				//since nothing was added
			}	
			temp = temp->next;
		}
		newMovie->next = movieTable[idx];
		movieTable[idx] = newMovie;
		return true;
		
	}
}
Movie* search(string movieTitle, Movie* movieTable[])
{
	int idx = hashFunction(movieTitle);
	
	Movie* temp = movieTable[idx];
	
	if(movieTable[idx] == nullptr)
	{
		return nullptr;
	}
	else
	{
		while(temp->title != movieTitle && temp != nullptr)
		{
			
		}
		return temp;
	}
}
