#include<iostream>
using namespace std;

int t,n,a[20][5],res,ans;

void call(int row,int col,int sum,int bomb,int effect)
{
    if(row<0) 
    {
        res=max(res,sum);
        return;
    }

    for(int i=-1;i<=1;i++)
    {
        if((col+i)<0 || (col+i)>4) continue;
        if(a[row][col+i]==1 || a[row][col+i]==0) //no enemy
        {
            if(bomb==0)
            {
                call(row-1,col+i,sum+a[row][col+i],bomb,effect-1);
            }
            else
            {
                call(row-1,col+i,sum+a[row][col+i],bomb,effect);
            }
        }
        else //enemy
        {
            if(bomb==0)
            {
                if(effect>0)
                {
                    call(row-1,col+i,sum,bomb,effect-1); //bomb already used
                }
            }
            else
            {
                call(row-1,col+i,sum,0,5);
            }
        }
    }
    return;


}
int main()
{
    cin>>t;
    int ca=0;
    while(ca++<t)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<5;j++)
            {
                cin>>a[i][j];
            }
        }
        res=0;
        call(n-1,2,0,1,0);
        cout<<"#"<<ca<<' '<<res<<endl;
    }
}