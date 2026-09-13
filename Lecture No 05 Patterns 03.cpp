#include<iostream>
using namespace std;

void printPattern3()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern3();
    return 0;
}
