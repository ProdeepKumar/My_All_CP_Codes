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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;


ll parent[MAXN],cnt[MAXN];
void init(ll n)
{
    f(i,1,n+1)
    {
        parent[i]=i;
        cnt[i]=1;
    }
}
ll find(ll u)
{
    if(u==parent[u]) return u;
    return parent[u]=find(parent[u]);
}

void Union(ll u,ll v)
{
    ll p=find(u);
    ll q=find(v);
    if(p!=q)
    {
        parent[q]=p;
        cnt[p]+=cnt[q];
    }
}
ll findsize(ll u)
{
    if(u==parent[u]) return cnt[u];
    return findsize(parent[u]);
}
void solve()
{
    ci>>n;
    vector<ll>a(n);
    f(i,0,n) ci>>a[i];
    ll ans[n+1];
    init(n);
    f(i,0,n) Union(i+1,a[i]);
    f(i,1,n+1) ans[i]=findsize(i);
    f(i,1,n+1) co<<ans[i]<<' ';
    en
    
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
        ci>>t;
        // t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}