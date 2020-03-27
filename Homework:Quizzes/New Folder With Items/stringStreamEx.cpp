#include <iostream>
#include <sstream>
using namespace std;
//compiling: g++ -std=c++11 "nameOfFile"
int main()
{
	string mystring = "me, my , oh";
	stringstream ss(mystring);
	string line;
	while(getline(ss, line, ","))
	{
		cout << line << endl;
	}
	
	return 0;
}