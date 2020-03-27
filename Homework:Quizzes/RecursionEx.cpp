#include <iostream>
using namespace std;
//cout << getSumMonths(list, SIZE - 1);

//...

int getSumMonths(int list[], int index)
{
	if(index == 0)
	{
		return list[index];
	}
	else
	{
		return list[index] + getSumMonths(list, index - 1);
	}
}

int main()
{
return 0;
}

//Try Recursion for a factorial function***