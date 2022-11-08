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
ll n,m,k,g,mx,mn,res,ans,sum,x,y,z,w,p,q,r,d,l,s,t;
string a,b,c;
ll dp[51][51][51];
ll call(ll ii,ll jj,ll kk)
{
    if(ii<0 or jj<0 or kk<0) return 0;
    if(dp[ii][jj][kk]!=-1) return dp[ii][jj][kk];
    ll xx;
    if(a[ii]==b[jj] and b[jj]==c[kk]) xx=1+call(ii-1,jj-1,kk-1);
    else 
    {
        xx=max(call(ii,jj,kk-1),call(ii,jj-1,kk));
        xx=max(xx,max(call(ii-1,jj,kk),call(ii-1,jj-1,kk)));
        xx=max(xx,max(call(ii-1,jj,kk-1),call(ii-1,jj-1,kk-1)));
    }
    return dp[ii][jj][kk]=xx;
}
void solve(ll ka)
{
    ci>>a>>b>>c;
    n=a.size();
    m=b.size();
    k=c.size();
    mem(dp,-1);
    res=call(n-1,m-1,k-1);
    co<<"Case "<<ka<<": "<<res<<endl;
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
            solve(ca+1);
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}