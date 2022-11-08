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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;

void solve()
{
    ci>>n>>q>>k;
    vector<ll>a(n),val(n);
    for(auto &x:a) ci>>x;
    vector<pi>query;
    f(i,0,q)
    {
        ci>>x>>y;
        query.pb({x,y});
    }
    f(i,0,n)
    {
        if(i==0)
        {
            val[i]=a[i+1]-2;
        }
        else if(i==n-1)
        {
            val[i]=k-a[i-1]-1;
        }
        else
        {
            val[i]=a[i+1]-a[i-1]-2;
        }
        
    }
    ll cum[n+1];
    mem(cum,0);
    f(i,0,n)
    {
        cum[i+1]=cum[i]+val[i];
    }
    f(i,0,n) co<<val[i]<<' ';
    en
    f(i,0,n+1) co<<cum[i]<<' ';
    en
    f(i,0,q)
    {
        x=query[i].fi;
        y=query[i].se;
        x++;
        y--;
        res=0;
        if(x<=y)
        {
            res+=cum[y]-cum[x-1];
        }
        res+=a[x-1]-1+k-a[y+1];
        co<<res<<endl;
    }
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
//#endif
        cout << setprecision(10) << fixed;
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        //ci>>t;
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