// Que :- Print Linearlly From 1 To N

#include <iostream>
using namespace std;

void recFunc1(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << " ";
    recFunc1(i + 1, n);
}
int main()
{
    int n;
    cout << "Enter A Number :- ";
    cin >> n;
    recFunc1(1, n);
    return 0;
}