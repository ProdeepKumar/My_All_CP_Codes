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
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,x,y,z,w,p,q,r,d,l,s,t;
ll a[100005],b[100005],c[100005],used[100005],visited[100005];
vector<ll>graph[100005];
void dfs(ll u,bool &found,vector<ll>*graph,ll &cnt)
{
    visited[u]=1;
    cnt++;
    if(used[u]) found=true;
    for(ll ii:graph[u])
    {
        if(!visited[ii]) dfs(ii,found,graph,cnt);
    }
    return;
}
void solve()
{
    ci>>n;
    f(i,0,n) 
    {
        ci>>a[i];
        used[i]=visited[i]=0;
        graph[i].clear();
    }
    used[n]=visited[n]=0;
    graph[n].clear();
    f(i,0,n)
    {
        ci>>b[i];
        graph[a[i]].pb(b[i]);
        graph[b[i]].pb(a[i]);
    }
    f(i,0,n) ci>>c[i],used[c[i]]=1; 
    res=1;
    f(i,1,n+1)
    {
        if(!visited[i])
        {
            bool found=false;
            ll cnt=0;
            dfs(i,found,graph,cnt);
            if(!found and cnt>1LL) res=(res*2)%1000000007;
        }
    }
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