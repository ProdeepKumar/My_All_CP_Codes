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
''
map<ll,ll>level;

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    while(t--)
    {
        ci>>l>>r;
        if(l*2>r)
        {
            co<<-1<< " "<<-1<<endl;
        }
        else if(l*2<=r)
        {
            co<<l<< " "<<l*2<<endl;
        }
    }
    return 0;
}
// 4
// 5 4 0
// 1 5 4 3 2
// 5 4 1
// 1 5 4 3 2
// 5 4 4
// 10 20 30 40 50
// 10 7 3
// 4 6 8 2 9 9 7 4 10 9