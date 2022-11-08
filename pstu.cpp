//#pragma GCC target("avx,avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m)
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p)
#define pf1(n)     printf("%lld\n",n)
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define p_b        pop_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
#define INF        0x3f3f3f3f
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,a,b,p,q,r,d,l,s,t;

ll fx[]={2,2,-2,-2,1,1,-1,-1,};
ll fy[]={1,-1,1,-1,2,-2,2,-2};

ll vis[100][100],dist[100][100];

bool valid(ll xx,ll yy)
{
    if(xx<1 or xx>m or yy<1 or yy>n) return false;
    if(vis[xx][yy]) return false;
    return true;
}

ll bfs()
{
    queue<pi>qu;
    qu.push({x,y});
    vis[x][y]=1;
    dist[x][y]=0;
    while(!qu.empty())
    {
        auto xx=qu.front();
        qu.pop();
        if(xx.fi==a and xx.se==b) return dist[xx.fi][xx.se];
        
        f(i,0,8)
        {
            if(valid(xx.fi+fx[i],xx.se+fy[i]))
            {
                p=xx.fi+fx[i];
                q=xx.se+fy[i];
                vis[p][q]=1;
                dist[p][q]=dist[xx.fi][xx.se]+1;
                qu.push({p,q});
            }
        }
        return -1;
    }
}
void solve()
{
    ci>>m>>n>>x>>y>>a>>b;
    mem(vis,0);
    mem(dist,0);
    res=bfs();
    co<<res<<endl;
}

int main()
{
//#ifdef LOCAL
        // freopen("input.txt","r",stdin);
        // freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        t=1;
        ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}