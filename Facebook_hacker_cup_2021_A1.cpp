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

void solve(ll kas)
{
    string a;
    ci>>a;
    ll freq[26]={0};
    for(char u:a) freq[u-'A']++;
    ll vo=0,conso=0;
    for(char u:a)
    {
        if(u=='A' or u=='E' or u=='I' or u=='O' or u=='U') vo++;
        else conso++;
    }
    res=1e5;
    for(char u:a)
    {
        if(u=='A' or u=='E' or u=='I' or u=='O' or u=='U')
        {
            x=conso;
            y=vo-freq[u-'A'];
            y*=2;
            x+=y;
            res=min(res,x);
        }
        else
        {
            x=vo;
            y=conso-freq[u-'A'];
            y*=2;
            x+=y;
            res=min(res,x);
        }
    }
    if(vo==0 or conso==0) res=min(res,(ll)a.size());
    co<<"Case #"<<kas<<": "<<res<<endl;
    
}

int main()
{
//#ifdef LOCAL
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
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
            solve(ca+1);
        }
//#ifdef LOCAL
        auto end_time = clock();
        cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
//#endif
}