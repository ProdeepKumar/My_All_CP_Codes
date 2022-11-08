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
#define f(i, a, b) for (ll i = a; i < b; i++)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define pi pair<ll, ll>
#define br break;
#define i64 long long
#define PI 2 * acos(0.0)
#define MAXN 3 * 100000


int main()
{
    ll n, m, k, g, mx, mn, res, c, x, y, z, w, p, q, r, l, s, t;
    ci >> t;
    for (ll ca = 0; ca < t; ca++)
    {
        string s;
        ci >> s;                ///This algorithm gives us the maximum palindromic substring in O(N) complexity.
        n = s.size();
        vector<ll> d1(n), d2(n);
        for (ll i = 0, l = 0, r = -1; i < n; i++)
        {
            ll k = (i > r) ? 1LL : min(d1[l + r - i], r - i + 1);
            while (i - k >= 0 and i + k < n and s[i - k] == s[i + k])
                k++;
            d1[i] = k--;
            if (i + k > r)
            {
                l = i - k;
                r = i + k;
            }
        }
        for (ll i = 0, l = 0, r = -1; i < n; i++)
        {
            ll k = (i > r) ? 0LL : min(d2[l + r - i + 1], r - i + 1);
            while (i - k - 1 >= 0 and i + k < n and s[i - k - 1] == s[i + k])
                k++;
            d2[i] = k--;
            if (i + k > r)
            {
                l = i - k - 1;
                r = i + k;
            }
        }
        ll mx=0;
        string ans;
        f(i,0,n)
        {
            if((d1[i]*2)-1>mx)
            {
                mx=(d1[i]*2)-1;
                x=i;
            }
        }
        ll xm=0;
        f(i,0,n)
        {
            if((d2[i]*2)>xm)
            {
                xm=(d2[i]*2);
                y=i;
            }
        }
        if(mx>xm)
        {
            ans=s.substr(x-d1[x]+1,mx);
        }
        else
        {
            ans=s.substr(y-d2[y],xm);
        }
        co<<ans<<endl;
    }
    return 0;
}