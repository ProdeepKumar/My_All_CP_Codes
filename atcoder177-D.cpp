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
#define MAXN       200005

ll parent[MAXN],cnt[MAXN];

void reset(ll n)
{
    f(i,1,n+1)
    {
        parent[i]=i;
        cnt[i]=1;
    }
}

ll find(ll u)
{
    if(u==parent[u]) return u;
    return parent[u]=find(parent[u]);
}

void Union(ll u,ll v)
{
    ll p=find(u);
    ll q=find(v);
    if(p!=q)
    {
        parent[q]=p;
        cnt[p]+=cnt[q];
    }
}

int main()
{
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>n>>m;
    reset(n);
    f(i,0,m)
    {
        ci>>x>>y;
        Union(x,y);
    }
    res=0;
    f(i,1,n+1) res=max(res,cnt[i]);
    co<<res;
    return 0;
}