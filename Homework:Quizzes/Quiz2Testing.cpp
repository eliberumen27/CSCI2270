#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

int funcThatDoesSomething(int inputOne)
{
    if(inputOne > 0)
    {
        cout << inputOne << ",";
        return (inputOne + funcThatDoesSomething(inputOne - 1));
    }

    cout << inputOne << ";";
    return 0;
}

int main(int argc, char* argv[])
{
    int returnValue = funcThatDoesSomething(8);
    cout << "Returning:" << returnValue;
    return 0;
}
