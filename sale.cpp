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
        ci>>n>>m;
        vector<ll>a;
        res=0;
        f(i,0,n)
        {
            ci>>x;
            if(x<0) a.pb(x);
        }
        if(a.empty()) 
        {
            co<<0;
            return 0;
        }
        sort(all(a));
        f(i,0,min(m,(ll)a.size())) res+=(-a[i]);
        co<<res;
        
    }
    return 0;
}