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

int main()
{
    ll n,m,g,mx,mn,res,x,y,z,w,p,q,r,l,s,t;
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a(n),b;
        for(auto &x:a) ci>>x,b.pb(x);
        if(n==1)
        {
            co<<0LL<<endl;
            continue;
        }
        if(n==2 or n==3)
        {
            co<<1LL<<endl;
            continue;
        }
        sort(all(b));
        x=b[0]+b[1];
        y=b[n-1]+b[n-2];
        res=0;
        ll chk[100];
        for(ll i=x;i<=y;i++)
        {
            ll cnt=0;
            mem(chk,0);
            for(ll j=0;j<n;j++)
            {
                for(ll k=j+1;k<n;k++)
                {
                    if(chk[j]==0 and chk[k]==0)
                    {
                        if(a[j]+a[k]==i)
                        {
                            cnt++;
                            chk[j]=1;
                            chk[k]=1;
                        }
                    }
                    
                }
            }
           // co<<i<< " "<<cnt<<endl;
            res=max(res,cnt);
        }
        co<<res<<endl;
    }
    return 0;
}