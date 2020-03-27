#include <iostream>
using namespace std;

int myFunction(int n)
{
    int result = 0;
    if(n == 0)
        return 0;
    if (n == 1)
        return 1;
    result = myFunction(n-1) + myFunction(n-2);
    return result;
}

int main()
{
    cout << myFunction(4);
    return 0;
}
