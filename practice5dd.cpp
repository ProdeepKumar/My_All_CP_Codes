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
map<ll,ll>mp;
vector<ll>posi[100005];
int main()
{
    ios::sync_with_stdio(0);
    ci>>n;
    vector<ll>a(n);
    vector<pi>ans;
    mx=0;
    for(ll i=0;i<n;i++)
    {
        ci>>a[i];
        mx=max(mx,a[i]);
        posi[a[i]].pb(i);
    }
    for(ll i=0;i<mx+1;i++)
    {
        if(posi[i].size()==0) continue;
        if(posi[i].size()==1) ans.pb({i,0LL});
        else
        {
            x=posi[i][1]-posi[i][0];
            ll f=0;
            for(ll j=1;j<posi[i].size();j++)
            {
                if(posi[i][j]-posi[i][j-1]!=x)
                {
                    f=1;
                    br
                }
            }
            if(!f) ans.pb({i,x});
        }
    }
    sort(all(ans));
    co<<ans.size()<<endl;
    for(auto it:ans) co<<it.fi<<' '<<it.se<<endl;
    return 0;
}