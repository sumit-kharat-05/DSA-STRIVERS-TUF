#include <iostream>
using namespace std;

void printPattern22()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (i == 0 || j == 0 || i == 4 - 1 || j == 7 - 1)
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
    printPattern22();
    return 0;
}