#include <iostream>
using namespace std;

void printPattern6()
{
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <=5-i+1; j++)
        {
            cout << j <<" ";
        }
        cout << endl;
    }
}

int main()
{
    printPattern6();
    return 0;
}