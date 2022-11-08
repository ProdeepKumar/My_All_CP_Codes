#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
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
#define kase       "Case "<<ka<<": "
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
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl

//Policy Based Data Structure(Randomly access into set in log(n) time)
// template <typename T>using orderedSet = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>Set;
// order_of_key(k) - number of element strictly less than k
// find_by_order(k) - k'th element in set.(0 indexed)(iterator)

ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,l,s,t;

ll MOD=1e9+7;
void solve(ll ka)
{
    ci>>n;
    vector<pi>a(n);
    for(auto &x:a) ci>>x.fi>>x.se;
    ci>>q;
    vector<pi>b(q);
    for(auto &x:b) ci>>x.fi>>x.se;
    co<<"Case #"<<ka<<": ";
    x=y=0;
    f(i,0,n)
    {
        x+=(a[i].fi*a[i].fi);
        x%=MOD;
        y+=(a[i].se*a[i].se);
        y%=MOD;
    }
    x+=y;
    x%=MOD;
    x=(x*q)%MOD;
    res=x;
    x=y=0;
    f(i,0,q)
    {
        x+=(b[i].fi*b[i].fi);
        x%=MOD;
        y+=(b[i].se*b[i].se);
        y%=MOD;
    }
    x+=y;
    x%=MOD;
    x=(x*n)%MOD;
    res+=x;
    res%=MOD;
    ll sum1=0,sum2=0;
    f(i,0,q) 
    {
        sum1+=b[i].fi;
        sum1%=MOD;
    }
    f(i,0,n) 
    {
        sum2+=a[i].fi;
        sum2%=MOD;
    }
    x=(sum1*sum2)%MOD;
    x*=2;
    x%=MOD;
    res-=x;
    while(res<0) res+=MOD;
    sum1=0,sum2=0;
    f(i,0,q) 
    {
        sum1+=b[i].se;
        sum1%=MOD;
    }
    f(i,0,n) 
    {
        sum2+=a[i].se;
        sum2%=MOD;
    }
    x=(sum1*sum2)%MOD;
    x*=2;
    x%=MOD;
    res-=x;
    while(res<0) res+=MOD;
    co<<res<<endl;
    
}

int main()
{
//#ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
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
            solve(ca+1);
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}