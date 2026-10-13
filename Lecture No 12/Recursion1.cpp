// Que :- Finacci Number Using Recursion

#include<iostream>
using namespace std;

int fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    int last = fibonacci(n-1);
    // cout<<last;
    int secondLast = fibonacci(n-2);
    // cout<<secondLast;
    return last + secondLast;
}
int main()
{
    int n;
    cout<<"Enter A Number :- ";
    cin>>n;
    cout<<"Fibonacci Number is :- "<<fibonacci(n)<<endl;
    return 0;
}