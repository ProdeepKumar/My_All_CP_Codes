#include<iostream>
using namespace std;

int t,n,vis[105];
struct node{
    int x,y;
};
node a[50],office,home;

int dist(int xx,int yy,int xxx,int yyy)
{
    return abs(xx-xxx)+abs(yy-yyy);
}
int call(int i,int j,int sum,int baki)
{
    // cout<<i<<' '<<j<<" Baki: "<<baki<<" sum: "<<sum<<endl;
    if(baki<=0)
    {
        sum+=dist(i,j,home.x,home.y);
        // cout<<i<<' '<<j<<' '<<sum<<endl;
        return sum;
    }
    int xx=0,res=1e9;
    for(int ii=0;ii<n;ii++)
    {
        if(vis[ii]==0)
        {
            // cout<<i<<' '<<j<<" theke "<<a[ii].x<<' '<<a[ii].y<<" a jacche. Baki: "<<baki<<endl;
            vis[ii]=1;
            xx=call(a[ii].x,a[ii].y,sum+dist(i,j,a[ii].x,a[ii].y),baki-1);
            res=min(res,xx);
            vis[ii]=0;
        }
    }
    return res;
}
int main()
{
    t=10;
    while(t--)
    {
        cin>>n>>office.x>>office.y>>home.x>>home.y;
        for(int i=0;i<n;i++) cin>>a[i].x>>a[i].y,vis[i]=0;
        int mn=1e8;
        int ans=call(office.x,office.y,0,n);
        cout<<"# "<<10-t<<' '<<ans<<endl;
    }
}