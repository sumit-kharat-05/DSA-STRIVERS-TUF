#include<iostream>
using namespace std;

void printPattern1()
{
for(int i=0;i<4;i++)
{
    for(int j=0;j<4;j++)
    {
        cout<<"*";
    }
    cout<<endl;
}
}
int main()
{
    printPattern1();
    return 0;
}
