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

bool arraySortedOrNot(vector<ll>&arr, ll n)
{
    if (n == 1 || n == 0)
        return true;
    if (arr[n - 1] < arr[n - 2])
        return false;
    return arraySortedOrNot(arr, n - 1);
}

int main()
{
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a(n),b(n);
        mn=1000000000000;
        ll i=0;
        for(auto &x:a) ci>>x,mn=min(mn,x),b[i++]=x;
        if(arraySortedOrNot(a,n))
        {
            coy
            continue;
        }
        sort(all(b));
        bool fl=false;
        for(ll i=0;i<n;i++)
        {
            if(a[i]%mn)
            {
               if(a[i]!=b[i])
               {
                   fl=true;
                   br
               }
            }
        }
        if(fl) con
        else coy

    }
    return 0;
}