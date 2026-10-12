// Que :- Sum Of N Natural Numbers Using Recursion (Functional)

#include<iostream>
using namespace std;

int fnctnlRecFunc(int n)
{
    if(n == 0)
    {
        return 0;
    }
    return n + fnctnlRecFunc(n-1);
}
int main()
{
    int n;
    cout<<"Enter A Number :-";
    cin>>n;
    cout<<"Sum Of Numbers Is :-"<<fnctnlRecFunc(n)<<endl;
    return 0;
}