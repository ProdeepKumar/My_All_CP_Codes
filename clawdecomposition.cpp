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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,r,l,s,t;
vector<ll>graph[1000];
vector<ll>color(1000);
vector<ll>vis(1000);
queue<ll>q;

bool bfs(ll st)
{
    while(!q.empty()) q.pop();
    f(i,1,n+1) color[i]=-1;
    f(i,1,n+1) vis[i]=0;
    q.push(st);
    vis[st]=1;
    color[st]=1;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        for(auto y:graph[x])
        {
            if(!vis[y] and color[y]==-1)
            {
                q.push(y);
                vis[y]=1;
                color[y]=1-color[x];
            }
        }
        for(auto y:graph[x])
        {
            if(vis[y] and color[y]==color[x]) return false;
        }
    }
    return true;
}

void solve()
{
   while(true){
       ci>>n;
       if(!n) br
       f(i,1,n+1) graph[i].clear();
       while(true)
       {
           ci>>x>>y;
           if(!x and !y) br
            graph[x].pb(y);
            graph[y].pb(x);
       }
       g=bfs(1);
       if(g) coy
       else con
   }
   return;

}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
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