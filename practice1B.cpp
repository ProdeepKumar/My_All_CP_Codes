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

int main()
{
    ios::sync_with_stdio(0);
    //ci>>t;
    t=1;
    for(ll ca=0;ca<t;ca++)
    {
        ll a[6];
        f(i,0,6) ci>>a[i];
        bool fl=false;
        for(ll i=0;i<6;i++)
        {
            for(ll j=i+1;j<6;j++)
            {
                for(k=j+1;k<6;k++)
                {
                    x=a[i]+a[j]+a[k];
                    y=0;
                    for(ll ii=0;ii<6;ii++)
                    {
                        if(ii!=i and ii!=j and ii!=k) y+=a[ii];
                    }
                    if(x==y)
                    {
                        fl=true;
                        br
                    }
                }
                if(fl) br
            }
            if(fl) br
        }
        if(fl) coy
        else con
        
    }
    return 0;
}