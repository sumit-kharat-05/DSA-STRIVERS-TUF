// Que :- Factorial Numbers Using Recursion (Functional)

#include<iostream>
using namespace std;

int fctrlRecFunc(int n)
{
    if(n == 0)
    {
        return 1;
    }
    return n * fctrlRecFunc(n-1);
}
int main()
{
    int n;
    cout<<"Enter A Number :-";
    cin>>n;
    cout<<"Factorial Of Number Is :-"<<fctrlRecFunc(n)<<endl;
    return 0;
}