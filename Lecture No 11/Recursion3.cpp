// Que :- Check The String Is Palindrome Or Not Using Recursion

#include<iostream>
using namespace std;

bool isPalindrome(int i, string &s)
{
    if(i >= s.size()/2);
    {
        return true;
    }
    if(s[i] != s[s.size()-i-1])
    {
        return false;
    }
}
int main()
{
    string s = "madam";
    isPalindrome(0,s) ? cout<<"String Is Palindrome"<<endl : cout<<"String Is Not Palindrome"<<endl;
    return 0;
}