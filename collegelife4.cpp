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
ll n,m,k,g,e,h,a,b,mx,mn,c,y,z,w,p,q,r,l,s,t;

ll call(ll n,ll e,ll h,ll a,ll b,ll c)
{
    if(n<=0) return 0;
    ll res=1e18;
    if(n<=e and n<=h) res=min(res,n*c);
    if(n*2<=e) res=min(res,n*a);
    if(n*3<=h) res=min(res,n*b);

    if((h-n)/2 >=1 and ((h-n)/2 >= n-e))
    {
        ll x;
        if(b-c<0) x=min(n-1,(h-n)/2);
        else x=max(1LL,n-e);
        res=min(res,(b-c)*x+n*c);
    }
    if(e-n >= 1 and e-n >= n-h)
    {
        ll x;
        if(a-c<0) x=min(n-1,e-n);
        else x=max(1LL,n-h);
        res=min(res,(a-c)*x+n*c);
    }
    if(e/2>=1 and (e/2>=(3*n-h+2)/3))
    {
        ll x;
        if(a-b<0) x=min(n-1,e/2);
        else x=max(1LL,(3*n-h+2)/3);
        res=min(res,(a-b)*x+n*b);
    }
    if(e>=3 and h>=4 and n>=3) res=min(res,a+b+c+call(n-3,e-3,h-4,a,b,c));

    return res;
}

void solve()
{
    ci>>n>>e>>h>>a>>b>>c;
    ll ans=call(n,e,h,a,b,c);

    if(ans==1e18) co<<-1<<endl;
    else co<<ans<<endl;
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
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}