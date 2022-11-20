#include<iostream>
#include<set>
#include<queue>

using namespace std;

int n,m,x,y,l,t,front,back,res,a[1001][1001],vis[1001][1001];

struct node{
    int xx,yy,ll;
};
node q[1000005];
void init()
{
    front=back=0;
}
void push(node var)
{
    q[back++]=var;
}
node pop()
{
    return q[front++];
}
bool valid(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<m);
}
bool empty()
{
    return (front==back);
}
bool left(int x,int y)
{
    return (a[x][y]==1 || a[x][y]==3 || a[x][y]==6 || a[x][y]==7);
}
bool right(int x,int y)
{
    return (a[x][y]==1 || a[x][y]==3 || a[x][y]==4 || a[x][y]==5);
}
bool up(int x,int y)
{
    return (a[x][y]==1 || a[x][y]==2 || a[x][y]==4 || a[x][y]==7);
}
bool down(int x,int y)
{
    return (a[x][y]==1 || a[x][y]==2 || a[x][y]==5 || a[x][y]==6);
}
int call(int i,int j,int baki)
{
    res=0;
    push({i,j,baki});
    vis[i][j]=1;
    while(!empty())
    {
        node cur=pop();
        int X=cur.xx;
        int Y=cur.yy;
        int L=cur.ll;
        if(L==0) continue;
        // cout<<X<<' '<<Y<<endl;
        res++;
        if(valid(X,Y-1) && left(X,Y) && right(X,Y-1) && !vis[X][Y-1]) // Go left
        {
            push({X,Y-1,L-1});
            vis[X][Y-1]=1;
        }
        if(valid(X,Y+1) && right(X,Y) && left(X,Y+1) && !vis[X][Y+1]) // Go right
        {
            push({X,Y+1,L-1});
            vis[X][Y+1]=1;
        }
        if(valid(X-1,Y) && up(X,Y) && down(X-1,Y) && !vis[X-1][Y]) // Go up
        {
            push({X-1,Y,L-1});
            vis[X-1][Y]=1;
        }
        if(valid(X+1,Y) && down(X,Y) && up(X+1,Y) && !vis[X+1][Y]) // Go down
        {
            push({X+1,Y,L-1});
            vis[X+1][Y]=1;
        }
    }
    return res;
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>x>>y>>l;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) cin>>a[i][j],vis[i][j]=0;
        init();
        res=0;
        if(a[x][y]>0)
            cout<<call(x,y,l)<<endl;
        else cout<<0<<endl;
    }
}