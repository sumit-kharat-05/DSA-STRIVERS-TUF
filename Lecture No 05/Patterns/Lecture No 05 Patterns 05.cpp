#include<iostream>
using namespace std;

void printPattern5()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern5();
    return 0;
}
