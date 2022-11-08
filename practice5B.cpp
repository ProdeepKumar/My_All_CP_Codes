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

int main()
{
    ios::sync_with_stdio(0);
    ci>>n;
    vector<ll>a(n),b(n);
    for(ll &x:a) ci>>x;
    sort(all(a));
    x=0;y=n-1;
    f(i,0,n)
    {
        if(i&1) b[y--]=a[i];
        else b[x++]=a[i];
    }
    f(i,0,n)
    {
        if(i==0)
        {
            if(b[1]+b[n-1]<=b[i])
            {
                con
                return 0;
            }
        }
        else if(i==n-1)
        {
            if(b[0]+b[n-2]<=b[i])
            {
                con
                return 0;
            }
        }
        else
        {
            if(b[i-1]+b[i+1]<=b[i])
            {
                con
                return 0;
            }
        }
    }
    coy
    for(ll x:b) co<<x<<' ';
    return 0;
}