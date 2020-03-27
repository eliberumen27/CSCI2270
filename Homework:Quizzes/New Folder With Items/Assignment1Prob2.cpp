#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void addUser(vector<list> *gradeList, string name, float _gpa, int _age);
void printList(const vector<list> gradeList)
int main(int argc, char *argv[])
{
	struct list
	{
		string username;
		float gpa;
		int age;
	};
	string data;
	vector<struct> myLists;
	ifstream inFile;
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
		string user;
		float theGpa;
		int theAge;
		
		stringstream ss(data);
		getline(data, user, ",");
		getline(data, theGpa, ",");
		theGpa2 = stof(theGpa);
		getline(data, theAge, ",");
		theAge2 = stoi(theAge);
		addUser(user, theGpa, theAge);
		//printList(?) unknown parameter
		//“username [gpa] age: #” e.g., “elle [3.87] age: 12" .
		
		
	}
	return 0;
}

void addUser(vector<list> *gradeList, string name, float _gpa, int _age)
{
	list myList;
	myList.username = name;
	myList.gpa = _gpa;
	myList.age = _age;
	gradeList->push_back(myList);
}

void printList(const vector<list> gradeList)
{
	for(int i = 0; i < gradeList.size(); i++)
	{
		printf("%s [%d] age: %d", gradeList[i].username, gradeList[i].gpa, gradeList[i].age);
	}
}

