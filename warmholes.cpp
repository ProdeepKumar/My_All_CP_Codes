#include<iostream>
using namespace std;

struct hole{
    int startx,starty,endx,endy,cost;
};
hole a[10];
int vis[15];

int t,n,sourcex,sourcey,destx,desty;
int dist(int xx,int yy,int xxx,int yyy)
{
    return abs(xx-xxx)+abs(yy-yyy);
}
int call(int i,int j,int sum)
{
    if(i==destx && j==desty)
    {
        return sum;
    }
    int res=1e5;
    for(int ii=0;ii<=n;ii++)
    {
        if(vis[ii]==0)
        {
            vis[ii]=1;
            if(a[ii].startx==destx && a[ii].starty==desty)
            {
                int xx=call(destx,desty,sum+dist(i,j,destx,desty));
                res=min(res,xx);
            }
            else
            {
                int xx=call(a[ii].endx,a[ii].endy,sum+dist(i,j,a[ii].startx,a[ii].starty)+a[ii].cost);
                int yy=call(a[ii].startx,a[ii].starty,sum+dist(i,j,a[ii].endx,a[ii].endy)+a[ii].cost);
                res=min(res,min(xx,yy));
            }
            vis[ii]=0;
        }
    }
    return res;

}
int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>sourcex>>sourcey>>destx>>desty;
        for(int i=0;i<n;i++)
        {
            vis[i]=0;
            int ak,dui,tin,car,pach;
            cin>>ak>>dui>>tin>>car>>pach;
            a[i].startx=ak;
            a[i].starty=dui;
            a[i].endx=tin;
            a[i].endy=car;
            a[i].cost=pach;
        }
        vis[n]=0;
        a[n].startx=destx;
        a[n].starty=desty;
        a[n].endx=a[n].endy=a[n].cost=0;
        cout<<call(sourcex,sourcey,0)<<endl;
    }
}