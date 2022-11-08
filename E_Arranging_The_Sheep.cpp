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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;

void solve()
{
    ci>>n;
    string a;
    ci>>a;
    vector<ll>pos;
    f(i,0,n)
    {
        if(a[i]=='*') pos.pb(i+1);
    }
    m=pos.size();
    ll cum[m+1]={0};
    f(i,1,m+1)
    {
        cum[i]=pos[i-1]+cum[i-1];
    }
    res=1e18;
    for(ll i=1;i<=m;i++)
    {
        ll localsum=0;
        ll lefsum=cum[i-1];
        ll val=pos[i-1];
        y=val-i;
        val--;
        ll sum=(val*(val+1))/2;
        y=(y*(y+1))/2;
        sum-=y;
        localsum+=sum-lefsum;
        lefsum=cum[m]-cum[i];
        val=pos[i-1];
        y=m-i;
        val+=y;
        sum=(val*(val+1))/2;
        val=pos[i-1];
        y=(val*(val+1))/2;
        sum-=y;
        localsum+=lefsum-sum;
        res=min(res,localsum);
    }
    if(res==1e18) res=0;
    co<<res<<endl;
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//#endif
        auto start_time = clock();
        cerr << setprecision(3) << fixed;
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