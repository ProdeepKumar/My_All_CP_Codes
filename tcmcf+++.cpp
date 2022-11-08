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
    ll n,m,k,g,x,y,z;
    ci>>n;
    vector<ll>pos,neg,ans;
    ll zero=0;
    f(0,n) 
    {
        ci>>x;
        if(x<0) neg.pb(x);
        else if(x>0) pos.pb(x);
        else zero++;
    }
    if(n==1)
    {
        if(neg.size()) co<<neg[0];
        else if(pos.size()) co<<pos[0];
        else co<<0;
        return 0;
    }
    sort(all(neg));
    x=neg.size();
    if(x&1) x--;
    f(0,pos.size()) ans.pb(pos[i]);
    f(0,x) ans.pb(neg[i]);
    if(ans.size()==0) ans.pb(0);
    f(0,ans.size()) co<<ans[i]<< " ";
    return 0;
}