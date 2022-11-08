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
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
ll a[100005],b[100005];

ll solve(ll a[],ll b[])
{
    mx=0;
    f(i,0,n)
    {
        x=lower_bound(b,b+m,a[i])-b;
        y=b[x]-a[i];
        z=a[i]-b[x-1];
        z=min(y,z);
        mx=max(mx,z);
    }
    return mx;
}

int main()
{
    ios::sync_with_stdio(0);
    ci>>n>>m;
    f(i,0,n) ci>>a[i];
    b[0]=-1e18;
    f(i,1,m+1) ci>>b[i];
    b[m+1]=1e18;
    m+=2;
    res=solve(a,b);
    co<<res;
    return 0;
}