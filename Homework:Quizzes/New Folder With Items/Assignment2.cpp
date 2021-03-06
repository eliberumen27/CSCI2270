//Description: Counts unique words in a file, and outputs the top N most common words...
#include <iostream>
#include using namespace std;
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

//struct to store word and count combinations
struct wordItem
{
	string word;
	int count;
}

/*
* 	Function name: getStopWords
* 	Purpose: read stop word list from file and store into vector
* @param ignoreWordFile - filename(the file storing ignore words)
* @param _vecIgnoreWords - store ignore words from the file(pass by reference)
* @return - none
* Note - The number of words is fixed to 50
*/
void getStopWords(char *ignoreWordFileName, vector<string> &_vecIgnoreWords);
/*
* Function name: isStopWord
* Purpose: to see if a word is a stop word
* @param word - a word (which you want to check if it is a stop word)
* @param _vecIgnoreWords - the vector type of string storing ignore/stop words
* @return - true (if word is a stop word), or false (otherwise)
*/
bool isStopWord(string word, vector<string> &_vecIgnoreWords);
/*
* Function name: getTotalNumberNonStopWords
* Purpose: compute the total number of words saved in the words array
(including repeated words)
* @param list - an array of wordItems containing non-stopwords
* @param length - the length of the words array
* @return - the total number of words in the words array (including repeated
words multiple times)
*/
int getTotalNumberNonStopWords(wordItem list[], int length);
/*
* Function name: arraySort
* Purpose: sort an array of wordItems, increasing, by their count fields
* @param list - an array of wordItems to be sorted
* @param length - the length of the words array

*/
void arraySort(wordItem list[], int length);
/*
* Function name: printTopN
* Purpose: to print the top N high frequency words
* @param wordItemList - a pointer that points to a *sorted* array of wordItems
* @param topN - the number of top frequency words to print
* @return none
*/
void printTopN(wordItem wordItemList[], int topN);
const int STOPWORD_LIST_SIZE = 50;
const int INITIAL_ARRAY_SIZE = 100;
// ./a.out 10 HW2-HungerGames_edit.txt HW2-ignoreWords.txt



	int main(int argc, char *argv[])
	{
	vector<string> vecIgnoreWords(STOPWORD_LIST_SIZE);
	// verify we have the correct # of parameters, else throw error msg &
	return
	if (argc != 4)
	{
	cout << "Usage: ";
	cout << argv[0] << " <number of words> <filename.txt>
	<ignorefilename.txt>";
	cout << endl;
	return 0;
	}
	/* **********************************
	1. Implement your code here.

	Read words from the file passed in on the command line, store and
	count the words.

	2. Implement the six functions after the main() function separately.
	********************************** */
	return 0;
	}



void getStopWords(char *ignoreWordFileName, vector<string> &_vecIgnoreWords)
{
    
	ifstream inFile;
	inFile.open(ignoreWordFileName);
	string line;
	
	while(getline(inFile, line))
	{
		_vecIgnoreWords.push_back(line);
	}
	inFile.close();

	return;
}

bool isStopWord(string word, vector<string> &_vecIgnoreWords)
{
	for(int i = 0; i < 50; i++)
	{
		if( word == *_vecIgnoreWords[i])
		{
			return true;
		}
	}
	
}

int getTotalNumberNonStopWords(wordItem list[], int length)
{
    int count = 0;
    for(int i = 0; i < length; i++)
    {
        count += list[i].count;
    }
    return count;
}

void arraySort(wordItem list[]], int length)
{
	int index = 0;
	for (int i = 0; i < length; i++)
	{
		for(int j = 0; j < length-1; j++)
		{
			if(list[j].count < list[j+1].count)
			{
				wordItem temp = list[j];
				list[j] = list[j+1];
				list[j+1] = temp;
			}
		}
	}
	return;
}

void printTopN(wordItem wordItemList[], int topN)
{
    for(int i = 0; i < topN; i++)
    {
        cout << wordItemList[i].count << " - " << wordItemList[i].word << endl;

    }
    return;
} 
