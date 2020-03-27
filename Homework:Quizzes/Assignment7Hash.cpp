/*
Elijah Berumen
Data Structures Homework 7
Instructor: Boese
*/
#include <iostream>
using namespace std;
#include "Assignment7Hash.hpp"

HashTable::HashTable(int hashTableSize);
{
	for(int i = 0; i < hashTableSize; i++)
	{
		hashTable[i] = NULL;

		/*
		hashTable[i] = new wordItem;
		hashTable[i]->word = "empty";
		hashTable[i]->count = 0;
		hashTable[i]->next = NULL;
		*/
	}
}

HashTable::~HashTable()
{

}

void HashTable::getStopWords(char *ignoreWordFileName)
{
	ifstream inFile;
	inFile.open(ignoreWordFileName);
	string line;

	while(getline(inFile, line))
	{
		vecIgnoreWords.push_back(line);
	}
	inFile.close();
}

bool HashTable::isStopWord(std::string word)
{
	for(int i = 0; i < vecIgnoreWords.size(); i++)
	{
		if(word == vecIgnoreWords[i])
		{
			return true;
		}
	}
	return false;
}

bool HashTable::isInTable(std::string word)
{
	int index = getHash(word);
	wordItem* ptr = hashTable[index];
	for(int i = 0; i < 50; i++)
	{
		if(word == hashTable[index])
		{
			return true;
		}
		else
		{
			while(ptr->next != NULL)
			{
				if(ptr->word == word)
					return true;
				else
					return false;
			}
		}
	}
	return false;
}

void HashTable::incrementCount(std::string word)
{

	int index = getHash(word);
	wordItem* ptr = hashTable[index];
	if(hashTable[index] == word)
	{
		hashTable[index].count++;
	} //pointer to location of wordItem
	else
	{
		while(ptr->next != NULL)
		{
			if(ptr->word == word)
				hashTable[index].count++;
		}
	}
}

void HashTable::addWord(std::string word)
{
	int index = getHash(word);
	wordItem* item = new wordItem;
	item->word = word;
	item->next = hashTable[index];
	hashTable[index] = item;

}

int HashTable::getTotalNumberNonStopWords()
{

}

void HashTable::printTopN(int n)
{

}

int HashTable::getNumUniqueWords()
{

}

int HashTable::getNumCollisions()
{

}
