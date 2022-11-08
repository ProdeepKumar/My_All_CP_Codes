#include<bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("ofast")
//#pragma GCC target("avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
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

int main()
{
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ll a,b;
        ci>>a>>b>>x>>y>>n;
        ll aa=a,bb=b,xx=x,yy=y,nn=n;
        c=min(a-x,n);
        a-=c;
        n-=c;
        if(n) b-=min(b-y,n);
        ll res1=a*b,res2;
        a=aa;
        b=bb;
        n=nn;
        c=min(b-y,n);
        b-=c;
        n-=c;
        if(n) a-=min(a-x,n);
        res2=a*b;
        co<<min(res1,res2)<<endl;
    }
    return 0;
}