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
#define INFF       0x3f3f3f3f
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;
ll a[23],dp[1<<21];

ll Set(ll N,ll pos) { return N=N | (1<<pos); }
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N, ll pos) { return (bool)(N & (1<<pos)); }

ll call(ll sum,ll mas)
{
    if(dp[mas]!=1000000000000000) return dp[mas];

    for(ll ii=0;ii<n;ii++)
    {
        if(check(mas,ii))
        {
            ll tsum=sum-a[ii];
            ll tmp=reset(mas,ii);
            ll aage=(ii+n-1)%n;
            ll pore=(ii+1)%n;
            if(check(mas,aage)) tsum-=a[aage],tmp=reset(tmp,aage);
            if(check(mas,pore)) tsum-=a[pore],tmp=reset(tmp,pore);
            // co<<tsum<<' '<<tmp<<endl;
            dp[mas]=min(dp[mas],tsum+call(tsum,tmp));
        }
    }
    return dp[mas];
}
void solve()
{
    ci>>n;
    ll su=0;
    f(i,0,n) ci>>a[i],su+=a[i];
    f(i,0,(1<<21)) dp[i]=1000000000000000;
    dp[0]=0;
    co<<call(su,(1<<n)-1);
    return;
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
    return 0;
}