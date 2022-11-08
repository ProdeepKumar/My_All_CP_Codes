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
ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;

vector<pi>fact;

void factorize(long long n) 
{ 
    int count = 0;  
    while (!(n % 2)) { 
        n >>= 1;  
        count++; 
    } 
    if (count) 
        fact.pb({2,count}); 
  
    for (long long i = 3; i <= sqrt(n); i += 2) { 
        count = 0; 
        while (n % i == 0) { 
            count++; 
            n = n / i; 
        } 
        if (count) 
            fact.pb({i,count});
    } 
  
    if (n > 2) 
        fact.pb({n,1});
}
int main()
{
    ios::sync_with_stdio(0);
    ci>>n;
    vector<ll>a(n);
    for(ll& x:a) ci>>x;
    map<ll,ll>mp;
    mx=0;
    for(ll x:a)
    {
        if(x==1) continue;
        fact.clear();
        factorize(x);
        for(auto y:fact) mp[y.fi]++,mx=max(mx,mp[y.fi]);
    }
    if(mx==0) mx++;
    co<<mx;
    return 0;
}