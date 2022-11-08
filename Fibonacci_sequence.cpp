#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,y;
    x=0;
    y=1;
    cout<<"Please enter the input value: "<<endl;
    cin>>n;
    cout<<"The first "<<n<<" Fibonacci numbers are: "<<endl; 
    cout<<x<<" ";
    for(int i=1;i<n;i++)
    {
        cout<<y<<' ';
        int p=x+y;
        x=y;
        y=p;
    }
    cout<<endl;
    return 0;
}