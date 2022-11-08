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
vector<ll>G[200005];
ll vis[30];
map<ll,ll>mp;

void dfs(ll u)
{
    vis[u]=1;
    for(ll v:G[u])
    {
        if(!vis[v])
        {
            dfs(v);
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    ci>>n;
    f(i,0,n)
    {
        string s;
        ci>>s;
        ll u=s[0]-'a';
        mp[u]=1;
        f(j,1,s.size())
        {
            ll v=s[j]-'a';
            G[u].pb(v);
            G[v].pb(u);
        }
    }
    res=0;
    f(i,0,26)
    {
        if(mp[i] and !vis[i])
        {
            res++;
            dfs(i);
        }
    }
    co<<res;
    return 0;
}