// Que :- Print Linearlly From 1 To N (Backtracking)

#include <iostream>
using namespace std;

void recFunc3(int i)
{
    if (i < 1)
        return;

    recFunc3(i - 1);
    cout << i << " ";
}


int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    recFunc3(n);
    return 0;
}