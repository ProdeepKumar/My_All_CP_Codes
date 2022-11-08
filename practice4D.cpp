#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n)     printf("%lld\n",n);
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
vector<ll>in[4];
int main()
{
    ios::sync_with_stdio(0);
    ci>>n;
    f(i,0,n)
    {
        f(j,0,6)
        {
            ci>>x;
            in[i].pb(x);
        }
    }
    if(n==1) mx=9;
    else if(n==2) mx=99;
    else if(n==3) mx=999;
    for(ll i=1;i<=mx;i++)
    {
        if(n==1)
        {
            bool f=false;
            f(j,0,6)
            {
                if(in[0][j]==i)
                {
                    f=true;
                    br
                }
            }
            if(!f)
            {
                co<<i-1;
                return 0;
            }
        }
        else if(n==2)
        {
            bool f=false;
            for(ll ii=0;ii<6;ii++)
            {
                for(ll jj=0;jj<6;jj++)
                {
                    x=in[0][ii]*10+in[1][jj];
                    y=in[1][ii]*10+in[0][jj];
                    if(x==i or y==i)
                    {
                        f=true;
                        br
                    }
                }
            }
            if(!f)
            {
                co<<i-1;
                return 0;
            }
        }
        else
        {
            bool f=false;
            for(ll ii=0;ii<6;ii++)
            {
                for(ll jj=0;jj<6;jj++)
                {
                    for(ll kk=0;kk<6;kk++)
                    {
                        x=in[0][ii]*1000;
                        y=in[1][]
                        if
                    }
                }
            }
            if(!f)
            {
                co<<i-1;
                return 0;
            }
        }
        
    }
    return 0;
}