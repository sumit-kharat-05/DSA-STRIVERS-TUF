#include <iostream>
using namespace std;

void printPattern13()
{
    int num = 1;
    for (int i = 1; i <= 5; i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<num;
            num += 1;
        }
        cout<<endl;
    }
}
int main()
{
    printPattern13();
    return 0;
}
