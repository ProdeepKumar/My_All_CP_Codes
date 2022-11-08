//#pragma GCC target("avx,avx2")
//#pragma GCC optimization ("O3")
//#pragma GCC optimization ("unroll-loops")
//#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define co cout
#define ci cin
#define sf1(n) scanf("%lld", &n)
#define sf2(n, m) scanf("%lld %lld", &n, &m)
#define sf3(n, m, p) scanf("%lld %lld %lld", &n, &m, &p)
#define pf1(n) printf("%lld\n", n)
#define mem(a, b) memset(a, b, sizeof(a))
#define en cout << endl;
#define pb push_back
#define p_b pop_back
#define gcd(n, m) __gcd(n, m)
#define lcm(n, m) ((n) / __gcd(n, m)) * (m)
#define fi first
#define se second
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define f(i, a, b) for (ll i = a; i < b; i++)
#define r(i, a, b) for (ll i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define pi pair<ll, ll>
#define br break;
#define i64 long long
#define PI 2 * acos(0.0)
#define MAXN 3 * 100000
#define INF 0x3f3f3f3f
#define debug(x) cout << #x "=" << (x) << endl
ll n, m, k, g, mx, mn, res, sum, c, x, y, z, w, p, q, r, d, l, s, t;
ll dp[101][101];
string ans[101][101];
string a, b;
ll call()
{
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= m; j++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                ans[i][j] = ans[i - 1][j - 1] + a[i - 1];
            }
            else if (dp[i][j - 1] < dp[i - 1][j])
            {
                dp[i][j] = dp[i - 1][j];
                ans[i][j] = ans[i - 1][j];
            }
            else if (dp[i][j - 1] > dp[i - 1][j])
            {
                dp[i][j] = dp[i][j - 1];
                ans[i][j] = ans[i][j - 1];
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
                ans[i][j] = min(ans[i][j - 1], ans[i - 1][j]);
            }
        }
    }

    return dp[n][m];
}
void solve(ll ka)
{
    ci >> a >> b;
    n = a.size();
    m = b.size();
    f(i,0,n+1) dp[i][0]=0,ans[i][0]="";
    f(i,0,m+1) dp[0][i]=0,ans[0][i]="";
    res = call();
    if (res == 0)
        co << "Case "<<ka
           << ": :(" << endl;
    else
        co << "Case " << ka << ": " << ans[n][m] << endl;
}

int main()
{
    //#ifdef LOCAL
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    //#endif
    auto start_time = clock();
    cerr << setprecision(3) << fixed;
    cout << setprecision(10) << fixed;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ci >> t;
    // t=1;
    for (ll ca = 0; ca < t; ca++)
    {
        solve(ca+1);
    }
    //#ifdef LOCAL
    auto end_time = clock();
    cerr << "Execution time: " << (end_time - start_time) * (int)1e3 / CLOCKS_PER_SEC << " ms\n";
    //#endif
}