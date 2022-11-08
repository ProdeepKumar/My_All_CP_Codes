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


void bfs(ll start,map<ll,vector<ll> > in)
{
    ll x,y;
    queue<ll>grph;
    grph.push(start);
    level[start]=0;
    while (!grph.empty())
    {
        x=grph.front();
        grph.pop();
        for(ll i=0;i<in[x].size();i++)
        {
            y=in[x][i];
            if(!level.count(y))
            {
                level[y]=level[x]+1;
                grph.push(y);
            }
        }
    }
}

int main()
{
    ll n,g, k, m, mx = 0, mn = 1e9, c, res, c1, x, y, w, z, c2;
    ll cas=1;
    while(ci>>n)
    {
        if(n==0) br
        map<ll,vector<ll> >in;
        f(0,n)
        {
            ci>>x>>y;
            in[x].pb(y);
            in[y].pb(x);
        }
        while(ci>>x>>y)
        {
            if(x==0 and y==0) br
            level.clear(); 
            bfs(x,in);
            ll cnt=0;
           for(auto it : level)
           {
               if(it.se>y) cnt++;
           }
           cnt+=in.size()-level.size();
            printf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n", cas++, cnt, x, y);
           
        } 
    }
    return 0;
}