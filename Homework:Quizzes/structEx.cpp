#include <iostream>
using namespace std;

struct WeatherData
{
	double temperature;
	double humidity;
	string city;
	
};

//function prototypes

int main()
{
	WeatherData newyork;
	newyork.temperature = 57;
	
	WeatherData denver;
	denver.temperature = 89;
	
	cout << denver.temperature << endl;
	return 0;
}
