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
ll a[5010],cur[5010];
void solve()
{
    ci>>n;
    f(i,0,n) ci>>a[i],cur[i]=0;
    res=0;
    f(i,0,n)
    {
        x=cur[i];
        if(cur[i]<a[i]-1)
        {
            res+=a[i]-1-cur[i];
            x=a[i]-1;
        }
        co<<"x: "<<x<<endl;
        cur[i+1]+=x-(a[i]-1);
        f(j,i+2,min(n,i+a[i]+1)) cur[j]++;
        f(j,0,n) co<<cur[j]<<' ';
        en
    }
    co<<endl<<res<<endl;
}

int main()
{
        
//#ifdef LOCAL
        //freopen("input.txt","r",stdin);
        //freopen("output.txt","w",stdout);
//#endif
        // auto start_time = clock();
        // cerr << setprecision(3) << fixed;
        // cout << setprecision(10) << fixed;
        // ios::sync_with_stdio(false);
        // cin.tie(nullptr);
        ci>>t;
        //t=1;
        for(ll ca=0;ca<t;ca++)
        {
            solve();
        }
//#ifdef LOCAL
//         auto end_time = clock();
//         cerr<< "Execution time: "<<(end_time-start_time)*(int)1e3/CLOCKS_PER_SEC<<" ms\n";
// //#endif
}