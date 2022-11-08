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
    for (ll ca = 1; ca <= t; ca++)
    {
        ci >> n >> c;
        vector<pi> a;
        f(i, 0, n)
        {
            ci >> x >> y;
            a.pb({y, x});
        }
        sort(allr(a));
        f(i, 0, n)
        {
            a.pb(a[i]);
        }
        for (auto x : a)
            co << x.fi << " " << x.se << endl;
        en
        ll ans = 0;
        f(i, 0, n)
        {
            res = 0, mx = 0;
            f(j, 0, n)
            {
                if (mx + a[i + j].se <= c and a[i + j].fi != 0)
                {
                    res += a[i + j].fi;
                    mx += a[i + j].se;
                }
            }
            ans = max(ans, res);
        }
        co << "Case " << ca << ": " << ans << endl;
    }
    return 0;
}