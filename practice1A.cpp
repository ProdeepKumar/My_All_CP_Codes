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
        ci>>n;
        vector<pi>a;
        f(i,0,n)
        {
            ci>>x>>y;
            a.pb({x,y});
        }
        if(a[0].fi>a[0].se) swap(a[0].fi,a[0].se);
        bool fl=false;
        f(i,1,n)
        {
            q=a[i-1].se;
            x=a[i].fi;
            y=a[i].se;
            if(x<=q and y<=q)
            {
                if(x>y) swap(a[i].fi,a[i].se);
            }
            else if(x<=q)
            {
                swap(a[i].fi,a[i].se);
            }
            else if(y<=q) continue;
            else
            {
                fl=true;
                br
            }
            
        }
        if(fl) con
        else coy
        
    }
    return 0;
}