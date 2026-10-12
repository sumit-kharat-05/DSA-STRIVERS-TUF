// Que :- Sum Of N Natural Numbers Using Recursion (Parametarized)

#include<iostream>
using namespace std;

void prmtrzdRecFunc(int i , int sum)
{
    if(i<1)
    {
        cout<<"Sum Of Numbers Is :-"<<sum<<endl;
        return ;
    }
    prmtrzdRecFunc(i-1,sum+i);
}
int main()
{
    int n;
    cout<<"Enter A Number :-";
    cin>>n;
    prmtrzdRecFunc(n,0);
    return 0;
}