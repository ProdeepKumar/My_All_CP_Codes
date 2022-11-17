#include<iostream>
using namespace std;

int n,a[50],vis[50];

bool check()
{
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0) return false;
    }
    return true;
}

int call(int sum)
{
    // cout<<sum<<endl;
    if(check()) return sum;
    int xx,res=0;
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            int mul=1;
            vis[i]=1;
            int l=i-1,r=i+1;
            while(vis[l] && l>=0) l--;
            while(vis[r] && r<n) r++;
            if(l>=0) mul*=a[l];
            if(r<n) mul*=a[r];
            if(l<0 && r>=n) mul=a[i];
            xx=call(sum+mul);
            res=max(res,xx);
            vis[i]=0;
        }
    }
    return res;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i],vis[i]=0;
    cout<<call(0)<<endl;
}