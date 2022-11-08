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
ll n,m,k,g,mx,mn,res,sum,c,x,y,z,w,p,q,r,d,l,s,t;


void solve()
{
    ci>>n>>m;
    vector<ll>ans;
    x=n+m-2;
    while(n>0 and m>0)
    {
        y=n+n+m+m-4;
        // co<<y<<endl;
        if(y>=4)
        {
            f(i,0,y)
            {
                if(i<4) ans.pb(x);
                else ans.pb(x-1);
            }
        }
        else if(y==0) ans.pb(x);
        else
        {
            f(i,0,y)
            {
                ans.pb(x);
            }
        }
        n-=2;
        m-=2;
        x-=2;
    }
    reverse(all(ans));
    for(ll ii:ans) co<<ii<<' ';
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