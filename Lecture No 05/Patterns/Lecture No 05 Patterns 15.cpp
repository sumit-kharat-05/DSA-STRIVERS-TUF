#include<iostream>
using namespace std;

void printPattern15()
{
    for(int i=0;i<5;i++)
    {
        for(char ch='A';ch<='A'+(5-i-1);ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    printPattern15();
    return 0;
}