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

ll n,m,p,q,r,l,c,x,y,z,w,o;
string a,b[1001];
ll revealed[26],chk[26],ans[26];

int main()
{
    ci>>n>>a>>m;
    f(0,m) ci>>b[i];
    f(0,n) if(a[i]!='*') revealed[a[i]-'a']=1;
    mem(ans,1);
    f(0,m)
    {
        bool flag=1;
        for(ll j=0;j<n;j++)
        {
            if(a[j]!='*' and a[j]!=b[i][j])
            {
                flag=0;
                br
            } 
        } 
        if(flag)
        {
            for(ll j=0;j<n;j++)
            {
                if(a[j]=='*' and revealed[b[i][j]-'a'])
                {
                    flag=0;
                    br
                } 
            } 
        }
        
        if(flag)
        {
            mem(chk,0);
            for(ll j=0;j<n;j++) if(a[j]=='*') chk[b[i][j]-'a']=1;
            for(ll j=0;j<26;j++) ans[j]=ans[j]&chk[j];
        }
    }
    ll res=0;
    f(0,26) res+=ans[i];
    co<<res;
}