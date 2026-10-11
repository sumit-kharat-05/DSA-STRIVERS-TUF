// Que :- Print Number In Reverse Fashion From N To 1

#include <iostream>
using namespace std;

void recFunc2(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";   // print first
    recFunc2(n - 1);    // then recurse
}

int main()
{
    int n;
    cout << "Enter A Number :- ";
    cin >> n;
    recFunc2(n);
    cout << endl;
    return 0;
}