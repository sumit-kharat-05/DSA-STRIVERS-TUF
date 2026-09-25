#include<iostream>
using namespace std;

void printPattern23()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2*i+1 ; j++)
        {
            if (j==0 || j==2*i || i==4 )
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
}
int main()
{
    printPattern23();
    return 0;
}