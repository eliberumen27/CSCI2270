#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct CarData
{
	string make;
	string model;
	string year;
};

int main(int argc, char *argv[])
{
	int index = 0;
	CarData carArray[10];
	ifstream inFile;
	string data;
	inFile.open(argv[1]);
	if( inFile.is_open() )
	{
	cout << "Successfully opened" << endl;
	}
	else
	{
	cout << "Could not open file" << endl;
	}
	while(getline(inFile, data))
	{
		stringstream ss(data);
		ss >> carArray[index].make;
		ss >> carArray[index].model;
		ss >> carArray[index].year;
		index++;	//index counts the number of lines in the file 
	}
	for( int i = 0; i < index; i++)
	{
		printf("------Car Number: %d ------\r\n Make: %s\r\n Model: %s\r\n Year: %s", i, carArray[i].make.c_str(), carArray[i].model.c_str(), carArray[i].year.c_str());
	}
	inFile.close();
	
	return 0;
}