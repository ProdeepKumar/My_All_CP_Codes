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
#define coy        cout<<"YES"<<endl;
#define con        cout<<"NO"<<endl;
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define r(i,a,b)   for(ll i=a;i>=b;i--)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define check(n,p) (n&(1<<p))
#define set(n,p)   (n|(1<<p))
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
ll a[20][20],dp[17][1<<17];

ll marry(ll ii,ll vis)
{
    if(ii==n) return 0;
    if(dp[ii][vis]!=-1) return dp[ii][vis];
    
    mx=-1;
    f(i,0,n)
    {
        if(check(vis,i)==0) mx=max(mx,a[ii][i]+marry(ii+1,set(vis,i)));
    }
    return dp[ii][vis]=mx;
}

void solve(ll kas)
{
    ci>>n;
    mem(a,0);
    mem(dp,-1);
    f(i,0,n)
    {
        f(j,0,n)
        {
            ci>>a[i][j];
        }
    }
    ll vis=0;
    res=marry(0,vis);
    co<<"Case "<<kas<<": "<<res<<endl;
}

int main()
{
        
//#ifdef LOCAL
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
        //auto start_time = clock();
        //cerr << setprecision(3) << fixed;
//#endif
        //cout << setprecision(10) << fixed;
        //ios::sync_with_stdio(false);
        //cin.tie(nullptr);
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve(ca+1);
        }
//#ifdef LOCAL
        //auto end_time = clock();
        //cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}