#include <iostream>
using namespace std;

void printPattern21()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || j == 0 || i == 4 - 1 || j == 4 - 1)
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
    printPattern21();
    return 0;
}