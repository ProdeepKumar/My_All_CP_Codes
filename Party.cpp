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
ll parent[2001],setsize[2001];
ll find(ll x)
{
    if(parent[x]==x) return x;
    else return parent[x]=find(parent[x]);
}
void disjoint_set(ll x,ll y)
{
    x=find(x);
    y=find(y);
    if(x==y) return;
    if(setsize[x]>setsize[y])
    {
        parent[y]=x;
        setsize[x]+=setsize[y];
    }
    else
    {
        parent[x]=y;
        setsize[y]+=setsize[x];
    }
    
}
int main()
{
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>n>>k;
    f(i,1,n+1)
    {
        parent[i]=i;
        setsize[i]=1;
    }
    f(i,1,k+1)
    {
        ci>>x>>y;
        disjoint_set(x,y);
    }
    ci>>m;
    f(i,1,m+1)
    {
        ci>>x>>y;
        p=find(x);
        q=find(y);
        if(p==q) setsize[p]=0;
    }
    res=0;
    f(i,1,n+1) res=max(res,setsize[find(i)]);
    co<<res;
    return 0;
}