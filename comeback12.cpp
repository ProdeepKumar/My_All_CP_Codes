#pragma GCC target("avx,avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
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
ll n,m,k,g,mx,mn,res,ans,c,x,y,z,w,p,q,r,b,d,l,s,t;
long dpa[10000001],dpb[10000001],dpc[10000001],dpd[10000001];
ll M=1e9+7;
ll call(ll pos,ll node)
{
    if(pos==1)
    {
        if(node==3) return 0;
        else return 1;
    }
    if(node==3) if(dpd[pos]!=-1) return dpd[pos];
    if(node==0) if(dpa[pos]!=-1) return dpa[pos];
    if(node==1) if(dpb[pos]!=-1) return dpb[pos];
    if(node==2) if(dpc[pos]!=-1) return dpc[pos];
    ll xx=0;
    if(node==3) xx+=((call(pos-1,0)+call(pos-1,1))%M+call(pos-1,2))%M;
    else if(node==0) xx+=((call(pos-1,1)+call(pos-1,2))%M+call(pos-1,3))%M;
    else if(node==1) xx+=((call(pos-1,0)+call(pos-1,2))%M+call(pos-1,3))%M;
    else if(node==2) xx+=((call(pos-1,0)+call(pos-1,1))%M+call(pos-1,3))%M;

    if(node==3) return dpd[pos]=xx%M;
    else if(node==0) return dpa[pos]=xx%M;
    else if(node==1) return dpb[pos]=xx%M;
    else if(node==2) return dpc[pos]=xx%M;
}
void solve()
{
    ci>>n;
    if(n==1)
    {
        co<<0<<endl;
        return;
    }
    mem(dpa,-1);
    mem(dpb,-1);
    mem(dpc,-1);
    mem(dpd,-1);
    res=((call(n-1,0)+call(n-1,1))%M+call(n-1,2))%M;
    co<<res%M<<endl;
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
        // ci>>t; 
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