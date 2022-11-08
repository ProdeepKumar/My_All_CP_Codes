#include<bits/stdc++.h>
using namespace std;
#define ll         long long int
#define co         cout
#define ci         cin
#define sf1(n)     scanf("%lld",&n)
#define sf2(n,m)   scanf("%lld %lld",&n,&m);
#define sf3(n,m,p) scanf("%lld %lld %lld",&n,&m,&p);
#define pf1(n)     printf("%lld\n",n);
#define mem(a,b)   memset(a,b,sizeof(a))
#define en         cout<<endl;
#define pb         push_back
#define gcd(n,m)   __gcd(n,m)
#define lcm(n,m)   ((n)/__gcd(n,m))*(m)
#define fi         first
#define se         second
#define coy        cout<< "YES"<<endl;
#define con        cout<< "NO"<<endl;
#define f(a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

map<ll,ll>level;

int main()
{
    ll n,m,g,k,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        string a;
        ci>>a;
        ll freq[10]={0};
        f(0,a.size()) freq[a[i]-'0']++;
        res=0;
        f(0,10) res=max(res,freq[i]);
        f(0,10)
        {
            for(ll j=0;j<10;j++)
            {
                ll sz=0;
                for(k=0;k<a.size();k++)
                {
                    if(a[k]==j+'0' and sz&1) sz++;
                    else if(a[k]==i+'0' and !(sz&1)) sz++;
                }
                if(i!=j and sz&1) sz--;
                res=max(sz,res);
            }
        }
        co<<a.size()-res<<endl;
    }
    return 0;
}

