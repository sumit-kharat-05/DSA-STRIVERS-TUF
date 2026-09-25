#include<iostream>
using namespace std;

void printPattern7()
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<5-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern7();
    return 0;
}