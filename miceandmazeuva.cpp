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

#define MX 100005

struct node{
    ll val,cost;
};

vector<node>graph[MX];
bool vis[MX];
ll dist[MX];

void reset()
{
    f(i,0,MX)
    {
        graph[i].clear();
        vis[i]=0;
        dist[i]=INT_MAX;
    }
}

class cmp
{
    public:
      bool operator() (node &A, node &B){
          if(A.cost>B.cost) return true;
          return false;
      }
};

ll dijkstra(ll source,ll time)
{
    priority_queue<node,vector<node> ,cmp> pq;
    pq.push({source,0});

    ll cnt=0;
    while(!pq.empty())
    {
        node current=pq.top();
        pq.pop();

        ll val=current.val;
        ll cost=current.cost;

        if(vis[val]) continue;   ///if visited, then we do not work with that node

        dist[val]=cost;      ///cost is finalized here
        vis[val]=1;

        if(dist[val]<=time)
        {
            cnt++;
        }
        for(ll i=0;i<graph[val].size();i++)
        {
            ll next=graph[val][i].val;
            ll nxtcost=graph[val][i].cost;

            if(!vis[next])
            {
                pq.push({next,cost+nxtcost});
            }            
        }

    }
    return cnt;
}

int main()
{
    //freopen("input.txt","r",stdin);
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        reset();
        ll e,ti;
        ci>>n>>e>>ti;
        ci>>m;
        f(i,0,m)
        {
            ci>>x>>y>>z;
            graph[y].pb({x,z});
        }
        res=dijkstra(e,ti);
        if(ca>0) en
        co<<res<<endl;
    }
    return 0;
}