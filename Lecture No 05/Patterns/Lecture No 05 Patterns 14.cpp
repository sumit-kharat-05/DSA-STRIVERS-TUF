#include<iostream>
using namespace std;

void printPattern14()
{
    for(int i=0;i<5;i++)
    {
        for(char ch='A';ch<='A'+i;ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }
}
int main()
{
    printPattern14();
    return 0;
}