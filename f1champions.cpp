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

ll points[] = {25, 18, 15, 12, 10, 8, 6, 4, 2, 1};
map<pair<string, ll>, ll> positioncheck;
map<string, ll> point;
int main()
{
    ll n, m, g, mx, mn, res, x, y, z, w, p, c, q, r, l, s, t;
    point.clear();
    positioncheck.clear();
    ci >> t;
    while (t--)
    {
        ci >> n;
        vector<string> a(n);
        for (string &s : a)
            ci >> s;
        f(0, min(n, 10LL))
        {
            point[a[i]] += points[i];
            positioncheck[{a[i], i + 1}]++;
        }
    }
    string ans1, ans2;
    mx = 0;
    for (auto i : point)
    {
        if (i.se > mx)
            mx = max(mx, i.se);
    }
    ll cnt = 0;
    for (auto i : point)
        if (i.se == mx)
            cnt++;
    if (cnt == 1)
    {
        for (auto i : point)
        {
            if (i.se == mx)
            {
                ans1 = i.fi;
                br
            }
        }
    }
    else
    {
        vector<string> maxplayer;
        for (auto i : point)
        {
            if (i.se == mx)
                maxplayer.pb(i.fi);
        }
        for (ll i = 1; i <= 10; i++)
        {
            ll posmax = 0;
            for (ll j = 0; j < maxplayer.size(); j++)
            {
                posmax = max(posmax, positioncheck[{maxplayer[j], i}]);
            }
            c = 0;
            for (ll j = 0; j < maxplayer.size(); j++)
            {
                if (posmax == positioncheck[{maxplayer[j], i}])
                    c++;
            }
            if (c == 1)
            {
                for (ll j = 0; j < maxplayer.size(); j++)
                {
                    if (posmax == positioncheck[{maxplayer[j], i}])
                    {
                        ans1 = maxplayer[j];
                        br
                    }
                }
                br
            }
        }
    }
    mx = 0;
    for (auto i : point)
    {
        mx = max(mx, positioncheck[{i.fi, 1LL}]);
    }
    c = 0;
    for (auto i : point)
    {
        if (mx == positioncheck[{i.fi, 1LL}])
            c++;
    }
    if (c == 1)
    {
        for (auto i : point)
        {
            if (mx == positioncheck[{i.fi, 1LL}])
            {
                ans2 = i.fi;
                br
            }
        }
    }
    else
    {
        for (ll j = 2; j <= 10; j++)
        {
            vector<string> maxplayer;
            for (auto i : point)
            {
                if (mx == positioncheck[{i.fi, j}])
                {
                    maxplayer.pb(i.fi);
                }
            }
            ll mxpoint = 0;
            for (ll k = 0; k < maxplayer.size(); k++)
            {
                mxpoint = max(mxpoint, point[maxplayer[k]]);
            }
            c = 0;
            for (ll k = 0; k < maxplayer.size(); k++)
            {
                if (mxpoint == point[maxplayer[k]])
                    c++;
            }
            if (c == 1)
            {
                for (ll k = 0; k < maxplayer.size(); k++)
                {
                    if (mxpoint == point[maxplayer[k]])
                    {
                        ans2=maxplayer[k];
                        br
                    }
                }
            }
        }
    }

    co << ans1<<endl<<ans2;

    return 0;
}
