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

vector<ll>a;
vector<ll>in[50];
map<pi,ll>dp;

ll Set(ll N,ll pos) { return N=N | (1<<pos); }
ll reset(ll N,ll pos){return N= N & ~(1<<pos);}
bool check(ll N, ll pos) { return (bool)(N & (1<<pos)); }

ll call(ll pos,ll mask)
{
    if(pos>=n) return 0;
    if(mask==0) return 1;
    if(dp[{pos,mask}]!=0) return dp[{pos,mask}];
    ll xx=0;
    for(ll i=0;i<in[pos].size();i++)
    {
        if(check(mask,in[pos][i])) xx+=1+call(pos+1,reset(mask,in[pos][i]));
    }
    return dp[{pos,mask}]=max(xx,dp[{pos,mask}]);
}
void solve()
{
    ci>>n;
    a.clear();
    f(i,0,n) ci>>x,a.pb(x);
    f(i,0,n)
    {
        x=a[i];
        while(x>n)
        {
            x/=2;
        }
        a[i]=x;
    }
    ll ab[n+1]={0};
    f(i,0,n) ab[a[i]]=1;
    
    if(res==n) coy
    else con
    // ll a,b;
    // ci>>a>>b>>c;
    // bool ok=false;
    // if(a>b)
    // {
    //     x=b-(a-b);
    //     if(x%c==0 and c and x){
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(b>a)
    // {
    //     x=b+(b-a);
    //     if(x%c==0 and c and x){
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(b==a)
    // {
    //     if(b%c==0 and c and b){
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(a>c)
    // {
    //     x=a-c;
    //     if(x&1) ok=false;
    //     else 
    //     {
    //         x=(a+c)/2;
    //         if(x%b==0 and b and x){
    //             ok=true;
    //             coy
    //             return;
    //         }
    //     }
    // }
    // if(c>a)
    // {
    //     x=c-a;
    //     if(x&1) ok=false;
    //     else 
    //     {
    //         x=(a+c)/2;
    //         if(x%b==0 and b and x) 
    //         {
    //             ok=true;
    //             coy
    //             return;
    //         }
    //     }
    // }
    // if(a==c)
    // {
    //     if(x%b==0 and b and x){
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(b>c)
    // {
    //     x=b+(b-c);
    //     if(x%a==0 and a and x) {
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(c>b)
    // {
    //     x=b-(c-b);
    //     if(x%a==0 and a and x) {
    //             ok=true;
    //             coy
    //             return;
    //         }
    // }
    // if(c==b)
    // {
    //     if(c%a==0 and a and c){
    //         // co<<"here"<<endl;
    //             ok=true;
    //             coy
    //             return;
    //         }
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