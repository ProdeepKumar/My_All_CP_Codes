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
#define INF        0x3f3f3f3f
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,b,d,l,s,t;

void solve()
{
    ci>>n;
    string a;
    ci>>a;
    res=0;
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]=='a' and a[i+1]=='a')
        {
            co<<2<<endl;
            return;
        }
    }
    for(ll i=0;i<n-2;i++)
    {
        if(a[i]=='a' and a[i+1]=='b' and a[i+2]=='a')
        {
            co<<3<<endl;
            return;
        }
        else if(a[i]=='a' and a[i+1]=='c' and a[i+2]=='a')
        {
            co<<3<<endl;
            return;
        }
    }
    for(ll i=0;i<n-3;i++)
    {
        if(a[i]=='a' and a[i+1]=='b' and a[i+2]=='c' and a[i+3]=='a')
        {
            co<<4<<endl;
            return;
        }
        else if(a[i]=='a' and a[i+1]=='c' and a[i+2]=='b' and a[i+3]=='a')
        {
            co<<4<<endl;
            return;
        }
    }
    for(ll i=0;i<n-6;i++)
    {
        ll j=0;
        x=y=z=0;
        while(j<7)
        {
            if(a[i+j]=='a') x++;
            else if(a[i+j]=='b') y++;
            else if(a[i+j]=='c') z++;
            j++;
        }
        if(x>y and x>z)
        {
            co<<7<<endl;
            return;
        }
    }
    co<<-1<<endl;  
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