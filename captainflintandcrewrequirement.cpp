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
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

map<ll,ll>level;

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        ll a[]={6,10,14,22,26,34,38,46,58,62,74,82,86,15,21,33,39,51,57,69,93};
        if(n<31) con
        else{
            coy
            ll fl=0;
            for(ll i=0;i<21;i++)
            {
                for(ll j=i+1;j<21;j++)
                {
                    for(ll k=j+1;k<21;k++)
                    {
                        x=a[i]+a[j]+a[k];
                        if(n-x!=a[i] and n-x!=a[j] and n-x!=a[k] and n-x>0)
                        {
                            co<<a[i]<< " "<<a[j]<< " " <<a[k]<< " "<<n-x<<endl;
                            fl=1;
                            br
                        }
                    }
                    if(fl) br
                }
                if(fl) br
            }
        }
        
    }
    return 0;
}