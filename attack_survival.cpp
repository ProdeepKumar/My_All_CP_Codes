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

ll phi[5000005];
void totient(ll n)
{
    f(i,1,n+1) phi[i]=i;
    f(i,2,n+1)
    {
        if(phi[i]==i)
        {
            phi[i]=i-1;
            for(ll j=2*i;j<=n;j+=i) phi[j]=(phi[j]/i)*(i-1);
        }
    }
}

void solve()
{
    ci>>n>>m;
    if(n>m) swap(n,m);
    totient(1000005);
    x=phi[n];
    y=phi[m];
    p=lcm(n,m);
    q=(n*m)/p;
    ll arr[max(n,m)+1]={0};
    f(i,1,n) 
    {
        if(gcd(i,n)==1) arr[i]++;
    }
    f(i,1,m) 
    {
        if(gcd(i,m)==1) arr[i]++;
    }
    f(i,m,n) if(gcd(i,n)==1) arr[i]++;
    r=0;
    f(i,1,m+1) if(arr[i]==2) r++;
    r*=n;
    ll ak=x*m,dui=y*n,tin=(n*m)-(n+m-q)-r;
    co<<max(0LL,ak-tin)<<' '<<max(0LL,dui-tin)<<' '<<tin<<endl;
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
        // ci>>t;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}