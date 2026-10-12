// Que :- Reverse Array Using Recursion (Single Pointer)

#include <iostream>
using namespace std;

void rvrsarryRecFunc1(int arr[], int i, int n)
{
    if (i >= n / 2)
    {
        return;
    }
    swap(arr[i], arr[n - i - 1]);
    rvrsarryRecFunc1(arr, i + 1, n);
}
int main()
{
    int n;
    cout << "Enter A Size Of Array :- ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter A Element At Index " << i << " :- ";
        cin >> arr[i];
    }
    rvrsarryRecFunc1(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << "Reverse Array Is :- " <<arr[i]<< endl;
    }
}