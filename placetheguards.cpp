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
ll one,zero;
ll vis[1000],color[1000];
vector<ll>in[500];

ll bfs(ll start)
{
    vis[start]=1;
    color[start]=0;
    queue<ll>grph;
    grph.push(start);
    while(!grph.empty())
    {
        x=grph.front();
        grph.pop();
        one+= (color[x]==1) ? 1 : 0;
        zero+= (color[x]==0) ? 1 : 0;
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
                if(color[x]==color[y])
                {
                    g=1;
                    return -1;
                }
            }
        }
    }
    return min(one,zero);
}

int main()
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    ios::sync_with_stdio(0);
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        mem(in,0);
        ci>>n>>m;
        f(i,0,m)
        {
            ci>>x>>y;
            in[x].pb(y);
            in[y].pb(x);
        }
        mem(vis,0);
        mem(color,0);
        res=0;
        f(i,0,n)
        {
            g=0;
            if(!vis[i])
            {
                one=zero=0;
                w=bfs(i);
                if(w==0) w++;
                else if(w==-1)
                {
                    co<<w<<endl;
                    br
                }
                res+=w;
            }
        }
        if(w!=-1)
            co<<res<<endl;
    }
    return 0;
}