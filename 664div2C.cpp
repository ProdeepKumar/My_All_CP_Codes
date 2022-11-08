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

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>n>>m;
    vector<ll>a(n),b(m),c[n+1];
    for(auto &x:a) ci>>x;
    for(auto &x:b) ci>>x;
    f(i,0,n)
    {
        f(j,0,m)
        {
            c[i].pb(a[i]&b[j]);
        }
    }
    f(i,0,512)
    {
        bool ok=false;
        f(j,0,n)
        {
            bool fl=false;
            f(k,0,m)
            {
                if((c[j][k]|i)==i)
                {
                    fl=true;
                    br
                }
            }
            if(!fl)
            {
                ok=true;
                br
            }
        }
        if(!ok)
        {
            co<<i<<endl;
            br
        }
    }
    return 0;
}