#include <iostream>
using namespace std;

void printPattern24()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i ; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2*5-(2*i-1); j++)
        {
            if (i == 0 || j == 0 || j == 2 * 5 - (2*i+1)-1)
            {
                cout << "*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    printPattern24();
    return 0;
}