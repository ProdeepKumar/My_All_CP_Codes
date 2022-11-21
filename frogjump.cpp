#include<iostream>
using namespace std;

int n,m,sx,sy,dx,res,dy,front,back,a[101][101],vis[101][101],dp[101][101];
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};

bool valid(int xx,int yy)
{
    return (xx>0 && xx<=n && yy>0 && yy<=m);
}
struct node{
    int x,y,sum;
};
node q[1001];
void push(node val)
{
    q[back++]=val;
}
node pop()
{
    return q[front++];
}
void init()
{
    front=back=0;
}
bool empty()
{
    return (front==back);
}
void call(int xx,int yy,int sum)
{
    push({xx,yy,sum});
    vis[xx][yy]=1;
    while(!empty())
    {
        node cur=pop();
        int xxx=cur.x;
        int yyy=cur.y;
        int sss=cur.sum;
        if(xxx==dx && yyy==dy)
        {
            res=min(res,sss);
            continue;
        }
        for(int i=0;i<4;i++)
        {
            int nx=xxx+fx[i];
            int ny=yyy+fy[i];
            if(valid(nx,ny) && vis[nx][ny]==0 && a[nx][ny]==1)
            {
                if(ny==yyy)
                {
                    push({nx,ny,sss+1});
                    vis[nx][ny]=1;
                }
                else
                {
                    push({nx,ny,sss});
                    vis[nx][ny]=1;
                }
            }
        }
    }
    return;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            dp[i][j]=-1;
            vis[i][j]=0;
        }
    }
    cin>>sx>>sy>>dx>>dy;
    res=1e5;
    init();
    call(sx,sy,0);
    if(res==1e5) res=0;
    cout<<res<<endl;
}

// 6 28
// 1 1 0 1 0 0 1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 0
// 0 1 1 1 1 0 0 0 0 0 0 1 1 1 1 1 1 1 1 0 1 0 0 0 0 0 0 1
// 1 1 0 0 0 1 1 1 1 1 1 1 1 1 0 0 0 1 1 1 1 1 1 1 1 1 1 1
// 0 1 0 1 1 1 0 0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0 0
// 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 0 1 1 1 1 1 1
// 1 1 1 1 1 1 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 1 1 1 1 0 0 0
// 6 1 2 28