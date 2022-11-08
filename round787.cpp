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
ll n,m,k,g,mx,mn,res,sum,c,x,y,z,w,p,q,r,d,l,s,t;

vector<ll>graph[200005];
ll vis[200005];
vector<ll>tmp,leaf;
void dfs(ll u)
{
    tmp.pb(u);
    vis[u]=1;
    ll cnt=0;
    for(ll v:graph[u])
    {
        if(!vis[v]) 
        {
            dfs(v);
            cnt++;
        }
    }
    if(cnt==0) leaf.pb(u);
}
void solve()
{
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    mem(vis,0);
    f(i,0,n+1) graph[i].clear();
    ll root;
    f(i,0,n)
    {
        if(a[i]==i+1) 
        {
            root=i+1;
            continue;
        }
        graph[i+1].pb(a[i]);
        graph[a[i]].pb(i+1);
    }
    tmp.clear();
    leaf.clear();
    dfs(root);
    en
    sort(all(leaf));
    vector<ll>ans;
    vector<ll>anss[n+1];
    k=0;
    for(ll ii:tmp)
    {
        ans.pb(ii);
        if(binary_search(all(leaf),ii))
        {
            anss[k++]=ans;
            ans.clear();
        }
    }
    co<<k<<endl;
    f(i,0,k)
    {
        co<<anss[i].size()<<endl;
        for(ll jj:anss[i]) co<<jj<<' ';
        en
    }
    
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