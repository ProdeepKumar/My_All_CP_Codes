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

int main()
{
    ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>n>>m>>x>>y;
    ll a[n+1][m+1],vis[n+1][m+1];
    vector<pi>ans;
    mem(vis,0);
    ans.pb({x,y});
    vis[x][y]=1;
    for(ll i=y+1;i<=m;i++) ans.pb({x,i}),vis[x][i]=1;
    for(ll i=y-1;i>=1;i--) ans.pb({x,i}),vis[x][i]=1;
    ll j=1;
    for(ll i=x+1;i<=n;i++)
    {
        if(j==1)
        {
            for(ll k=j;k<=m;k++) ans.pb({i,k});
            j=m;
        }
        else
        {
            for(ll k=j;k>=1;k--) ans.pb({i,k});
            j=1;
        }  
    }
    for(ll i=x-1;i>=1;i--)
    {
         if(j==1)
        {
            for(ll k=j;k<=m;k++) ans.pb({i,k});
            j=m;
        }
        else
        {
            for(ll k=j;k>=1;k--) ans.pb({i,k});
            j=1;
        }  
    }
    for(auto it:ans) co<<it.fi<< " "<<it.se<<endl;
    return 0;
}