#include<bits/stdc++.h>   // I prefer to use c++ language.
using namespace std;

int main()
{
    int n,fact;
    cout<<"Please enter the input value: "<<endl;
    cin>>n;
    fact=1;
    for(int i=1;i<=n;i++) fact*=i;
    cout<<"Factorial of "<<n<<" is: "<<fact<<endl;
    return 0;
}