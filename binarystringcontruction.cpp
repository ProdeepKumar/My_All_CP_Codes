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
    ll n, m, g, mx, mn, res, c, x, y, z, w, p, q, r, l, s, t;
    ci>>n>>m>>x;
    string a, b, ab, ba;
    if (n>=m)
    {
        f(i, 0, x+1)
        {
            if (i&1) a+='1';
            else a+='0';
        }
    }
    else
    {
        f(i, 0, x+1)
        {
            if (i&1) a+='0';
            else a+='1';
        }
    }


    ll zero, one;
    if (n>=m)
    {
        if (x&1)
        {
            zero=(x+1)/2;
            one=zero;
        }
        else
        {
            zero=x/2+1;
            one=x/2;
        }
    }
    else
    {
        if (x&1)
        {
            one=(x+1)/2;
            zero=one;
        }
        else
        {
            one=x/2+1;
            zero=x/2;
        }
    }
    zero=n-zero;
    one=m-one;
   // co<<zero<< " "<<one<<endl;
    b=string(zero, '0');
    ab=string(one, '1');
    if (a[a.size()-1]=='0')
    {
        a.pop_back();
        a+=ab;
        a+='0';
        a+=b;
    }
    else
    {
       a.pop_back();
       a+=b;
       a+='1';
       a+=ab;
    }
    co<<a;
    return 0;
}