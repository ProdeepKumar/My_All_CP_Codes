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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;

vector<pi>fact;

void factorize(long long n) 
{ 
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) 
        fact.pb({2,count}); 
  
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            fact.pb({i,count});
    } 
  
    if (n > 2) 
        fact.pb({n,1});
}
map<ll,ll>mp,mpp;
void solve()
{
    ci>>n>>k;
    vector<ll>a(n);
    mpp.clear();
    f(i,0,n)
    {
        ci>>x;
        if(mpp.find(x)!=mpp.end())
        {
            a[i]=mpp[x];
            continue;
        }
        fact.clear();
        factorize(x);
        ll mul=1;
        for(auto ii:fact)
        {
            if(ii.se&1) mul*=ii.fi;
        }
        a[i]=mul;
        mpp[x]=a[i];
    }
    mp.clear();
    res=0;
    f(i,0,n)
    {
        if(mp.find(a[i])!=mp.end())
        {
            res++;
            mp.clear();
            mp[a[i]]=1;
        }
        else
        {
            mp[a[i]]=1;
        }
        
    }
    co<<res+1<<endl;
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