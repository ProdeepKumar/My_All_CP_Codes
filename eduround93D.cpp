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
ll dp[201][201][201];
ll red[201],green[201],blue[201];
ll area(ll r,ll g,ll b)
{
    if((r==0 and g==0) or (r==0 and b==0) or (g==0 and b==0)) return 0;
    if(dp[r][g][b]) return dp[r][g][b];
    ll x=0,y=0,z=0;
    if(r and g) x=(red[r]*green[g])+area(r-1,g-1,b);
    if(r and b) y=(red[r]*blue[b])+area(r-1,g,b-1);
    if(g and b) z=(green[g]*blue[b])+area(r,g-1,b-1);
    return dp[r][g][b]=max({x,y,z});
}

int main()
{
    ll n,m,g,k,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ll b;
    ci>>r>>g>>b;
    f(i,1,r+1) ci>>red[i];
    f(i,1,g+1) ci>>green[i];
    f(i,1,b+1) ci>>blue[i];
    sort(red+1,red+r+1);
    sort(green+1,green+g+1);
    sort(blue+1,blue+b+1);
    res=area(r,g,b);
    co<<res;
    return 0;
}