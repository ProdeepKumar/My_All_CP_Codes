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
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ll d;
    ci>>n>>d>>m;
    vector<ll>a(n),great,less;
    for(ll &x:a)
    {
        ci>>x;
        if(x>m) great.pb(x);
        else less.pb(x);
    }
    if(great.size()==0)
    {
        res=0;
        f(i,0,n) res+=a[i];
        co<<res;
        return 0;
    }
    sort(allr(great));
    sort(all(less));
    res=0;
    x=less.size()/d;
    x=min(x,(ll)(great.size()-1));
    for(ll i=0;i<x;i++) res+=great[i];
    for(ll i=x*d;i<less.size();i++) res+=less[i];
    y=great.size()-x;
    y/=(d+1);
    if(y==0) y=1;
    for(ll i=0;i<y;i++) res+=great[x++];
    co<<res;
    return 0;
}