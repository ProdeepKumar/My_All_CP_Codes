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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
map<ll,ll>mp,mpp;
void solve()
{
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    mp.clear();
    mpp.clear();
    ll cum[n+1];
    ll cumm[n+1];
    mem(cum,0);
    mem(cumm,0);
    f(i,0,n) cum[i+1]=cum[i]+a[i];
    r(i,n-1,0) cumm[i]=cumm[i+1]+a[i];
    f(i,0,n) mpp[cumm[i]]=i+1;
    res=0;
    f(i,1,n)
    {
        if(mpp.find(cum[i])!=mpp.end())
        {
            if(mpp[cum[i]]>i) res=max(res,cum[i]);
        }
    }
    co<<res<<endl;
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