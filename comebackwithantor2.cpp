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
ll n,m,k,g,mx,mn,res,sum,c,x,y,z,w,p,q,r,d,l,s,t;
vector<ll>ans;
void call(ll n,ll m,ll val)
{
    if(n<1 or m<1) return;
    if(n==1 and m==1) 
    {
        ans.pb(val);
        return;
    }
    else if(n==1) 
    {
        f(i,0,m) ans.pb(val);
        return;
    }
    else if(m==1) 
    {
        f(i,0,n) ans.pb(val);
        return;
    }
    else
    {
        f(i,0,4) ans.pb(val);
        x=(n-2)*2+(m-2)*2;
        f(i,0,x) ans.pb(val-1);
        call(n-2,m-2,val-2);
    }

}
ll dist(ll x1,ll y1,ll x2,ll y2)
{
    return abs(x2-x1)+abs(y2-y1);
}
void solve()
{
    ci>>n>>m;
    ans.clear();
    f(i,0,n)
    {
        f(j,0,m)
        {
            x=dist(0LL,0LL,i,j);
            x=max(x,dist(0LL,m-1,i,j));
            x=max(x,dist(n-1,0LL,i,j));
            x=max(x,dist(n-1,m-1,i,j));
            ans.pb(x);
        }
    }
    sort(all(ans));
    f(i,0,n*m) co<<ans[i]<<' ';
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