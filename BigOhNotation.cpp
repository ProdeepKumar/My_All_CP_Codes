#include<bits/stdc++.h>
using namespace std;

map<int,int>pos1,pos2;
int main()
{
    int n;
    cin>>n;
    int num1[n],num2[n];
    pos1.clear();
    pos2.clear();
    for(int i=0;i<n;i++) cin>>num1[i],pos1[num1[i]]=i+1;
    for(int i=0;i<n;i++) cin>>num2[i],pos2[num2[i]]=i+1;
    
    

}