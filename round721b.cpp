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
#define r(i, a, b) for (ll i = a; i >= b; i--)
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()
#define pi pair<ll, ll>
#define br break;
#define i64 long long
#define PI 2 * acos(0.0)
#define MAXN 3 * 100000
ll n, m, k, g, mx, mn, res, c, x, y, z, w, p, q, r, b, d, l, s, t;
ll alice = 0, bob = 0;
vector<ll>tmp;
bool ispal(string ab)
{
    ll sz = ab.size();
    for (ll i = 0; i < (sz / 2) + (sz % 2); i++)
    {
        if (ab[i] != ab[sz - i - 1])
            return false;
    }
    return true;
}
bool check(string ab)
{
    f(i,0,ab.size()) {if(ab[i]=='0') return false;}
    return true;
}
void calpos(string ab)
{
    ll i=0,j=ab.size()-1;
    while(i<=j)
    {
        if(ab[i]!=ab[j])
        {
            if(ab[i]=='0') tmp.pb(i);
            else tmp.pb(j);
        }
        i++;
        j--;
    }
}
void call(string st, bool rev, bool player)
{
    if(check(st)) return;
    bool xx = ispal(st);
    if (!xx and !rev)
    {
        string bc = st;
        reverse(all(bc));
        call(bc, !rev, !player);
    }
    else if (!xx and rev)
    {
        tmp.clear();
        calpos(st);
        if(tmp.size()==1)
        {
            st[tmp.front()]='1';
        }
        else{
            f(i, 0, st.size())
            {
                if (st[i] == '0')
                {
                    st[i] = '1';
                    br
                }
            }
        }
        if (player)
            bob++;
        else
            alice++;
        call(st, !rev, !player);
    }
    else if (xx)
    {
        ll sz = st.size();
        if (sz & 1)
        {
            if (st[sz / 2] == '0')
            {
                st[sz / 2] = '1';
                if (player)
                    bob++;
                else
                    alice++;
                call(st, rev, !player);
            }
            else
            {
                
                f(i, 0, st.size())
                {
                    if (st[i] == '0')
                    {
                        st[i] = '1';
                        br
                    }
                }
                if (player)
                    bob++;
                else
                    alice++;
                call(st, rev, !player);
            }
        }
        else
        {
            f(i, 0, st.size())
            {
                if (st[i] == '0')
                {
                    st[i] = '1';
                    br
                }
            }
            if (player)
                bob++;
            else
                alice++;
            call(st, rev, !player);
        }
        
    }
}

void solve()
{
    ci >> n;
    string a;
    ci >> a;
    call(a,false,false);
    if(alice>bob) co<<"BOB"<<endl;
    else if(alice<bob) co<<"ALICE"<<endl;
    else co<<"DRAW"<<endl;
}

int main()
{

    //#ifdef LOCAL
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    //#endif
    auto start_time = clock();
    cerr << setprecision(3) << fixed;
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