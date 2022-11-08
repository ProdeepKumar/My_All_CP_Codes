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

ll call(ll n,ll m)
{
    if(n==0 or n==1 or n==5 or n==6) return n;
    else if(n==4)
    {
        if(m%2) return 4;
        else return 6;
    }
    else if(n==9)
    {
        if(m%2) return 9;
        else return 1;
    }
    else
    {
        ll dui[4]={2,4,8,6};
        ll tin[4]={3,9,7,1};
        ll saat[4]={7,9,3,2};
        ll aat[4]={8,4,2,6};
        x=m%4;
        if(x==0) x=4;
        if(n==2) return dui[x-1];
        else if(n==3) return tin[x-1];
        else if(n==7) return saat[x-1];
        else if(n==8) return aat[x-1];
    }
    
}

void solve()
{
    ci>>n>>m>>k;
    x=m%4;
    if(x==0) x=4;
    y=(m*m)%4;
    if(y==0) y=4;
    if(k%2) z=x;
    else z=y;
    co<<call(n%10,z)<<endl;
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
}