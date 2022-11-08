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
#define fr(i, a, b) for (ll i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define pi pair<ll, ll>
#define br break;
#define i64 long long
#define PI 2 * acos(0.0)
#define MAXN 3 * 100000
ll n, m, k, g, mx, mn, res, c, x, y, z, w, p, q, s, t;

int main()
{
    ci >> t;
    for (ll ca = 0; ca < t; ca++)
    {
        ci >> n >> k;
        vector<ll> a(n), b(n);
        f(i, 0, n) ci >> a[i];
        f(i, 0, n) ci >> b[i];
        sort(all(a));
        vector<ll> l(n), r(n);

        ll j = n - 1;
        for (ll i = n - 1; i >= 0; --i)
        {
            while ((a[j] - a[i]) > k)
                --j;
            r[i] = j - i + 1;
            if (i + 1 < n)
                r[i] = max(r[i], r[i + 1]);
        }

        j = 0;
        for (ll i = 0; i < n; ++i)
        {
            while ((a[i] - a[j]) > k)
                ++j;
            l[i] = i - j + 1;
            if (i > 0)
                l[i] = max(l[i], l[i - 1]);
        }
            ll ans = 1;
        for (ll i = 0; i < n - 1; ++i)
        {
            ans = max(ans, r[i + 1] + l[i]);
        }
        co << ans << endl;
    }
    return 0;
}