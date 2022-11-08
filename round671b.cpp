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
vector<ll>ab,bc;
int main()
{
    ios::sync_with_stdio(0);
    ci>>t;
    x=1;
    res=0;
    while(res<=1e18)
    {
        y=ceil(pow(2,x++))-1;
        res=y*(y+1)/2;
        ab.pb(res);
    }
    ll bc[ab.size()];
    mem(bc,0);
    bc[0]=ab[0];
    f(i,1,ab.size()) bc[i]=bc[i-1]+ab[i];
    //for(auto l:bc) co<<l<<' ';en
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        ll sum=0;
        for(ll i=0;i<ab.size();i++)
        {
            if(bc[i]>n)
            {
                x=i;
                br
            }
        }
        co<<x<<endl;
        
    }
    return 0;
}