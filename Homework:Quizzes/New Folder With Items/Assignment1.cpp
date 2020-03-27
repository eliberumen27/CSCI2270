#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int insertIntoSortedArray(int myArray[], int numEntries, int newValue);

int main(int argc, char *argv[])
{
	int myArray[100];
	int index = 0;
	string data;
	ifstream inFile;
	inFile.open(argv[1]);
	
	if( inFile.is_open())
	{
		cout << argv[1] << endl;
	}
	else
	{
		cout << "Could not open file!" << endl;
		return -1;
	}
	
	while(getline(inFile, data))
	{
		stringstream ss(data);
		int val = stoi(data);
		if(val > 0 && val > myArray[index])
		{
			myArray[index] = myArray[index+1];
			ss >> myArray[index];
		}
		
		ss >> myArray[index];
		index++;
	}
	
	
	
	insertIntoSortedArray(myArray, 3, 4);
	return 0;
}

int insertIntoSortedArray(int myArray[], int numEntries, int newValue)
{
	int temp = 0;
	int i = 0;
	int j = numEntries;
	while(j > i)
	{
		myArray[j] = myArray[j-1];
		j--;
	}
	myArray[j] = newValue
	
	numEntries++;
	return numEntries;
}

//sample code
/*
int insertIntoSortedArray(int myArray[], int numEntries, int newValue)
{
    myArray[numEntries] = newValue;

    for(int i = numEntries; i > 0; i--)
    {
        for(int j = numEntries - 1; j >= 0; j--)
        {   
            if(myArray[j] > myArray[j+1])
            {
                int a = 0;
                a = myArray[j];
                myArray[j] = myArray[j+1];
                myArray[j+1] = a;
                
            }
            
        }
        
    }
	
	numEntries++;
	return numEntries;
}
THIS WORKS
*/
