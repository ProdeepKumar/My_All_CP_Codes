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

map<ll,ll>cnt;

int main()
{
    ll n,m,g,mx,mn,res,c,k,x,y,d,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n>>k>>d;
        vector<ll>a(n);
        for(auto &x:a) ci>>x;
        cnt.clear();
        res=0;
        ll ans=100000000000;
        f(i,0,d)
        {
            if(cnt[a[i]]==0) res++;
            cnt[a[i]]++;
        }
        ans=min(ans,res);
        f(i,d,n)
        {
            cnt[a[i-d]]--;
            if(cnt[a[i-d]]==0) res--;
            if(cnt[a[i]]==0) res++;
            cnt[a[i]]++;
            ans=min(ans,res);
        }
        co<<ans<<endl;
    }
    return 0;
}