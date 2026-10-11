// Que :- Print Name N Times

#include <iostream>
using namespace std;

void recFunc(int i, int n)
{
    if (i > n)
    {
        return;
    }

    recFunc(i + 1, n);

    cout << i << " ";
}

int main()
{
    int n;
    cin >> n;

    recFunc(1, n);

    return 0;
}