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
#define debug(x)   cout<<#x"="<<(x)<<endl
ll n,m,k,g,mx,mn,res,ans,sum,c,x,y,z,w,p,q,r,d,l,s,t;


void solve()
{
    ci>>n;
    vector<pair<pair<ll,ll>,ll>>a;
    f(i,0,n)
    {
        ci>>l>>r>>c;
        a.pb({{l,r},c});
    }
    mn=1e15;
    ll mni,mxi,mxsegi=-1,mxseg=1e15;
    mx=-1;
    f(i,0,n)
    {
        if(a[i].fi.fi<mn)
        {
            mn=a[i].fi.fi;
            mni=i;
        }
        else if(a[i].fi.fi==mn)
        {
            if(a[mni].se>a[i].se)
            {
                mni=i;
            }
        }
        if(a[i].fi.se>mx)
        {
            mx=a[i].fi.se;
            mxi=i;
        }
        else if(a[i].fi.se==mn)
        {
            if(a[mxi].se>a[i].se)
            {
                mxi=i;
            }
        }
        if(a[i].fi.se==mx and a[i].fi.fi==mn)
        {
            // if(mxseg>a[i].fi.se-a[i].fi.fi+1) 
            // {
                // mxseg=a[i].fi.se-a[i].fi.fi+1;
                mxsegi=i;
            // }
        }
        // else if(a[i].fi.se-a[i].fi.fi+1==a[mxi].fi.se-a[mni].fi.fi+1)
        // {
        //     if(a[mxsegi].se>a[i].se)
        //     {
        //         mxsegi=i;
        //     }
        // }
        x=a[mni].se+a[mxi].se;
        y=x+50;
        if(mxsegi!=-1) y=a[mxsegi].se;
        x=min(x,y);
        co<<x<<endl;
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