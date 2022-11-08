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
    ci>>t;
    for(ll ca=0;ca<t;ca++)
    {
        ci>>n;
        vector<ll>a;
        for(ll i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i!=n/i)
                {
                    a.pb(i);
                    a.pb(n/i);
                }
                else a.pb(i);
            }
        }
        a.pb(n);
        sort(all(a));
        vector<ll>ans;
        ll i=0,j=a.size()-1;
        while(i<=j)
        {
            ans.pb(a[i++]);
            ans.pb(a[j--]);
        }
        if(a.size()&1) ans.pop_back();
        res=0;
        for(ll i=0;i+1<a.size();i++)
        {
            x=gcd(ans[i],ans[i+1]);
            if(x==1) res++;
        }
        if(gcd(ans[0],ans[ans.size()-1])==1) res++;
        for(ll ii:ans) co<<ii<< ' ';
        co<<endl<<res<<endl;
    }
    return 0;
}