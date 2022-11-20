#include<iostream>
#include<vector>
using namespace std;

int n,dp[501][501];
int call(vector<int>&a,int i,int j)
{
    if(i>j) return 0;
    if(i==j)
    {
        int tmp=a[i];
        if(i-1>=0) tmp*=a[i-1];
        if(i+1<n) tmp*=a[i+1];
        return tmp;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int xx=0;
    for(int k=i;k<=j;k++)
    {
        int tmp=a[k];
        if(i-1>=0) tmp*=a[i-1];
        if(j+1<n) tmp*=a[j+1];
        tmp+=call(a,i,k-1)+call(a,k+1,j);
        xx=max(xx,tmp);
    }
    return dp[i][j]=xx;
}

int main()
{
    cin>>n;
    vector<int>a={1};
    for(int i=0;i<n;i++) 
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    a.push_back(1);
    n=a.size();
    for(int i=0;i<501;i++) for(int j=0;j<501;j++) dp[i][j]=-1;
    cout<<call(a,1,n-2)<<endl;
}