#include<iostream>
using namespace std;

void fun(int n)
{
    if (n == 0) // Best Case
    {
        return;

    }
    cout<<n<<" ";

    fun(n-1);  // Worst Case
}
int main()
{
    fun(5);
    return 0;
}