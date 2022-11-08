#include<bits/stdc++.h>
using namespace std;

string str;
bool PalindromCheck(int left,int right)
{
    if(left>right) return true;
    if(str[left]==str[right])
    {
        PalindromCheck(left+1,right-1);
    }
    else
    {
        return false;
    }
    
}
int main()
{
    cout<<"Please enter the input string: "<<endl;
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++) str[i]=tolower(str[i]);
    bool check;

    check=PalindromCheck(0,n-1);

    if(n%2==0)
    {
        if(check==true)
            cout<<"Even Palindrome"<<endl;
        else 
            cout<<"Not a Palindrome"<<endl;
    }
    else
    {
        if(check==true)
            cout<<"Odd Palindrome"<<endl;
        else 
            cout<<"Not a Palindrome"<<endl;
    }
    
}