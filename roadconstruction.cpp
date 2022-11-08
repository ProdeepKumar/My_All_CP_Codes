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
vector<pi>a,ans;
ll chk[1005];
int main()
{
    ci>>n>>m;
    if(n==1)
    {
        co<<0<<endl;
        return 0;
    }
    if(n==2 and m==0)
    {
        co<<1<<endl;
        co<< "1 2";
        return 0;
    }
    if(n==2 and m==1)
    {
        co<<0<<endl;
        return 0;
    }
    if(m==0)
    {
        ans.pb({1,2});
        f(i,1,n+1) if(i!=1 and i!=2) ans.pb({2,i});
        co<<ans.size()<<endl;
        for(auto x:ans) co<<x.fi<< " "<<x.se<<endl;
        return 0;
    }
    f(i,0,m)
    {
        ci>>x>>y;
        a.pb({x,y});
        chk[x]=1;
        chk[y]=1;
    }
    x=a.front().fi;
    f(i,1,n+1)
    {
        if(chk[i]==0)
        {
            y=i;
            br
        }
    }
    ans.pb({x,y});
    f(i,1,n+1) if(i!=x and i!=y) ans.pb({y,i});
    co<<ans.size()<<endl;
    for(auto x:ans) co<<x.fi<< " "<<x.se<<endl;

    return 0;
}