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
    string a;
    ci>>a;
    vector<pi>b(n);
    f(i,0,n)
    {
        ci>>x>>y;
        b[i]={x,y};
    }
    ll chk[1000];
    mem(chk,0);
    f(i,0,n)
    {
        x=b[i].fi;
        y=b[i].se;
        bool tog=false;
        if(a[i]=='1')
        {
            f(j,0,y) chk[j]++;
            tog=true;
        }
        ll cnt=0;
        f(j,y,1000)
        {
            if(cnt++%x==0) tog=!tog;
            if(tog) chk[j]++;
        }
    }
    co<<*max_element(chk,chk+1000);
    return 0;
}