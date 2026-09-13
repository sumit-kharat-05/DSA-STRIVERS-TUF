#include <iostream>
using namespace std;

void printPattern6()
{
    for(int i = 5; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

int main()
{
    printPattern6();
    return 0;
}