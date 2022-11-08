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
    ll n,x,y,z,m,k;
    ci>>n;
    map<string,ll>input;
    map<ll,ll>last;
    input.clear();
    f(0,n)
    {
        string s;
        ci>>s>>x;
        input[s]=max(input[s],x);
    }
    vector<ll>chek;
    for(auto it : input)
    {
        chek.pb(it.se);
    }
    sort(all(chek));
    f(0,chek.size()) last[chek[i]]=i+1;
    n=chek.size();
    co<<n<<endl;
    for(auto it : input)
    {
        x=it.se;
        y=last[x];
        //co<<x<< " "<<y<< " "<<res<<endl;
        if(y*100>=n*99) co<<it.fi<< " pro"<<endl;
        else if(y*100>=n*90) co<<it.fi<< " hardcore"<<endl;
        else if(y*100>=n*80) co<<it.fi<< " average"<<endl;
        else if(y*100>=n*50) co<<it.fi<< " random"<<endl;
        else co<<it.fi<< " noob"<<endl;
    }
}