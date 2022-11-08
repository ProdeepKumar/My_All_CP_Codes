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
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,ans,q,r,b,d,l,s,t;
map<pi,ll>mp;
void bin_search(ll lo,ll hi)
{
    if(lo>=hi) return;
    ll mid=(lo+hi)/2;
    ll xx=n^mid;
    // co<<"lo hi mid: "<<lo<<' '<<hi<<' '<<mid<<endl;
    if(xx<=m)
    {
        bin_search(lo,mid);
        bin_search(mid+1,hi);
    }
    else 
    {
        ans=min(ans,mid);
        bin_search(lo,mid);
    }
}

void solve()
{
    ci>>n>>m;
    if(n>m)
    {
        co<<0<<endl;
        return;
    }
    if(mp.find({n,m})!=mp.end())
    {
        co<<mp[{n,m}]<<endl;
        return;
    }
    ll lo=0,hi=2e9;
    ans=1e18;
    bin_search(lo,hi);
    mp[{n,m}]=ans;
    co<<ans<<endl;
}

int main()
{
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
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