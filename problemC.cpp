#include<bits/stdc++.h>
using namespace std;

int n,m,l,target;
int a[10][10],vis[10][10];

// Here the idea is Recursion+Backtracking
// I will go according to the rules of row and columns
// Decrease the length of the sequence by 1 in every call
// If the length is 0 then if the sum==target, then return true
// I will go to all possible indices and I will also backtrack from there
//     by doing vis[row][col]=0
// here if f==0 then I am doing the row rule, and if f==1 then I will follow
//      the column rule.
// This is the whole idea. Similar to dfs traversal in grid.


bool call(int row,int col,int f,int sum,int baki)
{
    if(row<0 or row>=m or col<0 or col>=n) return false;
    // cout<<sum<<' '<<baki<<endl;
    if(baki==0)
    {
        if(sum==target) return true;
        else return false;
    }
    bool xx=false;
    if(f==0)
    {
        for(int i=0;i<n;i++) 
        {
            if(!vis[row][i] and col!=i)
            {
                vis[row][i]=1;
                xx=(xx or call(row,i,1-f,sum+a[row][i],baki-1));
                vis[row][i]=0;
            }
        }   
    }
    else
    {
        for(int i=0;i<m;i++) 
        {
            if(!vis[i][col] and row!=i)
            {
                vis[i][col]=1;
                xx=(xx or call(i,col,1-f,sum+a[i][col],baki-1));
                vis[i][col]=0;
            }
        }
    }
    return xx;
}
int main()
{
    cin>>m>>n>>l>>target;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            vis[i][j]=0;
        }
    }
    bool ok=false;
    ok=call(0,0,0,0,l);
    if(ok) cout<<"YES"<<endl;
    else cout<<"N0"<<endl;
}