#include<iostream>
using namespace std;

int n,a[50],vis[50],dp[50],res;

// bool check()
// {
//     for(int i=0;i<n;i++)
//     {
//         if(vis[i]==0) return false;
//     }
//     return true;
// }

void call(int sum,int baki)
{
    // cout<<sum<<endl;
    if(baki==0)
    {
        res=max(res,sum);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(vis[i]==0)
        {
            // if(dp[i]!=-1) return dp[i];
            int mul=1;
            vis[i]=1;
            int l=i-1,r=i+1;
            while(vis[l] && l>=0) l--;
            while(vis[r] && r<n) r++;
            if(l>=0) mul*=a[l];
            if(r<n) mul*=a[r];
            if(l<0 && r>=n) mul=a[i];
            call(sum+mul,baki-1);
            // res=max(res,xx);
            // dp[i]=res;
            vis[i]=0;
        }
    }
    return;
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i],vis[i]=0;
    res=-100;
    call(0,n);
    // for(int i=0;i<50;i++) dp[i]=-1;
    cout<<res<<endl;
}