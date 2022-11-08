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
#define MAXN       300005

ll parent[MAXN],cnt[MAXN];
void init(ll n)
{
    f(i,0,n)
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
ll findsize(ll u)
{
    if(u==parent[u]) return cnt[u];
    return findsize(parent[u]);
}

int main()
{
    //freopen("input.txt","r",stdin);
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    while(ci>>n>>m and (n+m)>0)
    {
        init(n);
        f(i,0,m)
        {
            ci>>k;
            ci>>x;
            f(j,1,k)
            {
                ci>>y;
                Union(x,y);
            }
        }
        co<<findsize(0)<<endl;
    }
    return 0;
}