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
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a(n),b(n);
        for(auto &x:a) ci>>x;
        for(auto &x:b) ci>>x;
        ll min1=1e18,min2=1e18;
        f(0,n)
        {
            min1=min(min1,a[i]);
            min2=min(min2,b[i]);
        }
        res=0;
        f(0,n)
        {
            if(a[i]>min1 and b[i]>min2)
            {
                ll dif=a[i]-min1;
                ll diff=b[i]-min2;
                if(dif<=diff)
                {
                    a[i]-=dif;
                    b[i]-=dif;
                    res+=dif;
                }
                else if(diff<dif)
                {
                    a[i]-=diff;
                    b[i]-=diff;
                    res+=diff;
                }
                
            }
        }
        f(0,n) 
        {
            res+=a[i]-min1;
            res+=b[i]-min2;
        }
        co<<res<<endl;
    }
    return 0;
}