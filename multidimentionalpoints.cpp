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
ll n,m,k,g,mx,mn,res,c,z,w,p,q,r,l,s,t;

void solve()
{
    ci>>n;
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(ll i=0;i<n;i++)
    {
        scanf("%lld",&b[i]);
    }
    ll cum[n+1];
    mem(cum,0);
    f(i,0,n)
    {
        ll x;
        x=abs(a[i]-b[i]);
        x*=x;
        cum[i+1]=x;
        cum[i+1]+=cum[i];
    }
    sf1(m);
    map<pair<ll,ll>,double>mp;
    mp.clear();
    while(m--)
    {
        ll x,y;
        scanf("%lld",&x);
        scanf("%lld",&y);
        if(mp.find({x,y})!=mp.end())
        {
            printf("%.6lf\n",mp[{x,y}]);
            continue;
        }
        p=cum[y]-cum[x-1];
        double xx=sqrt((double)p);
        printf("%.6lf\n",xx);
        mp[{x,y}]=xx;
    }
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//#endif
        // auto start_time = clock();
        // cerr << setprecision(3) << fixed;
        // cout << setprecision(6) << fixed;
       // ios::sync_with_stdio(false);
        //cin.tie(nullptr);
        // ci>>t;
        t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        // auto end_time = clock();
        // cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}