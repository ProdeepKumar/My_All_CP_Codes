#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define co cout
#define ci cin
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld", &n, &m);
#define sf3(n, m, p) scanf("%lld %lld %lld", &n, &m, &p);
#define pf1(n) printf("%lld\n", n);
#define mem(a, b) memset(a, b, sizeof(a))
#define en cout << endl;
#define pb push_back
#define gcd(n, m) __gcd(n, m)
#define lcm(n, m) ((n) / __gcd(n, m)) * (m)
#define fi first
#define se second
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define f(a, b) for (ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define pi pair<ll, ll>
#define br break;
#define i64 long long
#define PI 2 * acos(0.0)
#define MAXN 3 * 100000

int main()
{
    ll n, m, g, mx=0, mn, res, x, c, y, z, w, p, q, r, l, s, t;
    ci >> n >> m;
    vector<ll> a(n), b(m);
    for (auto &x : a)
        ci >> x;
    for (auto &x : b)
        ci >> x,mx+=x;
    c = 0;
    ll chk[200];
    mem(chk,0);
    f(0,mx) chk[a[i]]++;
    bool found=false;
    for(ll j=0;j<m;j++) 
    {
        if(chk[j+1]!=b[j])
        {
            found=false;
            br
        }
       if(j==m-1)
       {
           coy
           return 0;
       }
    }
    for(ll i=mx;i<n;i++)
    {
        chk[a[i]]++;
        chk[a[i-mx]]--;
        ll j=0;
        for(;j<m;j++) 
        {
            if(chk[j+1]!=b[j])
            {
                found=false;
                br
            }
        }
        if(j==m) 
        {
            coy
            return 0;
        }
    }
    con
    return 0;
}