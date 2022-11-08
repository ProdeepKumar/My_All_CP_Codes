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
    co<<fixed<<setprecision(10);
    ios::sync_with_stdio(0);
    ll h,t1,t2;
    ci>>h>>m>>s>>t1>>t2;
    double mm=(double)m/5.00;
    double ss=(double)s/5.00;
    double hh=(double)h;
    co<<hh<<' '<<mm<<' '<<ss;en
    bool fl=false;
    c=0;
    for(double i=(double)t1;c++<60;i+=0.2)
    {
        co<<"In first loop i= "<<i<<' ';en
        co<<hh<<' '<<mm<<' '<<ss;en
        if(i==12.00) i=0.00;
        if((i==mm) or (i==ss) or (i==hh))
        {
            fl=true;
            br
        }
        if(i==(double)t2)
        {
            fl=false;
            br
        }
        
        
    }
    co<< "And now fl= "<<fl<<endl;
    bool fll=false;
    c=0;
    for(double i=(double)t1;c++<60;i-=0.2)
    {
        co<<"In second loop i= "<<i<<' ';en
        co<<hh<<' '<<mm<<' '<<ss;en
        if(i==0.00) i=12.00;
        if(i==mm or i==ss or i==hh)
        {
            fll=true;
            br
        }
            else if(i==(double)t2)
        {
            fll=false;
            br
        }
    }
    co<< "And now fll= "<<fll<<endl;
    if(fl and fll) con
    else coy
    return 0;
}