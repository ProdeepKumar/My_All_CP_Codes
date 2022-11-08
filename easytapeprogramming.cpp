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
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    string in,inn;
    ci>>n>>q>>inn;
    in='#'+inn;
    ll ans[10];
    f(0,q)
    {
        ci>>l>>r;
        string tmp;
        for(ll j=l;j<=r;j++) tmp+=in[j];
        mem(ans,0);
        ll cp=0,dp=1;
        while (cp>=0 and cp<tmp.size())
        {
            bool del=false;
            if(tmp[cp]>='0' and tmp[cp]<='9') 
            {
               ans[tmp[cp]-'0']++;
               tmp[cp]--;
               if(tmp[cp]<'0') del=true;
            }
            else
            {
                if(tmp[cp]=='<') dp=-1;
                else dp=1;
                if((tmp[cp+dp]=='<' or tmp[cp+dp]=='>') and cp+dp>=0 and cp+dp<tmp.size()) del=true;
            }
            if(del) {
                tmp.erase(cp,1);
                if(dp==-1) --cp;
            }
            else cp+=dp;
            
        }
        for(auto x : ans) co<<x<< " ";
        en
    }
    return 0;
}