// Que :- Reverse Array Using Recursion

#include <iostream>
using namespace std;

void rvrsarryRecFunc(int arr[],int left,int right)
{
    if(left >= right)
    {
        return;
    }
    swap(arr[left],arr[right]);
    rvrsarryRecFunc(arr,left+1,right-1);
}
int main()
{
    int arr[5] = {89,65,32,85,25};

    rvrsarryRecFunc(arr,0,4);

    cout<<"Reverse Array Is :- "<<endl;

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
    return 0;
}