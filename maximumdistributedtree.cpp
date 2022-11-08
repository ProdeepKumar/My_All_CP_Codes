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
vector<ll>tree[100005],edge;
vector<ll>vis(100005),child(100005);
const ll M=1000000007;

void dfs(ll u)
{
    vis[u]=1;
    for(ll v : tree[u])
    {
        if(!vis[v])
        {
            dfs(v);
            child[u]+=child[v];
            edge.pb(child[v]*(n-child[v]));
        }
    }
    child[u]++;
}

int main()

    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        f(i,1,n+1) 
        {
            tree[i].clear();
            vis[i]=0;
            child[i]=0;
        }
        f(i,1,n)
        {
            ci>>x>>y;
            tree[x].pb(y);
            tree[y].pb(x);
        }
        edge.clear();
        dfs(1);
        sort(allr(edge));
        ci>>m;
        vector<ll>facts;
        c=0;
        f(i,0,m) ci>>x,facts.pb(x);
        if(m<=n-1)
        {
            for(ll i=m;i<n-1;i++)
            {
                facts.pb(1);
            }
            sort(allr(facts));
        }
        else
        {
            sort(allr(facts));
            x=m-n+1;
            for(ll i=0;i<x;i++) 
            {
                facts[i+1]*=facts[i];
                facts[i+1]%=M;
                c++;
            }
        }
        res=0;
        for(ll i=0;i<edge.size();i++)
        {
            res+=(edge[i]*facts[c++])%M;
            res%=M;
        }
        co<<res<<endl;
    }
    return 0;
}