#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int revNo = 0;
    int dup = n;
    while (n > 0)
    {
        int ld = n % 10;
        revNo = (revNo * 10) + ld;
        n = n / 10;
    }
    cout << revNo<<endl;
    if (dup == revNo)
    {
        cout<<"Palindrome Number";
    }
    else
    {
        cout<<"Not Palindrome Number";
    }
    return 0;
}