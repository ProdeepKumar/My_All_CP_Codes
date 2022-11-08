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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t,timer=0;
vector<ll>graph[1000];
vector<ll>vis(1000),tin(1000),low(1000);
ll arti[1000];

void dfs(ll v,ll p=-1)
{
    vis[v]=1;
    tin[v]=low[v]=timer++;
    ll child=0;
    for(ll to:graph[v])
    {
        if(to==p) continue;
        if(vis[to])
        {
            low[v]=min(low[v],tin[to]);
        }
        else
        {
            dfs(to,v);
            low[v]=min(low[v],low[to]);
            if(low[to]>=tin[v] and p!=-1) arti[v]=1;
            ++child;
        }
        
    }
    if(p==-1 and child>1) arti[v]=1;

}
void solve()
{
    while(ci>>n and n)
    {
        f(i,1,n+1) tin[i]=low[i]=-1,vis[i]=0,graph[i].clear();
        string s;
        while(getline(cin,s),s!="0")
        {
            stringstream ss(s);
            ss>>x;
            while(ss>>y)
            {
                graph[x].pb(y);
                graph[y].pb(x);
            }
        }
        res=0;
        timer=0;
        mem(arti,0);
        f(i,1,n+1)
        {
            if(!vis[i]) dfs(i);
        }
        for(ll jj:arti) res+=jj;
        co<<res<<endl;
    }


}

int main()
{
        
//#ifdef LOCAL
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
//#endif
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        //ci>>t;
        t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}