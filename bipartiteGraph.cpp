#include<iostream>
using namespace std;

int n,g[51][51],color[51];

bool isbipartite(int u)
{
    bool xx=true;
    for(int i=0;i<n;i++)
    {
        if(g[u][i]==1)
        {
            if(color[i]==-1)
            {
                color[i]=1-color[u];
                xx = (xx && isbipartite(i));
            }
            else if(color[u]==color[i])
            {
                return false;
            }
        }
    }
    return xx;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        color[i]=-1;
        for(int j=0;j<n;j++)
        {
            cin>>g[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(color[i]==-1)
        {
            color[i]=0;
            if(isbipartite(i)==false)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }
    for(int i=0;i<n;i++) 
    {
        if(color[i]==0) cout<<i<<' ';
    }
    cout<<endl;
}