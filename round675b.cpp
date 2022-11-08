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
ll n, m, k, g, mx, mn, res, c, x, y, z, w, p, q, r, l, s, t;

void solve()
{
    ci >> n >> m;
    ll in[n][m];
    vector<ll>a;
    ll vis[n][m];
    mx=0;
    f(i, 0, n)
    {
        f(j, 0, m)
        {
            ci >> in[i][j];
            a.pb(in[i][j]);
            vis[i][j]=0;
            mx+=a.back();
        }
    }
    ll ans=0;
    f(i,0,n)
    {
        f(j,0,m)
        {
            set<pi>st;
            if(i<=n-i-1 and j<=m-j-1)
            {
                st.insert({i,j});
                st.insert({i,m-j-1});
                st.insert({n-i-1,j});
                st.insert({n-i-1,m-j-1});
            }
            vector<ll>tmp;
            for(auto ii:st) tmp.pb(in[ii.fi][ii.se]);
            sort(all(tmp));
            ll med=tmp.size()/2;
            f(ii,0,tmp.size()) ans+=abs(tmp[med]-tmp[ii]);
        }
    }
    co<<ans<<endl;
}

int main()
{

    //#ifdef LOCAL
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    auto start_time = clock();
    cerr << setprecision(3) << fixed;
    //#endif
    cout << setprecision(10) << fixed;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ci >> t;
    //t=1;
    for (ll ca = 0; ca < t; ca++)
    {
        solve();
    }
    //#ifdef LOCAL
    auto end_time = clock();
    cerr << "Execution time: " << (end_time - start_time) * (int)1e3 / CLOCKS_PER_SEC << " ms\n";
    //#endif
}