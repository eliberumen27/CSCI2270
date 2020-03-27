#include <iostream>
using namespace std;

void printList(int list[], int SIZE);
void multiplyByTwo(int _list[], int _SIZE);
//function prototype above int main()
int main()
{
    const int SIZE = 4;
    int list[SIZE] = {1, 2, 3, 4};
    printList(list, SIZE);
    multiplyByTwo(list, SIZE);

    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;

    return 0;
}
void multiplyByTwo(int _list[], int _SIZE)
{
    for (int i = 0; i < _SIZE; i++)
    {
        _list[i] *= 2;
    }
    printList(_list, _SIZE);
}
void printList(int list[], int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << list[i] << " ";
    }
    cout << endl;
}
