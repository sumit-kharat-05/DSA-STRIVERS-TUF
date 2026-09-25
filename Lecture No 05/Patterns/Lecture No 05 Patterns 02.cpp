#include<iostream>
using namespace std;

void printPattern2()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern2();
    return 0;
}
