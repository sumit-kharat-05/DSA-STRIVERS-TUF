#include <iostream>
using namespace std;

void printPattern18()
{
    for (int i = 0; i < 5; i++)
    {
        for(char ch='E'-i;ch<='E';ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern18();
    return 0;
}