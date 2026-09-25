#include <iostream>
using namespace std;

void printPattern17()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakPoint = (2 * i + 1) / 2;
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << ch;
            if (j <= breakPoint)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        for (int j = 0; j < 5 - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
int main()
{
    printPattern17();
    return 0;
}