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
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n>>k;
        vector<ll>a(n),ab(n),bc(n);
        mn=1000000000000000;
        mx=-1000000000000000;
        for(auto &x:a)
        {
            ci>>x;
            mn=min(mn,x);
            mx=max(mx,x);
        } 
        if(n==1)
        {
            co<<0<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            ab[i]=mx-a[i];
        }
        mx=-1000000000000000;
        for(ll i=0;i<n;i++) mx=max(mx,ab[i]);
        for(ll i=0;i<n;i++)
        {
            bc[i]=mx-ab[i];
        }
        if(k&1)
        {
            for(auto x:ab) co<<x<< " ";
            en
        }
        else
        {
            for(auto x:bc) co<<x<< " ";
            en
        }
    }
    return 0;
}