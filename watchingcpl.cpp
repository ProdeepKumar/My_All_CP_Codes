#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n)     printf("%lld\n",n);
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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
//map<pair<ll,pair<ll,ll> >,ll >dp;
ll dp[101][101][101];

ll call(ll pos,ll sum1,ll sum2,vector<ll>&a)
{
    if(pos>=n or (sum1>=k and sum2>=k)) return 0;
    //if(dp.find({pos,{sum1,sum2}})!=dp.end()) return dp[{pos,{sum1,sum2}}];
    if(dp[pos][sum1][sum2]!=-1) return dp[pos][sum1][sum2];

    ll xx=0,yy=0,zz=0,cnt=0;

    xx=1+call(pos+1,sum1+a[pos],sum2,a);  //10 9 4 2  k=5
    yy=1+call(pos+1,sum1,sum2+a[pos],a);
    cnt+=min(xx,yy);

    dp[pos][sum1][sum2]=cnt;
}
void solve()
{
    ci>>n>>k;
    vector<ll>a;
    ll sum=0;
    f(i,0,n) ci>>x,a.pb(x),sum+=x;
    if(n==1)
    {
        co<<-1<<endl;
        return;
    }
    sort(allr(a));
    if(sum<(2*k))
    {
        co<<-1<<endl;
        return;
    }
    if(sum==(2*k))
    {
        ll add=0,fff=0;;
        f(i,0,n)
        {
            if(add+a[i]<=k) add+=a[i];
            if(add==k)
            {
                fff=1;
                br
            }
        }
        if(fff) co<<n<<endl;
        else co<<-1<<endl;
        return;
    }
   // dp.clear();
   mem(dp,-1);
    res=call(0,0,0,a);
    co<<res<<endl;
    
    
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
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}