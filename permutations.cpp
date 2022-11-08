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
ll cnt[100005];
map<ll,ll>mp;
int main()
{
    ll n,m,k,g,mx,mn,res,c,x,y,z,w,p,q,r,l,s,t;
    ci>>n;
    vector<pi>a(n);
    vector<ll>ans(n);
    mx=0;
    for(ll i=0;i<n;i++)
    {
        ci>>x;
        a[i]={x,i};
        cnt[x]++;
        mx=max(mx,cnt[x]);
    }
    sort(all(a));
    vector<ll>per[mx];
    for(ll i=0;i<mx;i++)
    {
        per[i].pb(0);
    }
    bool fl=false;
    f(i,0,n)
    {
        x=mp[a[i].fi];
        if(per[x].back()==a[i].fi-1){
            per[x].pb(a[i].fi);
            ans[a[i].se]=x+1;
            mp[a[i].fi]++;
        } 
        else
        {
            fl=true;
            br
        }
    }
    if(fl) co<<-1;
    else
    {
        co<<mx<<endl;
        for(ll i=0;i<n;i++) co<<ans[i]<< " ";
    }
    
    return 0;
}