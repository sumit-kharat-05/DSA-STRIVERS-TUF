#include <iostream>
using namespace std;

void printPattern19()
{
    int initialSpace = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << "*";
        }
        initialSpace += 2;
        cout<<endl;
    }
     initialSpace = 8;
      for (int i = 1; i <=5; i++)
    {
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < initialSpace; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout << "*";
        }
        initialSpace -= 2;
        cout<<endl;
    }
}
int main()
{
    printPattern19();
    return 0;
}