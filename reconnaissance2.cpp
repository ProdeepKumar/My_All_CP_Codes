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

int main()
{
    //ci>>t;
    t=1;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a;
        f(i,0,n) ci>>x,a.pb(x);
        res=1000000000000;
        f(i,0,n-1)
        {
            p=abs(a[i]-a[i+1]);
            if(p<res)
            {
                res=p;
                x=i+1;
                y=i+2;
            }
        }
        p=abs(a[0]-a[n-1]);
        if(p<res)
        {
            x=1;
            y=n;
        }
        co<<x<< " "<<y;
    }
    return 0;
}