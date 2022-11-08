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
    ll n, m, g, mx,c, mn, res, x, y, z, w, p, q, r, l, t;
    ll controller, stowaway;
    string s, dir, sec;
    ci >> n >> stowaway >> controller >> s >> dir >> sec;
    ll fl;
    if(dir=="head") fl=1;
    else fl=0;
    c=0;
    for(auto x : sec)
    {
        if(controller==1) fl=0;
        else if(controller==n) fl=1;
        c++;
        if(x=='0')
        {
            if(fl)
            {
                if(stowaway<controller and stowaway>1) stowaway--,controller--;
                else if(stowaway<controller and stowaway==1) controller--;
                else if(controller<stowaway and stowaway<n and controller>1) controller--,stowaway++;
                else if(controller<stowaway and stowaway==n and controller>1) controller--; 
               // if(controller==1) fl=!fl;
            }
            else
            {
                if(controller<stowaway and stowaway<n) controller++,stowaway++;
                else if(controller<stowaway and stowaway==n) controller++;
                else if(stowaway<controller and stowaway>1 and controller<n) stowaway--,controller++;
                else if(stowaway<controller and stowaway==1 and controller<n) controller++;
               // if(controller==n) fl=!fl;
            }
            
        }
        else
        {
            if(fl)
            {
                if(controller>stowaway and controller>1) controller--,stowaway=n;
                else if(controller<stowaway and controller>1) controller--,stowaway=n;
                //else if(controller==n) stowaway=1;
                //if(controller==1) fl=!fl;
            }
            else
            {
                if(controller>stowaway and controller<n) controller++,stowaway=1;
                else if(controller<stowaway and controller<n) controller++,stowaway=1;
                //else if(controller==1) stowaway=n;
               // if(controller==n) fl=!fl;
            }
            
        }
        //co<<controller<< " "<<stowaway<<endl;
        if(controller==stowaway)
        {
            co<< "Controller "<<c;
            return 0;
        }
        
    }
    co<< "Stowaway";
    return 0;
}