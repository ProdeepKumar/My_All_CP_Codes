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
#define f(i,a,b)   for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000
#define PRIME      1000000007

ll binary_exp(ll x, ll n)
{
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x % PRIME;
    } else {
        ll temp = binary_exp(x, n / 2);
        temp = (temp * temp) % PRIME;
        if (n % 2 == 0) {
            return temp;
        } else {
            return ((x % PRIME) * temp) % PRIME;
        }
    }
}
ll M=1e9+7;
 
ll FactMod(ll n)
{
    ll fact=1;
   for(ll i=1;i<=n;i++)
   {
      fact=((fact%M)*i)%M;
   }
   return fact;
}
int main()
{
    ll n,m,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>n;
    res=FactMod(n)-binary_exp(2,n-1)+M;
    co<<res%M;
    return 0;
}