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

ll Set(ll N,ll pos) { return N=N | (1<<pos); }
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N, ll pos) { return (bool)(N & (1<<pos)); }

void solve()
{
    ci>>n;
    vector<ll>a(n);
    for(auto &x:a) ci>>x;
    ans=0;
    f(i,0,n) ans^=a[i];
    if(ans==0)
    {
        coy
        return;
    }
    // ll cum[n],cumm[n];
    // cum[0]=a[0];
    // cumm[n-1]=a[n-1];
    // f(i,1,n) cum[i]=cum[i-1]^a[i];
    // r(i,n-2,0) cumm[i]=cum[i+1]^a[i];
    p=q=-1;
    res=0;
    f(i,0,n)
    {
        res^=a[i];
        p=i;
        if(res==ans) br
    }
    res=0;
    f(i,p+1,n-1)
    {
        res^=a[i];
        if(res==ans) q=1;
    }
    if(q==1) coy
    else con
    // else con
    // ll posi[n+1][31];
    // mem(posi,0);
    // f(i,1,n+1)
    // {
    //     f(j,0,31)
    //     {
    //         if(check(a[i-1],j)) posi[i][j]=1;
    //     }
    // }
    // f(j,0,31)
    // {
    //     f(i,1,n+1)
    //     {
    //         posi[i][j]+=posi[i-1][j];
    //     }
    // }
    // // f(i,0,n+1)
    // // {
    // //     f(j,0,31) co<<posi[i][j]<<' ';
    // //     en
    // // }
    // f(i,0,n)
    // {
    //     bool ok=true;
    //     f(j,0,31)
    //     {
    //         x=posi[i][j]-posi[0][j];
    //         y=posi[n][j]-posi[i+1][j];
    //         z=check(a[i],j);
    //         if(z==0 and (x&1 or y&1))
    //         {
    //             ok=false;
    //             br
    //         }
    //         else if(z==1 and (!(x&1) or !(y&1)))
    //         {
    //             ok=false;
    //             br
    //         }
    //     }
    //     if(ok)
    //     {
    //         coy
    //         return;
    //     }
    // }
    // con
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