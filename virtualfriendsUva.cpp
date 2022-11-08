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
#define f(i,a,b)     for(ll i=a;i<b;i++)
#define all(x)     (x).begin(),(x).end()
#define allr(x)    (x).rbegin(),(x).rend()
#define pi         pair<ll,ll>
#define br         break;
#define i64        long long
#define PI         2*acos(0.0)
#define MAXN       3*100000

map<ll,ll>par,ans;
map<string,ll>input;

ll find_set(ll n)
{
    if(par[n]==n) return n;
    return par[n]=find_set(par[n]);
}

ll disjoint_set(ll x,ll y)
{
    ll a=find_set(x);
    ll b=find_set(y);
    if(a!=b)
    {
        par[a]=b;
        ans[b]+=ans[a];
    }
    return ans[b];
}

int main()
{
    ll n,m,g,mx,mn,res,x,c,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        string a,b;
        input.clear();
        c=0;
        ci>>n;
        while (n--)
        {
           ci>>a>>b;
           if(input.find(a)==input.end())
           {
               par[c]=c;
               ans[c]=1;
               input[a]=c++;
           }
           if(input.find(b)==input.end())
           {
               par[c]=c;
               ans[c]=1;
               input[b]=c++;
           }
           x=input[a];
           y=input[b];
           res=disjoint_set(x,y);
           co<<res<<endl;

        }
        
        
    }
    return 0;
}