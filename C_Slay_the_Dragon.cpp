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

void solve()
{
    ci>>n;
    vector<ll>a(n);
    ll sum=0;
    for(auto &x:a) ci>>x,sum+=x;
    ci>>m;
    vector<pi>b(m);
    f(i,0,m) ci>>b[i].fi>>b[i].se;
    sort(all(a));
    f(i,0,m)
    {
        res=0;
        ll res1,res2,res3;
        x=upper_bound(all(a),b[i].fi)-a.begin();
        if(x==n)
        {
            x--;
            res+=max(0LL,b[i].fi-a[x]);
            res+=max(0LL,b[i].se-sum+a[x]);
            co<<res<<endl;
        }
        else
        {
            if(x==0)
            {
                res1=max(0LL,b[i].se-sum+a[x]);
                co<<res1<<endl;
            }
            else
            {
                res2=max(0LL,b[i].se-sum+a[x]);
                x--;
                res3=max(0LL,b[i].fi-a[x]);
                res3+=max(0LL,b[i].se-sum+a[x]);
                res2=min(res2,res3);
                co<<res2<<endl;
            }
        }
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