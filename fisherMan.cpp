#include<iostream>
using namespace std;
int main()
{
    int n,gx,gy,gz,fx,fy,fz;
    cin>>n>>gx>>gy>>gz>>fx>>fy>>fz;
    int x=n-fx-fy-fz;
    int boundary1=1+x;
    int boundary2=boundary1+fx;
    int boundary3=boundary2+fy;
    int res=1e5;
    for(int i=1;i<=boundary1;i++)
    {
        for(int j=i+fx;j<=boundary2;j++)
        {
            for(int k=j+fy;k<=boundary3;k++)
            {
                int sum=0;
                for(int p=i;p<i+fx;p++) sum+=abs(gx-p);
                for(int p=j;p<j+fy;p++) sum+=abs(gy-p);
                for(int p=k;p<k+fz;p++) sum+=abs(gz-p);
                sum+=fx+fy+fz;
                res=min(res,sum);
            }
        }
    }
    cout<<res<<endl;
}