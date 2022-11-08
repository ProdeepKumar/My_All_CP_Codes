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
    ci>>n>>k>>x>>y;
    if(x==y)
    {
        co<<n<<' '<<n<<endl;
        return;
    }
    else if(x<y)
    {
        vector<pi>a;
        a.pb({x+n-y,n});
        a.pb({n,x+n-y});
        a.pb({n-a.back().se,0LL});
        a.pb({0LL,a.back().fi});
        if(k%4) co<<a[(k%4)-1].fi<<' '<<a[(k%4)-1].se<<endl;
        else co<<a[3].fi<<' '<<a[3].se<<endl;
    }
    else
    {
        vector<pi>a;
        a.pb({n,y+n-x});
        a.pb({y+n-x,n});
        a.pb({0LL,n-a.back().fi});
        a.pb({a.back().se,0LL});
        if(k%4) co<<a[(k%4)-1].fi<<' '<<a[(k%4)-1].se<<endl;
        else co<<a[3].fi<<' '<<a[3].se<<endl;
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