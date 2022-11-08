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

map<ll, ll>chk, chkk;

int main()
{
    ll n, m, g, mx, mn, res, x, y, z, w, p, q, r, l, s, t;
    ci>>n;
    vector<ll>a(n);
    chk.clear();
    chkk.clear();
    for (auto &x:a)
    {
        ci>>x;
        chk[x]++;
        chkk[chk[x]]++;
    }
    ci>>q;
    f(i, 0, q)
    {
        char ch;
        ci>>ch>>x;
        if (ch=='+') chk[x]++,chkk[chk[x]]++;
        else chkk[chk[x]]--,chk[x]--;
        if (chkk[8]) coy
        else if (chkk[6] and chkk[2]>=2) coy
        else if (chkk[4]>=2) coy
        else if (chkk[4] and chkk[2]>=3) coy
        else con
    }
    return 0;
}