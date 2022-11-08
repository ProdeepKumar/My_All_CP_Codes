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
    ios::sync_with_stdio(0);
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        string a;
        ci>>a;
        if(n==1)
        {
            x=a[0]-'0';
            if(x&1) co<<1<<endl;
            else co<<2<<endl;
            continue;
        }
        ll od1=0,ev1=0,od2=0,ev2=0;
        for(ll i=0;i<n;i+=2)
        {
            x=a[i]-'0';
            if(x&1) od1++;
            else ev1++;
        }
        for(ll i=1;i<n;i+=2)
        {
            x=a[i]-'0';
            if(x&1) od2++;
            else ev2++;
        }
        if(n&1)
        {
            if(od1) co<<1<<endl;
            else co<<2<<endl;
        }
        else
        {
            if(ev2) co<<2<<endl;
            else
            {
                co<<1<<endl;
            }
            
        }
        
    }
    return 0;
}