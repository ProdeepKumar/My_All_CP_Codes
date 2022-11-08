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
#define n_ones(a)  __builtin_popcountll(a);
#define lz(a)      __builtin_clzll(a);
#define tz(a)      __builtin_ctzll(a);
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;
vector<ll>zero;
ll onel[200005],oner[200005];
bool valid(ll xx)
{
    // debug(xx);
    if(xx>=zero.size()) return true;
    f(i,0,zero.size()-xx+1)
    {
        l=i;
        r=i+xx-1;
        ll tot_one_left;
        if(l==0) tot_one_left=0;
        else tot_one_left=onel[zero[l-1]];
        if(r==zero.size()-1) tot_one_left+=0;
        else tot_one_left+=oner[zero[r+1]];
        if(tot_one_left<=xx) return true;
    }
    return false;
}
void solve()
{
    string a;
    ci>>a;
    while(a.front()=='0') a.erase(a.begin());
    while(a.back()=='0') a.pop_back();
    n=a.size();
    //ans must be in range 0 to n
    zero.clear();
    mem(onel,0);
    mem(oner,0);
    f(i,0,n) 
    {
        if(a[i]=='0') zero.pb(i);
        else onel[i]=oner[i]=1;
    }
    f(i,1,n) onel[i]+=onel[i-1];
    r(i,n-2,0) oner[i]+=oner[i+1];
    // for(ll ii:zero) co<<ii<<' ';
    // en
    ll lo=0,hi=n,mid;
    res=1e15;
    while(lo<=hi)
    {
        mid=(hi+lo)/2;
        if(valid(mid))
        {
            res=mid;
            hi=mid-1;
        }
        else lo=mid+1;
    }
    co<<res<<endl;
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