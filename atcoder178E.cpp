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
    ci>>n;
    vector<pi>a(n),b(n);
    f(i,0,n)
    {
        ci>>x>>y;
        a[i]={x,y};
        b[i]={x+y,i};
    }
    sort(all(b));
    res=0;
    x=b[0].se;
    f(i,1,n)
    {
        y=b[i].se;
        p=abs(a[x].fi-a[y].fi)+abs(a[x].se-a[y].se);
        res=max(res,p);
    }
    x=b[n-1].se;
    f(i,0,n-1)
    {
        y=b[i].se;
        p=abs(a[x].fi-a[y].fi)+abs(a[x].se-a[y].se);
        res=max(res,p);
    }
    co<<res;
    return 0;
}