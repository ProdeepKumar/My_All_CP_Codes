#include<iostream>
using namespace std;
int n,m,a[51][51],vis[51][51];

bool call(int row,int col,int com)
{
    vis[row][col]=1;
    if(a[row][col]==3) return true;
    bool xx=false;
    if(col+1<m && (a[row][col+1]==1 || a[row][col+1]==3) && vis[row][col+1]==0) 
    {
        xx=(xx || call(row,col+1,com));
    }
    if(col-1>=0 && (a[row][col-1]==1 || a[row][col-1]==3) && vis[row][col-1]==0) 
    {
        xx=(xx || call(row,col-1,com));
    }
    for(int ii=1;ii<=com;ii++)
    {
        if(row-ii>=0 && (a[row-ii][col]==1 || a[row-ii][col]==3) && vis[row-ii][col]==0)
        {
            xx=(xx || call(row-ii,col,com));
        }
    }
    for(int ii=1;ii<=com;ii++)
    {
        
        if(row+ii<n && (a[row+ii][col]==1 || a[row+ii][col]==3) && vis[row+ii][col]==0)
        {
            xx=(xx || call(row+ii,col,com));
        }
    }
    return xx;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            vis[i][j]=0;
        }
    }
    for(int l=0;l<n;l++)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vis[i][j]=0;
            }
        }
        bool ans=call(n-1,0,l);
        if(ans) 
        {
            cout<<l<<endl;
            break;
        }
    }
}