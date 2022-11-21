#include<iostream>
using namespace std;
int t,n,c,res,front,back,vis[101][101],g[101][101],rare[5][2];
struct node{
    int xx,yy,val;
};
node q[100001];
void init()
{
    front=back=0;
}
bool empty()
{
    return (front==back);
}
void push(node src)
{
    q[back++]=src;
}
node pop()
{
    return q[front++];
}
void reset()
{
    for(int ii=0;ii<n;ii++)
    {
        for(int jj=0;jj<n;jj++) vis[ii][jj]=0;
    }
}
bool valid(int xx,int yy)
{
    return (xx>=0 && xx<n && yy>=0 && yy<n);
}
int fx[]={-1,1,0,0};
int fy[]={0,0,1,-1};

int call(int sx,int sy,int dx,int dy)
{
    push({sx,sy,0});
    vis[sx][sy]=1;
    while(!empty())
    {
        node top=pop();
        int ak=top.xx;
        int dui=top.yy;
        int tin=top.val;

        if(ak==dx && dui==dy) return tin+1;

        for(int i=0;i<4;i++)
        {
            int newx=ak+fx[i];
            int newy=dui+fy[i];
            int newval=tin+1;

            if(valid(newx,newy))
            {
                if(g[newx][newy]==1 && vis[newx][newy]==0)
                {
                    push({newx,newy,newval});
                    vis[newx][newy]=1;
                }
            }
        }
    }
}

int main()
{
    cin>>t;
    int ca=0;
    while(ca++<t)
    {
        cin>>n>>c;
        for(int i=0;i<c;i++)
        {
            cin>>rare[i][0]>>rare[i][1];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>g[i][j];
            }
        }
        res=99999999;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(g[i][j]==1)
                {
                    
                    int tmp=0;
                    for(int k=0;k<c;k++)
                    {
                        reset();
                        init();
                        tmp=max(tmp,call(i,j,rare[k][0]-1,rare[k][1]-1));
                    }
                    res=min(res,tmp);
                }
            }
        }
        cout<<"#"<<ca<<' '<<res-1<<endl;
    }
}