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
ll n,m,k,g,mx,mn,res,a,ans,sum,c,x,y,z,w,p,q,r,b,d,l,s,t;
ll dp[4001][4001];
ll call(ll rem,ll cut)
{
    if(rem==0) return 1;
    else if(rem<0) return 0;
    if(dp[rem][cut]!=-1) return dp[rem][cut];
    ll xx=0;
    if(cut==a) xx=max(call(rem-a,b),call(rem-a,c));
    else if(cut==b) xx=max(call(rem-b,a),call(rem-b,a));
    else if(cut==c) xx=max(call(rem-c,a),call(rem-c,b));
    return dp[rem][cut]=xx;
}
void solve()
{
    ci>>n;
    ll a[3];
    ci>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    res=0;
    for(ll i=0;i<=4000 and i*a[2]<=n;i++)
    {
        for(ll j=0;j<=4000 and i*a[2]+j*a[1]<=n;j++)
        {
            x=n-(i*a[2]+j*a[1]);
            if(x%a[0]==0) res=max(res,i+j+(x/a[0]));
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
        // ci>>t;
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