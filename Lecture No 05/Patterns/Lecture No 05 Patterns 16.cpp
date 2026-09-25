#include <iostream>
using namespace std;

void printPattern16()
{
    for (int i = 0; i < 5; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern16();
    return 0;
}