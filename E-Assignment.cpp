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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;

int Set(int N,int pos) { return N=N | (1<<pos); }
int reset(int N,int pos){return N= N & ~(1<<pos); }
bool check(int N, int pos) { return (bool)(N & (1<<pos)); }

ll dp[20][1<<20],a[21][21];

ll call(ll pos,ll val)
{
    // co<<val<<" ";
    if(val==0)
    {
        // res++;
        // dp[pos][val]=res;
        return 1;
    }
    if(pos>=n) return 0;
    if(dp[pos][val]!=-1) return dp[pos][val];
    ll xx=0;
    f(i,0,n)
    {
        if(a[pos][i]==1 and check(val,i)==1)
        {
            xx+=call(pos+1,reset(val,i));
        }
    }
    return dp[pos][val]=xx;
    

}

void solve()
{
    ci>>n;
    f(i,0,n) f(j,0,n) ci>>a[i][j];
    mem(dp,-1);
    res=call(0,(1<<n)-1);
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
        ci>>t;
        // t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}