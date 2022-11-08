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

ll vis[1000],color[1000];
vector<ll>in[500];

bool bfs(ll start)
{
    ll x,y;
    vis[start]=1;
    queue<ll>grph;
    grph.push(start);
    color[start]=0;
    while (!grph.empty())
    {
        x=grph.front();
        grph.pop();
        for(ll i=0;i<in[x].size();i++)
        {
            y=in[x][i];
            if(vis[y]==0)
            {
                vis[y]=1;
                if(color[x]==0) color[y]=1;
                else if(color[x]==1) color[y]=0;
                grph.push(y);
            }
            else
            {
                if(color[x]==color[y]) return false;
            }
            
        }
    }
    return true;
    
}

int main()
{
    //cout << "Okey" << endl;
    ll n,g, k, m, mx = 0, mn = 1e9, c, res, c1, x, y, w, z, c2;
    while(ci>>n and n)
    {
        mem(in,0);
        ci>>m;
        f(0,m)
        {
            ci>>x>>y;
            in[x].pb(y);
            in[y].pb(x);
        }
        mem(vis,0);
        mem(color,0);
        bool chk;
        chk=bfs(0);
        if(chk) co<< "BICOLORABLE."<<endl;
        else co<< "NOT BICOLORABLE."<<endl;
    }
}