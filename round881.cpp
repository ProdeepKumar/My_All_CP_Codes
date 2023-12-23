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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;


void solve()
{
    ci>>n>>m;ll ans=-1;
    vector<pi>segs(m);
    f(i,0,m)
    {
        ci>>x>>y;
        segs[i]={x,y};  // 1 0 0 1 0
    }
    ci>>q;
    vector<ll>pos(q);
    f(i,0,q) ci>>pos[i],pos[i]--;
    ll lo=0,hi=q-1,mid;
    while(lo<=hi)
    {
        mid=(hi+lo)/2;
        vector<ll>a(n,0);
        f(i,0,mid+1) a[pos[i]]=1;
        vector<ll>cum(n+1,0);
        f(i,1,n+1) cum[i]=cum[i-1]+a[i-1];
        ll paici=0;
        for(auto ii:segs)
        {
            ll one=cum[ii.se]-cum[ii.fi-1];
            ll zero=ii.se-ii.fi+1-one;
            if(one>zero)
            {
                paici=1;
                br
            }
        }
        if(paici) 
        {
            hi=mid-1;
            ans=mid+1;
        }
        else lo=mid+1;
    }
    co<<ans<<endl;
     
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